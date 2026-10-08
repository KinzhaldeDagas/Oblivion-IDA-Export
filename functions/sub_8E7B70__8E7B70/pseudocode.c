_DWORD *__thiscall sub_8E7B70(_DWORD *this, _WORD *a2, int a3, int a4)
{
  _WORD *v5; // ecx

  *(this + 4) = a4; /*0x8e7b7b*/
  *((_WORD *)this + 3) = 1; /*0x8e7b84*/
  *(this + 2) = 0; /*0x8e7b8a*/
  *(this + 3) = 0; /*0x8e7b91*/
  *(this + 5) = 0; /*0x8e7b98*/
  *this = &off_A9A77C; /*0x8e7b9f*/
  *(this + 6) = a2; /*0x8e7ba5*/
  *(this + 7) = a3; /*0x8e7ba8*/
  if ( a3 ) /*0x8e7bab*/
  {
    if ( !a2 ) /*0x8e7bb5*/
      goto LABEL_6; /*0x8e7bb5*/
  }
  else if ( !a2 ) /*0x8e7baf*/
  {
    return this; /*0x8e7baf*/
  }
  sub_8BC720(a2); /*0x8e7bb7*/
LABEL_6:
  v5 = (_WORD *)*(this + 7); /*0x8e7bbc*/
  if ( v5 ) /*0x8e7bc1*/
    sub_8BC720(v5); /*0x8e7bc3*/
  return this; /*0x8e7bca*/
}
