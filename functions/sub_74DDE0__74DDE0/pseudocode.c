int __thiscall sub_74DDE0(const char **this, int a2)
{
  NiObject *v3; // eax
  int v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x28u); /*0x74dde7*/
  v4 = (int)v3; /*0x74ddec*/
  if ( v3 ) /*0x74ddf5*/
  {
    sub_752BF0(v3); /*0x74ddf9*/
    *(_DWORD *)v4 = &NiPSysMeshUpdateModifier::`vftable'; /*0x74de02*/
    *(_DWORD *)(v4 + 0x18) = &NiTArray<NiPointer<NiAVObject>>::`vftable'; /*0x74de0c*/
    *(_WORD *)(v4 + 0x20) = 0; /*0x74de13*/
    *(_WORD *)(v4 + 0x26) = 1; /*0x74de17*/
    *(_WORD *)(v4 + 0x22) = 0; /*0x74de1d*/
    *(_WORD *)(v4 + 0x24) = 0; /*0x74de21*/
    *(_DWORD *)(v4 + 0x1C) = 0; /*0x74de25*/
    sub_74DB50(this, v4, a2); /*0x74de28*/
    return v4; /*0x74de2e*/
  }
  else
  {
    sub_74DB50(this, 0, a2); /*0x74de3f*/
    return 0; /*0x74de45*/
  }
}
