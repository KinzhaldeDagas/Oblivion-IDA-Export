int __thiscall sub_927540(_DWORD *this)
{
  int v2; // eax
  _DWORD *v3; // ebp
  int v4; // ebx
  int *v5; // ecx
  int v6; // edx
  int v7; // eax
  _DWORD *v8; // edi
  int *v9; // ecx
  int v10; // edx
  int v11; // eax
  _DWORD *v12; // edi
  int result; // eax
  int v14; // ecx

  v2 = *(this + 8); /*0x927545*/
  v3 = this + 6; /*0x927548*/
  v4 = 0; /*0x92754b*/
  *this = &off_AA18A4; /*0x92754f*/
  *(this + 2) = &off_AA18A0; /*0x927555*/
  *(this + 3) = &off_AA1898; /*0x92755c*/
  *(this + 4) = &off_AA1890; /*0x927563*/
  *(this + 5) = &off_A96B64; /*0x92756a*/
  *(this + 6) = off_AA187C; /*0x927571*/
  if ( v2 > 0 ) /*0x927578*/
  {
    do /*0x9275ee*/
    {
      v5 = *(int **)(*(this + 7) + 8 * v4); /*0x927583*/
      v6 = v5[0x2C]; /*0x927586*/
      v7 = 0; /*0x92758c*/
      if ( v6 > 0 ) /*0x927590*/
      {
        v8 = (_DWORD *)v5[0x2B]; /*0x927592*/
        while ( (_DWORD *)*v8 != v3 ) /*0x92759a*/
        {
          ++v7; /*0x92759c*/
          ++v8; /*0x92759d*/
          if ( v7 >= v6 ) /*0x9275a2*/
            goto LABEL_9; /*0x9275a2*/
        }
        if ( v7 >= 0 ) /*0x9275a8*/
          sub_8A6300(v5, (int)v3); /*0x9275ab*/
      }
LABEL_9:
      v9 = *(int **)(*(this + 7) + 8 * v4 + 4); /*0x9275b0*/
      v10 = v9[0x2C]; /*0x9275b7*/
      v11 = 0; /*0x9275bd*/
      if ( v10 > 0 ) /*0x9275c1*/
      {
        v12 = (_DWORD *)v9[0x2B]; /*0x9275c3*/
        while ( (_DWORD *)*v12 != v3 ) /*0x9275d2*/
        {
          ++v11; /*0x9275d4*/
          ++v12; /*0x9275d5*/
          if ( v11 >= v10 ) /*0x9275da*/
            goto LABEL_16; /*0x9275da*/
        }
        if ( v11 >= 0 ) /*0x9275e0*/
          sub_8A6300(v9, (int)v3); /*0x9275e3*/
      }
LABEL_16:
      ++v4; /*0x9275e8*/
    }
    while ( v4 < *(this + 8) ); /*0x9275ee*/
  }
  result = *(this + 9); /*0x9275f1*/
  if ( result >= 0 ) /*0x9275f6*/
  {
    v14 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x927608*/
    if ( !v14 ) /*0x927610*/
      v14 = unk_BA7D9C; /*0x927612*/
    result = sub_8A75D0(v14, (_DWORD *)*(this + 7), 8 * result, 0x14); /*0x927627*/
  }
  *v3 = &hkEntityListener::`vftable'; /*0x92762c*/
  *(this + 4) = &hkRayShapeCollectionFilter::`vftable'; /*0x927633*/
  *(this + 3) = &hkShapeCollectionFilter::`vftable'; /*0x92763a*/
  *this = &hkBaseObject::`vftable'; /*0x927641*/
  return result; /*0x927647*/
}
