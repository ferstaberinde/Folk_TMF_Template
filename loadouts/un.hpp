/* assignGear specific macros */

// dependencies: US military mod, RHS USF, CUP weapons + units, HLC m60 + m14
// originally by Snippers

/* HEAVY BACKPACK - B_Carryall_oli */
/* LIGHT BACKPACK - CUP_B_AlicePack_Khaki */

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"rhsgref_uniform_ttsko_mountain"};
    vest[] = {};
    backpack[] = {};
    headgear[] = {};
    goggles[] = {};
    hmd[] = {};
    // Leave empty to remove all. "Default" > leave original item.

    // All randomized
    primaryWeapon[] = {};
    scope[] = {};
    bipod[] = {};
    attachment[] = {};
    silencer[] = {};
    // Leave empty to remove all. "Default" for primaryWeapon > leave original weapon.

    // Only *Weapons[] arrays are randomized
    secondaryWeapon[] = {};
    secondaryAttachments[] = {};
    sidearmWeapon[] = {};
    sidearmAttachments[] = {};
    // Leave empty to remove all. "Default" for secondaryWeapon or sidearmWeapon > leave original weapon.

    // These are added to the uniform or vest
    magazines[] = {};
    items[] = {};
    // These are added directly into their respective slots
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };

    // These are put into the backpack
    backpackItems[] = {};

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "";

    // These are acre item radios that will be added during the ACRE init. ACRE radios added via any other system will be erased.
    radios[] = {};
};
class r : baseMan
{
    displayName = "Rifleman";
    headgear[] = {"rhsgref_ssh68_un"};
    vest[] = {};
    backpack[] = {};
    primaryWeapon[] = {};
    magazines[] =
    {
    };
    items[] =
    {
    };
    //goggles[] = {"rhs_ess_black","rhs_scarf","","","","",""};
    //code = "if (goggles _this == 'rhs_ess_black' && headgear _this == 'usm_helmet_pasgt_g_d_m') then {removeGoggles _this;};";
};
class g : r
{
    displayName = "Grenadier";
};
class car : r
{
    displayName = "Carabinier";
};
class m : car
{
    displayName = "Medic";
};
class smg : r
{
    displayName = "Submachinegunner";
};
class ftl : g
{
    displayName = "Fireteam Leader";
};
class sl : ftl
{
    displayName = "Squad Leader";
};
class co : sl
{
    displayName = "Platoon Leader";
};
class fac : co
{
    displayName = "Forward Air Controller";
};
class ar : r
{
    displayName = "Automatic Rifleman";
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
};
class rat : car
{
    displayName = "Rifleman (AT)";
};
class dm : r
{
    displayName = "Designated Marksman";
};
class mmgg : ar
{
    displayName = "MMG Gunner";
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
};
class hmgg : car
{
    displayName = "HMG Gunner";

};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
};
class hmgag : car
{
    displayName = "HMG Assistant Gunner";
};
class matg : car
{
    displayName = "MAT Gunner";
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
};
class hatg : car
{
    displayName = "HAT Gunner";
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
};
class mtrg : car
{
    displayName = "Mortar Gunner";
};
class mtrac : r
{
    displayName = "Mortar Ammo Carrier";
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
};
class samg : car
{
    displayName = "AA Missile Specialist";
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
};
class sn : r
{
    displayName = "Sniper";
};
class sp : sn
{
    displayName = "Spotter";
};
class vc : smg
{
    displayName = "Vehicle Commander";
};
class vd : smg
{
    displayName = "Vehicle Driver";
};
class vg : vd
{
    displayName = "Vehicle Gunner";
};
class pp : smg
{
    displayName = "Helicopter Pilot";
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
};
class pc : pcc
{
    displayName = "Helicopter Crew";
};
class jp : baseMan
{
    displayName = "Jet pilot";
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
};
class UAV : car
{
    displayName = "UAV Operator";
};
