void __usercall sub_5BF170(double a1@<st1>, char arg0)
{
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // eax
  int v5; // esi
  int v6; // ecx
  int (__thiscall *v7)(int, PlayerCharacter *); // eax
  int v8; // eax
  char *m_data; // ebp
  int v10; // edi
  unsigned __int16 Level; // ax
  unsigned __int16 v12; // ax
  int v13; // eax
  int v14; // edi
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // edi
  char *Name; // eax
  double v21; // st7
  bool v22; // al
  Tile *v23; // ecx
  int v24; // [esp+14h] [ebp-50h]
  float v25; // [esp+18h] [ebp-4Ch]
  PlayerCharacter *v26; // [esp+20h] [ebp-44h]
  int v27; // [esp+24h] [ebp-40h]
  char *v28; // [esp+24h] [ebp-40h]
  int v29; // [esp+28h] [ebp-3Ch]
  PlayerCharacter *a2a; // [esp+2Ch] [ebp-38h]
  _DWORD *a2b; // [esp+2Ch] [ebp-38h]
  float a2c; // [esp+2Ch] [ebp-38h]
  float a2d; // [esp+2Ch] [ebp-38h]
  float a2e; // [esp+2Ch] [ebp-38h]
  float a2; // [esp+2Ch] [ebp-38h]
  float a3a; // [esp+44h] [ebp-20h]
  int a3; // [esp+44h] [ebp-20h]
  int v38; // [esp+48h] [ebp-1Ch]
  float v39; // [esp+4Ch] [ebp-18h]
  int v40; // [esp+4Ch] [ebp-18h]
  BSStringT v41; // [esp+50h] [ebp-14h] BYREF
  int v42; // [esp+60h] [ebp-4h]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x40A);
  if ( OpenMenuTile )
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile);
    v5 = ParentMenu;
    if ( ParentMenu )
    {
      v41.m_data = 0;
      v41.m_dataLen = 0;
      v41.m_bufLen = 0;
      v6 = *(_DWORD *)(ParentMenu + 0xD8);
      v7 = *(int (__thiscall **)(int, PlayerCharacter *))(*(_DWORD *)v6 + 0x224);
      a2a = TESDataHandler_g_PlayerRef;
      v42 = 0;
      v8 = v7(v6, a2a);
      BSStringT_Static_Format(&v41, "%i", v8);
      m_data = v41.m_data;
      Tile_SetString(*(_DWORD **)(v5 + 0xCC), (_DWORD *)0xFDE, v41.m_data);
      a3a = fBribeCostCurve;
      *(float *)&v38 = fBribeNPCLevelMult;
      v10 = iBribeAmountMax;
      v39 = fBribeScale;
      a2b = (_DWORD *)(*(int (__stdcall **)(int, float))(**(_DWORD **)(v5 + 0xD8) + 0x284))(0x20, flt_B38E88);
      v27 = ((int (__thiscall *)(PlayerCharacter *))TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue)(TESDataHandler_g_PlayerRef);
      Level = Actor_GetLevel(*(Actor **)(v5 + 0xD8), v38);
      v12 = Actor_GetLevel((Actor *)TESDataHandler_g_PlayerRef, Level);
      sub_547B00(v39, v12, v24, v25, v10, a3a, v27, 0x20, *(float *)&a2b);
      a3 = v13;
      if ( Actor_GetSkillMasteryLevel(0x20) == 4 )
        a3 = Double_To_SInt32((double)a3 * dbl_A2FAA0);
      v14 = *(_DWORD *)(v5 + 0xD8);
      v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 0x284))(v14);
      v16 = ((int (__thiscall *)(PlayerCharacter *, int, int))TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue)(
              TESDataHandler_g_PlayerRef,
              0x20,
              v15);
      v29 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v14 + 0x284))(v14, 0x24, v16);
      v28 = v41.m_data;
      v26 = TESDataHandler_g_PlayerRef;
      v17 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 0x224))(v14);
      v18 = sub_547B40(v17, *(float *)&v26, (int)v28, v29, 0x20);
      a2c = (float)a3;
      v19 = v18;
      v40 = v18;
      Tile_SetFloat(*(Tile **)(v5 + 0xB0), (_DWORD *)0xFAE, a2c);
      a2d = (float)v40;
      Tile_SetFloat(*(Tile **)(v5 + 0xB0), (_DWORD *)0xFAF, a2d);
      Name = TESObjectREFR_GetName(*(TESObjectREFR **)(v5 + 0xD8));
      Tile_SetString(*(_DWORD **)(v5 + 0xD4), (_DWORD *)0xFDE, Name);
      if ( v19 <= 0 )
        v21 = 0.0;
      else
        v21 = flt_A40098;
      a2e = v21;
      Tile_SetFloat(*(Tile **)(v5 + 0xB0), (_DWORD *)0xFA7, a2e);
      if ( !arg0 )
      {
        *(_DWORD *)(v5 + 0x28) = 1;
        v22 = sub_5BEB70(v5, a1, v21);
        v23 = *(Tile **)(v5 + 0x90);
        a2 = 0.0;
        if ( v22 )
        {
          Tile_SetFloat(v23, (_DWORD *)0xFA7, a2);
          Tile_SetFloat(*(Tile **)(v5 + 0x94), (_DWORD *)0xFA7, 0.0);
          *(_DWORD *)(v5 + 0x28) = 0;
        }
        else
        {
          Tile_SetFloat(v23, (_DWORD *)0xFA7, a2);
          Tile_SetFloat(*(Tile **)(v5 + 0x94), (_DWORD *)0xFA7, flt_A40098);
          Tile_SetFloat(*(Tile **)(v5 + 0xC4), (_DWORD *)0xFA1, 1.0);
          sub_5BEA90(0);
          Tile_SetFloat(*(Tile **)(v5 + 0xBC), (_DWORD *)0xFAF, fConstant_2);
          *(_DWORD *)(v5 + 0x28) = 1;
        }
      }
      FormHeapFree((unsigned int)m_data);
    }
  }
}
