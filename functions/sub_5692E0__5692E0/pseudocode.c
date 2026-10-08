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
  TESPackage **v19; // ebx
  int v20; // ecx
  TESPackage **i; // ebp
  TESPackage *v22; // esi
  signed __int8 *v23; // edi
  bool v24; // zf
  int v26; // [esp+10h] [ebp-1Ch]
  int *v27; // [esp+14h] [ebp-18h]
  TESPackage *CurrentPackage; // [esp+20h] [ebp-Ch]
  int v30; // [esp+24h] [ebp-8h]
  signed int GameMonth; // [esp+28h] [ebp-4h]
  char v32; // [esp+30h] [ebp+4h]
  int v33; // [esp+34h] [ebp+8h]

  v5 = a2; /*0x5692e6*/
  v6 = this; /*0x5692eb*/
  v7 = a2->members.super.process->GetCurDay(a2->members.super.process); /*0x5692fe*/
  v26 = v5->members.super.process->GetCurMonth(v5->members.super.process); /*0x56930a*/
  v5->members.super.process->GetCurYear(v5->members.super.process); /*0x569313*/
  TimeGlobals_GetGameDay(&MEMORY[0xB332E0]); /*0x569322*/
  v30 = v8; /*0x56932f*/
  GameMonth = TimeGlobals_GetGameMonth(&MEMORY[0xB332E0]); /*0x56933a*/
  if ( v7 ) /*0x56933e*/
  {
    while ( 1 ) /*0x569350*/
    {
      v27 = v6; /*0x569350*/
      CurrentPackage = Actor::GetCurrentPackage(v5); /*0x56935d*/
      if ( !v6[1] && !*v6 ) /*0x569363*/
        break; /*0x569363*/
      do /*0x56941d*/
      {
        v9 = (TESPackage *)*v27; /*0x569374*/
        if ( !*v27 ) /*0x569374*/
          break; /*0x569378*/
        p_time = &v9->members.time; /*0x56937e*/
        if ( v9 != (TESPackage *)0xFFFFFFD4 && (p_time->month == 0xFF || (char)p_time->month <= v26) ) /*0x569396*/
        {
          date = v9->members.time.date; /*0x569398*/
          if ( !date || date <= v7 ) /*0x5693a4*/
          {
            weekDay = v9->members.time.weekDay; /*0x5693a6*/
            if ( weekDay == (signed __int8)0xFF || weekDay <= (int)TimeGlobals_GetGameDayOfWeek(&MEMORY[0xB332E0]) ) /*0x5693bc*/
            {
              time = v9->members.time.time; /*0x5693be*/
              if ( (time == (signed __int8)0xFF || a5 > (double)time) && v9 != CurrentPackage ) /*0x5693e1*/
              {
                v14 = a3; /*0x5693e9*/
                if ( a3 ) /*0x5693eb*/
                {
                  while ( *v14 != v9 ) /*0x5693f2*/
                  {
                    v14 = (TESPackage **)v14[1]; /*0x5693f4*/
                    if ( !v14 ) /*0x5693f9*/
                      goto LABEL_20; /*0x5693f9*/
                  }
                }
                else
                {
LABEL_20:
                  if ( v9->members.procedureArrayIndex == 0xFFFFFFFF ) /*0x5693ff*/
                    sub_5672A0(v9); /*0x569403*/
                  BSSimpleList_PushBack(a3, (int)v9); /*0x56940b*/
                }
              }
            }
          }
        }
        v27 = (int *)v27[1]; /*0x569419*/
      }
      while ( v27 ); /*0x56941d*/
      a5 = a5 + dbl_A2F928; /*0x56942d*/
      if ( flt_A675E4 < (double)a5 ) /*0x569440*/
      {
        a5 = 0.0; /*0x56944a*/
        ++v7; /*0x56944e*/
        v15 = sub_47D2B0((char)v26); /*0x569451*/
        if ( v7 > v15 ) /*0x569461*/
        {
          v7 -= v15; /*0x569463*/
          if ( ++v26 >= 0xC ) /*0x569473*/
            v26 -= 0xC; /*0x569475*/
        }
      }
      if ( v7 == v30 && v26 == GameMonth ) /*0x569488*/
      {
        GameHour = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x56948f*/
        v17 = Double_To_SInt32(GameHour); /*0x569494*/
        if ( Double_To_SInt32(a5) >= v17 ) /*0x5694a6*/
          break; /*0x5694a6*/
      }
      if ( !v7 ) /*0x5694aa*/
        break; /*0x5694aa*/
      v6 = this; /*0x569346*/
      v5 = a2; /*0x56934a*/
    }
  }
  v18 = a3; /*0x5694b0*/
  v19 = a3; /*0x5694b6*/
  if ( a3 ) /*0x5694b8*/
  {
    v20 = 0; /*0x5694ba*/
    do /*0x5694cd*/
    {
      if ( *v18 ) /*0x5694c0*/
        ++v20; /*0x5694c5*/
      v18 = (TESPackage **)v18[1]; /*0x5694c8*/
    }
    while ( v18 ); /*0x5694cd*/
    v33 = v20; /*0x5694d1*/
    LOBYTE(v18) = 1; /*0x5694d5*/
    if ( v20 ) /*0x5694d7*/
    {
      while ( (_BYTE)v18 ) /*0x5694e6*/
      {
        v32 = 0; /*0x5694ea*/
        for ( i = v19; i; i = (TESPackage **)i[1] ) /*0x5694f1*/
        {
          v22 = *i; /*0x5694f3*/
          v23 = (signed __int8 *)*v19; /*0x5694f6*/
          v18 = (TESPackage **)sub_567B80((signed __int8 *)*v19, (char *)&(*i)->members.time); /*0x5694fe*/
          if ( v18 == (TESPackage **)1 ) /*0x569506*/
          {
            if ( v22 ) /*0x56950a*/
              *v19 = v22; /*0x56950c*/
            if ( v23 ) /*0x569510*/
              *i = (TESPackage *)v23; /*0x569512*/
            v32 = 1; /*0x569515*/
          }
        }
        v24 = v33-- == 1; /*0x569521*/
        v19 = (TESPackage **)v19[1]; /*0x569526*/
        if ( v24 ) /*0x569529*/
          break; /*0x569529*/
        LOBYTE(v18) = v32; /*0x5694e0*/
      }
    }
  }
  return (char)v18; /*0x56952b*/
}
