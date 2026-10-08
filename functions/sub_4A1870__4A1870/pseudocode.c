NiAVObject *__thiscall sub_4A1870(_DWORD *this, int a2)
{
  NiAVObject *v3; // eax
  NiAVObject *v4; // esi

  v3 = (NiAVObject *)FormHeapAlloc(0xD0u); /*0x4a189a*/
  v4 = v3; /*0x4a189f*/
  if ( v3 ) /*0x4a18b2*/
  {
    sub_717590(v3); /*0x4a18b6*/
    v4->vtbl = (NiAVObjectVtbl *)&BSScissorTriShape::`vftable'; /*0x4a18bb*/
  }
  else
  {
    v4 = 0; /*0x4a18c3*/
  }
  *(_DWORD *)&v4[1].members.super.m_extraDataListLen = *(this + 0x30); /*0x4a18cb*/
  *(_DWORD *)&v4[1].members.m_flags = *(this + 0x31); /*0x4a18d7*/
  v4[1].members.m_parent = (NiNode *)*(this + 0x32); /*0x4a18e7*/
  v4[1].members.m_kWorldBound.Center.x = *(float *)(this + 0x33); /*0x4a18ff*/
  j_j_NiGeometry_CopyMembersForClone((int)v4, a2); /*0x4a1905*/
  return v4; /*0x4a190c*/
}
