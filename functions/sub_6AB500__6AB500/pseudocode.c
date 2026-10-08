int __thiscall sub_6AB500(_DWORD *this, int a2, float a3)
{
  _DWORD *v3; // ecx
  _DWORD *v5; // [esp+4h] [ebp-4h] BYREF

  v5 = this; /*0x6ab500*/
  if ( bSoundEnabled_Audio ) /*0x6ab501*/
  {
    v3 = (_DWORD *)*(this + 0xC0); /*0x6ab50e*/
    v5 = 0; /*0x6ab519*/
    NiTMap_GetAt(v3, a2, &v5); /*0x6ab521*/
    if ( v5 ) /*0x6ab52b*/
      sub_6B6B20((int)v5, a3); /*0x6ab535*/
  }
  return 0; /*0x6ab53d*/
}
