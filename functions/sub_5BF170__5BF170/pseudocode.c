void __usercall sub_5BF170(double a1@<st1>, char arg0)
{
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // eax
  int v4; // esi
  int v5; // ecx
  int (__thiscall *v6)(int, PlayerCharacter *); // eax
  int v7; // eax
  char *m_data; // ebp
  const char *value; // edi
  unsigned __int16 v10; // ax
  int v11; // eax
  int v12; // edi
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // edi
  char *Name; // eax
  double v19; // st7
  bool v20; // al
  Tile *v21; // ecx
  int Level; // [esp+14h] [ebp-50h]
  PlayerCharacter *v23; // [esp+20h] [ebp-44h]
  int v24; // [esp+24h] [ebp-40h]
  char *v25; // [esp+24h] [ebp-40h]
  int v26; // [esp+28h] [ebp-3Ch]
  PlayerCharacter *a2a; // [esp+2Ch] [ebp-38h]
  _DWORD *a2b; // [esp+2Ch] [ebp-38h]
  float a2c; // [esp+2Ch] [ebp-38h]
  float a2d; // [esp+2Ch] [ebp-38h]
  float a2e; // [esp+2Ch] [ebp-38h]
  float a2; // [esp+2Ch] [ebp-38h]
  float a3a; // [esp+44h] [ebp-20h]
  int a3; // [esp+44h] [ebp-20h]
  float v35; // [esp+48h] [ebp-1Ch]
  float v36; // [esp+4Ch] [ebp-18h]
  int v37; // [esp+4Ch] [ebp-18h]
  BSStringT v38; // [esp+50h] [ebp-14h] BYREF
  int v39; // [esp+60h] [ebp-4h]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x40A); /*0x5bf19c*/
  if ( OpenMenuTile ) /*0x5bf1a8*/
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile); /*0x5bf1b0*/
    v4 = ParentMenu; /*0x5bf1b5*/
    if ( ParentMenu ) /*0x5bf1b9*/
    {
      v38.m_data = 0; /*0x5bf1bf*/
      v38.m_dataLen = 0; /*0x5bf1c3*/
      v38.m_bufLen = 0; /*0x5bf1c8*/
      v5 = *(_DWORD *)(ParentMenu + 0xD8); /*0x5bf1cd*/
      v6 = *(int (__thiscall **)(int, PlayerCharacter *))(*(_DWORD *)v5 + 0x224); /*0x5bf1db*/
      a2a = reference; /*0x5bf1e1*/
      v39 = 0; /*0x5bf1e2*/
      v7 = v6(v5, a2a); /*0x5bf1e6*/
      BSStringT_Static_Format(&v38, "%i", v7); /*0x5bf1f3*/
      m_data = v38.m_data; /*0x5bf1f8*/
      Tile_SetString(*(_DWORD **)(v4 + 0xCC), (_DWORD *)0xFDE, v38.m_data); /*0x5bf20b*/
      a3a = MEMORY[0xB38E40]; /*0x5bf21c*/
      v35 = MEMORY[0xB38E48]; /*0x5bf22e*/
      value = MEMORY[0xB38E50].value; /*0x5bf238*/
      v36 = MEMORY[0xB38E38]; /*0x5bf23e*/
      a2b = (_DWORD *)(*(int (__stdcall **)(int, float))(**(_DWORD **)(v4 + 0xD8) + 0x284))(0x20, unk_B38E88); /*0x5bf258*/
      v24 = ((int (__thiscall *)(PlayerCharacter *))reference->vtbl->super.GetActorValue)(reference); /*0x5bf267*/
      Level = (unsigned __int16)Actor_GetLevel(*(Actor **)(v4 + 0xD8)); /*0x5bf283*/
      v10 = Actor_GetLevel((Actor *)reference); /*0x5bf28a*/
      sub_547B00(v36, v10, Level, v35, (int)value, a3a, v24, 0x20, *(float *)&a2b); /*0x5bf29b*/
      a3 = v11; /*0x5bf2ab*/
      if ( Actor_GetSkillMasteryLevel((Actor *)reference, kSkillAV_Speechcraft) == kSkillMastery_Master ) /*0x5bf2b7*/
        a3 = Double_To_SInt32((double)a3 * dbl_A2FAA0); /*0x5bf2c8*/
      v12 = *(_DWORD *)(v4 + 0xD8); /*0x5bf2d8*/
      v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0x284))(v12); /*0x5bf2ea*/
      v14 = ((int (__thiscall *)(PlayerCharacter *, int, int))reference->vtbl->super.GetActorValue)( /*0x5bf2fd*/
              reference,
              0x20,
              v13);
      v26 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v12 + 0x284))(v12, 0x24, v14); /*0x5bf31a*/
      v25 = v38.m_data; /*0x5bf321*/
      v23 = reference; /*0x5bf324*/
      v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0x224))(v12); /*0x5bf327*/
      v16 = sub_547B40(v15, *(float *)&v23, (int)v25, v26, 0x20); /*0x5bf32a*/
      a2c = (float)a3; /*0x5bf33c*/
      v17 = v16; /*0x5bf33f*/
      v37 = v16; /*0x5bf346*/
      Tile_SetFloat(*(Tile **)(v4 + 0xB0), 0xFAEu, a2c); /*0x5bf34a*/
      a2d = (float)v37; /*0x5bf35a*/
      Tile_SetFloat(*(Tile **)(v4 + 0xB0), 0xFAFu, a2d); /*0x5bf362*/
      Name = TESObjectREFR_GetName(*(TESObjectREFR **)(v4 + 0xD8)); /*0x5bf36d*/
      Tile_SetString(*(_DWORD **)(v4 + 0xD4), (_DWORD *)0xFDE, Name); /*0x5bf37e*/
      if ( v17 <= 0 ) /*0x5bf38c*/
        v19 = 0.0; /*0x5bf396*/
      else
        v19 = flt_A40098; /*0x5bf38e*/
      a2e = v19; /*0x5bf398*/
      Tile_SetFloat(*(Tile **)(v4 + 0xB0), 0xFA7u, a2e); /*0x5bf3a0*/
      if ( !arg0 ) /*0x5bf3a9*/
      {
        *(_DWORD *)(v4 + 0x28) = 1; /*0x5bf3b6*/
        v20 = sub_5BEB70(v4, a1, v19); /*0x5bf3b9*/
        v21 = *(Tile **)(v4 + 0x90); /*0x5bf3c2*/
        a2 = 0.0; /*0x5bf3c9*/
        if ( v20 ) /*0x5bf3d1*/
        {
          Tile_SetFloat(v21, 0xFA7u, a2); /*0x5bf42c*/
          Tile_SetFloat(*(Tile **)(v4 + 0x94), 0xFA7u, 0.0); /*0x5bf442*/
          *(_DWORD *)(v4 + 0x28) = 0; /*0x5bf447*/
        }
        else
        {
          Tile_SetFloat(v21, 0xFA7u, a2); /*0x5bf3d3*/
          Tile_SetFloat(*(Tile **)(v4 + 0x94), 0xFA7u, flt_A40098); /*0x5bf3ed*/
          Tile_SetFloat(*(Tile **)(v4 + 0xC4), 0xFA1u, 1.0); /*0x5bf403*/
          sub_5BEA90(0); /*0x5bf409*/
          Tile_SetFloat(*(Tile **)(v4 + 0xBC), 0xFAFu, fConstant_2); /*0x5bf422*/
          *(_DWORD *)(v4 + 0x28) = 1; /*0x5bf427*/
        }
      }
      FormHeapFree((unsigned int)m_data); /*0x5bf44b*/
    }
  }
}
