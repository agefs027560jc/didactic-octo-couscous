#include "ex_impl.h"

int main() {

    exchange::ExchangeServiceImpl impl;
    rrr::PollMgr *pm = new rrr::PollMgr();
    base::ThreadPool *tp = new base::ThreadPool();
    rrr::Server *server = new rrr::Server(pm, tp);

    server->reg(&impl);
    server->start(std::string("127.0.0.1:8888").c_str());

    int i = 15;
    while (i--) {
        sleep(1);
    }
    printf("exiting...\n");
}
