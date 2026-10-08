char __usercall sub_5CDA30@<al>(float *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  int v5; // eax
  const char *value; // eax
  const char *v7; // eax
  Tile *ControlTile; // eax
  double Float; // st7
  int v10; // eax
  OblivionTESFormListNode *p_raceList; // ecx
  unsigned int v12; // edx
  const char *v13; // eax
  const char *v14; // eax
  Tile *v15; // eax
  const char *v16; // eax
  const char *v17; // eax
  Tile *v18; // eax
  int v19; // ebp
  int v20; // ecx
  TESForm *item; // edi
  bool v22; // zf
  char *v23; // eax
  const char *v24; // eax
  const char *v25; // eax
  Tile *v26; // eax
  char *v27; // eax
  const char *v28; // eax
  const char *v29; // eax
  Tile *v30; // eax
  int (__thiscall *v31)(UInt32 *, _DWORD, int); // eax
  UInt32 *p_refID; // edi
  const char *v33; // eax
  const char *v34; // eax
  Tile *v35; // eax
  LowProcess *process; // ecx
  LowProcess_vtbl *v37; // edx
  UInt32 (__thiscall *Unk_E0)(BaseProcess *__hidden); // eax
  const char *v39; // eax
  MobileObject *v40; // ecx
  NiObjectNET *NiNode; // edi
  int v42; // eax
  PlayerCharacter *v43; // ecx
  double v44; // st7
  _BYTE v46[20]; // [esp-18h] [ebp-48h] BYREF
  int v47; // [esp-4h] [ebp-34h]
  char v48; // [esp+16h] [ebp-1Ah]
  char v49; // [esp+17h] [ebp-19h]
  int v50; // [esp+18h] [ebp-18h]
  _BYTE *v51; // [esp+1Ch] [ebp-14h]
  _BYTE *v52; // [esp+20h] [ebp-10h]
  int v53; // [esp+2Ch] [ebp-4h]

  v5 = ((int (__usercall *)@<eax>(PlayerCharacter *@<ecx>, double@<st0>, double@<st1>, double@<st2>))reference->vtbl->super.super.super.GetBaseForm)( /*0x5cda67*/
         reference,
         a4,
         a3,
         a2);
  v47 = 0xFAE; /*0x5cda69*/
  v51 = &v46[0xC]; /*0x5cda75*/
  v50 = v5; /*0x5cda79*/
  value = stru_B38F78.value; /*0x5cda7d*/
  *(_DWORD *)&v46[0xC] = 0; /*0x5cda84*/
  *(_WORD *)&v46[0x10] = 0; /*0x5cda86*/
  *(_WORD *)&v46[0x12] = 0; /*0x5cda8a*/
  BSStringT_Set((BSStringT *)&v46[0xC], value, 0); /*0x5cda8e*/
  v7 = stru_B38F78.value; /*0x5cda93*/
  v52 = &v46[4]; /*0x5cda9d*/
  v53 = 0; /*0x5cdaa3*/
  *(_DWORD *)&v46[4] = 0; /*0x5cdaa7*/
  *(_WORD *)&v46[8] = 0; /*0x5cdaa9*/
  *(_WORD *)&v46[0xA] = 0; /*0x5cdaad*/
  BSStringT_Set((BSStringT *)&v46[4], v7, 0); /*0x5cdab1*/
  v53 = 0xFFFFFFFF; /*0x5cdabb*/
  ControlTile = RaceSexMenu_FindControlTile(a1, *(BSStringT *)&v46[4], *(BSStringT *)&v46[0xC]); /*0x5cdabf*/
  Float = Tile_GetFloat(ControlTile, v47); /*0x5cdac6*/
  v10 = Double_To_SInt32(Float); /*0x5cdacb*/
  p_raceList = &g_TESDataHandler->raceList; /*0x5cdad6*/
  v12 = 0xFFFFFFFF; /*0x5cdadb*/
  v49 = 0; /*0x5cdadd*/
  v48 = 0; /*0x5cdae1*/
  if ( !p_raceList ) /*0x5cdae5*/
  {
LABEL_9:
    v13 = stru_B38F78.value; /*0x5cdb0d*/
    v47 = (int)stru_B38B78.value; /*0x5cdb18*/
    *(_DWORD *)&v46[0x10] = 0xFB4; /*0x5cdb19*/
    v52 = &v46[8]; /*0x5cdb23*/
    *(_DWORD *)&v46[8] = 0; /*0x5cdb29*/
    *(_WORD *)&v46[0xC] = 0; /*0x5cdb2b*/
    *(_WORD *)&v46[0xE] = 0; /*0x5cdb2f*/
    BSStringT_Set((BSStringT *)&v46[8], v13, 0); /*0x5cdb33*/
    v14 = stru_B38F78.value; /*0x5cdb38*/
    v51 = v46; /*0x5cdb42*/
    v53 = 5; /*0x5cdb48*/
    *(_DWORD *)v46 = 0; /*0x5cdb50*/
    *(_WORD *)&v46[4] = 0; /*0x5cdb52*/
    *(_WORD *)&v46[6] = 0; /*0x5cdb56*/
    BSStringT_Set((BSStringT *)v46, v14, 0); /*0x5cdb5a*/
    v53 = 0xFFFFFFFF; /*0x5cdb61*/
    v15 = RaceSexMenu_FindControlTile(a1, *(BSStringT *)v46, *(BSStringT *)&v46[8]); /*0x5cdb65*/
    Tile_SetString(v15, *(_DWORD **)&v46[0x10], (char *)v47); /*0x5cdb6c*/
    v16 = stru_B38FB0.value; /*0x5cdb71*/
    v47 = (int)word_A36430; /*0x5cdb76*/
    *(_DWORD *)&v46[0x10] = 0xFB4; /*0x5cdb7b*/
    v52 = &v46[8]; /*0x5cdb85*/
    *(_DWORD *)&v46[8] = 0; /*0x5cdb8b*/
    *(_WORD *)&v46[0xC] = 0; /*0x5cdb8d*/
    *(_WORD *)&v46[0xE] = 0; /*0x5cdb91*/
    BSStringT_Set((BSStringT *)&v46[8], v16, 0); /*0x5cdb95*/
    v53 = 6; /*0x5cdb9a*/
LABEL_10:
    v17 = stru_B38F78.value; /*0x5cdba2*/
    v51 = v46; /*0x5cdbac*/
    *(_DWORD *)v46 = 0; /*0x5cdbb1*/
    *(_WORD *)&v46[4] = 0; /*0x5cdbb3*/
    *(_WORD *)&v46[6] = 0; /*0x5cdbb8*/
    BSStringT_Set((BSStringT *)v46, v17, 0); /*0x5cdbbc*/
    v53 = 0xFFFFFFFF; /*0x5cdbc3*/
    v18 = RaceSexMenu_FindControlTile(a1, *(BSStringT *)v46, *(BSStringT *)&v46[8]); /*0x5cdbc7*/
    Tile_SetString(v18, *(_DWORD **)&v46[0x10], (char *)v47); /*0x5cdbce*/
    goto LABEL_11; /*0x5cdbce*/
  }
  while ( v12 != v10 ) /*0x5cdae9*/
  {
    if ( p_raceList->item ) /*0x5cdaf3*/
    {
      if ( ((int)p_raceList->item[4].member.modlist.data & 1) != 0 ) /*0x5cdafd*/
        ++v12; /*0x5cdaff*/
    }
    if ( v12 != v10 ) /*0x5cdb04*/
      p_raceList = p_raceList->next; /*0x5cdb06*/
    if ( !p_raceList ) /*0x5cdb0b*/
      goto LABEL_9; /*0x5cdb0b*/
  }
  item = p_raceList->item; /*0x5cdc3b*/
  if ( !p_raceList->item ) /*0x5cdc3f*/
  {
    v39 = stru_B38FB0.value; /*0x5cde18*/
    v47 = (int)stru_B38B78.value; /*0x5cde1d*/
    *(_DWORD *)&v46[0x10] = 0xFB4; /*0x5cde1e*/
    v52 = &v46[8]; /*0x5cde28*/
    *(_DWORD *)&v46[8] = 0; /*0x5cde2e*/
    *(_WORD *)&v46[0xC] = 0; /*0x5cde30*/
    *(_WORD *)&v46[0xE] = 0; /*0x5cde34*/
    BSStringT_Set((BSStringT *)&v46[8], v39, 0); /*0x5cde38*/
    v53 = 4; /*0x5cde3d*/
    goto LABEL_10; /*0x5cde45*/
  }
  v22 = sub_52BDB0(*(_DWORD *)(v50 + 0xE8), 0) == 0; /*0x5cdc55*/
  v23 = *(char **)&item[1].member.type; /*0x5cdc57*/
  v49 = !v22; /*0x5cdc5a*/
  if ( !v23 ) /*0x5cdc61*/
    v23 = EmptyString; /*0x5cdc63*/
  v47 = (int)v23; /*0x5cdc68*/
  v24 = stru_B38F78.value; /*0x5cdc69*/
  *(_DWORD *)&v46[0x10] = 0xFB4; /*0x5cdc6e*/
  v52 = &v46[8]; /*0x5cdc78*/
  *(_DWORD *)&v46[8] = 0; /*0x5cdc7e*/
  *(_WORD *)&v46[0xC] = 0; /*0x5cdc80*/
  *(_WORD *)&v46[0xE] = 0; /*0x5cdc84*/
  BSStringT_Set((BSStringT *)&v46[8], v24, 0); /*0x5cdc88*/
  v25 = g_gameSetting_sMain.value; /*0x5cdc8d*/
  v51 = v46; /*0x5cdc97*/
  v53 = 1; /*0x5cdc9d*/
  *(_DWORD *)v46 = 0; /*0x5cdca5*/
  *(_WORD *)&v46[4] = 0; /*0x5cdca7*/
  *(_WORD *)&v46[6] = 0; /*0x5cdcab*/
  BSStringT_Set((BSStringT *)v46, v25, 0); /*0x5cdcaf*/
  v53 = 0xFFFFFFFF; /*0x5cdcb6*/
  v26 = RaceSexMenu_FindControlTile(a1, *(BSStringT *)v46, *(BSStringT *)&v46[8]); /*0x5cdcba*/
  Tile_SetString(v26, *(_DWORD **)&v46[0x10], (char *)v47); /*0x5cdcc1*/
  v27 = *(char **)&item[1].member.type; /*0x5cdcc6*/
  if ( !v27 ) /*0x5cdccb*/
    v27 = EmptyString; /*0x5cdccd*/
  v47 = (int)v27; /*0x5cdcd2*/
  v28 = stru_B38F78.value; /*0x5cdcd3*/
  *(_DWORD *)&v46[0x10] = 0xFB4; /*0x5cdcd8*/
  v52 = &v46[8]; /*0x5cdce2*/
  *(_DWORD *)&v46[8] = 0; /*0x5cdce8*/
  *(_WORD *)&v46[0xC] = 0; /*0x5cdcea*/
  *(_WORD *)&v46[0xE] = 0; /*0x5cdcee*/
  BSStringT_Set((BSStringT *)&v46[8], v28, 0); /*0x5cdcf2*/
  v29 = stru_B38F78.value; /*0x5cdcf7*/
  v51 = v46; /*0x5cdd01*/
  v53 = 2; /*0x5cdd07*/
  *(_DWORD *)v46 = 0; /*0x5cdd0f*/
  *(_WORD *)&v46[4] = 0; /*0x5cdd11*/
  *(_WORD *)&v46[6] = 0; /*0x5cdd15*/
  BSStringT_Set((BSStringT *)v46, v29, 0); /*0x5cdd19*/
  v53 = 0xFFFFFFFF; /*0x5cdd20*/
  v30 = RaceSexMenu_FindControlTile(a1, *(BSStringT *)v46, *(BSStringT *)&v46[8]); /*0x5cdd24*/
  Tile_SetString(v30, *(_DWORD **)&v46[0x10], (char *)v47); /*0x5cdd2b*/
  sub_662710((Actor *)reference); /*0x5cdd36*/
  MagicTarget_RemoveNonPersistentEffects(&reference->super.super.magicTarget, Float, 0); /*0x5cdd45*/
  sub_5E4B00((Actor *)reference); /*0x5cdd50*/
  *(_DWORD *)(v50 + 0xE8) = item; /*0x5cdd59*/
  v31 = *(int (__thiscall **)(UInt32 *, _DWORD, int))(item[1].member.refID + 0x10); /*0x5cdd62*/
  p_refID = &item[1].member.refID; /*0x5cdd65*/
  if ( v31(p_refID, 0, 0x43534544) ) /*0x5cdd70*/
  {
    v47 = (*(int (__thiscall **)(UInt32 *, _DWORD, int))(*p_refID + 0x10))(p_refID, 0, 0x43534544); /*0x5cdd85*/
    v33 = stru_B38FB0.value; /*0x5cdd86*/
    *(_DWORD *)&v46[0x10] = 0xFB4; /*0x5cdd8b*/
    v52 = &v46[8]; /*0x5cdd95*/
    *(_DWORD *)&v46[8] = 0; /*0x5cdd9b*/
    *(_WORD *)&v46[0xC] = 0; /*0x5cdd9d*/
    *(_WORD *)&v46[0xE] = 0; /*0x5cdda1*/
    BSStringT_Set((BSStringT *)&v46[8], v33, 0); /*0x5cdda5*/
    v34 = stru_B38F78.value; /*0x5cddaa*/
    v51 = v46; /*0x5cddb4*/
    v53 = 3; /*0x5cddba*/
    *(_DWORD *)v46 = 0; /*0x5cddc2*/
    *(_WORD *)&v46[4] = 0; /*0x5cddc4*/
    *(_WORD *)&v46[6] = 0; /*0x5cddc8*/
    BSStringT_Set((BSStringT *)v46, v34, 0); /*0x5cddcc*/
    v53 = 0xFFFFFFFF; /*0x5cddd3*/
    v35 = RaceSexMenu_FindControlTile(a1, *(BSStringT *)v46, *(BSStringT *)&v46[8]); /*0x5cddd7*/
    Tile_SetString(v35, *(_DWORD **)&v46[0x10], (char *)v47); /*0x5cddde*/
  }
  v22 = sub_52BDB0(*(_DWORD *)(v50 + 0xE8), 0) == 0; /*0x5cddf3*/
  process = reference->super.super.super.process; /*0x5cddfa*/
  v37 = process->__vftable; /*0x5cddfd*/
  v47 = (int)reference; /*0x5cddff*/
  Unk_E0 = v37->Unk_E0; /*0x5cde00*/
  v48 = !v22; /*0x5cde06*/
  ((void (__thiscall *)(LowProcess *, int))Unk_E0)(process, v47); /*0x5cde0b*/
LABEL_11:
  sub_5C9980(a1, 0); /*0x5cdbd3*/
  sub_5C6EA0(a1); /*0x5cdbdd*/
  sub_5C7070(1); /*0x5cdbe4*/
  if ( v48 == v49 ) /*0x5cdbf4*/
  {
    UpdatePlayerHead(a2, a3, Float); /*0x5cdeca*/
  }
  else
  {
    v19 = *((_DWORD *)reference->super.super.super.super.niNode + 7); /*0x5cdc03*/
    TESObjectREFR_Set3D((TESObjectREFR *)reference, a2, a3, Float, 0); /*0x5cdc07*/
    v20 = v50 + 0xAC; /*0x5cdc10*/
    if ( v48 ) /*0x5cdc1a*/
      (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v20 + 0x18))(v20, stru_B38B68.value); /*0x5cdc2c*/
    else
      (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v20 + 0x18))(v20, stru_B38B70.value); /*0x5cde55*/
    v40 = (MobileObject *)reference; /*0x5cde57*/
    LOBYTE(MEMORY[0xB33D80]) = 1; /*0x5cde5d*/
    NiNode = (NiObjectNET *)MobileObject_GenerateNiNode(v40); /*0x5cde69*/
    (*(void (__thiscall **)(int, NiObjectNET *, int))(*(_DWORD *)v19 + 0x84))(v19, NiNode, 1); /*0x5cde79*/
    v47 = (int)"Player"; /*0x5cde7b*/
    LOBYTE(MEMORY[0xB33D80]) = 0; /*0x5cde82*/
    NiObjectNET_SetName(NiNode, (char *)v47); /*0x5cde88*/
    v42 = (*((int (__thiscall **)(NiObjectNET *, const char *))NiNode->vtbl + 0x16))(NiNode, "Camera01"); /*0x5cde99*/
    v43 = reference; /*0x5cde9b*/
    MEMORY[0xB3BB10] = v42; /*0x5cdea1*/
    v44 = ((double (__thiscall *)(PlayerCharacter *))v43->vtbl->super.super.super.Unk_52)(v43); /*0x5cdeae*/
    UpdatePlayerHead(a2, a3, v44); /*0x5cdeb0*/
    ((void (__thiscall *)(LowProcess *, PlayerCharacter *))reference->super.super.super.process->Unk_E0)( /*0x5cdec6*/
      reference->super.super.super.process,
      reference);
  }
  return RaceSexMenu_SynchronizeControlsFromPlayer(a1, 0); /*0x5cded7*/
}
