int __thiscall sub_4E5A10(_DWORD *this)
{
  int v2; // ecx
  int result; // eax
  unsigned int v4; // edi

  v2 = *(this + 9); /*0x4e5a13*/
  result = 0; /*0x4e5a16*/
  if ( v2 ) /*0x4e5a1a*/
  {
    v4 = *(unsigned __int16 *)(v2 + 0xA); /*0x4e5a1d*/
    return *(_DWORD *)(*(_DWORD *)(*(this + 9) + 4) + 4 * (Game_RandomLargeInteger(0) % v4)); /*0x4e5a35*/
  }
  return result; /*0x4e5a38*/
}
