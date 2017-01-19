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
    class US_WD {
        displayName = "US Army (Woodland)";
        #include "us_wd.hpp"
    };
    class FIA_TS {
        displayName = "FIA (Tiger Stripe)";
        #include "fia_ts.hpp"
    };
    class UN_MO {
        displayName = "U.N. Peacekeepers (Mountain)";
        #include "un_mo.hpp"
    };
    class VDV_EMR {
        displayName = "VDV (EMR)";
        #include "vdv_emr.hpp"
    };
    class VDV_F {
        displayName = "VDV (Flora)";
        #include "vdv_f.hpp"
    };
    class VDV_MF {
        displayName = "VDV (Mountain Flora)";
        #include "vdv_mf.hpp"
    };
};