double __thiscall sub_733200(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  int v4; // edx
  double v5; // st7
  double v6; // st6
  int v7; // eax
  double v9; // st7
  double v10; // st6
  int v11; // eax

  v3 = *(this + 0xB); /*0x733200*/
  v4 = (a2 + a3) >> 1; /*0x733213*/
  if ( *(float *)(v3 + 4 * v4) <= (double)*(float *)(v3 + 4 * a2) ) /*0x733222*/
  {
    v9 = *(float *)(v3 + 4 * a2); /*0x73325b*/
    v10 = *(float *)(v3 + 4 * a3); /*0x73325e*/
    v11 = *(this + 0xB); /*0x733268*/
    if ( v10 > v9 ) /*0x73326b*/
      return *(float *)(v11 + 4 * a2); /*0x733272*/
    if ( *(float *)(v11 + 4 * a3) > (double)*(float *)(v11 + 4 * v4) ) /*0x733282*/
      return *(float *)(*(this + 0xB) + 4 * a3); /*0x733282*/
    v7 = *(this + 0xB); /*0x733284*/
    return *(float *)(v7 + 4 * v4); /*0x733284*/
  }
  v5 = *(float *)(v3 + 4 * v4); /*0x733224*/
  v6 = *(float *)(v3 + 4 * a3); /*0x733227*/
  v7 = *(this + 0xB); /*0x733231*/
  if ( v6 > v5 ) /*0x733234*/
    return *(float *)(v7 + 4 * v4); /*0x733287*/
  if ( *(float *)(v7 + 4 * a3) > (double)*(float *)(v7 + 4 * a2) ) /*0x733243*/
    return *(float *)(*(this + 0xB) + 4 * a3); /*0x73324d*/
  return *(float *)(*(this + 0xB) + 4 * a2); /*0x73324b*/
}
