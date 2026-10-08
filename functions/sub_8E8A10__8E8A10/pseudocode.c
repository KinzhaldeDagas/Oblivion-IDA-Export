int __thiscall sub_8E8A10(int *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // ecx
  int result; // eax
  int v6; // ecx

  v2 = *(this + 5); /*0x8e8a13*/
  v3 = 0; /*0x8e8a17*/
  *this = (int)&off_A9AC24; /*0x8e8a1b*/
  if ( v2 > 0 ) /*0x8e8a21*/
  {
    do /*0x8e8a47*/
    {
      v4 = *(_DWORD *)(*(this + 4) + 8 * v3); /*0x8e8a26*/
      if ( *(_WORD *)(v4 + 4) ) /*0x8e8a29*/
      {
        if ( !--*(_WORD *)(v4 + 6) ) /*0x8e8a34*/
          (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x8e8a3f*/
      }
      ++v3; /*0x8e8a44*/
    }
    while ( v3 < *(this + 5) ); /*0x8e8a47*/
  }
  result = *(this + 6); /*0x8e8a49*/
  if ( result >= 0 ) /*0x8e8a4e*/
  {
    v6 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8e8a60*/
    if ( !v6 ) /*0x8e8a68*/
      v6 = unk_BA7D9C; /*0x8e8a6a*/
    result = sub_8A75D0(v6, (_DWORD *)*(this + 4), 8 * result, 0x14); /*0x8e8a7f*/
  }
  *this = (int)&hkBaseObject::`vftable'; /*0x8e8a85*/
  return result; /*0x8e8a84*/
}
