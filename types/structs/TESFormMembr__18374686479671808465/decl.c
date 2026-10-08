struct TESFormMembr
{
TESForm::FormType type;
UInt8 pad[3];
TESForm::FormFlags flags; ///< Verified flag bits: TESFormFlag_Deleted (0x20), toggled by TESForm_SetDeleted; TESFormFlag_Disabled (0x800), toggled by TESForm_SetDisabledFlag and propagated via ExtraEnableStateParent. Other bits remain undecoded here.
UInt32 refID;
TESForm::ModReferenceList modlist;
};
