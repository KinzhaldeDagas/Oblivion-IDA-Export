char __thiscall sub_6ACC50(int *this, int a2, float a3, float a4)
{
  _DWORD *v4; // ecx
  char result; // al
  int *v6; // [esp+Ch] [ebp-4h] BYREF

  v6 = this; /*0x6acc50*/
  if ( bSoundEnabled_Audio ) /*0x6acc51*/
  {
    v4 = (_DWORD *)*(this + 0xC0); /*0x6acc5e*/
    v6 = 0; /*0x6acc69*/
    result = NiTMap_GetAt(v4, a2, &v6); /*0x6acc71*/
    if ( v6 ) /*0x6acc7b*/
      return sub_6B6D40(v6, a3, a4, 0); /*0x6acc91*/
  }
  return result; /*0x6acc97*/
}
