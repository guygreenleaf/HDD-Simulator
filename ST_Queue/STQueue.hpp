//
// Created by Guy Greenleaf on 10/22/2020.
//

#ifndef DISKSIM_X_STQUEUE_HPP
#define DISKSIM_X_STQUEUE_HPP

#include<iostream>
#include "../CommonFiles/Queue.hpp"
#include "STQueueNode.hpp"

class Request;

class STQueue: public Queue {

public:
    STQueue(): head(nullptr), tail(nullptr) {}

    virtual void addRequest(Request *request, int cRWHeadTrack, int cRWHeadSector);

    virtual Request *getRequest();

    int currHead();
    void changeRwHead(int track);
    virtual bool empty();
    virtual void print();
    virtual void incReqTracker();
    virtual int getReqTracker();
    virtual ~STQueue();

private:
    STQueueNode *head, *tail;
    int reqTracker = 0;
//    int rwHead;
};


#endif //DISKSIM_X_STQUEUE_HPP
