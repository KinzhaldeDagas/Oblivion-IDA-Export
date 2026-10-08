_DWORD *__thiscall sub_910290(_DWORD *this, int a2, int a3)
{
  _DWORD *result; // eax
  int v5; // eax

  if ( *(_DWORD *)(a2 + 4) != 2 || *(_DWORD *)(a3 + 4) ) /*0x9102a2*/
    return 0; /*0x9102aa*/
  v5 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x60, 0x26); /*0x9102bc*/
  *(_WORD *)(v5 + 4) = 0x60; /*0x9102bf*/
  result = sub_910040((_DWORD *)v5, **(_WORD ***)a2, *(_DWORD *)(*(_DWORD *)a2 + 4), *(this + 4)); /*0x9102d4*/
  *((_OWORD *)result + 2) = *((_OWORD *)this + 2); /*0x9102dd*/
  *((_OWORD *)result + 3) = *((_OWORD *)this + 3); /*0x9102e5*/
  result[0x10] = *(this + 0x10); /*0x9102ec*/
  result[0x11] = *(this + 0x11); /*0x9102f2*/
  *((_OWORD *)result + 5) = *((_OWORD *)this + 5); /*0x9102fa*/
  return result; /*0x9102a9*/
}
