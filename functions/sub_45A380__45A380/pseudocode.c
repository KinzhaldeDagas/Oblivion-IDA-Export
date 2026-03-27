char __userpurge sub_45A380@<al>(int a1@<ecx>, int a2@<edi>, double a3, int a4, TESObjectCELL *a5, TESWorldSpace *a6)
{
  char v7; // bl
  int v9; // eax
  TESObjectCELL *CellAtCellCoord; // eax
  char *Name; // eax
  __int64 v12; // rax
  DWORD (__stdcall *v13)(); // edi
  PlayerCharacter *v14; // esi
  __int64 v15; // rax
  double v16; // st7
  signed int v17; // [esp-Ch] [ebp-14h]
  double v18; // [esp+Ch] [ebp+4h]
  _DWORD *GameDaysPassed; // [esp+1Ch] [ebp+14h]
  float v20; // [esp+1Ch] [ebp+14h]
  float v21; // [esp+1Ch] [ebp+14h]
  float v22; // [esp+1Ch] [ebp+14h]

  v7 = 0;
  if ( *(_BYTE *)(a1 + 0xA9) )
  {
    *(_BYTE *)(a1 + 0xA8) = 1;
    return 0;
  }
  else
  {
    if ( a6 )
    {
      v17 = Double_To_SInt32(*((float *)&a3 + 1)) >> 0xC;
      v9 = Double_To_SInt32(*(float *)&a3);
      CellAtCellCoord = (TESObjectCELL *)TESWorldSpace::GetCellAtCellCoord(a6, v9 >> 0xC, v17);
    }
    else
    {
      CellAtCellCoord = a5;
    }
    if ( !CellAtCellCoord || !TESObjectCELL_IsProcessLevel_LowHigh(CellAtCellCoord, 0) )
      v7 = 1;
    Name = TESObjectREFR_GetName((TESObjectREFR *)TESDataHandler_g_PlayerRef);
    if ( _strcmp(Name, (char *)(a1 + 0xB0)) )
      v7 = 1;
    v12 = (unsigned __int16)Actor_GetLevel((Actor *)TESDataHandler_g_PlayerRef, a2) - *(unsigned __int16 *)(a1 + 0x1B4);
    if ( (int)((HIDWORD(v12) ^ v12) - HIDWORD(v12)) > 2 )
      v7 = 1;
    v13 = GetTickCount;
    v14 = TESDataHandler_g_PlayerRef;
    v14->unk714 += GetTickCount() - v14->TickCount;
    v14->TickCount = v13();
    v15 = v14->unk714 - *(_DWORD *)(a1 + 0x1BC);
    if ( (int)((HIDWORD(v15) ^ v15) - HIDWORD(v15)) > 0x36EE80 )
      v7 = 1;
    v18 = TimeGlobals_GetGameHour(&TimeGlobals) / dbl_A2F920;
    GameDaysPassed = (_DWORD *)TimeGlobals_GetGameDaysPassed(&TimeGlobals);
    v16 = (double)(int)GameDaysPassed;
    if ( (int)GameDaysPassed < 0 )
      v16 = v16 + flt_A2FC78;
    v20 = v16 + v18;
    v21 = v20 - *(float *)(a1 + 0x1B8);
    v22 = fabs(v21);
    if ( v22 > (double)fConstant_2 )
      return 1;
    return v7;
  }
}
