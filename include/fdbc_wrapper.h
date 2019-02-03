#ifndef FDBC_WRAPPER
#define FDBC_WRAPPER

#define FDB_API_VERSION 600
#include "foundationdb/fdb_c.h"
#include "foundationdb/fdb_c_options.g.h"

// wasn't sure how to call a function-like macro in c2hs, so wrapped it here.
fdb_error_t select_api_version(int runtime_version);

#endif //FDBC_WRAPPER
