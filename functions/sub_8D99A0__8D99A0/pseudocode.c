_DWORD *__thiscall sub_8D99A0(_DWORD *this, _WORD *a2, int a3, int a4, char a5, int a6)
{
  _WORD *v7; // ecx
  int v8; // eax

  *(this + 3) = a4; /*0x8d99b3*/
  *((_WORD *)this + 3) = 1; /*0x8d99ba*/
  *this = &off_A9A274; /*0x8d99be*/
  *(this + 2) = 0; /*0x8d99c4*/
  *((_BYTE *)this + 0x18) = a5; /*0x8d99c7*/
  *((_BYTE *)this + 0x19) = 0; /*0x8d99ce*/
  *(this + 5) = a3; /*0x8d99d1*/
  *(this + 7) = 0; /*0x8d99d8*/
  *(this + 8) = 0; /*0x8d99db*/
  *(this + 9) = 0; /*0x8d99de*/
  *(this + 4) = a2; /*0x8d99e1*/
  if ( a6 == 1 ) /*0x8d99e4*/
  {
    sub_8BC720(a2); /*0x8d99e6*/
    v7 = (_WORD *)*(this + 5); /*0x8d99eb*/
    if ( v7 ) /*0x8d99f0*/
      sub_8BC720(v7); /*0x8d99f2*/
    v8 = *(this + 3); /*0x8d99f7*/
    if ( *(_WORD *)(v8 + 4) ) /*0x8d99fa*/
      ++*(_WORD *)(v8 + 6); /*0x8d9a00*/
  }
  return this; /*0x8d9a06*/
}
