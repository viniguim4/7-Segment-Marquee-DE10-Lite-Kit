#ifndef SEGMENT_LED_H
#define SEGMENT_LED_H

    struct segment_led {
        int size;
        int pins[];
    };

    void                neorv32_gpio_segment_set(int segment, char data);
    void                neorv32_gpio_segment_clr(int segment);
    struct segment_led* neorv32_gpio_segment_retrieve_data(char data);

#endif