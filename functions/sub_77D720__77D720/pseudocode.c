unsigned int *__thiscall sub_77D720(_DWORD *this, unsigned int *a2, char a3)
{
  _DWORD *v4; // esi
  unsigned int *v5; // ebx

  if ( a3 || (v4 = sub_77D220(this, (unsigned int)a2)) == 0 ) /*0x77d73d*/
  {
    v4 = sub_77D650(this, (unsigned int)a2); /*0x77d747*/
    if ( !v4 ) /*0x77d74b*/
      return 0; /*0x77d772*/
  }
  v5 = sub_782840(v4, a2); /*0x77d755*/
  if ( v4[9] > *(this + 0xC) ) /*0x77d75d*/
    sub_77D270(this, v4); /*0x77d762*/
  return v5; /*0x77d767*/
}
