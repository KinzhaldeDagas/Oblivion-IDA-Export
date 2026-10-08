_OWORD *__thiscall sub_94D100(_OWORD *this, int a2, _OWORD *a3, _OWORD *a4)
{
  int v4; // esi
  _OWORD *v5; // edx
  _OWORD *v7; // esi

  v4 = *(_DWORD *)(a2 + 0x10); /*0x94d105*/
  v5 = *(_OWORD **)(*(_DWORD *)(a2 + 0x14) + 0x50); /*0x94d10b*/
  *a3 = v5[1]; /*0x94d116*/
  a3[1] = v5[2]; /*0x94d11d*/
  a3[2] = v5[3]; /*0x94d125*/
  a3[3] = v5[4]; /*0x94d12d*/
  v7 = *(_OWORD **)(v4 + 0x50); /*0x94d131*/
  *a4 = v7[1]; /*0x94d13f*/
  a4[1] = v7[2]; /*0x94d146*/
  a4[2] = v7[3]; /*0x94d14e*/
  a4[3] = v7[4]; /*0x94d156*/
  *(this + 9) = *a3; /*0x94d160*/
  *(this + 0xA) = a3[1]; /*0x94d16b*/
  *(this + 0xB) = a3[2]; /*0x94d176*/
  *(this + 6) = *a4; /*0x94d180*/
  *(this + 7) = a4[1]; /*0x94d188*/
  *(this + 8) = a4[2]; /*0x94d190*/
  *(this + 3) = a3[3]; /*0x94d19b*/
  *(this + 2) = a4[3]; /*0x94d1a3*/
  return a3; /*0x94d1a7*/
}
