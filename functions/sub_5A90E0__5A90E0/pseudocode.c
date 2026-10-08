void __thiscall sub_5A90E0(int this)
{
  int *v2; // ebp
  int v3; // ebx
  const char **v4; // edi
  CHAR *v5; // eax
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // eax
  _DWORD *v9; // eax
  unsigned int v10; // edi
  Tile *v11; // ecx

  v2 = (int *)(this + 0x2C); /*0x5a90e8*/
  if ( *(_DWORD *)(this + 0x30) || *v2 ) /*0x5a90ed*/
  {
    v3 = this + 0x2C; /*0x5a90f8*/
    if ( this != 0xFFFFFFD4 ) /*0x5a90fc*/
    {
      while ( 1 ) /*0x5a9106*/
      {
        v4 = *(const char ***)v3; /*0x5a9106*/
        v5 = sub_588C10(*(_DWORD **)(this + 0x34), 0xFDE); /*0x5a910d*/
        if ( v5 && *v4 ) /*0x5a9116*/
          v6 = CRT_StricmpLocaleDispatch(*v4, v5); /*0x5a911e*/
        else
          v6 = 2 * (v5 == 0) - 1; /*0x5a9133*/
        if ( !v6 ) /*0x5a9137*/
          break; /*0x5a9137*/
        v3 = *(_DWORD *)(v3 + 4); /*0x5a9139*/
        if ( !v3 ) /*0x5a913e*/
          return; /*0x5a913e*/
      }
      Tile_SetString(*(_DWORD **)(this + 0x34), (_DWORD *)0xFDE, word_A36430); /*0x5a9152*/
      Tile_SetFloat(*(Tile **)(this + 0x34), 0xFB0u, 1.0); /*0x5a9165*/
      Tile_SetFloat(*(Tile **)(this + 0x34), 0xFA1u, 1.0); /*0x5a9178*/
      BSSimpleList_Remove(v2, (int)v4); /*0x5a9180*/
      if ( v4 ) /*0x5a9187*/
      {
        sub_5A9060((unsigned int *)v4); /*0x5a918b*/
        FormHeapFree((unsigned int)v4); /*0x5a9191*/
      }
      if ( v2[1] || *v2 ) /*0x5a919f*/
      {
        *(_BYTE *)(*v2 + 0xC) = 1; /*0x5a91ac*/
        Tile_SetString(*(_DWORD **)(this + 0x34), (_DWORD *)0xFDE, *(char **)*v2); /*0x5a91be*/
        Tile_SetFloat(*(Tile **)(this + 0x34), 0xFA1u, fConstant_2); /*0x5a91d5*/
        Tile_SetString(*(_DWORD **)(this + 0x34), (_DWORD *)0xFAF, *(char **)(*v2 + 0x10)); /*0x5a91e9*/
        v7 = *v2; /*0x5a91ee*/
        LOWORD(v8) = *(_WORD *)(*v2 + 0x1C); /*0x5a91f1*/
        if ( (_WORD)v8 == 0xFFFF ) /*0x5a91f9*/
          v8 = strlen(*(const char **)(v7 + 0x18)); /*0x5a91fe*/
        else
          v8 = (unsigned __int16)v8; /*0x5a920e*/
        if ( v8 ) /*0x5a9213*/
        {
          TESObjectREFR_PlayResolvedAnimSoundNote(reference, *(_BYTE **)(v7 + 0x18), 0, 0x121, 0); /*0x5a9228*/
          v10 = (unsigned int)v9; /*0x5a922d*/
          if ( v9 ) /*0x5a9231*/
          {
            sub_6B73E0(v9); /*0x5a9235*/
            FormHeapFree(v10); /*0x5a923b*/
          }
        }
        v11 = *(Tile **)(this + 0x34); /*0x5a924b*/
        if ( *(_DWORD *)(*v2 + 0x10) ) /*0x5a9246*/
          Tile_SetFloat(v11, 0xFB0u, fConstant_2); /*0x5a9272*/
        else
          Tile_SetFloat(v11, 0xFB0u, 1.0); /*0x5a925a*/
      }
    }
  }
}
