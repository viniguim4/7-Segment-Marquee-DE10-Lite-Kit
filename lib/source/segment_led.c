#include <lib/include/segment_led.h>
#include <neorv32.h>
#include <string.h>

struct segment_led* neorv32_gpio_segment_retrieve_data(char data){

    struct segment_led *segment = malloc(sizeof(struct segment_led) + 0 * sizeof(int));

    switch(data) {
        case 'a':    //4 5 0 1 2 6
            segment = realloc(segment, sizeof(struct segment_led) + 6 * sizeof(int));
            segment->size = 6;
            memcpy(segment->pins, (int[]){4, 5, 0, 1, 2, 6}, 6 * sizeof(int));
            return segment;
        case 'b':  // 5 4 3 2 6
            segment = realloc(segment, sizeof(struct segment_led) + 5 * sizeof(int));
            segment->size = 5;
            memcpy(segment->pins, (int[]){5, 4, 3, 2, 6}, 5 * sizeof(int));
            return segment;
        case 'c': // 6 4 3
            segment = realloc(segment, sizeof(struct segment_led) + 3 * sizeof(int));
            segment->size = 3;
            memcpy(segment->pins, (int[]){6, 4, 3}, 3 * sizeof(int));
            return segment;
        case 'd': // 6 4 3 2 1
            segment = realloc(segment, sizeof(struct segment_led) + 5 * sizeof(int));
            segment->size = 5;
            memcpy(segment->pins, (int[]){6, 4, 3, 2, 1}, 5 * sizeof(int));
            return segment;
        case 'e': // 0 5 6 4 3 
            segment = realloc(segment, sizeof(struct segment_led) + 5 * sizeof(int));
            segment->size = 5;
            memcpy(segment->pins, (int[]){0, 5, 6, 4, 3}, 5 * sizeof(int));
            return segment;
        case 'f': // 0 5 6 4
            segment = realloc(segment, sizeof(struct segment_led) + 4 * sizeof(int));
            segment->size = 4;
            memcpy(segment->pins, (int[]){0, 5, 6, 4}, 4 * sizeof(int));
            return segment;
        case 'g': //0 5 4 3 2
            segment = realloc(segment, sizeof(struct segment_led) + 5 * sizeof(int));
            segment->size = 5;
            memcpy(segment->pins, (int[]){0, 5, 4, 3, 2}, 5 * sizeof(int));
            return segment;
        case 'h': // 5 4 6 2
            segment = realloc(segment, sizeof(struct segment_led) + 4 * sizeof(int));
            segment->size = 4;
            memcpy(segment->pins, (int[]){2, 5, 6, 4}, 4 * sizeof(int));
            return segment;
        case 'i': //2
            segment = realloc(segment, sizeof(struct segment_led) + 1 * sizeof(int));
            segment->size = 1;
            memcpy(segment->pins, (int[]){2}, 1 * sizeof(int));
            return segment;      
        case 'j': // 1 2 3 4
            segment = realloc(segment, sizeof(struct segment_led) + 4 * sizeof(int));
            segment->size = 4;
            memcpy(segment->pins, (int[]){1, 2, 3, 4}, 4 * sizeof(int));
            return segment;    
        case 'k': //0 5 6 4 2
            segment = realloc(segment, sizeof(struct segment_led) + 5 * sizeof(int));
            segment->size = 5;
            memcpy(segment->pins, (int[]){0, 5, 6, 4, 2}, 5 * sizeof(int));
            return segment; 
        case 'l': // 5 4 3
            segment = realloc(segment, sizeof(struct segment_led) + 3 * sizeof(int));
            segment->size = 3;
            memcpy(segment->pins, (int[]){5, 4, 3}, 3 * sizeof(int));
            return segment; 
        case 'm': // 0 4 6 2
            segment = realloc(segment, sizeof(struct segment_led) + 4 * sizeof(int));
            segment->size = 4;
            memcpy(segment->pins, (int[]){0, 4, 6, 2}, 4 * sizeof(int));
            return segment; 
        case 'n': // 4 6 2
            segment = realloc(segment, sizeof(struct segment_led) + 3 * sizeof(int));
            segment->size = 3;
            memcpy(segment->pins, (int[]){4, 6, 2}, 3 * sizeof(int));
            return segment; 
        case 'o': // 4 6 2 3
            segment = realloc(segment, sizeof(struct segment_led) + 4 * sizeof(int));
            segment->size = 4;
            memcpy(segment->pins, (int[]){2, 6, 4, 3}, 4 * sizeof(int));
            return segment; 
        case 'p':// 4 5 6 0 1
            segment = realloc(segment, sizeof(struct segment_led) + 5 * sizeof(int));
            segment->size = 5;
            memcpy(segment->pins, (int[]){4, 5, 6, 0, 1}, 5 * sizeof(int));
            return segment; 
        case 'q': // 0 5 6 1 2
            segment = realloc(segment, sizeof(struct segment_led) + 5 * sizeof(int));
            segment->size = 5;
            memcpy(segment->pins, (int[]){0, 5, 6, 1, 2}, 5 * sizeof(int));
            return segment; 
        case 'r': // 6 4
            segment = realloc(segment, sizeof(struct segment_led) + 2 * sizeof(int));
            segment->size = 2;
            memcpy(segment->pins, (int[]){6, 4}, 2 * sizeof(int));
            return segment; 
        case 's': // 0 5 6 2 3
            segment = realloc(segment, sizeof(struct segment_led) + 5 * sizeof(int));
            segment->size = 5;
            memcpy(segment->pins, (int[]){0, 5, 6, 2, 3}, 5 * sizeof(int));
            return segment; 
        case 't': // 5 6 4 3
            segment = realloc(segment, sizeof(struct segment_led) + 4 * sizeof(int));
            segment->size = 4;
            memcpy(segment->pins, (int[]){5, 6, 4, 3}, 4 * sizeof(int));
            return segment; 
        case 'u': // 5 4 3 2 1
            segment = realloc(segment, sizeof(struct segment_led) + 5 * sizeof(int));
            segment->size = 5;
            memcpy(segment->pins, (int[]){5, 4, 3, 2, 1}, 5 * sizeof(int));
            return segment;
        case 'v': // 4 3 2
            segment = realloc(segment, sizeof(struct segment_led) + 3 * sizeof(int));
            segment->size = 3;
            memcpy(segment->pins, (int[]){4, 3, 2}, 3 * sizeof(int));
            return segment; 
        case 'w': // 5 6 1 3
            segment = realloc(segment, sizeof(struct segment_led) + 4 * sizeof(int));
            segment->size = 4;
            memcpy(segment->pins, (int[]){5, 6, 1, 3}, 4 * sizeof(int));
            return segment; 
        case 'x': // 5 4 6 2 1
            segment = realloc(segment, sizeof(struct segment_led) + 5 * sizeof(int));
            segment->size = 5;
            memcpy(segment->pins, (int[]){5, 4, 6, 2, 1}, 5 * sizeof(int));
            return segment; 
        case 'y': //5 6 1 2 3
            segment = realloc(segment, sizeof(struct segment_led) + 5 * sizeof(int));
            segment->size = 5;
            memcpy(segment->pins, (int[]){5, 6, 1, 2, 3}, 5 * sizeof(int));
            return segment; 
        case 'z': // 0 1 6 4 3
            segment = realloc(segment, sizeof(struct segment_led) + 5 * sizeof(int));
            segment->size = 5;
            memcpy(segment->pins, (int[]){0, 1, 6, 4, 3}, 5 * sizeof(int));
            return segment; 
        case '0': // 0 5 4 3 2 1
            segment = realloc(segment, sizeof(struct segment_led) + 6 * sizeof(int));
            segment->size = 6;
            memcpy(segment->pins, (int[]){0, 5, 4, 3, 2, 1}, 6 * sizeof(int));
            return segment; 
        case '1': // 1 2
            segment = realloc(segment, sizeof(struct segment_led) + 2 * sizeof(int));
            segment->size = 2;
            memcpy(segment->pins, (int[]){1, 2}, 2 * sizeof(int));
            return segment; 
        case '2': // 0 1 6 4 3
            segment = realloc(segment, sizeof(struct segment_led) + 5 * sizeof(int));
            segment->size = 5;
            memcpy(segment->pins, (int[]){0, 1, 6, 4, 3}, 5 * sizeof(int));
            return segment; 
        case '3': // 0 1 6 2 3
            segment = realloc(segment, sizeof(struct segment_led) + 5 * sizeof(int));
            segment->size = 5;
            memcpy(segment->pins, (int[]){0, 1, 6, 2, 3}, 5 * sizeof(int));
            return segment; 
        case '4': // 5 6 1 2
            segment = realloc(segment, sizeof(struct segment_led) + 4 * sizeof(int));
            segment->size = 4;
            memcpy(segment->pins, (int[]){5, 6, 1, 2}, 4 * sizeof(int));
            return segment; 
        case '5':// 0 5 6 2 3
            segment = realloc(segment, sizeof(struct segment_led) + 5 * sizeof(int)); 
            segment->size = 5;
            memcpy(segment->pins, (int[]){0, 5, 6, 2, 3}, 5 * sizeof(int));
            return segment; 
        case '6': // 0 5 4 3 2 6
            segment = realloc(segment, sizeof(struct segment_led) + 6 * sizeof(int));
            segment->size = 6;
            memcpy(segment->pins, (int[]){0, 5, 6, 4, 3, 2}, 6 * sizeof(int));
            return segment;
        case '7': // 0 1 2
            segment = realloc(segment, sizeof(struct segment_led) + 3 * sizeof(int));
            segment->size = 3;
            memcpy(segment->pins, (int[]){0, 1, 2}, 3 * sizeof(int));
            return segment; 
        case '8': // 0 1 2 3 4 5 6
            segment = realloc(segment, sizeof(struct segment_led) + 7 * sizeof(int));
            segment->size = 7;
            memcpy(segment->pins, (int[]){0, 1, 2, 3, 4, 5, 6}, 7 * sizeof(int));
            return segment; 
        case '9': // 0 5 6 1 2 3
            segment = realloc(segment, sizeof(struct segment_led) + 6 * sizeof(int));
            segment->size = 6;
            memcpy(segment->pins, (int[]){0, 1, 2, 3, 5, 6}, 6 * sizeof(int));
            return segment; 
         case ' ': // 0 5 6 1 2 3
            segment = realloc(segment, sizeof(struct segment_led) + 0 * sizeof(int));
            segment->size = 0;
            memcpy(segment->pins, (int[]){}, 0 * sizeof(int));
            return segment; 
        default:  // 7 = DOT OR UNKNOWN
            segment = realloc(segment, sizeof(struct segment_led) + 1 * sizeof(int));
            segment->size = 1;
            memcpy(segment->pins, (int[]){7}, 1 * sizeof(int));
            return segment;
    }
}

/**********************************************************************//**
 * neorv32_gpio_segmentet function; set the data (a-z, 0-9) in the n-segment (0-5).
 *
 * @note This program requires the GPIO controller to be synthesized.
 *
 * @return Will never return.
 **************************************************************************/
void neorv32_gpio_segment_set(int segment, char data){

    int indentify_pins_segment_init = (segment + 1) << 3;
    struct segment_led* segment_data = neorv32_gpio_segment_retrieve_data(data);

    for (int i = 0; i < segment_data->size; i++) {
        int pin_to_set = indentify_pins_segment_init + segment_data->pins[i];
        neorv32_gpio_pin_clr(pin_to_set);
    }
    neorv32_gpio_pin_clr(7);
    free(segment_data);
}

/**********************************************************************//**
 * neorv32_gpio_segmentlr function; clr the data in the n-segment (0-5).
 *
 * @note This program requires the GPIO controller to be synthesized.
 *
 * @return Will never return.
 **************************************************************************/
void neorv32_gpio_segment_clr(int segment){

    int indentify_pins_segment_init = (segment + 1) << 3;

    for (int i = 0; i <8; i++) {
        int pin_to_set = indentify_pins_segment_init + i;
        neorv32_gpio_pin_set(pin_to_set);
    }
}

