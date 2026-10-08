struct NiCullingProcessVtbl
{
UInt32 (__thiscall *Destructor)(NiCullingProcess *this, bool freeMem);
void (__thiscall *ProcessCull)(NiCullingProcess *self, NiAVObject *object);
void (__thiscall *Process)(NiCullingProcess *self, NiCamera *camera, NiAVObject *root, CullingVisibleGeometryArray *visibleArray);
UInt32 (__thiscall *AppendVirtual)(NiCullingProcess *this, NiGeometry *Geo);
};
