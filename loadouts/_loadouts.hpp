#include "_macros.hpp"

class CfgLoadouts
{
    class USMC {
        displayName = "USMC";
        #include "usmc.hpp"
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