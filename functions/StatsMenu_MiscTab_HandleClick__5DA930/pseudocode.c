void __usercall StatsMenu_MiscTab_HandleClick(
        _DWORD *this@<ecx>,
        double st7_0@<st0>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14)
{
  char *value; // edi
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

  Tile_GetFloat((_DWORD *)*(this + 0x14), 0xFB5); /*0x5da941*/
  Double_To_SInt32(st7_0); /*0x5da946*/
  sub_5893F0((_DWORD *)*(this + 0x13)); /*0x5da952*/
  value = (char *)stru_B383E8.value; /*0x5da957*/
  GameDaysPassed = TimeGlobals_GetGameDaysPassed(&MEMORY[0xB332E0]); /*0x5da965*/
  sub_5DA8C0((int)this, value, GameDaysPassed, 0); /*0x5da96e*/
  v19 = 0; /*0x5da97b*/
  v26 = 0; /*0x5da97e*/
  v20 = 0; /*0x5da982*/
  v27 = 0; /*0x5da984*/
  sub_52A8A0(&v27, 0, 0, 1); /*0x5da98c*/
  if ( v27 ) /*0x5da998*/
  {
    v21 = &v27; /*0x5da9a0*/
    do /*0x5da9ac*/
    {
      v21 = *((__int64 **)v21 + 1); /*0x5da9a4*/
      ++v19; /*0x5da9a7*/
    }
    while ( v21 ); /*0x5da9ac*/
    v26 = v19; /*0x5da9ae*/
  }
  sub_52A8A0(&v27, 0, 1, 1); /*0x5da9bc*/
  v22 = HIDWORD(v27); /*0x5da9c1*/
  if ( v27 ) /*0x5da9ca*/
  {
    v23 = &v27; /*0x5da9d2*/
    do /*0x5da9de*/
    {
      v23 = *((__int64 **)v23 + 1); /*0x5da9d6*/
      ++v20; /*0x5da9d9*/
    }
    while ( v23 ); /*0x5da9de*/
    if ( HIDWORD(v27) ) /*0x5da9e2*/
    {
      do /*0x5da9f8*/
      {
        v24 = *(_DWORD *)(v22 + 4); /*0x5da9e4*/
        FormHeapFree(v22); /*0x5da9e8*/
        v22 = v24; /*0x5da9f2*/
        HIDWORD(v27) = v24; /*0x5da9f4*/
      }
      while ( v24 ); /*0x5da9f8*/
      v19 = v26; /*0x5da9fa*/
    }
  }
  v25 = (char *)MEMORY[0xB38540].value; /*0x5daa07*/
  LODWORD(v27) = 0; /*0x5daa0a*/
  sub_5DA8C0((int)this, v25, v19, 1); /*0x5daa0e*/
  sub_5DA8C0((int)this, (char *)MEMORY[0xB38548].value, v20, 2); /*0x5daa1e*/
  sub_5DA8C0((int)this, (char *)MEMORY[0xB384C0].value, reference->miscStats[2], 4); /*0x5daa3a*/
  sub_5DA8C0((int)this, (char *)MEMORY[0xB384B8].value, reference->miscStats[3], 5); /*0x5daa56*/
  v28 = 0; /*0x5daa64*/
  v29 = 0; /*0x5daa68*/
  v30 = 0; /*0x5daa6c*/
  v31 = 0; /*0x5daa70*/
  StatsMenu_MiscTab_HandleClick_::CalcSkillMasteryCounts(0, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14); /*0x5daa75*/
}
