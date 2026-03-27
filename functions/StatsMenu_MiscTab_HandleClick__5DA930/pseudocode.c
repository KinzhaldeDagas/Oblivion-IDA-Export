void __usercall StatsMenu_MiscTab_HandleClick(
        _DWORD *this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16)
{
  char *v17; // edi
  int GameDaysPassed; // eax
  int v19; // edi
  int v20; // ebx
  __int64 *v21; // eax
  unsigned int v22; // ecx
  __int64 *v23; // eax
  unsigned int v24; // edi
  char *v25; // [esp-Ch] [ebp-50h]
  int v26; // [esp+10h] [ebp-34h]
  __int64 v27; // [esp+28h] [ebp-1Ch] BYREF
  int v28; // [esp+34h] [ebp-10h]
  int v29; // [esp+38h] [ebp-Ch]
  int v30; // [esp+3Ch] [ebp-8h]
  int v31; // [esp+40h] [ebp-4h]

  Tile_GetFloat((_DWORD *)*(this + 0x14), 0xFB5);
  Double_To_SInt32(st7_0);
  sub_5893F0((_DWORD *)*(this + 0x13));
  v17 = (char *)dword_B383E8;
  GameDaysPassed = TimeGlobals_GetGameDaysPassed(&TimeGlobals);
  sub_5DA8C0((int)this, st5_0, st6_0, st7_0, v17, GameDaysPassed, 0);
  v19 = 0;
  v26 = 0;
  v20 = 0;
  v27 = 0;
  sub_52A8A0(&v27, 0, 0, 1);
  if ( v27 )
  {
    v21 = &v27;
    do
    {
      v21 = *((__int64 **)v21 + 1);
      ++v19;
    }
    while ( v21 );
    v26 = v19;
  }
  sub_52A8A0(&v27, 0, 1, 1);
  v22 = HIDWORD(v27);
  if ( v27 )
  {
    v23 = &v27;
    do
    {
      v23 = *((__int64 **)v23 + 1);
      ++v20;
    }
    while ( v23 );
    if ( HIDWORD(v27) )
    {
      do
      {
        v24 = *(_DWORD *)(v22 + 4);
        FormHeapFree(v22);
        v22 = v24;
        HIDWORD(v27) = v24;
      }
      while ( v24 );
      v19 = v26;
    }
  }
  v25 = (char *)sMiscActiveQuests;
  LODWORD(v27) = 0;
  sub_5DA8C0((int)this, st5_0, st6_0, st7_0, v25, v19, 1);
  sub_5DA8C0((int)this, st5_0, st6_0, st7_0, (char *)sMiscQuestsCompleted, v20, 2);
  sub_5DA8C0((int)this, st5_0, st6_0, st7_0, (char *)sMiscSkillAdvances, TESDataHandler_g_PlayerRef->miscStats[2], 4);
  sub_5DA8C0((int)this, st5_0, st6_0, st7_0, (char *)sMiscTrainingSessions, TESDataHandler_g_PlayerRef->miscStats[3], 5);
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  StatsMenu_MiscTab_HandleClick_::CalcSkillMasteryCounts(0, 6, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
}
