void __usercall sub_5C9770(float *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  TESForm *v5; // eax
  TESForm *v6; // ebp
  const char *value; // eax
  const char *v8; // eax
  Tile *ControlTile; // eax
  CHAR *v10; // eax
  const char *v11; // ecx
  bool v12; // zf
  int v13; // eax
  const char *v14; // eax
  const char *v15; // eax
  Tile *v16; // eax
  void (__thiscall *v17)(UInt32 *, int); // edx
  const char *v18; // eax
  const char *v19; // eax
  Tile *v20; // eax
  void (__thiscall *v21)(UInt32 *, int); // eax
  _BYTE v22[20]; // [esp-18h] [ebp-48h] BYREF
  int v23; // [esp-4h] [ebp-34h]
  _BYTE *v24; // [esp+14h] [ebp-1Ch]
  _BYTE *v25; // [esp+18h] [ebp-18h]
  BSStringT Str1; // [esp+1Ch] [ebp-14h] BYREF
  int v27; // [esp+2Ch] [ebp-4h]

  v5 = reference->vtbl->super.super.super.GetBaseForm(reference); /*0x5c97a7*/
  v23 = 0xFB4; /*0x5c97a9*/
  v24 = &v22[0xC]; /*0x5c97b5*/
  v6 = v5; /*0x5c97b9*/
  value = stru_B38FA8.value; /*0x5c97bb*/
  *(_DWORD *)&v22[0xC] = 0; /*0x5c97c2*/
  *(_WORD *)&v22[0x10] = 0; /*0x5c97c4*/
  *(_WORD *)&v22[0x12] = 0; /*0x5c97c8*/
  BSStringT_Set((BSStringT *)&v22[0xC], value, 0); /*0x5c97cc*/
  v8 = stru_B38F78.value; /*0x5c97d1*/
  v25 = &v22[4]; /*0x5c97db*/
  v27 = 0; /*0x5c97e1*/
  *(_DWORD *)&v22[4] = 0; /*0x5c97e5*/
  *(_WORD *)&v22[8] = 0; /*0x5c97e7*/
  *(_WORD *)&v22[0xA] = 0; /*0x5c97eb*/
  BSStringT_Set((BSStringT *)&v22[4], v8, 0); /*0x5c97ef*/
  v27 = 0xFFFFFFFF; /*0x5c97f6*/
  ControlTile = RaceSexMenu_FindControlTile(a1, *(BSStringT *)&v22[4], *(BSStringT *)&v22[0xC]); /*0x5c97fe*/
  v10 = sub_588C10(ControlTile, v23); /*0x5c9805*/
  Str1.m_data = 0; /*0x5c9810*/
  *(_DWORD *)&Str1.m_dataLen = 0; /*0x5c9814*/
  BSStringT_Set(&Str1, v10, 0); /*0x5c981e*/
  v11 = MEMORY[0xB39520].value; /*0x5c9823*/
  v12 = MEMORY[0xB39520].value == 0; /*0x5c9829*/
  v27 = 1; /*0x5c9830*/
  if ( v12 || !Str1.m_data ) /*0x5c983c*/
  {
    v13 = 2 * (v11 == 0) - 1; /*0x5c9857*/
  }
  else
  {
    v13 = CRT_StricmpLocaleDispatch(Str1.m_data, v11); /*0x5c9840*/
    v11 = MEMORY[0xB39520].value; /*0x5c9845*/
  }
  if ( v13 ) /*0x5c985d*/
  {
    v23 = (int)MEMORY[0xB39528].value; /*0x5c98d1*/
    v18 = stru_B38FA8.value; /*0x5c98d2*/
    *(_DWORD *)&v22[0x10] = 0xFB4; /*0x5c98d7*/
    v25 = &v22[8]; /*0x5c98e1*/
    *(_DWORD *)&v22[8] = 0; /*0x5c98e7*/
    *(_WORD *)&v22[0xC] = 0; /*0x5c98e9*/
    *(_WORD *)&v22[0xE] = 0; /*0x5c98ed*/
    BSStringT_Set((BSStringT *)&v22[8], v18, 0); /*0x5c98f1*/
    v19 = stru_B38F78.value; /*0x5c98f6*/
    v24 = v22; /*0x5c9900*/
    LOBYTE(v27) = 3; /*0x5c9906*/
    *(_DWORD *)v22 = 0; /*0x5c990b*/
    *(_WORD *)&v22[4] = 0; /*0x5c990d*/
    *(_WORD *)&v22[6] = 0; /*0x5c9911*/
    BSStringT_Set((BSStringT *)v22, v19, 0); /*0x5c9915*/
    LOBYTE(v27) = 1; /*0x5c991c*/
    v20 = RaceSexMenu_FindControlTile(a1, *(BSStringT *)v22, *(BSStringT *)&v22[8]); /*0x5c9920*/
    Tile_SetString(v20, *(_DWORD **)&v22[0x10], (char *)v23); /*0x5c9927*/
    v21 = *(void (__thiscall **)(UInt32 *, int))(v6[1].member.refID + 0x50); /*0x5c992f*/
    v6[1].member.modlist.data = (Data *)((int)v6[1].member.modlist.data & ~1u); /*0x5c9932*/
    v21(&v6[1].member.refID, 0x10); /*0x5c993b*/
  }
  else
  {
    v14 = stru_B38FA8.value; /*0x5c985f*/
    v23 = (int)v11; /*0x5c9864*/
    *(_DWORD *)&v22[0x10] = 0xFB4; /*0x5c9865*/
    v25 = &v22[8]; /*0x5c986f*/
    *(_DWORD *)&v22[8] = 0; /*0x5c9875*/
    *(_WORD *)&v22[0xC] = 0; /*0x5c9877*/
    *(_WORD *)&v22[0xE] = 0; /*0x5c987b*/
    BSStringT_Set((BSStringT *)&v22[8], v14, 0); /*0x5c987f*/
    v15 = stru_B38F78.value; /*0x5c9884*/
    v24 = v22; /*0x5c988e*/
    LOBYTE(v27) = 2; /*0x5c9894*/
    *(_DWORD *)v22 = 0; /*0x5c9899*/
    *(_WORD *)&v22[4] = 0; /*0x5c989b*/
    *(_WORD *)&v22[6] = 0; /*0x5c989f*/
    BSStringT_Set((BSStringT *)v22, v15, 0); /*0x5c98a3*/
    LOBYTE(v27) = 1; /*0x5c98aa*/
    v16 = RaceSexMenu_FindControlTile(a1, *(BSStringT *)v22, *(BSStringT *)&v22[8]); /*0x5c98ae*/
    Tile_SetString(v16, *(_DWORD **)&v22[0x10], (char *)v23); /*0x5c98b5*/
    v17 = *(void (__thiscall **)(UInt32 *, int))(v6[1].member.refID + 0x50); /*0x5c98bd*/
    v6[1].member.modlist.data = (Data *)((int)v6[1].member.modlist.data | 1); /*0x5c98c0*/
    v17(&v6[1].member.refID, 0x10); /*0x5c98c8*/
  }
  sub_5C4920(a1); /*0x5c993f*/
  sub_5C7070(1); /*0x5c9945*/
  UpdatePlayerHead(a2, a3, a4); /*0x5c994d*/
  RaceSexMenu_SynchronizeControlsFromPlayer(a1, 0); /*0x5c9955*/
  FormHeapFree((unsigned int)Str1.m_data); /*0x5c995f*/
}
