#include "exchange.h"

namespace exchange {

  class ExchangeServiceImpl : public ExchangeService {
    public :
      void cast(const msg& content, std::string* status, rrr::DeferredReply* defer);
  };

}
