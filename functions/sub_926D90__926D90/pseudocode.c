int __thiscall sub_926D90(int *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // ecx
  int result; // eax
  int v6; // ecx

  v2 = *(this + 3); /*0x926d93*/
  v3 = 0; /*0x926d97*/
  *this = (int)&off_AA1838; /*0x926d9b*/
  if ( v2 > 0 ) /*0x926da1*/
  {
    do /*0x926dc7*/
    {
      v4 = *(_DWORD *)(*(this + 2) + 4 * v3); /*0x926da6*/
      if ( *(_WORD *)(v4 + 4) ) /*0x926da9*/
      {
        if ( !--*(_WORD *)(v4 + 6) ) /*0x926db4*/
          (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x926dbf*/
      }
      ++v3; /*0x926dc4*/
    }
    while ( v3 < *(this + 3) ); /*0x926dc7*/
  }
  result = *(this + 4); /*0x926dc9*/
  if ( result >= 0 ) /*0x926dce*/
  {
    v6 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x926de0*/
    if ( !v6 ) /*0x926de8*/
      v6 = unk_BA7D9C; /*0x926dea*/
    result = sub_8A75D0(v6, (_DWORD *)*(this + 2), 4 * result, 0x14); /*0x926dff*/
  }
  *this = (int)&hkBaseObject::`vftable'; /*0x926e05*/
  return result; /*0x926e04*/
}
