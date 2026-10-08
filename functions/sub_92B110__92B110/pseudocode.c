int __thiscall sub_92B110(int *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // ecx
  int result; // eax
  int v6; // ecx

  v2 = *(this + 7); /*0x92b113*/
  v3 = 0; /*0x92b117*/
  *this = (int)&off_AA1BDC; /*0x92b11b*/
  *(this + 2) = (int)&off_AA1BD8; /*0x92b121*/
  *(this + 3) = (int)&off_AA1BD0; /*0x92b128*/
  *(this + 4) = (int)&off_AA1BC8; /*0x92b12f*/
  *(this + 5) = (int)&off_AA1BC4; /*0x92b136*/
  if ( v2 > 0 ) /*0x92b13d*/
  {
    do /*0x92b164*/
    {
      v4 = *(_DWORD *)(*(this + 6) + 4 * v3); /*0x92b143*/
      if ( *(_WORD *)(v4 + 4) ) /*0x92b146*/
      {
        if ( !--*(_WORD *)(v4 + 6) ) /*0x92b151*/
          (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x92b15c*/
      }
      ++v3; /*0x92b161*/
    }
    while ( v3 < *(this + 7) ); /*0x92b164*/
  }
  result = *(this + 8); /*0x92b166*/
  if ( result >= 0 ) /*0x92b16b*/
  {
    v6 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x92b17d*/
    if ( !v6 ) /*0x92b185*/
      v6 = unk_BA7D9C; /*0x92b187*/
    result = sub_8A75D0(v6, (_DWORD *)*(this + 6), 4 * result, 0x14); /*0x92b19c*/
  }
  *(this + 4) = (int)&hkRayShapeCollectionFilter::`vftable'; /*0x92b1a1*/
  *(this + 3) = (int)&hkShapeCollectionFilter::`vftable'; /*0x92b1a8*/
  *this = (int)&hkBaseObject::`vftable'; /*0x92b1b0*/
  return result; /*0x92b1af*/
}
