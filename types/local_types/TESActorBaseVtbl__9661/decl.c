struct TESActorBaseVtbl
{
TESBoundObjectVtbl super;
void *(__thiscall *GetCombatStyle)(TESActorBase *This);
void (__thiscall *SetCombatStyle)(TESActorBase *This, void *style);
UInt32 (__thiscall *GetActorValue)(TESActorBase *This, UInt32 avCode);
float (__thiscall *GetActorValue_F)(TESActorBase *This, UInt32 avCode);
void (__thiscall *SetActorValue_F)(TESActorBase *This, UInt32 avCode, float value);
void (__thiscall *SetActorValue)(TESActorBase *This, UInt32 avCode, SInt32 value);
void (__thiscall *ModActorValue_F)(TESActorBase *This, UInt32 avCode, float value);
void (__thiscall *ModActorValue)(TESActorBase *This, UInt32 avCode, SInt32 value);
};
