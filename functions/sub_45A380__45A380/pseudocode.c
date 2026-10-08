char __thiscall sub_45A380(int this, double a2, int a3, TESObjectCELL *a4, TESWorldSpace *a5)
{
  char v6; // bl
  int v8; // eax
  TESObjectCELL *CellAtCellCoord; // eax
  char *Name; // eax
  __int64 v11; // rax
  DWORD (__stdcall *v12)(); // edi
  PlayerCharacter *v13; // esi
  __int64 v14; // rax
  double v15; // st7
  int v16; // [esp-Ch] [ebp-14h]
  double v17; // [esp+Ch] [ebp+4h]
  TESWorldSpace *GameDaysPassed; // [esp+1Ch] [ebp+14h]
  float v19; // [esp+1Ch] [ebp+14h]
  float v20; // [esp+1Ch] [ebp+14h]
  float v21; // [esp+1Ch] [ebp+14h]

  v6 = 0; /*0x45a384*/
  if ( *(_BYTE *)(this + 0xA9) ) /*0x45a386*/
  {
    *(_BYTE *)(this + 0xA8) = 1; /*0x45a38e*/
    return 0; /*0x45a396*/
  }
  else
  {
    if ( a5 ) /*0x45a3a4*/
    {
      v16 = Double_To_SInt32(*((float *)&a2 + 1)) >> 0xC; /*0x45a3b6*/
      v8 = Double_To_SInt32(*(float *)&a2); /*0x45a3b7*/
      CellAtCellCoord = TESWorldSpace::GetCellAtCellCoord(a5, v8 >> 0xC, v16); /*0x45a3c2*/
    }
    else
    {
      CellAtCellCoord = a4; /*0x45a3c9*/
    }
    if ( !CellAtCellCoord || !TESObjectCELL_IsProcessLevel_LowHigh(CellAtCellCoord, 0) ) /*0x45a3da*/
      v6 = 1; /*0x45a3e3*/
    Name = TESObjectREFR_GetName((TESObjectREFR *)reference); /*0x45a3f2*/
    if ( CRT_StricmpLocaleDispatch(Name, (const char *)(this + 0xB0)) ) /*0x45a3f8*/
      v6 = 1; /*0x45a404*/
    v11 = (unsigned __int16)Actor_GetLevel((Actor *)reference) - *(unsigned __int16 *)(this + 0x1B4); /*0x45a41d*/
    if ( (int)((HIDWORD(v11) ^ v11) - HIDWORD(v11)) > 2 ) /*0x45a425*/
      v6 = 1; /*0x45a427*/
    v12 = GetTickCount; /*0x45a429*/
    v13 = reference; /*0x45a42f*/
    v13->unk714 += GetTickCount() - v13->TickCount; /*0x45a43d*/
    v13->TickCount = v12(); /*0x45a445*/
    v14 = v13->unk714 - *(_DWORD *)(this + 0x1BC); /*0x45a458*/
    if ( (int)((HIDWORD(v14) ^ v14) - HIDWORD(v14)) > 0x36EE80 ) /*0x45a463*/
      v6 = 1; /*0x45a465*/
    v17 = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]) / dbl_A2F920; /*0x45a47c*/
    GameDaysPassed = (TESWorldSpace *)TimeGlobals_GetGameDaysPassed(&MEMORY[0xB332E0]); /*0x45a487*/
    v15 = (double)(int)GameDaysPassed; /*0x45a48b*/
    if ( (int)GameDaysPassed < 0 ) /*0x45a48f*/
      v15 = v15 + flt_A2FC78; /*0x45a491*/
    v19 = v15 + v17; /*0x45a49b*/
    v20 = v19 - *(float *)(this + 0x1B8); /*0x45a4a9*/
    v21 = fabs(v20); /*0x45a4b3*/
    if ( v21 > (double)fConstant_2 ) /*0x45a4c6*/
      return 1; /*0x45a4c8*/
    return v6; /*0x45a4cb*/
  }
}
