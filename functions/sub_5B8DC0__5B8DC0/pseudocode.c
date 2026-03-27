void __usercall sub_5B8DC0(
        double a1@<st7>,
        double a2@<st6>,
        double st2_0@<st5>,
        double a4@<st4>,
        double a5@<st3>,
        double a6@<st2>)
{
  Tile *OpenMenuTile; // eax
  Tile *v10; // ebp
  int ParentMenu; // esi
  TESObjectREFR **v12; // ebx
  TESObjectREFR *v13; // edi
  float *v14; // eax
  double v15; // st6
  double v16; // st6
  TESModel *v17; // eax
  char *ModelPath; // eax
  char *v19; // ecx
  int v20; // eax
  double v21; // st6
  void (__thiscall **v22)(int, int, _DWORD *); // ebx
  double Float; // st7
  int v24; // eax
  InterfaceManager *Singleton; // eax
  InterfaceManager *v26; // eax
  InterfaceManager *v27; // eax
  InterfaceManager *v28; // eax
  _DWORD *a3; // [esp+8h] [ebp-24h]
  float v30; // [esp+20h] [ebp-Ch]
  float v31; // [esp+24h] [ebp-8h]

  if ( sub_578D70() == 1 )
  {
    OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3FF);
    v10 = OpenMenuTile;
    if ( OpenMenuTile )
    {
      ParentMenu = Tile_GetParentMenu(OpenMenuTile);
      v12 = *(TESObjectREFR ***)(ParentMenu + 0xC4);
      while ( v12 )
      {
        v13 = *v12;
        if ( !*v12 )
          break;
        v14 = v13->vtbl->GetPos(*v12);
        v12 = (TESObjectREFR **)v12[1];
        v15 = (double)*(int *)(ParentMenu + 0x98);
        if ( *(int *)(ParentMenu + 0x98) < 0 )
          v15 = v15 + flt_A2FC78;
        v30 = (*v14 - (double)*(int *)(ParentMenu + 0xA0))
            / (double)(*(_DWORD *)(ParentMenu + 0xA4) - *(_DWORD *)(ParentMenu + 0xA0))
            * v15;
        v16 = (double)*(int *)(ParentMenu + 0x9C);
        if ( *(int *)(ParentMenu + 0x9C) < 0 )
          v16 = v16 + dbl_A30E60;
        v31 = (1.0
             - ((double)*(int *)(ParentMenu + 0xA8) - v14[1])
             / (double)(*(_DWORD *)(ParentMenu + 0xA8) - *(_DWORD *)(ParentMenu + 0xAC)))
            * v16;
        v17 = (TESModel *)sub_4D7730(v13);
        ModelPath = TESModel_GetModelPath(v17);
        if ( ModelPath && (v19 = *(char **)(ParentMenu + 0xB0)) != 0 )
          v20 = _strcmp(v19, ModelPath);
        else
          v20 = 2 * (ModelPath == 0) - 1;
        if ( !v20 && v30 == *(float *)(ParentMenu + 0xB8) )
        {
          v21 = v31;
          if ( v31 == *(float *)(ParentMenu + 0xBC) )
          {
            if ( *(_DWORD *)(ParentMenu + 0xF4) )
            {
              a3 = *(_DWORD **)(ParentMenu + 0xF4);
              v22 = (void (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)ParentMenu + 0x14);
              Float = Tile_GetFloat(a3, 0xFA8);
              v24 = Double_To_SInt32(Float);
              (*v22)(ParentMenu, v24, a3);
            }
            Tile_SetFloat(v10, (_DWORD *)0xFA1, 1.0);
            Singleton = InterfaceManager_GetSingleton(0, 1);
            sub_57CFE0((int)Singleton, a6, v21, 1.0, 1, 0);
            v26 = InterfaceManager_GetSingleton(0, 1);
            sub_583E60(v26, (char)v10, a6, v21, a5);
            v27 = InterfaceManager_GetSingleton(0, 1);
            sub_5821F0(v27, 1.0, a5, a6, v21, a4, a1, a2);
            v28 = InterfaceManager_GetSingleton(0, 1);
            sub_583F40(v28, (char)v10, a6, v21, 1.0);
            sub_66F420((int)TESDataHandler_g_PlayerRef, (int)v10, a1, a4, a5, a6, v21, 1.0, st2_0, a2, v13);
            return;
          }
        }
      }
    }
  }
}
