int __thiscall sub_8B1600(void *this, signed int a2)
{
  int i; // esi
  int v4; // eax
  int v5; // eax
  _BYTE v7[512]; // [esp+Ch] [ebp-204h] BYREF

  for ( i = a2; i; i -= v5 ) /*0x8b1622*/
  {
    v4 = 0x200; /*0x8b1636*/
    if ( i <= 0x200 ) /*0x8b163b*/
      v4 = i; /*0x8b163d*/
    v5 = (*(int (__thiscall **)(void *, _BYTE *, int))(*(_DWORD *)this + 0xC))(this, v7, v4); /*0x8b1649*/
    if ( !v5 ) /*0x8b164e*/
      break; /*0x8b164e*/
  }
  return a2 - i; /*0x8b1654*/
}
