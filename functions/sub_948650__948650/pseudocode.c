BOOL __thiscall sub_948650(void **this, _DWORD *a2, __int128 *a3, char a4, char a5)
{
  _DWORD *v6; // edi
  char v7; // al
  _DWORD **v8; // ecx

  if ( *(this + 1) ) /*0x948653*/
  {
    v6 = a2; /*0x94865b*/
    v7 = sub_948550(a2); /*0x94865f*/
    sub_918440(*(this + 1), v7 + 0x25); /*0x94866b*/
    sub_9181B0((_DWORD **)*(this + 1), 5); /*0x948675*/
    sub_948580(this + 0xFFFFFFFE, v6); /*0x94867e*/
    sub_948810(*(this + 1), a3); /*0x94868b*/
    sub_918440(*(this + 1), a4); /*0x948698*/
    sub_918440(*(this + 1), a5); /*0x9486a5*/
  }
  v8 = (_DWORD **)*(this + 1); /*0x9486ab*/
  return !v8 || !*(_BYTE *)sub_918060(v8, (int)&a2); /*0x9486b0*/
}
