int __thiscall sub_6AB890(_DWORD *this, int a2)
{
  _DWORD *v2; // ecx
  _DWORD *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this; /*0x6ab890*/
  if ( bSoundEnabled_Audio ) /*0x6ab891*/
  {
    v2 = (_DWORD *)*(this + 0xC0); /*0x6ab89e*/
    v4 = 0; /*0x6ab8a9*/
    NiTMap_GetAt(v2, a2, &v4); /*0x6ab8b1*/
    if ( v4 ) /*0x6ab8bb*/
      sub_6B6AC0(v4); /*0x6ab8bd*/
  }
  return 0; /*0x6ab8c5*/
}
