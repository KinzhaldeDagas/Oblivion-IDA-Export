NiGeometryGroup *sub_77DD20()
{
  NiGeometryGroup *v0; // esi
  int v1; // eax
  NiGeometryGroup *v3; // eax
  int v4; // [esp-Ch] [ebp-Ch]

  v3 = (NiGeometryGroup *)FormHeapAlloc(0x1Cu);
  if ( !v3 )
    return 0;
  v0 = v3;
  sub_7828D0(v3);
  v0->vtbl = (NiGeometryGroupVtbl *)&NiStaticGeometryGroup::`vftable';
  v0[1].m_uiRefCount = 0x25;
  v0[1].vtbl = (NiGeometryGroupVtbl *)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiVBSet *>::`vftable';
  v0[2].vtbl = 0;
  v1 = FormHeapAlloc(0x94u);
  v4 = 4 * v0[1].m_uiRefCount;
  v0[1].device = (IDirect3DDevice9 *)v1;
  _memset(v1, 0, v4);
  v0[1].vtbl = (NiGeometryGroupVtbl *)&NiTPointerMap<unsigned int,NiVBSet *>::`vftable';
  return v0;
}
