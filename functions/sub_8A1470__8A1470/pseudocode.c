char __thiscall sub_8A1470(_DWORD *this, float *a2)
{
  char v3; // bl
  int v4; // ecx
  int v5; // ebp
  int v6; // esi
  int v7; // eax
  int v8; // eax
  int v9; // ecx

  v3 = sub_8A2760(a2); /*0x8a147e*/
  if ( !v3 ) /*0x8a1482*/
    return 0; /*0x8a14e6*/
  if ( this && (v4 = *(this + 2)) != 0 ) /*0x8a148e*/
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x1C))(v4); /*0x8a1497*/
  else
    v5 = 0; /*0x8a149b*/
  v6 = 0; /*0x8a149e*/
  do /*0x8a14da*/
  {
    if ( v6 >= v5 ) /*0x8a14a2*/
      break; /*0x8a14a2*/
    if ( this && (v7 = *(this + 2)) != 0 && (v8 = *(_DWORD *)(*(_DWORD *)(v7 + 0x10) + 8 * v6)) != 0 ) /*0x8a14b7*/
      v9 = *(_DWORD *)(v8 + 8); /*0x8a14b9*/
    else
      v9 = 0; /*0x8a14be*/
    if ( v9 ) /*0x8a14c2*/
      v3 &= (*(int (__thiscall **)(int, float *))(*(_DWORD *)v9 + 0x8C))(v9, a2); /*0x8a14d3*/
    ++v6; /*0x8a14d5*/
  }
  while ( v3 ); /*0x8a14da*/
  return v3; /*0x8a14de*/
}
