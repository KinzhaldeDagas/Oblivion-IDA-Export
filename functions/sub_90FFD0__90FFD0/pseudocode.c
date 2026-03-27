_DWORD *__thiscall sub_90FFD0(_DWORD *this, int a2, int a3)
{
  _DWORD *result; // eax
  int v5; // eax

  if ( *(_DWORD *)(a2 + 4) != 2 || *(_DWORD *)(a3 + 4) )
    return 0;
  v5 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x40, 0x26);
  *(_WORD *)(v5 + 4) = 0x40;
  result = sub_90FDF0((_DWORD *)v5, **(_WORD ***)a2, *(_DWORD *)(*(_DWORD *)a2 + 4), *(this + 4));
  *((_OWORD *)result + 2) = *((_OWORD *)this + 2);
  result[0xC] = *(this + 0xC);
  result[0xD] = *(this + 0xD);
  return result;
}
