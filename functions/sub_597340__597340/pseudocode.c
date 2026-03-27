_BYTE **__userpurge sub_597340@<eax>(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, char a5)
{
  signed int v6; // ebx
  BSStringT *v7; // ebp
  _BYTE **result; // eax
  int v9; // esi
  char *v10; // eax
  BSStringT *v11; // eax
  int (__thiscall **v12)(int, int, BSStringT *); // esi
  double Float; // st7
  int v14; // eax
  _BYTE **v15; // [esp+Ch] [ebp-4h]

  sub_5893F0(*(_DWORD **)(a1 + 0x28));
  v6 = 0;
  v7 = 0;
  result = (_BYTE **)(TESDataHandler + 0x54);
  v15 = result;
  if ( TESDataHandler != 0xFFFFFFAC )
  {
    while ( 1 )
    {
      v9 = (int)*result;
      if ( !*result )
        break;
      if ( TESClass_IsPlayable(*result) )
      {
        v10 = *(char **)(v9 + 0x1C);
        if ( !v10 )
          v10 = EmptyString;
        v11 = sub_5971E0(a1, a2, a3, a4, v10, v9, v6++, v9 != *(_DWORD *)(a1 + 0x3C) ? 0 : 2);
        if ( !v7 || *(_DWORD *)(a1 + 0x3C) == v9 )
          v7 = v11;
      }
      v15 = (_BYTE **)v15[1];
      result = v15;
      if ( !v15 )
        break;
      result = v15;
    }
    if ( v7 )
    {
      if ( a5 )
      {
        v12 = (int (__thiscall **)(int, int, BSStringT *))(*(_DWORD *)a1 + 0xC);
        Float = Tile_GetFloat(v7, 0xFA8);
        v14 = Double_To_SInt32(Float);
        return (_BYTE **)(*v12)(a1, v14, v7);
      }
    }
  }
  return result;
}
