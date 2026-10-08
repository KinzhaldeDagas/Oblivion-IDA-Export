_DWORD *__thiscall sub_90FD50(_DWORD *this, int a2, int a3)
{
  _DWORD *result; // eax
  int v5; // eax

  if ( *(_DWORD *)(a2 + 4) != 2 || *(_DWORD *)(a3 + 4) ) /*0x90fd62*/
    return 0; /*0x90fd6a*/
  v5 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x60, 0x26); /*0x90fd7c*/
  *(_WORD *)(v5 + 4) = 0x60; /*0x90fd7f*/
  result = sub_90FA70((_DWORD *)v5, **(_WORD ***)a2, *(_DWORD *)(*(_DWORD *)a2 + 4), *(this + 4)); /*0x90fd94*/
  *((_OWORD *)result + 3) = *((_OWORD *)this + 3); /*0x90fd9d*/
  *((_OWORD *)result + 4) = *((_OWORD *)this + 4); /*0x90fda5*/
  result[0x14] = *(this + 0x14); /*0x90fdac*/
  result[0x15] = *(this + 0x15); /*0x90fdb2*/
  result[0x16] = *(this + 0x16); /*0x90fdb8*/
  *((_BYTE *)result + 0x5C) = *((_BYTE *)this + 0x5C); /*0x90fdbe*/
  *((_BYTE *)result + 0x5D) = *((_BYTE *)this + 0x5D); /*0x90fdc5*/
  return result; /*0x90fd69*/
}
