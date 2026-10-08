struct TESPackageMembr
{
TESFormMembr super;
UInt32 procedureArrayIndex;
UInt32 packageFlags;
TESPackageType type;
UInt8 pad021[3];
LocationData *location;
TargetData *target;
Time time;
ConditionEntry conditionList;
};
