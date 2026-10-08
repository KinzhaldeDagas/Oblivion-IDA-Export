struct TESObjectREFRVtbl
{
TESFormVtbl super;
void (__thiscall *Unk_37)(TESObjectREFR *this);
void (__thiscall *Unk_38)(TESObjectREFR *this);
void (__thiscall *Unk_39)(TESObjectREFR *this);
void (__thiscall *Unk_3A)(TESObjectREFR *this);
float (__thiscall *GetScale)(TESObjectREFR *this);
void (__thiscall *GetStartingAngle)(TESObjectREFR *this, float *pos);
void (__thiscall *GetStartingPos)(TESObjectREFR *this, float *pos);
void (__thiscall *Unk_3E)(TESObjectREFR *this);
void (__thiscall *Unk_3F)(TESObjectREFR *this);
void (__thiscall *RemoveItem)(TESObjectREFR *this, TESForm *toRemove, BaseExtraList *extraList, UInt32 quantity, UInt32 useContainerOwnership, UInt32 drop, TESObjectREFR *destRef, float *dropPos, float *dropRot, UInt32 unk8, UInt8 useExistingEntryData);
void (__thiscall *Unk_41)(TESObjectREFR *this);
void (__thiscall *Unk_42)(TESObjectREFR *this);
void (__thiscall *Unk_43)(TESObjectREFR *this);
void (__thiscall *Unk_44)(TESObjectREFR *this);
void (__thiscall *AddItem)(TESObjectREFR *this, TESForm *item, ExtraDataList *xDataList);
void (__thiscall *Unk_46)(TESObjectREFR *this);
void (__thiscall *Unk_47)(TESObjectREFR *this);
void (__thiscall *Unk_48)(TESObjectREFR *this);
MagicTarget *(__thiscall *GetMagicTarget)(TESObjectREFR *this);
void (__thiscall *GetTemplateForm)(TESObjectREFR *this);
void (__thiscall *SetTemplateForm)(TESObjectREFR *this, TESObjectREFR *oth);
void (__thiscall *Unk_4C)(TESObjectREFR *this);
void (__thiscall *Unk_4D)(TESObjectREFR *this);
void (__thiscall *Unk_4E)(TESObjectREFR *this);
void (__thiscall *Unk_4F)(TESObjectREFR *this);
void (__thiscall *Unk_50)(TESObjectREFR *this);
void (__thiscall *Unk_51)(TESObjectREFR *this);
void (__thiscall *Unk_52)(TESObjectREFR *this);
NiNode *(__thiscall *GenerateNiNode)(TESObjectREFR *this); ///< Generate/attach this reference's NiNode. Base 0x4E4080, MobileObject 0x659F30, PlayerCharacter 0x667BE0. Native ABI has no x87 or stack arguments.
void (__thiscall *Set3D)(void *niNode);
NiNode *(__thiscall *GetNiNode)(TESObjectREFR *this);
void (__thiscall *Unk_56)(TESObjectREFR *this);
void (__thiscall *Unk_57)(UInt32 arg0);
void (__thiscall *Unk_58)(TESObjectREFR *this);
ActorAnimData *(__thiscall *GetAnimData)(TESObjectREFR *this); ///< Virtual active ActorAnimData accessor. Base 0x4D8370 uses process +0x17C when available or ExtraAnim fallback; Player override 0x65D720 prefers defaultAnimData +0x5DC, then visible first-person +0x5CC, then base.
ActorSkinInfo *(__thiscall *GetActiveSkinInfo)(TESObjectREFR *this); ///< PlayerCharacter override 0x6600B0 returns active perspective ActorSkinInfo; base Actor target 0x6F7070 returns null. Used by bow visual cleanup, whose process accessor interprets null as ordinary/NPC context.
void (__thiscall *Unk_5B)(TESObjectREFR *this);
TESForm *(__thiscall *GetBaseForm)(TESObjectREFR *this);
float *(__thiscall *GetPos)(TESObjectREFR *this);
void (__thiscall *Unk_5E)(TESObjectREFR *this);
void (__thiscall *SetProcedureCompleted)(TESObjectREFR *this, bool completed);
void (__thiscall *Unk_60)(TESObjectREFR *this);
void (__thiscall *Unk_61)(TESObjectREFR *this, UInt8 unk01);
bool (__thiscall *IsMobileObject)(TESObjectREFR *this);
SitSleep (__thiscall *GetSleepState)(TESObjectREFR *this);
bool (__thiscall *IsActor)(TESObjectREFR *this);
void (__thiscall *ChangeCell)(TESObjectCELL *newCell);
bool (__thiscall *IsDead)(TESObjectREFR *this, char arg0);
UInt8 (__thiscall *GetKnockedState)(TESObjectREFR *this);
bool (__thiscall *HasFatigue)(TESObjectREFR *this);
bool (__thiscall *MoveToHigh)(TESObjectREFR *self); ///< Verified: saved-tier switch659C90 and Actor concrete override allocation/registration establish process transition. Prior IsParalyzed label at1A4 was incorrect; boolean result is transition result.
};
