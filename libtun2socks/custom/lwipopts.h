/**
 * @file lwipopts.h
 * @author Ambroz Bizjak <ambrop7@gmail.com>
 * 
 * @section LICENSE
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the author nor the
 *    names of its contributors may be used to endorse or promote products
 *    derived from this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef LWIP_CUSTOM_LWIPOPTS_H
#define LWIP_CUSTOM_LWIPOPTS_H

#define NO_SYS 1
#define MEM_ALIGNMENT 4

#define LWIP_ARP 0
#define ARP_QUEUEING 0
#define IP_FORWARD 0
#define LWIP_ICMP 0
#define LWIP_RAW 0
#define LWIP_DHCP 0
#define LWIP_AUTOIP 0
#define LWIP_SNMP 0
#define LWIP_IGMP 0
#define LWIP_DNS 0
#define LWIP_UDP 1
#define LWIP_UDPLITE 0
#define LWIP_TCP 1
#define LWIP_CALLBACK_API 1
#define LWIP_NETIF_API 0
#define LWIP_NETIF_LOOPBACK 0
#define LWIP_HAVE_LOOPIF 0
#define LWIP_HAVE_SLIPIF 0
#define LWIP_NETCONN 0
#define LWIP_SOCKET 0
#define PPP_SUPPORT 0
#define LWIP_IPV6 0
#define LWIP_IPV6_MLD 0
#define LWIP_IPV6_AUTOCONFIG 0

#define LWIP_CHECKSUM_ON_COPY 1

// MEM
#define MEM_SIZE                        (1024 * 1024 * 2) /* 1MiB */
#define MEMP_NUM_PBUF 256
#define MEMP_NUM_TCP_PCB 256
#define MEMP_NUM_TCP_PCB_LISTEN 256
#define MEMP_NUM_TCP_SEG 256
#define MEMP_NUM_REASSDATA 256
#define MEMP_NUM_FRAG_PBUF 256
#define PBUF_POOL_SIZE 256

//#define MEMP_NUM_TCP_PCB_LISTEN 16
//#define MEMP_NUM_TCP_PCB 1024
//#define TCP_SND_BUF 32469
//#define TCP_SND_QUEUELEN (4 * (TCP_SND_BUF)/(TCP_MSS))

#define MEM_LIBC_MALLOC 1
#define MEMP_MEM_MALLOC 1

//#define TCP_MSS 8117

#define TCP_MSS                         2048
#define TCP_WND                         (2*TCP_MSS)
#define TCP_SND_BUF                     2 * TCP_WND
#define TCP_OVERSIZE                    TCP_MSS
#define TCP_SND_QUEUELEN                TCP_SNDQUEUELEN_OVERFLOW


#define LWIP_DEBUG
#define TCP_DEBUG                LWIP_DBG_ON
#define IP_DEBUG                LWIP_DBG_ON
#define TCP_INPUT_DEBUG         LWIP_DBG_ON
#define TCP_WND_DEBUG           LWIP_DBG_ON
#define TCP_OUTPUT_DEBUG        LWIP_DBG_ON
#define TCP_RST_DEBUG       LWIP_DBG_ON
#define TCP_QLEN_DEBUG      LWIP_DBG_ON
#endif
