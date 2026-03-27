char __thiscall sub_6FE260(unsigned __int16 *this, int a2, int a3)
{
  int v3; // esi
  int v5; // eax
  int v6; // eax
  char v7; // al
  int v8; // eax
  _DWORD *v9; // ecx
  int v10; // eax
  int v12; // [esp+8h] [ebp-4h] BYREF

  v3 = a3;
  if ( a3 )
  {
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 4))(a3);
    if ( v6 )
    {
      while ( (char *)v6 != dword_B3FA80 )
      {
        v6 = *(_DWORD *)(v6 + 4);
        if ( !v6 )
          goto LABEL_6;
      }
      v7 = 1;
    }
    else
    {
LABEL_6:
      v7 = 0;
    }
    v5 = v7 != 0 ? v3 : 0;
  }
  else
  {
    v5 = 0;
  }
  v12 = v5;
  if ( !v5 )
    return 0;
  v8 = *(_DWORD *)(v5 + 0x1C);
  if ( !v8 )
    return 0;
  v9 = *(_DWORD **)(a2 + 0x488);
  v10 = *(_DWORD *)(v8 + 8);
  a3 = 0;
  if ( !v9 )
    return 0;
  if ( !v10 )
    return 0;
  NiTMap_GetAt(v9, v10, &a3);
  if ( !a3 )
    return 0;
  NiTArray_Add(this + 4, &v12);
  return 1;
}
