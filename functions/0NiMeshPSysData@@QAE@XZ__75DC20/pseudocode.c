NiMeshPSysData *__thiscall NiMeshPSysData::NiMeshPSysData(NiMeshPSysData *this, _DWORD **a2)
{
  NiObject *v3; // eax
  int v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x84u);
  v4 = (int)v3;
  if ( v3 )
  {
    sub_7597F0(v3);
    *(_DWORD *)v4 = &NiMeshPSysData::`vftable';
    *(_DWORD *)(v4 + 0x68) = 0;
    *(_DWORD *)(v4 + 0x74) = &NiTArray<NiTArray<NiPointer<NiAVObject>> *>::`vftable';
    *(_WORD *)(v4 + 0x7C) = 0;
    *(_WORD *)(v4 + 0x82) = 1;
    *(_WORD *)(v4 + 0x7E) = 0;
    *(_WORD *)(v4 + 0x80) = 0;
    *(_DWORD *)(v4 + 0x78) = 0;
    sub_75D740((const void **)this, v4, a2);
    return (NiMeshPSysData *)v4;
  }
  else
  {
    sub_75D740((const void **)this, 0, a2);
    return 0;
  }
}
