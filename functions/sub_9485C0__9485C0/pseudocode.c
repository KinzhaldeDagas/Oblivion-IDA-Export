BOOL __thiscall sub_9485C0(void **this, _DWORD *a2, __int128 *a3, char a4, char a5)
{
  _DWORD *v6; // edi
  char v7; // al
  _DWORD **v8; // ecx

  if ( *(this + 1) ) /*0x9485c3*/
  {
    v6 = a2; /*0x9485cb*/
    v7 = sub_948550(a2); /*0x9485cf*/
    sub_918440(*(this + 1), v7 + 0x29); /*0x9485db*/
    sub_9181B0((_DWORD **)*(this + 1), 1); /*0x9485e5*/
    sub_948580(this + 0xFFFFFFFE, v6); /*0x9485ee*/
    sub_948810(*(this + 1), a3); /*0x9485fb*/
    sub_918460(*(this + 1), a4, 0); /*0x94860a*/
    sub_918440(*(this + 1), a5); /*0x948617*/
  }
  v8 = (_DWORD **)*(this + 1); /*0x94861d*/
  return !v8 || !*(_BYTE *)sub_918060(v8, (int)&a2); /*0x948622*/
}
