void __thiscall sub_75BEA0(int *this, _DWORD **a2)
{
  _DWORD **v2; // edi
  int v4; // eax
  _DWORD **v5; // ebx

  v2 = a2; /*0x75bea3*/
  sub_752D80(this, a2); /*0x75beaa*/
  NiTMap_GetAt(*v2, (int)this, &a2); /*0x75beb7*/
  v4 = *(this + 7); /*0x75bebc*/
  v5 = a2; /*0x75bec1*/
  if ( v4 ) /*0x75bec5*/
  {
    if ( NiTMap_GetAt(*v2, v4, &a2) ) /*0x75becf*/
      v5[7] = a2; /*0x75bede*/
    else
      v5[7] = (_DWORD *)*(this + 7); /*0x75bee8*/
  }
}
