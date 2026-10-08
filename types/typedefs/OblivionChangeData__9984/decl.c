struct OblivionChangeData
{
unsigned int changeFlags; ///< Verified: ChangeData.flags; bit 0x2 selects created-reference buffer restoration and sign bit selects moved-reference restoration at 463DA3..463E55. Other bits remain separately used by serializers.
unsigned __int8 *savedFormBuffer; ///< Verified: owned serialized-form buffer; assigned 452D03/463D45, consumed by LoadForm, freed by 45A913.
};
