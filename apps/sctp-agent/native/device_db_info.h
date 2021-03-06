/*
Copyright(c) Microsoft Corporation.All rights reserved.
Licensed under the MIT License.
*/

#ifndef DEVICE_DB_INFO_H_
#define DEVICE_DB_INFO_H_

#define SCTP_AGENT_DB_LOCATION	"./sql_db/sctp_agent_native.db"
#define LTE_DB_LOCATION			"./sql_db/femto.db"

extern uint16_t map_mme_sctp_port(uint16_t enb_sctp_port);

#endif // DEVICE_DB_INFO_H_


