/**
 * Module:  module_dsc_comms
 * Version: 1v0alpha0
 * Build:   8234dc1c93e3702c697f99474a8ca1e7d28a61cc
 * File:    control_comms_can.h
 *
 * The copyrights, all other intellectual and industrial 
 * property rights are retained by XMOS and/or its licensors. 
 * Terms and conditions covering the use of this code can
 * be found in the Xmos End User License Agreement.
 *
 * Copyright XMOS Ltd 2010
 *
 * In the case where this code is a modification of existing code
 * under a separate license, the separate license terms are shown
 * below. The modifications to the code are still covered by the 
 * copyright notice above.
 *
 **/

#ifndef _CONTROL_COMMS_CAN_H_
#define _CONTROL_COMMS_CAN_H_
#include <dsc_config.h>

/**
 *  \brief This is a thread which performs the higher level control for the CAN interface.
 *
 *  Use it in conjunction with the thread 'canPhyRxTx' from the module module_can.
 *
 *  \param c_speed Channel for interfacing to the higher level motor control (shared_io_motor)
 *  \param rxChan Connect to the rxChan port on the canPhyRxTx
 *  \param txChan Connect to the txChan port on the canPhyRxTx
 */
#ifdef BLDC_BASIC
void do_comms_can( chanend c_commands_can, chanend rxChan, chanend txChan, chanend c_control_can,chanend c_commands_can2);
#endif  //BLDC_BASIC


// TODO: This should be combined with the above and the number of motor control channels should be made
// into a parameter and the motor control channels made into an array
#ifdef BLDC_FOC
void do_comms_can( chanend c_commands_can, chanend rxChan, chanend txChan, chanend c_control_can);
#endif  //BLDC_FOC
#endif /* _CONTROL_COMMS_CAN_H_ */

