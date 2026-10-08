struct NiTriBasedGeomDataVtbl
{
NiGeometryDataVtbl super;
void (__thiscall *SetNumTris)(NiTriBasedGeomData *This, UInt32 arg);
UInt16 (__thiscall *GetNumTris)(NiTriBasedGeomData *);
void (__thiscall *GetTriIndices)(NiTriBasedGeomData *This, UInt32 idx, UInt16 *a, UInt16 *b, UInt16 *c);
void (__thiscall *GetStripData)(NiTriBasedGeomData *This, UInt16 *numStrips, UInt16 **stripLengths, UInt16 **stripLists, UInt32 *numStripsAndTris);
};
