NiMeshPSysData *__thiscall NiMeshPSysData::NiMeshPSysData(NiMeshPSysData *this, _DWORD **a2)
{
  NiObject *v3; // eax
  int v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x84u); /*0x75dc2a*/
  v4 = (int)v3; /*0x75dc2f*/
  if ( v3 ) /*0x75dc38*/
  {
    sub_7597F0(v3); /*0x75dc3c*/
    *(_DWORD *)v4 = &NiMeshPSysData::`vftable'; /*0x75dc45*/
    *(_DWORD *)(v4 + 0x68) = 0; /*0x75dc4b*/
    *(_DWORD *)(v4 + 0x74) = &NiTArray<NiTArray<NiPointer<NiAVObject>> *>::`vftable'; /*0x75dc52*/
    *(_WORD *)(v4 + 0x7C) = 0; /*0x75dc59*/
    *(_WORD *)(v4 + 0x82) = 1; /*0x75dc5d*/
    *(_WORD *)(v4 + 0x7E) = 0; /*0x75dc66*/
    *(_WORD *)(v4 + 0x80) = 0; /*0x75dc6a*/
    *(_DWORD *)(v4 + 0x78) = 0; /*0x75dc71*/
    sub_75D740((const void **)this, v4, a2); /*0x75dc74*/
    return (NiMeshPSysData *)v4; /*0x75dc7a*/
  }
  else
  {
    sub_75D740((const void **)this, 0, a2); /*0x75dc8b*/
    return 0; /*0x75dc91*/
  }
}
