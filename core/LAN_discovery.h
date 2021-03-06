/*  LAN_discovery.h
 *
 *  LAN discovery implementation.
 *
 *  Copyright (C) 2013 Tox project All Rights Reserved.
 *
 *  This file is part of Tox.
 *
 *  Tox is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Tox is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with Tox.  If not, see <http://www.gnu.org/licenses/>.
 *
 */


#ifndef LAN_DISCOVERY_H
#define LAN_DISCOVERY_H


#include "DHT.h"

/* used for get_broadcast() */
#ifdef __linux
#include <sys/ioctl.h>
#include <arpa/inet.h>
#include <linux/netdevice.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*Send a LAN discovery pcaket to the broadcast address with port port*/
int send_LANdiscovery(uint16_t port);


/* if we receive a packet we call this function so it can be handled.
    return 0 if packet is handled correctly.
    return 1 if it didn't handle the packet or if the packet was shit. */
int LANdiscovery_handlepacket(uint8_t *packet, uint32_t length, IP_Port source);



#ifdef __cplusplus
}
#endif

#endif
