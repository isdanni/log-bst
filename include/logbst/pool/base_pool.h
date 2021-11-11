#include <base.h>
#include <pool/pool.h>

namespace logbst
{
    namespace pool
    {
        class base_pool : public pool
        {
        public:
            base_pool();
            ~base_pool() override = default;
        protected:
            virtual void empty();
            virtual void add_pool();
            virtual void format_bst();
        }
    }
}
