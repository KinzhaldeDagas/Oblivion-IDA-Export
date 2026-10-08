int __thiscall sub_8DAD30(int *this)
{
  int *v2; // esi
  int v3; // ebp
  int v4; // edi
  int v5; // ecx
  int result; // eax
  int v7; // ecx

  *this = (int)&off_A9A3B8; /*0x8dad35*/
  sub_8DA510(this); /*0x8dad3b*/
  v2 = this + 3; /*0x8dad40*/
  v3 = 8; /*0x8dad43*/
  do /*0x8dad7a*/
  {
    v4 = 8; /*0x8dad50*/
    do /*0x8dad77*/
    {
      v5 = *v2; /*0x8dad55*/
      if ( *v2 ) /*0x8dad55*/
      {
        if ( *(_WORD *)(v5 + 4) ) /*0x8dad5b*/
        {
          if ( !--*(_WORD *)(v5 + 6) ) /*0x8dad66*/
            (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x8dad71*/
        }
      }
      ++v2; /*0x8dad73*/
      --v4; /*0x8dad76*/
    }
    while ( v4 ); /*0x8dad77*/
    --v3; /*0x8dad79*/
  }
  while ( v3 ); /*0x8dad7a*/
  result = *(this + 0x703); /*0x8dad7c*/
  if ( result >= 0 ) /*0x8dad85*/
  {
    v7 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8dad97*/
    if ( !v7 ) /*0x8dad9f*/
      v7 = unk_BA7D9C; /*0x8dada1*/
    result = sub_8A75D0(v7, (_DWORD *)*(this + 0x701), 8 * result, 0x14); /*0x8dadb9*/
  }
  *this = (int)&hkBaseObject::`vftable'; /*0x8dadc0*/
  return result; /*0x8dadbe*/
}
