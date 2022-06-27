#include "optical_eye_communicaiton.h"

static uart_port_t uart_num_ = UART_NUM_0;
static uart_config_t uart_config_ = {
    .baud_rate = 9600,
    .data_bits = UART_DATA_8_BITS,
    .parity = UART_PARITY_DISABLE,
    .stop_bits = UART_STOP_BITS_1,
};

void init_optical_eye_communicaiton()
{
    uart_driver_install(uart_num_, 64, 64, 0, NULL, 0);
}

void start_optical_eye_communicaiton()
{
    uint8_t *read_buffer = malloc(64);

    // Identification Service
    uart_write_bytes(uart_num_, IDENTIFICATION_SERVICE, 9);
    uart_read_bytes(uart_num_, read_buffer, 64, portMAX_DELAY);
    if (read_buffer[0] == ISSS || read_buffer[0] == BSY || read_buffer[0] == ERR)
    {
        return; // ERROR
    }

    // Identification Service
    uart_write_bytes(uart_num_, IDENTIFICATION_SERVICE, 9);
    uart_read_bytes(uart_num_, read_buffer, 64, portMAX_DELAY);
    if (read_buffer[0] ==  || read_buffer[0] == ISSS || read_buffer[0] == BSY || read_buffer[0] == ERR)
    {
        return; // ERROR
    }
}

int read_optical_electricity_data(char *read_data)
{
    return -1;
}