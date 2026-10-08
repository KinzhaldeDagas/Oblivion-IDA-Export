struct NiGeometryDataVtbl
{
NiObjectVtbl super;
void (__thiscall *SetNumVertices)(NiGeometryData *this, UInt32 arg);
UInt16 (__thiscall *GetNumVertices)(NiGeometryData *this);
void (__thiscall *UpdateNormals)(NiGeometryData *this);
};
