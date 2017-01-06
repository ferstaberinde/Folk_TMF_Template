#include "_macros.hpp"

class CfgLoadouts
{
    class USMC_WD {
        displayName = "USMC (Woodland)";
        #include "usmc_wd.hpp"
    };
    class USMC_D {
        displayName = "USMC (Desert)";
        #include "usmc_d.hpp"
    };
    class FIA_TS {
        displayName = "FIA (Tiger Stripe)";
        #include "fia_ts.hpp"
    };
    class UN {
        displayName = "United Nations";
        #include "un.hpp"
    };
    class VDV_EMR {
        displayName = "VDV (EMR)";
        #include "vdv_emr.hpp"
    };
    class VDV_MF {
        displayName = "VDV (Mountain Flora)";
        #include "vdv_mf.hpp"
    };
};