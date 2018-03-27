/**********************************************************************
Copyright:		YiXiong AUTO S&T Co., Ltd.
Description:	��������ISO15765Э�鴦���շ����ݵ���غ���
History:
	<author>	<time>		<desc>

************************************************************************/
#ifndef _ISO_15765_H
#define _ISO_15765_H
#include "../interface/protocol_define.h"

int send_and_receive_cmd_by_iso_15765( const int* piCmdIndex );
int send_and_receive_single_cmd_by_iso_15765( STRUCT_CMD *pstSendCmd, const int cCmdIndex, byte* pcReceiveBuffer );
int process_CAN_receive_Cmd( const byte cBufferOffset, byte* pcSource );
int process_CAN_receive_single_Cmd( byte* pcSource, const uint16 u16Timeout );

#endif
