BOOL __thiscall sub_9486D0(void **this, _DWORD *a2, char a3, char a4)
{
  _DWORD *v5; // edi
  char v6; // al
  _DWORD **v7; // ecx

  if ( *(this + 1) ) /*0x9486d3*/
  {
    v5 = a2; /*0x9486db*/
    v6 = sub_948550(a2); /*0x9486df*/
    sub_918440(*(this + 1), v6 + 9); /*0x9486eb*/
    sub_9181B0((_DWORD **)*(this + 1), 6); /*0x9486f5*/
    sub_948580(this + 0xFFFFFFFE, v5); /*0x9486fe*/
    sub_918440(*(this + 1), a3); /*0x94870b*/
    sub_918440(*(this + 1), a4); /*0x948718*/
  }
  v7 = (_DWORD **)*(this + 1); /*0x94871e*/
  return !v7 || !*(_BYTE *)sub_918060(v7, (int)&a2); /*0x948723*/
}
