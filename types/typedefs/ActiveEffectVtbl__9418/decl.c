struct ActiveEffectVtbl
{
void *scalarDeletingDestructor;
ActiveEffect *(__thiscall *clone)(ActiveEffect *this);
void (__thiscall *update)(ActiveEffect *this, float elapsedTime);
void *getSaveSize;
void *saveEffect;
void *loadEffect;
int (__thiscall *link)(ActiveEffect *this, TESObjectREFR *linkContext);
int (__thiscall *postLink)(ActiveEffect *this, TESObjectREFR *linkContext);
void *preLoad;
void *unregisterCaster;
void *isActor;
ActiveEffect *(__thiscall *copyTo)(ActiveEffect *this, ActiveEffect *destination);
void *reserved0C;
bool (__thiscall *validTarget)(ActiveEffect *this, MagicTarget *target);
void *apply;
void *onRemove;
};
