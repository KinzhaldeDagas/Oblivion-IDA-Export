int __thiscall sub_6ABA20(float *this, int a2, float a3)
{
  _DWORD *v3; // ecx
  float *v5; // [esp+4h] [ebp-4h] BYREF

  v5 = this; /*0x6aba20*/
  if ( bSoundEnabled_Audio ) /*0x6aba21*/
  {
    v3 = *((_DWORD **)this + 0xC0); /*0x6aba2e*/
    v5 = 0; /*0x6aba39*/
    NiTMap_GetAt(v3, a2, &v5); /*0x6aba41*/
    if ( v5 ) /*0x6aba4b*/
      sub_6B6F20(v5, a3); /*0x6aba55*/
  }
  return 0; /*0x6aba5d*/
}
