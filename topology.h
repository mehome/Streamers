/*
 *  Copyright (c) 2010 Csaba Kiraly
 *  Copyright (c) 2010 Luca Abeni
 *
 *  This is free software; see gpl-3.0.txt
 */

#ifndef TOPOLOGY_H
#define TOPOLOGY_H

#include <stdint.h>

#define MSG_TYPE_STREAMER_TOPOLOGY   0x22

int peers_init(void);
struct peerset *get_peers(void);
void update_peers(struct nodeID *from, const uint8_t *buff, int len);
struct peer *nodeid_to_peer(const struct nodeID* id, int reg);
int topoAddNeighbour(struct nodeID *neighbour, void *metadata, int metadata_size);
int topologyInit(struct nodeID *myID, const char *config);
void topologyShutdown(void);

#endif	/* TOPOLOGY_H */
