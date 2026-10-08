struct OpenEffectVtbl
{
void *scalarDeletingDestructor;
void *clone;
void (__thiscall *update)(ActiveEffect *this, float elapsedTime);
void *getSaveSize;
void *saveEffect;
void *loadEffect;
void *link;
void *postLink;
void *preLoad;
void *unregisterCaster;
void *isActor;
void *copyTo;
void *reserved0C;
bool (__thiscall *validTarget)(ActiveEffect *this, MagicTarget *target);
void *apply;
void (__thiscall *onRemove)(ActiveEffect *this);
};
