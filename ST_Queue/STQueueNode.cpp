//
// Created by Guy Greenleaf on 10/22/2020.
//

#include "STQueueNode.hpp"

class Request;

STQueueNode::STQueueNode(Request *req) : _request(req), _next(nullptr) {}

STQueueNode *STQueueNode::next() {
    return _next;
}

void STQueueNode::next(STQueueNode *node) {
    _next = node;
}

Request *STQueueNode::request() {
    return _request;
}

