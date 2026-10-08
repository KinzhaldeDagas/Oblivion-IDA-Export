void __userpurge sub_5AEED0(
        int a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        signed int a6,
        _DWORD *a7)
{
  Tile *v8; // ecx
  _DWORD *v9; // eax
  char v10; // al
  _DWORD *OpenMenuTile; // eax
  int v12; // edx
  int *v13; // esi
  int v14; // eax
  int v15; // ecx
  int v16; // esi

  if ( !*(_BYTE *)(a1 + 0x64) ) /*0x5aeed3*/
  {
    if ( a6 == 1 ) /*0x5aeee4*/
    {
      v8 = *(Tile **)(a1 + 0x40); /*0x5aeee6*/
      if ( v8 ) /*0x5aeeeb*/
        Tile_SetFloat(v8, (_DWORD *)0xFA1, 1.0); /*0x5aeef8*/
      sub_5AE080(a2, a3); /*0x5aeefd*/
      sub_5BDA20(); /*0x5aef02*/
      v10 = 0; /*0x5aef1c*/
      if ( g_TESSaveLoadGame ) /*0x5aef07*/
      {
        v9 = (_DWORD *)g_TESSaveLoadGame[1].unk01C[0]; /*0x5aef10*/
        if ( v9 ) /*0x5aef15*/
        {
          if ( *v9 ) /*0x5aef17*/
            v10 = 1; /*0x5aef0e*/
        }
      }
      sub_5B5B70(v10); /*0x5aef23*/
      OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x414); /*0x5aef2d*/
      if ( !OpenMenuTile || !Tile_GetParentMenu(OpenMenuTile) ) /*0x5aef3b*/
        sub_459400(g_TESSaveLoadGame, v12); /*0x5aef4e*/
    }
    else if ( a6 >= 0x65 ) /*0x5aef5a*/
    {
      v13 = *(int **)(a1 + 0x54);               // LoadgameMenu+0x54 points at the save-file BSSimpleList. Click user1 selects the corresponding node into +0x4C. /*0x5aef66*/
      Tile_GetFloat(a7, 0xFAE); /*0x5aef70*/
      v14 = Double_To_SInt32(a5); /*0x5aef75*/
      v15 = 0; /*0x5aef7a*/
      if ( v13 ) /*0x5aef7e*/
      {
        while ( *v13 ) /*0x5aef87*/
        {
          if ( v14 == v15 ) /*0x5aef8f*/
          {
            v16 = *v13; /*0x5aefa1*/
            if ( v16 ) /*0x5aefa5*/
            {
              *(_DWORD *)(a1 + 0x4C) = v16; /*0x5aefaf*/
              if ( (InterfaceManager_GetSingleton(0, 1)->unk0C0[0x16] & 4) != 0 ) /*0x5aefc5*/
              {
                *(_DWORD *)(a1 + 0x58) = a7; /*0x5aefc7*/
                ShowUIMessageBox( /*0x5aefe7*/
                  (char *)MEMORY[0xB38CF8],
                  a2,
                  a3,
                  a4,
                  a5,
                  (const char *)stru_B38760,
                  (int)sub_5AECA0,
                  1,
                  (const char *)MEMORY[0xB38D00],
                  MEMORY[0xB38CF8]);
                *(_BYTE *)(a1 + 0x64) = 1; /*0x5aeff1*/
              }
              else
              {
                if ( reference /*0x5af021*/
                  && reference->vtbl->super.super.super.GetNiNode(reference)
                  && !reference->vtbl->super.super.super.IsDead((TESObjectREFR *)reference, 0) )
                {
                  ShowUIMessageBox( /*0x5af03e*/
                    (char *)MEMORY[0xB38CF8],
                    a2,
                    a3,
                    a4,
                    a5,
                    (const char *)stru_B38780,
                    (int)LoadGameCallback,
                    2,
                    (const char *)MEMORY[0xB38D00],
                    MEMORY[0xB38CF8]);
                }
                else
                {
                  ShowUIMessageBox( /*0x5af05d*/
                    (char *)MEMORY[0xB38D00],
                    a2,
                    a3,
                    a4,
                    a5,
                    (const char *)stru_B38768,
                    (int)LoadGameCallback,
                    1,
                    (const char *)MEMORY[0xB38CF8],
                    MEMORY[0xB38D00]);
                }
                *(_BYTE *)(a1 + 0x64) = 1; /*0x5af065*/
              }
            }
            return; /*0x5aeff6*/
          }
          v13 = (int *)v13[1]; /*0x5aef91*/
          ++v15; /*0x5aef94*/
          if ( !v13 ) /*0x5aef99*/
            return; /*0x5aef99*/
        }
      }
    }
  }
}
