int __thiscall sub_927C70(_DWORD *this)
{
  int v2; // eax
  _DWORD *v3; // ebp
  int v4; // ebx
  int *v5; // ecx
  int v6; // edx
  int v7; // eax
  _DWORD *v8; // edi
  int result; // eax
  int v10; // ecx

  v2 = *(this + 8); /*0x927c75*/
  v3 = this + 6; /*0x927c78*/
  v4 = 0; /*0x927c7b*/
  *this = &off_AA1908; /*0x927c7f*/
  *(this + 2) = &off_AA1904; /*0x927c85*/
  *(this + 3) = &off_AA18FC; /*0x927c8c*/
  *(this + 4) = &off_AA18F4; /*0x927c93*/
  *(this + 5) = &off_A96B64; /*0x927c9a*/
  *(this + 6) = off_AA18E0; /*0x927ca1*/
  if ( v2 > 0 ) /*0x927ca8*/
  {
    do /*0x927ce6*/
    {
      v5 = *(int **)(*(this + 7) + 4 * v4); /*0x927cb3*/
      v6 = v5[0x2C]; /*0x927cb6*/
      v7 = 0; /*0x927cbc*/
      if ( v6 > 0 ) /*0x927cc0*/
      {
        v8 = (_DWORD *)v5[0x2B]; /*0x927cc2*/
        while ( (_DWORD *)*v8 != v3 ) /*0x927cca*/
        {
          ++v7; /*0x927ccc*/
          ++v8; /*0x927ccd*/
          if ( v7 >= v6 ) /*0x927cd2*/
            goto LABEL_9; /*0x927cd2*/
        }
        if ( v7 >= 0 ) /*0x927cd8*/
          sub_8A6300(v5, (int)v3); /*0x927cdb*/
      }
LABEL_9:
      ++v4; /*0x927ce0*/
    }
    while ( v4 < *(this + 8) ); /*0x927ce6*/
  }
  result = *(this + 9); /*0x927ce9*/
  if ( result >= 0 ) /*0x927cee*/
  {
    v10 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x927d00*/
    if ( !v10 ) /*0x927d08*/
      v10 = unk_BA7D9C; /*0x927d0a*/
    result = sub_8A75D0(v10, (_DWORD *)*(this + 7), 4 * result, 0x14); /*0x927d1f*/
  }
  *v3 = &hkEntityListener::`vftable'; /*0x927d24*/
  *(this + 4) = &hkRayShapeCollectionFilter::`vftable'; /*0x927d2b*/
  *(this + 3) = &hkShapeCollectionFilter::`vftable'; /*0x927d32*/
  *this = &hkBaseObject::`vftable'; /*0x927d39*/
  return result; /*0x927d3f*/
}
