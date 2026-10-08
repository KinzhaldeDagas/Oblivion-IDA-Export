struct SkyObjectVtbl
{
NiNode *(__thiscall *GetObjectNode)(SkyObject *);
void (__thiscall *Initialize)(SkyObject *, UInt32);
void (__thiscall *func_03)(SkyObject *, UInt32, UInt32);
};
