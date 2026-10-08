unsigned int __thiscall TESObjectREFR_SetVisibleWhenDistant_(TESChildCELL *this, char a2)
{
  int v2; // eax
  unsigned int result; // eax

  v2 = *((_DWORD *)this + 2); /*0x4d6fe5*/
  if ( a2 ) /*0x4d6fe8*/
    result = v2 | 0x8000; /*0x4d6fea*/
  else
    result = v2 & 0xFFFF7FFF; /*0x4d6ff5*/
  *((_DWORD *)this + 2) = result; /*0x4d6fef*/
  return result; /*0x4d6ff2*/
}
