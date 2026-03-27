NiAVObject *__thiscall sub_4A1870(_DWORD *this, int a2)
{
  NiAVObject *v3; // eax
  NiAVObject *v4; // esi

  v3 = (NiAVObject *)FormHeapAlloc(0xD0u);
  v4 = v3;
  if ( v3 )
  {
    sub_717590(v3);
    v4->vtbl = (NiAVObjectVtbl *)&BSScissorTriShape::`vftable';
  }
  else
  {
    v4 = 0;
  }
  *(_DWORD *)&v4[1].members.super.m_extraDataListLen = *(this + 0x30);
  *(_DWORD *)&v4[1].members.m_flags = *(this + 0x31);
  v4[1].members.m_parent = (NiNode *)*(this + 0x32);
  v4[1].members.m_kWorldBound.Center.x = *(float *)(this + 0x33);
  sub_7175B0(v4, a2);
  return v4;
}
