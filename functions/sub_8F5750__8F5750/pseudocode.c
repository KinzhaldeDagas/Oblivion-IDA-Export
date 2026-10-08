_DWORD *__thiscall sub_8F5750(_DWORD *this, _WORD *a2, int a3)
{
  *(this + 4) = a3; /*0x8f5759*/
  *((_WORD *)this + 3) = 1; /*0x8f5762*/
  *(this + 2) = 0; /*0x8f5768*/
  *(this + 3) = 0; /*0x8f576b*/
  *(this + 5) = 0; /*0x8f576e*/
  *this = &off_A9B370; /*0x8f5771*/
  *(this + 6) = a2; /*0x8f5777*/
  if ( a2 ) /*0x8f577a*/
    sub_8BC720(a2); /*0x8f577c*/
  return this; /*0x8f5783*/
}
