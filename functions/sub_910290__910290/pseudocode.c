_DWORD *__thiscall sub_910290(_DWORD *this, int a2, int a3)
{
  _DWORD *result; // eax
  int v5; // eax

  if ( *(_DWORD *)(a2 + 4) != 2 || *(_DWORD *)(a3 + 4) )
    return 0;
  v5 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x60, 0x26);
  *(_WORD *)(v5 + 4) = 0x60;
  result = sub_910040((_DWORD *)v5, **(_WORD ***)a2, *(_DWORD *)(*(_DWORD *)a2 + 4), *(this + 4));
  *((_OWORD *)result + 2) = *((_OWORD *)this + 2);
  *((_OWORD *)result + 3) = *((_OWORD *)this + 3);
  result[0x10] = *(this + 0x10);
  result[0x11] = *(this + 0x11);
  *((_OWORD *)result + 5) = *((_OWORD *)this + 5);
  return result;
}
