char __cdecl sub_4F8740(_DWORD *a1, int a2, int a3, double *a4)
{
  int v5; // ecx
  double v6; // st7
  double v8; // [esp+8h] [ebp-8h]
  int GameDaysPassed; // [esp+14h] [ebp+4h]
  float v10; // [esp+14h] [ebp+4h]
  float v11; // [esp+20h] [ebp+10h]

  *a4 = 0.0; /*0x4f8751*/
  if ( a1 ) /*0x4f8753*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*a1 + 0x198))(a1, 0) ) /*0x4f8765*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 0x190))(a1) ) /*0x4f8775*/
      {
        v5 = a1[0x16]; /*0x4f877b*/
        if ( v5 ) /*0x4f8780*/
        {
          v11 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v5 + 0x4F0))(v5); /*0x4f878c*/
          if ( v11 > 0.0 ) /*0x4f879b*/
          {
            GameDaysPassed = TimeGlobals_GetGameDaysPassed(&MEMORY[0xB332E0]); /*0x4f87a9*/
            v6 = (double)GameDaysPassed; /*0x4f87ad*/
            if ( GameDaysPassed < 0 ) /*0x4f87b1*/
              v6 = v6 + flt_A2FC78; /*0x4f87b3*/
            v8 = v6 * dbl_A2F920; /*0x4f87c4*/
            v10 = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]) + v8; /*0x4f87d1*/
            *a4 = v10 - v11; /*0x4f87dd*/
          }
        }
      }
    }
  }
  return 1; /*0x4f87df*/
}
