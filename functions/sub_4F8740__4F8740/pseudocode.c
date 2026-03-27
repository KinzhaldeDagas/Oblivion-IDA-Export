char __cdecl sub_4F8740(_DWORD *a1, int a2, int a3, double *a4)
{
  int v5; // ecx
  double v6; // st7
  double v8; // [esp+8h] [ebp-8h]
  int GameDaysPassed; // [esp+14h] [ebp+4h]
  float v10; // [esp+14h] [ebp+4h]
  float v11; // [esp+20h] [ebp+10h]

  *a4 = 0.0;
  if ( a1 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*a1 + 0x198))(a1, 0) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 0x190))(a1) )
      {
        v5 = a1[0x16];
        if ( v5 )
        {
          v11 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v5 + 0x4F0))(v5);
          if ( v11 > 0.0 )
          {
            GameDaysPassed = TimeGlobals_GetGameDaysPassed(&TimeGlobals);
            v6 = (double)GameDaysPassed;
            if ( GameDaysPassed < 0 )
              v6 = v6 + flt_A2FC78;
            v8 = v6 * dbl_A2F920;
            v10 = TimeGlobals_GetGameHour(&TimeGlobals) + v8;
            *a4 = v10 - v11;
          }
        }
      }
    }
  }
  return 1;
}
