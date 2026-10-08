bool __usercall sub_5BE870@<al>(int a1@<edi>, int a2@<esi>)
{
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // eax
  int v6; // esi
  const char *value; // edi
  unsigned __int16 v8; // ax
  int v9; // eax
  int v10; // edi
  int v11; // esi
  int v12; // eax
  int v13; // eax
  int Level; // [esp+14h] [ebp-30h]
  PlayerCharacter *v15; // [esp+20h] [ebp-24h]
  int v16; // [esp+24h] [ebp-20h]
  int v17; // [esp+28h] [ebp-1Ch]
  float v18; // [esp+2Ch] [ebp-18h]
  float v21; // [esp+38h] [ebp-Ch]
  float v22; // [esp+3Ch] [ebp-8h]
  float v23; // [esp+40h] [ebp-4h]
  int v24; // [esp+40h] [ebp-4h]
  int retaddr; // [esp+44h] [ebp+0h]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x40A); /*0x5be878*/
  if ( !OpenMenuTile ) /*0x5be882*/
    return 0; /*0x5be884*/
  ParentMenu = Tile_GetParentMenu(OpenMenuTile); /*0x5be88d*/
  v6 = ParentMenu; /*0x5be892*/
  if ( !ParentMenu /*0x5be8b2*/
    || (*(int (__thiscall **)(_DWORD, PlayerCharacter *))(**(_DWORD **)(ParentMenu + 0xD8) + 0x224))(
         *(_DWORD *)(ParentMenu + 0xD8),
         reference) >= 0x64 )
  {
    return 0; /*0x5be8b4*/
  }
  v21 = MEMORY[0xB38E40]; /*0x5be8c9*/
  v22 = MEMORY[0xB38E48]; /*0x5be8d9*/
  value = MEMORY[0xB38E50].value; /*0x5be8e4*/
  v23 = MEMORY[0xB38E38]; /*0x5be8ea*/
  v18 = COERCE_FLOAT((*(int (__stdcall **)(int, float))(**(_DWORD **)(v6 + 0xD8) + 0x284))(0x20, unk_B38E88)); /*0x5be904*/
  v16 = ((int (__thiscall *)(PlayerCharacter *))reference->vtbl->super.GetActorValue)(reference); /*0x5be913*/
  Level = (unsigned __int16)Actor_GetLevel(*(Actor **)(v6 + 0xD8)); /*0x5be92f*/
  v8 = Actor_GetLevel((Actor *)reference); /*0x5be936*/
  sub_547B00(v23, v8, Level, v22, (int)value, v21, v16, 0x20, v18); /*0x5be947*/
  v10 = v9; /*0x5be955*/
  v24 = v9; /*0x5be959*/
  if ( Actor_GetSkillMasteryLevel((Actor *)reference, kSkillAV_Speechcraft) == kSkillMastery_Master ) /*0x5be965*/
    v10 = Double_To_SInt32((double)v24 * dbl_A2FAA0); /*0x5be976*/
  if ( sub_5E4420((Actor *)reference) < v10 ) /*0x5be985*/
    return 0; /*0x5be988*/
  v11 = *(_DWORD *)(v6 + 0xD8); /*0x5be9ab*/
  v12 = (*(int (__stdcall **)(int, int, int, float))(*(_DWORD *)v11 + 0x284))(0x20, a1, a2, COERCE_FLOAT(LODWORD(v21))); /*0x5be9ad*/
  ((void (__thiscall *)(PlayerCharacter *, int, int))reference->vtbl->super.GetActorValue)(reference, 0x20, v12); /*0x5be9c0*/
  v17 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 0x284))(v11); /*0x5be9d5*/
  v15 = reference; /*0x5be9e8*/
  v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 0x224))(v11); /*0x5be9eb*/
  return sub_547B40(v13, *(float *)&v15, retaddr, v17, 0x24) != 0; /*0x5be886*/
}
