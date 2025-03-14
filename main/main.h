#ifndef MAIN_H_
#define MAIN_H_

//************************************************************************************************//
//                                            INCLUDES                                            //
//************************************************************************************************//

//Standard Library Includes
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//************************************************************************************************//
//                                        DEFINITIONS & TYPES                                     //
//************************************************************************************************//

//-----------------------------------------  Definitions -----------------------------------------//

#define spp_sprintf(s,...)         sprintf((char*)(s), ##__VA_ARGS__)
#define SPP_DATA_MAX_LEN           (512)
#define SPP_CMD_MAX_LEN            (20)
#define SPP_STATUS_MAX_LEN         (20)
#define SPP_DATA_BUFF_MAX_LEN      (2*1024)


//----------------------------------------- Enumerations -----------------------------------------//

///State Machine Attributes 
enum{
    SPP_IDX_SVC,

    SPP_IDX_SPP_DATA_RECV_CHAR,
    SPP_IDX_SPP_DATA_RECV_VAL,

    SPP_IDX_SPP_DATA_NOTIFY_CHAR,
    SPP_IDX_SPP_DATA_NTY_VAL,
    SPP_IDX_SPP_DATA_NTF_CFG,

    SPP_IDX_SPP_COMMAND_CHAR,
    SPP_IDX_SPP_COMMAND_VAL,

    SPP_IDX_SPP_STATUS_CHAR,
    SPP_IDX_SPP_STATUS_VAL,
    SPP_IDX_SPP_STATUS_CFG,

    SPP_IDX_NB,
};


#endif /* MAIN_H_ */

