NiGeometryGroup *sub_77DD20()
{
  NiGeometryGroup *v0; // esi
  int v1; // eax
  NiGeometryGroup *v3; // eax
  unsigned int v4; // [esp-Ch] [ebp-Ch]

  v3 = (NiGeometryGroup *)FormHeapAlloc(0x1Cu); /*0x77dd22*/
  if ( !v3 ) /*0x77dd2c*/
    return 0; /*0x77dd35*/
  v0 = v3; /*0x77dc81*/
  sub_7828D0(v3); /*0x77dc83*/
  v0->vtbl = (NiGeometryGroupVtbl *)&NiStaticGeometryGroup::`vftable'; /*0x77dc88*/
  v0[1].m_uiRefCount = 0x25; /*0x77dc95*/
  v0[1].vtbl = (NiGeometryGroupVtbl *)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiVBSet *>::`vftable'; /*0x77dca2*/
  v0[2].vtbl = 0; /*0x77dca9*/
  v1 = FormHeapAlloc(0x94u); /*0x77dcb5*/
  v4 = 4 * v0[1].m_uiRefCount; /*0x77dcc1*/
  v0[1].device = (IDirect3DDevice9 *)v1; /*0x77dcc5*/
  _memset(v1, 0, v4); /*0x77dcc8*/
  v0[1].vtbl = (NiGeometryGroupVtbl *)&NiTPointerMap<unsigned int,NiVBSet *>::`vftable'; /*0x77dcd0*/
  return v0; /*0x77dd37*/
}
