unsigned int __thiscall TESObjectREFR_SetVisibleWhenDistant_(TESChildCELL *this, char a2)
{
  int v2; // eax
  unsigned int result; // eax

  v2 = *((_DWORD *)this + 2);
  if ( a2 )
    result = v2 | 0x8000;
  else
    result = v2 & 0xFFFF7FFF;
  *((_DWORD *)this + 2) = result;
  return result;
}
