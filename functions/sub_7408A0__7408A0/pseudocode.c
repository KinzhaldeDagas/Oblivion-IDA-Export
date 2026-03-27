NiAVObject *__thiscall sub_7408A0(char **this, _DWORD **a2)
{
  NiAVObject *v3; // eax
  NiAVObject *v4; // esi

  v3 = (NiAVObject *)FormHeapAlloc(0xC8u);
  v4 = v3;
  if ( v3 )
  {
    sub_741FA0(v3);
    v4->vtbl = (NiAVObjectVtbl *)&NiParticleMeshes::`vftable';
    LOBYTE(v4[1].members.m_flags) = 1;
  }
  else
  {
    v4 = 0;
  }
  sub_722700(this, (NiGeometry *)v4, a2);
  return v4;
}
