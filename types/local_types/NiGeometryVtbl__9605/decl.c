struct NiGeometryVtbl
{
NiAVObjectVtbl super;
void (__thiscall *Render)(NiGeometry *this, NiRenderer *arg);
void (__thiscall *Unk_22)(NiGeometry *this, NiRenderer *arg);
void (__thiscall *SetGeomData)(NiGeometry *this, NiObject *obj);
void (__thiscall *Unk_24)(NiGeometry *this);
void (__thiscall *Unk_25)(NiGeometry *this, NiRenderer *arg);
};
