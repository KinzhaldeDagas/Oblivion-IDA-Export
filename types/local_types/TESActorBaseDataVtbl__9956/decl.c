struct TESActorBaseDataVtbl
{
BaseFormComponentVtbl super;
void *unknown10;
void *unknown14;
void *unknown18;
void *unknown1C;
void *unknown20;
void *unknown24;
bool (__thiscall *GetNoBloodSpray)(TESActorBaseData *self);
void (__thiscall *SetNoBloodSpray)(TESActorBaseData *self, bool disabled);
bool (__thiscall *GetNoBloodDecal)(TESActorBaseData *self);
void (__thiscall *SetNoBloodDecal)(TESActorBaseData *self, bool disabled);
const char *(__thiscall *GetBloodTexturePath)(TESActorBaseData *self);
void (__thiscall *SetBloodTexturePath)(TESActorBaseData *self, const char *path);
const char *(__thiscall *GetBloodParticlePath)(TESActorBaseData *self);
void (__thiscall *SetBloodParticlePath)(TESActorBaseData *self, const char *path);
void *unknown48;
void *unknown4C;
void (__thiscall *MarkAsModified)(TESActorBaseData *self, unsigned int changeMask);
unsigned __int16 (__thiscall *GetModifiedSize)(TESActorBaseData *self, unsigned int changeMask);
void (__thiscall *SaveModified)(TESActorBaseData *self, unsigned int changeMask);
void (__thiscall *LoadModified)(TESActorBaseData *self, unsigned int changeMask, unsigned int currentFlags);
};
