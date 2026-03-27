void __thiscall sub_5A90E0(int this)
{
  char ***v4; // ebp
  int v5; // ebx
  char **v6; // edi
  char *v7; // eax
  int v8; // eax
  char **v9; // ecx
  unsigned int v10; // eax
  int *v11; // eax
  unsigned int v12; // edi
  Tile *v13; // ecx

  v4 = (char ***)(this + 0x2C);
  if ( *(_DWORD *)(this + 0x30) || *v4 )
  {
    v5 = this + 0x2C;
    if ( this != 0xFFFFFFD4 )
    {
      while ( 1 )
      {
        v6 = *(char ***)v5;
        v7 = sub_588C10(*(_DWORD **)(this + 0x34), 0xFDE);
        if ( v7 && *v6 )
          v8 = _strcmp(*v6, v7);
        else
          v8 = 2 * (v7 == 0) - 1;
        if ( !v8 )
          break;
        v5 = *(_DWORD *)(v5 + 4);
        if ( !v5 )
          return;
      }
      Tile_SetString(*(_DWORD **)(this + 0x34), (_DWORD *)0xFDE, word_A36430);
      Tile_SetFloat(*(Tile **)(this + 0x34), (_DWORD *)0xFB0, 1.0);
      Tile_SetFloat(*(Tile **)(this + 0x34), (_DWORD *)0xFA1, 1.0);
      BSSimpleList_Remove(v4, (int)v6);
      if ( v6 )
      {
        sub_5A9060((unsigned int *)v6);
        FormHeapFree((unsigned int)v6);
      }
      if ( v4[1] || *v4 )
      {
        *((_BYTE *)*v4 + 0xC) = 1;
        Tile_SetString(*(_DWORD **)(this + 0x34), (_DWORD *)0xFDE, **v4);
        Tile_SetFloat(*(Tile **)(this + 0x34), (_DWORD *)0xFA1, fConstant_2);
        Tile_SetString(*(_DWORD **)(this + 0x34), (_DWORD *)0xFAF, (*v4)[4]);
        v9 = *v4;
        LOWORD(v10) = *((_WORD *)*v4 + 0xE);
        if ( (_WORD)v10 == 0xFFFF )
          v10 = strlen(v9[6]);
        else
          v10 = (unsigned __int16)v10;
        if ( v10 )
        {
          v11 = sub_65A970(TESDataHandler_g_PlayerRef, v9[6], 0, 0x121, 0);
          v12 = (unsigned int)v11;
          if ( v11 )
          {
            sub_6B73E0(v11);
            FormHeapFree(v12);
          }
        }
        v13 = *(Tile **)(this + 0x34);
        if ( (*v4)[4] )
          Tile_SetFloat(v13, (_DWORD *)0xFB0, fConstant_2);
        else
          Tile_SetFloat(v13, (_DWORD *)0xFB0, 1.0);
      }
    }
  }
}
