char *__thiscall sub_8E8B50(char *this, int a2, _OWORD *a3)
{
  int v4; // eax

  *((_DWORD *)this + 3) = a2; /*0x8e8b5b*/
  *((_WORD *)this + 3) = 1; /*0x8e8b5e*/
  *((_DWORD *)this + 2) = 0; /*0x8e8b64*/
  *(_DWORD *)this = &off_A9ACB0; /*0x8e8b6b*/
  *((_OWORD *)this + 2) = *a3; /*0x8e8b77*/
  *((_OWORD *)this + 3) = a3[1]; /*0x8e8b7e*/
  *((_OWORD *)this + 4) = a3[2]; /*0x8e8b86*/
  *((_OWORD *)this + 5) = a3[3]; /*0x8e8b92*/
  sub_8B1B40((float *)this + 4, (float *)this + 8); /*0x8e8b96*/
  v4 = *((_DWORD *)this + 3); /*0x8e8b9b*/
  if ( *(_WORD *)(v4 + 4) ) /*0x8e8b9e*/
    ++*(_WORD *)(v4 + 6); /*0x8e8ba5*/
  return this; /*0x8e8bab*/
}
