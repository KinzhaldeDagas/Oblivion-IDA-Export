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
  double VirtualScreenHeight; // [esp+30h] [ebp-8h]
  float v19; // [esp+3Ch] [ebp+4h]
  float v20; // [esp+40h] [ebp+8h]
  float v21; // [esp+40h] [ebp+8h]
  float v22; // [esp+40h] [ebp+8h]
  float v23; // [esp+40h] [ebp+8h]
  float v24; // [esp+40h] [ebp+8h]
  int v25; // [esp+40h] [ebp+8h]
  float v26; // [esp+40h] [ebp+8h]

  if ( arg4 ) /*0x5d8a4d*/
  {
    if ( a2 == 6 || a2 == 2 ) /*0x5d8a64*/
    {
      Tile_SetFloat(arg4, 0xFA7u, 0.0); /*0x5d8cf3*/
    }
    else if ( a2 >= 0x3E8 || a2 >= 9 && a2 <= 0xB ) /*0x5d8a7a*/
    {
      v5 = *(_DWORD *)(this + 0x44) == 0; /*0x5d8a98*/
      *(_DWORD *)(this + 0x48) = 0; /*0x5d8a9c*/
      if ( !v5 ) /*0x5d8aa3*/
      {
        sub_57DE50(4); /*0x5d8aac*/
        Float = Tile_GetFloat(arg4, 0xFE0); /*0x5d8abb*/
        v14 = Double_To_SInt32(Float); /*0x5d8ac9*/
        a3a = sub_588D90(arg4, Float); /*0x5d8ad2*/
        v20 = a3a - Tile_GetFloat((_DWORD *)*(_DWORD *)(this + 0x44), 0xFBD); /*0x5d8aeb*/
        Tile_SetFloat(*(Tile **)(this + 0x44), 0xFABu, v20); /*0x5d8afb*/
        v21 = (float)(2 * v14); /*0x5d8b12*/
        *(float *)&a3a = Tile_GetFloat(arg4, 0xFCB) - v21; /*0x5d8b23*/
        Tile_SetFloat(*(Tile **)(this + 0x44), 0xFCBu, *(float *)&a3a); /*0x5d8b33*/
        v22 = Tile_GetFloat(arg4, 0xFCA) - v21; /*0x5d8b4c*/
        Tile_SetFloat(*(Tile **)(this + 0x44), 0xFCAu, v22); /*0x5d8b5c*/
        v23 = (float)v14; /*0x5d8b67*/
        v15 = sub_588C50(arg4) + v23; /*0x5d8b78*/
        Tile_SetFloat(*(Tile **)(this + 0x44), 0xFADu, v15); /*0x5d8b88*/
        v24 = sub_588CF0(arg4) + v23; /*0x5d8b9c*/
        Tile_SetFloat(*(Tile **)(this + 0x44), 0xFACu, v24); /*0x5d8bac*/
        Tile_SetFloat(*(Tile **)(this + 0x44), 0xFA1u, fConstant_2); /*0x5d8bc3*/
        *(_DWORD *)(this + 0x48) = arg4; /*0x5d8bce*/
        if ( a2 >= 0x3E8 ) /*0x5d8bd1*/
        {
          v25 = 0x3E8; /*0x5d8bdb*/
          v7 = this + 0x60; /*0x5d8be3*/
          p_modlist = (BSSimpleList_VoidPtr *)&Actor_GetActorBaseForm((Actor *)reference, 0)[3].member.modlist; /*0x5d8bf0*/
          a3 = 0; /*0x5d8bf4*/
          if ( this == 0xFFFFFFA0 ) /*0x5d8bfc*/
            goto LABEL_19; /*0x5d8bfc*/
          do /*0x5d8c3c*/
          {
            v8 = *(_DWORD **)v7; /*0x5d8c00*/
            if ( !*(_DWORD *)v7 ) /*0x5d8c00*/
              break; /*0x5d8c05*/
            if ( !(*(int (__thiscall **)(_DWORD *))(v8[6] + 0x18))(v8 + 6) && !BSSimpleList::Contains(p_modlist, v8) ) /*0x5d8c1b*/
            {
              if ( v25 == a2 ) /*0x5d8c2c*/
                a3 = v8; /*0x5d8c2e*/
              ++v25; /*0x5d8c32*/
            }
            v7 = *(_DWORD *)(v7 + 4); /*0x5d8c37*/
          }
          while ( v7 ); /*0x5d8c3c*/
          if ( a3 ) /*0x5d8c43*/
          {
            v9 = Tile_GetFloat((_DWORD *)*(_DWORD *)(this + 4), 0xFB8); /*0x5d8c64*/
            v17 = v9; /*0x5d8c69*/
            v19 = sub_588D90((_DWORD *)*(_DWORD *)(this + 4), v9); /*0x5d8c75*/
            InterfaceManager_GetSingleton(0, 1); /*0x5d8c7d*/
            v10 = *(_DWORD **)(this + 4); /*0x5d8c82*/
            VirtualScreenHeight = UI_GetVirtualScreenHeight(); /*0x5d8c8d*/
            v26 = VirtualScreenHeight - Tile_GetFloat(v10, 0xFBA); /*0x5d8ca2*/
            v11 = sub_588CF0(arg4); /*0x5d8cc5*/
            sub_57BB20((int)(a3 + 6), v17, v11, v26, 0, v19); /*0x5d8cd4*/
          }
          else
          {
LABEL_19:
            PrintError("Spell item index did was not in saved list."); /*0x5d8c4a*/
          }
        }
      }
    }
    else
    {
      Tile_SetFloat(*(Tile **)(this + 0x44), 0xFA1u, 1.0); /*0x5d8a8a*/
    }
  }
}
