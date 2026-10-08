int __usercall sub_45CC60@<eax>(double a1@<st1>, double a2@<st0>, TESObjectREFR *a3, int a4, signed int *a5, int *a6)
{
  int v6; // esi
  double v7; // st5
  int v8; // esi
  double v9; // st5
  char *Name; // eax
  UInt32 refID; // edx
  int v12; // esi
  ChangesMap *currentChangesMap; // ecx
  unsigned int v14; // eax
  double v15; // st7
  int result; // eax
  double v17; // st7
  double v18; // st7
  float v19; // [esp+0h] [ebp-224h]
  float v20; // [esp+0h] [ebp-224h]
  float v21; // [esp+0h] [ebp-224h]
  float v22; // [esp+0h] [ebp-224h]
  float v23; // [esp+0h] [ebp-224h]
  float v24; // [esp+4h] [ebp-220h]
  float v25; // [esp+4h] [ebp-220h]
  float v26; // [esp+4h] [ebp-220h]
  float v27; // [esp+4h] [ebp-220h]
  float v28; // [esp+4h] [ebp-220h]
  int v29; // [esp+24h] [ebp-200h]
  unsigned int *v30; // [esp+28h] [ebp-1FCh] BYREF
  char v31[500]; // [esp+2Ch] [ebp-1F8h] BYREF

  v6 = *a5; /*0x45cc88*/
  v29 = *a6; /*0x45cca1*/
  v24 = (float)*a5; /*0x45cca5*/
  v7 = (double)iDebugTextLeftRightOffset; /*0x45cca9*/
  v19 = v7; /*0x45ccaf*/
  InterfaceMgr_DebugTextLine((char)a6, v7, a1, a2, "SAVEGAME INFO", v19, v24, 1, 0xFFFFFFFF); /*0x45ccb7*/
  v8 = a4 + v6; /*0x45ccbc*/
  v25 = (float)v8; /*0x45ccd7*/
  v9 = (double)iDebugTextLeftRightOffset; /*0x45ccdb*/
  v20 = v9; /*0x45cce1*/
  Name = TESObjectREFR_GetName(a3); /*0x45cce4*/
  InterfaceMgr_DebugTextLine((char)a6, v9, a1, a2, Name, v20, v25, 1, 0xFFFFFFFF); /*0x45ccea*/
  refID = a3->member.super.refID; /*0x45ccef*/
  v12 = a4 + v8; /*0x45ccf7*/
  currentChangesMap = g_TESSaveLoadGame->currentChangesMap; /*0x45cd06*/
  v30 = 0; /*0x45cd0d*/
  NiTMap_GetAt(currentChangesMap, refID, &v30); /*0x45cd15*/
  if ( v30 ) /*0x45cd20*/
  {
    v14 = SaveLoad_NormalizeFormChangeFlags((TESForm *)a3, *v30); /*0x45cd2c*/
    if ( !v14 ) /*0x45cd33*/
    {
      v26 = (float)v12; /*0x45cd40*/
      v15 = (double)iDebugTextLeftRightOffset; /*0x45cd44*/
      v21 = v15; /*0x45cd4a*/
      result = InterfaceMgr_DebugTextLine( /*0x45cd52*/
                 (char)a6,
                 v9,
                 a1,
                 v15,
                 "References changes were nullified by CheckFlags().",
                 v21,
                 v26,
                 1,
                 0xFFFFFFFF);
      *a5 = a4 + v12; /*0x45cd65*/
      *a6 = v29; /*0x45cd67*/
      return result; /*0x45cd6a*/
    }
    sub_453A90(v31, (TESForm *)a3, v14, a3->member.super.type, 1); /*0x45cd9f*/
    v28 = (float)v12; /*0x45cdb3*/
    v18 = (double)iDebugTextLeftRightOffset; /*0x45cdb7*/
    v23 = v18; /*0x45cdbd*/
    result = InterfaceMgr_DebugTextLine((char)a6, v9, a1, v18, v31, v23, v28, 1, 0xFFFFFFFF); /*0x45cdc1*/
  }
  else
  {
    v27 = (float)v12; /*0x45cd77*/
    v17 = (double)iDebugTextLeftRightOffset; /*0x45cd7b*/
    v22 = v17; /*0x45cd81*/
    result = InterfaceMgr_DebugTextLine( /*0x45cd89*/
               (char)a6,
               v9,
               a1,
               v17,
               "Current reference has no changes.",
               v22,
               v27,
               1,
               0xFFFFFFFF);
  }
  *a5 = a4 + v12; /*0x45cdd4*/
  *a6 = v29; /*0x45cdd6*/
  return result; /*0x45cdd9*/
}
