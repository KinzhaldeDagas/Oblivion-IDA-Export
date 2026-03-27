_DWORD *__thiscall sub_90FD50(_DWORD *this, int a2, int a3)
{
  _DWORD *result; // eax
  int v5; // eax

  if ( *(_DWORD *)(a2 + 4) != 2 || *(_DWORD *)(a3 + 4) )
    return 0;
  v5 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x60, 0x26);
  *(_WORD *)(v5 + 4) = 0x60;
  result = sub_90FA70((_DWORD *)v5, **(_WORD ***)a2, *(_DWORD *)(*(_DWORD *)a2 + 4), *(this + 4));
  *((_OWORD *)result + 3) = *((_OWORD *)this + 3);
  *((_OWORD *)result + 4) = *((_OWORD *)this + 4);
  result[0x14] = *(this + 0x14);
  result[0x15] = *(this + 0x15);
  result[0x16] = *(this + 0x16);
  *((_BYTE *)result + 0x5C) = *((_BYTE *)this + 0x5C);
  *((_BYTE *)result + 0x5D) = *((_BYTE *)this + 0x5D);
  return result;
}
