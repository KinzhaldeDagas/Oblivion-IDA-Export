int __usercall sub_45CC60@<eax>(double a1@<st1>, double a2@<st0>, TESObjectREFR *a3, int a4, signed int *a5, int *a6)
{
  int v7; // esi
  double v8; // st5
  int v9; // esi
  double v10; // st5
  char *Name; // eax
  UInt32 refID; // edx
  int v13; // esi
  _DWORD *v14; // ecx
  unsigned int v15; // eax
  double v16; // st7
  int result; // eax
  double v18; // st7
  double v19; // st7
  float v20; // [esp+0h] [ebp-224h]
  float v21; // [esp+0h] [ebp-224h]
  float v22; // [esp+0h] [ebp-224h]
  float v23; // [esp+0h] [ebp-224h]
  float v24; // [esp+0h] [ebp-224h]
  float v25; // [esp+4h] [ebp-220h]
  float v26; // [esp+4h] [ebp-220h]
  float v27; // [esp+4h] [ebp-220h]
  float v28; // [esp+4h] [ebp-220h]
  float v29; // [esp+4h] [ebp-220h]
  int v30; // [esp+24h] [ebp-200h]
  unsigned int *v31; // [esp+28h] [ebp-1FCh] BYREF
  _BYTE v32[500]; // [esp+2Ch] [ebp-1F8h] BYREF

  v7 = *a5;
  v30 = *a6;
  v25 = (float)*a5;
  v8 = (double)iDebugTextLeftRightOffset;
  v20 = v8;
  InterfaceMgr_DebugTextLine((char)a6, v8, a1, a2, (int)"SAVEGAME INFO", v20, v25, 1, 0xFFFFFFFF);
  v9 = a4 + v7;
  v26 = (float)v9;
  v10 = (double)iDebugTextLeftRightOffset;
  v21 = v10;
  Name = TESObjectREFR_GetName(a3);
  InterfaceMgr_DebugTextLine((char)a6, v10, a1, a2, (int)Name, v21, v26, 1, 0xFFFFFFFF);
  refID = a3->member.super.refID;
  v13 = a4 + v9;
  v14 = (_DWORD *)SaveLoad_CurrentSavegame->unk000[0];
  v31 = 0;
  NiTMap_GetAt(v14, refID, &v31);
  if ( v31 )
  {
    v15 = sub_4535A0(a3, *v31);
    if ( !v15 )
    {
      v27 = (float)v13;
      v16 = (double)iDebugTextLeftRightOffset;
      v22 = v16;
      result = InterfaceMgr_DebugTextLine(
                 (char)a6,
                 v10,
                 a1,
                 v16,
                 (int)"References changes were nullified by CheckFlags().",
                 v22,
                 v27,
                 1,
                 0xFFFFFFFF);
      *a5 = a4 + v13;
      *a6 = v30;
      return result;
    }
    sub_453A90(v32, a3, v15, a3->member.super.type, 1);
    v29 = (float)v13;
    v19 = (double)iDebugTextLeftRightOffset;
    v24 = v19;
    result = InterfaceMgr_DebugTextLine((char)a6, v10, a1, v19, (int)v32, v24, v29, 1, 0xFFFFFFFF);
  }
  else
  {
    v28 = (float)v13;
    v18 = (double)iDebugTextLeftRightOffset;
    v23 = v18;
    result = InterfaceMgr_DebugTextLine(
               (char)a6,
               v10,
               a1,
               v18,
               (int)"Current reference has no changes.",
               v23,
               v28,
               1,
               0xFFFFFFFF);
  }
  *a5 = a4 + v13;
  *a6 = v30;
  return result;
}
