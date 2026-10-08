struct NiObjectVtbl
{
NiRefObjectVtbl super;
NiRTTI *(__thiscall *GetType)(NiObject *);
NiObject *(__thiscall *Unk_02)(NiObject *);
UInt32 (__thiscall *Unk_03)(NiObject *);
UInt32 (__thiscall *Unk_04)(NiObject *);
UInt32 (__thiscall *Unk_05)(NiObject *);
NiObject *(__thiscall *Copy)(NiObject *);
void (__thiscall *Load)(NiObject *, NiStream *stream);
void (__thiscall *PostLoad)(NiObject *, NiStream *stream);
void (__thiscall *FindNodes)(NiObject *, NiStream *stream);
void (__thiscall *Save)(NiObject *, NiStream *stream);
bool (__thiscall *Compare)(NiObject *, NiObject *obj);
void (__thiscall *DumpAttributes)(NiObject *, void *dst);
void (__thiscall *DumpChildAttributes)(NiObject *, void *dst);
void (__thiscall *Unk_0E)(NiObject *);
void (__thiscall *Unk_0F)(NiObject *, UInt32 arg);
void (__thiscall *Unk_10)(NiObject *);
void (__thiscall *Unk_11)(NiObject *);
void (__thiscall *Unk_12)(NiObject *, UInt32 arg);
};
