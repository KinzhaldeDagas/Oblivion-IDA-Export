_DWORD *__thiscall sub_8B8AE0(_OWORD *this, int a2, int a3)
{
  _DWORD *result; // eax
  int v5; // eax

  if ( *(_DWORD *)(a2 + 4) != 1 || *(_DWORD *)(a3 + 4) )
    return 0;
  v5 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x50, 0x26);
  *(_WORD *)(v5 + 4) = 0x50;
  result = sub_8B8970((_DWORD *)v5, **(_WORD ***)a2);
  *((_OWORD *)result + 2) = *(this + 2);
  *((_OWORD *)result + 3) = *(this + 3);
  result[0x10] = *((_DWORD *)this + 0x10);
  result[0x11] = *((_DWORD *)this + 0x11);
  result[0x12] = *((_DWORD *)this + 0x12);
  result[0x13] = *((_DWORD *)this + 0x13);
  result[4] = *((_DWORD *)this + 4);
  return result;
}
