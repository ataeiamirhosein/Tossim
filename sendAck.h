/*
 *@author Amirhosein Ataei
 *@date March 29 2020
 */

#ifndef SENDACK_H
#define SENDACK_H

typedef nx_struct my_msg {
        nx_uint8_t msg_type;
        nx_uint16_t msg_counter;
        nx_uint16_t msg_data;

}my_msg_t;

#define REQ 1
#define RESP 2

enum{
    AM_MY_MSG = 6,
};

#endif
