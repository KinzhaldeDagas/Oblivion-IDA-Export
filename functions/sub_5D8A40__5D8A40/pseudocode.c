void __thiscall sub_5D8A40(int this, int a2, Tile *arg4)
{
  bool v5; // zf
  double Float; // st7
  int v7; // ebp
  _DWORD *v8; // ebx
  double v9; // st7
  _DWORD *v10; // esi
  float v11; // [esp+4h] [ebp-34h]
  double a3a; // [esp+24h] [ebp-14h]
  _DWORD *a3; // [esp+24h] [ebp-14h]
  int v14; // [esp+2Ch] [ebp-Ch]
  float v15; // [esp+2Ch] [ebp-Ch]
  BSSimpleList_VoidPtr *p_modlist; // [esp+2Ch] [ebp-Ch]
  float v17; // [esp+2Ch] [ebp-Ch]
  double v18; // [esp+30h] [ebp-8h]
  float v19; // [esp+3Ch] [ebp+4h]
  float v20; // [esp+40h] [ebp+8h]
  float v21; // [esp+40h] [ebp+8h]
  float v22; // [esp+40h] [ebp+8h]
  float v23; // [esp+40h] [ebp+8h]
  float v24; // [esp+40h] [ebp+8h]
  int v25; // [esp+40h] [ebp+8h]
  float v26; // [esp+40h] [ebp+8h]

  if ( arg4 )
  {
    if ( a2 == 6 || a2 == 2 )
    {
      Tile_SetFloat(arg4, (_DWORD *)0xFA7, 0.0);
    }
    else if ( a2 >= 0x3E8 || a2 >= 9 && a2 <= 0xB )
    {
      v5 = *(_DWORD *)(this + 0x44) == 0;
      *(_DWORD *)(this + 0x48) = 0;
      if ( !v5 )
      {
        sub_57DE50(4);
        Float = Tile_GetFloat(arg4, 0xFE0);
        v14 = Double_To_SInt32(Float);
        a3a = sub_588D90(arg4, Float);
        v20 = a3a - Tile_GetFloat((_DWORD *)*(_DWORD *)(this + 0x44), 0xFBD);
        Tile_SetFloat(*(Tile **)(this + 0x44), (_DWORD *)0xFAB, v20);
        v21 = (float)(2 * v14);
        *(float *)&a3a = Tile_GetFloat(arg4, 0xFCB) - v21;
        Tile_SetFloat(*(Tile **)(this + 0x44), (_DWORD *)0xFCB, *(float *)&a3a);
        v22 = Tile_GetFloat(arg4, 0xFCA) - v21;
        Tile_SetFloat(*(Tile **)(this + 0x44), (_DWORD *)0xFCA, v22);
        v23 = (float)v14;
        v15 = sub_588C50(arg4) + v23;
        Tile_SetFloat(*(Tile **)(this + 0x44), (_DWORD *)0xFAD, v15);
        v24 = sub_588CF0(arg4) + v23;
        Tile_SetFloat(*(Tile **)(this + 0x44), (_DWORD *)0xFAC, v24);
        Tile_SetFloat(*(Tile **)(this + 0x44), (_DWORD *)0xFA1, fConstant_2);
        *(_DWORD *)(this + 0x48) = arg4;
        if ( a2 >= 0x3E8 )
        {
          v25 = 0x3E8;
          v7 = this + 0x60;
          p_modlist = (BSSimpleList_VoidPtr *)&Actor_GetActorBaseForm((Actor *)TESDataHandler_g_PlayerRef, 0)[3].member.modlist;
          a3 = 0;
          if ( this == 0xFFFFFFA0 )
            goto LABEL_19;
          do
          {
            v8 = *(_DWORD **)v7;
            if ( !*(_DWORD *)v7 )
              break;
            if ( !(*(int (__thiscall **)(_DWORD *))(v8[6] + 0x18))(v8 + 6) && !sub_446C30(p_modlist, v8) )
            {
              if ( v25 == a2 )
                a3 = v8;
              ++v25;
            }
            v7 = *(_DWORD *)(v7 + 4);
          }
          while ( v7 );
          if ( a3 )
          {
            v9 = Tile_GetFloat((_DWORD *)*(_DWORD *)(this + 4), 0xFB8);
            v17 = v9;
            v19 = sub_588D90((_DWORD *)*(_DWORD *)(this + 4), v9);
            InterfaceManager_GetSingleton(0, 1);
            v10 = *(_DWORD **)(this + 4);
            v18 = sub_57D7F0();
            v26 = v18 - Tile_GetFloat(v10, 0xFBA);
            v11 = sub_588CF0(arg4);
            sub_57BB20((int)(a3 + 6), v17, v11, v26, 0, v19);
          }
          else
          {
LABEL_19:
            PrintError("Spell item index did was not in saved list.");
          }
        }
      }
    }
    else
    {
      Tile_SetFloat(*(Tile **)(this + 0x44), (_DWORD *)0xFA1, 1.0);
    }
  }
}
