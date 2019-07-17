#include <eosiolib/eosio.hpp>

using namespace eosio;

CONTRACT helloworld: public contract {
    public:
        using contract::contract;

        ACTION hi(name user) {
            check(has_auth(user), "aaaaaaaaaaaaaaaaaaa");

            print("hello, ", user);
        }

    private:

};