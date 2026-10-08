struct __cppobj LowProcess : BaseProcess
{
float unk00C;
float unk010;
float curHour;
UInt32 curPackedDate;
UInt8 unk01C;
bool procedureCompleted;
UInt8 unk01E;
UInt8 isAlerted;
UInt8 unk020;
UInt8 pad021[3];
TESForm *usedItem;
float unk028;
Actor *follow;
TESObjectREFR *unk030;
PathLow *pathing;
UInt32 unk038;
UInt32 unk03C;
UInt32 unk040;
UInt32 unk044;
UInt32 unk048;
UInt32 unk04C;
UInt32 unk050;
UInt32 unk054;
UInt32 unk058;
UInt32 unk05C;
UInt32 unk060;
UInt32 unk064;
UInt32 unk068;
UInt32 unk06C;
AVCollection avDamageModifiers; ///< Verified 2026-10-04: same collection storage type. LowProcess ctor 0x643945 and dtor 0x648E10 pass +0x70; current-damage methods clamp through allowPositive=0.
UInt8 unk084;
UInt8 pad085[3];
float unk088;
float unk08C;
};
