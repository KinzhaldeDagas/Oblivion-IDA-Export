_BYTE *__thiscall sub_8A63F0(_DWORD *this, _BYTE *a2)
{
  int v2; // eax
  char v4; // cl

  v2 = *(this + 0x15); /*0x8a63f0*/
  if ( v2 ) /*0x8a63f5*/
  {
    v4 = *(_BYTE *)(v2 + 0x28); /*0x8a6401*/
    *a2 = v4; /*0x8a6408*/
    return a2; /*0x8a6404*/
  }
  else
  {
    *a2 = 0; /*0x8a63fb*/
    return a2; /*0x8a63f7*/
  }
}
