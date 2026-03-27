bool *__thiscall sub_92A3E0(_DWORD *this, bool *a2, _DWORD *a3, int a4, int a5, int a6, int a7)
{
  int v8; // eax
  int i; // ecx
  unsigned int v10; // eax
  _DWORD *v11; // esi
  int v12; // eax
  int v14; // eax
  int j; // ecx
  unsigned int v16; // [esp+20h] [ebp+14h]

  v16 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a6 + 0x2C))(a6, a7);
  if ( *(_DWORD *)(a4 + 4) == 0xFFFFFFFF )
  {
    v8 = *(_DWORD *)(a4 + 0xC);
    for ( i = a4; v8; v8 = *(_DWORD *)(v8 + 0xC) )
      i = v8;
    v10 = *(_DWORD *)(i + 0x1C);
  }
  else
  {
    v11 = *(_DWORD **)(a4 + 0xC);
    while ( 1 )
    {
      v12 = *(_DWORD *)(*a3 + 4 * (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v11 + 8))(*v11) + 0x10C);
      if ( (v12 & 4) != 0 )
      {
        v10 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*v11 + 0x2C))(*v11, *(_DWORD *)(a4 + 4));
        goto LABEL_11;
      }
      if ( (v12 & 8) != 0 )
      {
        v10 = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(*v11 + 0xC) + 0x2C))(
                *(_DWORD *)(*v11 + 0xC),
                *(_DWORD *)(a4 + 4));
        goto LABEL_11;
      }
      if ( (v12 & 0x800) != 0 )
        break;
      v11 = (_DWORD *)v11[3];
      if ( !v11 )
      {
        v10 = 0;
        goto LABEL_11;
      }
    }
    v14 = *(_DWORD *)(a4 + 0xC);
    for ( j = a4; v14; v14 = *(_DWORD *)(v14 + 0xC) )
      j = v14;
    v10 = *(_DWORD *)(j + 0x1C);
  }
LABEL_11:
  sub_92A2E0(this + 0xFFFFFFFD, a2, v10, v16);
  return a2;
}
