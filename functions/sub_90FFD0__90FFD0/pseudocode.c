_DWORD *__thiscall sub_90FFD0(_DWORD *this, int a2, int a3)
{
  _DWORD *result; // eax
  int v5; // eax

  if ( *(_DWORD *)(a2 + 4) != 2 || *(_DWORD *)(a3 + 4) ) /*0x90ffe2*/
    return 0; /*0x90ffea*/
  v5 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x40, 0x26); /*0x90fffc*/
  *(_WORD *)(v5 + 4) = 0x40; /*0x90ffff*/
  result = sub_90FDF0((_DWORD *)v5, **(_WORD ***)a2, *(_DWORD *)(*(_DWORD *)a2 + 4), *(this + 4)); /*0x910014*/
  *((_OWORD *)result + 2) = *((_OWORD *)this + 2); /*0x91001d*/
  result[0xC] = *(this + 0xC); /*0x910024*/
  result[0xD] = *(this + 0xD); /*0x91002b*/
  return result; /*0x90ffe9*/
}
