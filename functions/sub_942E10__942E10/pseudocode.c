int __thiscall sub_942E10(_DWORD *this)
{
  int v2; // ecx
  int result; // eax
  int v4; // edi

  v2 = *(this + 2); /*0x942e13*/
  *this = &off_AA2444; /*0x942e16*/
  if ( *(_WORD *)(v2 + 4) ) /*0x942e1c*/
  {
    if ( !--*(_WORD *)(v2 + 6) ) /*0x942e28*/
      result = (**(int (__thiscall ***)(int, int))v2)(v2, 1); /*0x942e33*/
  }
  v4 = *(this + 3); /*0x942e35*/
  if ( v4 ) /*0x942e3a*/
  {
    sub_8B0E60((_DWORD *)*(this + 3)); /*0x942e3e*/
    result = (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)unk_BA7D98 + 0x14))(unk_BA7D98, v4, 0xC, 5); /*0x942e50*/
  }
  *this = &hkBaseObject::`vftable'; /*0x942e54*/
  return result; /*0x942e53*/
}
