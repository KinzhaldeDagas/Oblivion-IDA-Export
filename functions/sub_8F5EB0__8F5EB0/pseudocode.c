char __thiscall sub_8F5EB0(int *this)
{
  int v2; // ecx
  int v3; // ecx
  char result; // al

  *this = (int)&off_A9B3BC; /*0x8f5eb3*/
  sub_8F5C80(this); /*0x8f5eb9*/
  v2 = *(this + 2); /*0x8f5ebe*/
  if ( v2 ) /*0x8f5ec3*/
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 0x10))(v2); /*0x8f5ec7*/
  v3 = *(this + 2); /*0x8f5eca*/
  if ( v3 ) /*0x8f5ecf*/
  {
    if ( *(_WORD *)(v3 + 4) ) /*0x8f5ed1*/
    {
      if ( !--*(_WORD *)(v3 + 6) ) /*0x8f5edc*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x8f5ee7*/
    }
  }
  result = *((_BYTE *)this + 0x18); /*0x8f5ee9*/
  if ( result ) /*0x8f5eee*/
    result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)unk_BA7D98 + 0xC))(unk_BA7D98, *(this + 3)); /*0x8f5efc*/
  *this = (int)&hkBaseObject::`vftable'; /*0x8f5eff*/
  return result; /*0x8f5f05*/
}
