#include "ex_impl.h"

namespace exchange {

  void ExchangeServiceImpl::cast(const msg& content, std::string* status, rrr::DeferredReply* defer) {
    *status = "ret";
    if(content.from=="a" && content.to=="b")
      *status = "ack";
    defer->reply();
  };

}
