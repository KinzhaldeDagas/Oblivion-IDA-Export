NiAVObject *__thiscall sub_7408A0(NiGeometry *this, _DWORD **a2)
{
  NiAVObject *v3; // eax
  NiAVObject *v4; // esi

  v3 = (NiAVObject *)FormHeapAlloc(0xC8u); /*0x7408ca*/
  v4 = v3; /*0x7408cf*/
  if ( v3 ) /*0x7408e2*/
  {
    sub_741FA0(v3); /*0x7408e6*/
    v4->vtbl = (NiAVObjectVtbl *)&NiParticleMeshes::`vftable'; /*0x7408eb*/
    LOBYTE(v4[1].members.m_flags) = 1; /*0x7408f1*/
  }
  else
  {
    v4 = 0; /*0x7408fa*/
  }
  j_NiGeometry_CopyMembersForClone(this, (NiGeometry *)v4, a2); /*0x74090c*/
  return v4; /*0x740913*/
}
