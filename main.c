#include <neorv32.h>
#include <segment_led.h>

void circular_string(char* str, int length) {

  char first_char = str[0];
  for(int i = 1; i < length; i++){
      str[i - 1] = str[i];
  }
  str[length - 1] = first_char;
}

int main() {

  char char_data[] = "Hello World";
  int length = sizeof(char_data) / sizeof(char_data[0]);
  while(1){
    for (int i = 0; i < length; i++) {
      neorv32_gpio_segment_set(0, char_data[5]);
      neorv32_gpio_segment_set(1, char_data[4]);
      neorv32_gpio_segment_set(2, char_data[3]);
      neorv32_gpio_segment_set(3, char_data[2]);
      neorv32_gpio_segment_set(4, char_data[1]);
      neorv32_gpio_segment_set(5, char_data[0]);

      circular_string(char_data, length);
      
      neorv32_cpu_delay_ms(200); // wait 250ms using busy wait

      neorv32_gpio_segment_clr(0);
      neorv32_gpio_segment_clr(1);
      neorv32_gpio_segment_clr(2);
      neorv32_gpio_segment_clr(3);
      neorv32_gpio_segment_clr(4);
      neorv32_gpio_segment_clr(5);

    }
  }
}