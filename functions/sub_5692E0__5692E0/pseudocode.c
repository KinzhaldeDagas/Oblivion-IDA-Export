char __thiscall sub_5692E0(int *this, Actor *a2, TESPackage **a3, int a4, float a5)
{
  Actor *v5; // esi
  int *v6; // edi
  int v7; // ebx
  char v8; // al
  TESPackage *v9; // edi
  Time *p_time; // esi
  signed __int8 date; // al
  signed __int8 weekDay; // al
  signed __int8 time; // al
  TESPackage **v14; // eax
  unsigned __int16 v15; // ax
  double GameHour; // st7
  int v17; // eax
  TESPackage **v18; // eax
  signed __int8 **v19; // ebx
  int v20; // ecx
  signed __int8 **i; // ebp
  signed __int8 *v22; // esi
  signed __int8 *v23; // edi
  bool v24; // zf
  int v26; // [esp+10h] [ebp-1Ch]
  int *v27; // [esp+14h] [ebp-18h]
  TESPackage *v29; // [esp+20h] [ebp-Ch]
  int v30; // [esp+24h] [ebp-8h]
  signed int GameMonth; // [esp+28h] [ebp-4h]
  char v32; // [esp+30h] [ebp+4h]
  int v33; // [esp+34h] [ebp+8h]

  v5 = a2;
  v6 = this;
  v7 = a2->members.super.process->GetCurDay(a2->members.super.process);
  v26 = v5->members.super.process->GetCurMonth(v5->members.super.process);
  v5->members.super.process->GetCurYear(v5->members.super.process);
  TimeGlobals_GetGameDay(&TimeGlobals);
  v30 = v8;
  GameMonth = TimeGlobals_GetGameMonth(&TimeGlobals);
  if ( v7 )
  {
    while ( 1 )
    {
      v27 = v6;
      v29 = sub_5E0380(v5);
      if ( !v6[1] && !*v6 )
        break;
      do
      {
        v9 = (TESPackage *)*v27;
        if ( !*v27 )
          break;
        p_time = &v9->members.time;
        if ( v9 != (TESPackage *)0xFFFFFFD4 && (p_time->month == 0xFF || (char)p_time->month <= v26) )
        {
          date = v9->members.time.date;
          if ( !date || date <= v7 )
          {
            weekDay = v9->members.time.weekDay;
            if ( weekDay == (signed __int8)0xFF || weekDay <= (int)TimeGlobals_GetGameDayOfWeek(&TimeGlobals) )
            {
              time = v9->members.time.time;
              if ( (time == (signed __int8)0xFF || a5 > (double)time) && v9 != v29 )
              {
                v14 = a3;
                if ( a3 )
                {
                  while ( *v14 != v9 )
                  {
                    v14 = (TESPackage **)v14[1];
                    if ( !v14 )
                      goto LABEL_20;
                  }
                }
                else
                {
LABEL_20:
                  if ( v9->members.procedureArrayIndex == 0xFFFFFFFF )
                    sub_5672A0(v9);
                  BSSimpleList_PushBack(a3, (int)v9);
                }
              }
            }
          }
        }
        v27 = (int *)v27[1];
      }
      while ( v27 );
      a5 = a5 + dbl_A2F928;
      if ( flt_A675E4 < (double)a5 )
      {
        a5 = 0.0;
        ++v7;
        v15 = sub_47D2B0((char)v26);
        if ( v7 > v15 )
        {
          v7 -= v15;
          if ( ++v26 >= 0xC )
            v26 -= 0xC;
        }
      }
      if ( v7 == v30 && v26 == GameMonth )
      {
        GameHour = TimeGlobals_GetGameHour(&TimeGlobals);
        v17 = Double_To_SInt32(GameHour);
        if ( Double_To_SInt32(a5) >= v17 )
          break;
      }
      if ( !v7 )
        break;
      v6 = this;
      v5 = a2;
    }
  }
  v18 = a3;
  v19 = (signed __int8 **)a3;
  if ( a3 )
  {
    v20 = 0;
    do
    {
      if ( *v18 )
        ++v20;
      v18 = (TESPackage **)v18[1];
    }
    while ( v18 );
    v33 = v20;
    LOBYTE(v18) = 1;
    if ( v20 )
    {
      while ( (_BYTE)v18 )
      {
        v32 = 0;
        for ( i = v19; i; i = (signed __int8 **)i[1] )
        {
          v22 = *i;
          v23 = *v19;
          v18 = (TESPackage **)sub_567B80(*v19, *i + 0x2C);
          if ( v18 == (TESPackage **)1 )
          {
            if ( v22 )
              *v19 = v22;
            if ( v23 )
              *i = v23;
            v32 = 1;
          }
        }
        v24 = v33-- == 1;
        v19 = (signed __int8 **)v19[1];
        if ( v24 )
          break;
        LOBYTE(v18) = v32;
      }
    }
  }
  return (char)v18;
}
