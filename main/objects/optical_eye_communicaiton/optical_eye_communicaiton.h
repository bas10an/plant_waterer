#pragma once
#include "driver/uart.h"

typedef enum optical_resp
{
    OK_ = 0x00,
    ERR = 0x01,
    SNS = 0x02,  // Service Not Supported
    ISC = 0x03,  // Insufficient Security Clearance
    ONP = 0x04,  // Operation Not Possible
    IAR = 0x05,  // Inappropriate Action Requested
    BSY = 0x06,  // Device Busy
    DNR = 0x07,  // Data Not Ready
    DLK = 0x08,  // Data Locked
    RNO = 0x09,  // Renegotiate Request
    ISSS = 0x0A, // Invalid Service Sequence State
} optical_resp_t;

const uint8_t IDENTIFICATION_SERVICE[] = {0xEE, 0x00, 0x00, 0x00, 0x00, 0x01, 0x20, 0x13, 0x10};
const uint8_t PART_READ_SERVICE_T21[] = {0xEE, 0x00, 0x00, 0x06, 0x00, 0x07, 0x3F, 0x00, 0x15, OFFSET, OCTET-count}
const uint8_t PART_READ_SERVICE_T22[] = {}

void init_optical_eye_communicaiton();
void start_optical_eye_communicaiton();
int read_optical_electricity_data(char *read_data);