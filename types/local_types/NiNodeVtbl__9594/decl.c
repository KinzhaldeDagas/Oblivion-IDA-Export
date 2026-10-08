struct NiNodeVtbl
{
NiAVObjectVtbl super;
void (__thiscall *AddObject)(NiNode This, NiAVObject *nChild, UInt8 FirstAvail);
NiAVObject *(__thiscall *RemoveObject)(NiNode *This, NiAVObject **RemovedChild, NiAVObject *nChild);
NiAVObject *(__thiscall *RemoveObjectAt)(NiNode *This, NiAVObject **RemovedChild, UInt32 Index);
NiAVObject *(__thiscall *SetObjectAt)(NiNode This, NiAVObject **SetChild, UInt32 Index, NiAVObject *nChild);
void (__thiscall *Unk_25)(NiNode *);
bool (__thiscall *Unk_26)(NiNode *);
};
