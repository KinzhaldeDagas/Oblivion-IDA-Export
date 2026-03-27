void __thiscall sub_673C10(ActorList *this, float a2, int a3)
{
  ActorList *v3; // ebp
  Actor *v4; // edi
  ActorVtbl *vtbl; // esi
  int *v6; // eax
  int *v7; // ebx
  int v8; // esi
  bool v9; // zf
  int v10; // eax
  double v11; // st7
  double v12; // st6
  double v13; // st5
  int *v14; // eax
  Actor *v15; // eax
  int *i; // esi
  char v17; // [esp+17h] [ebp-9h]
  float v18; // [esp+18h] [ebp-8h]
  float GameHour; // [esp+1Ch] [ebp-4h]

  v3 = this + 2;
  v4 = sub_7616D0(this + 2);
  vtbl = v4->vtbl;
  v6 = (int *)FormHeapAlloc(8u);
  if ( v6 )
  {
    *v6 = 0;
    v6[1] = 0;
    v7 = v6;
  }
  else
  {
    v7 = 0;
  }
  if ( vtbl )
  {
    v17 = 1;
    do
    {
      if ( !*(_DWORD *)&v4->members.super.super.super.type && !v4->vtbl )
        break;
      v8 = (int)v4->vtbl;
      v9 = v4->vtbl == 0;
      v4 = *(Actor **)&v4->members.super.super.super.type;
      if ( !v9 )
      {
        v10 = *(_DWORD *)(v8 + 8);
        if ( (v10 & 0x200000) == 0 )
        {
          if ( (v10 & 0x800) != 0 || (v10 & 0x20) != 0 || Actor::GetProcessLevel((Actor *)v8) != 3 )
          {
            if ( *v7 )
            {
              v14 = (int *)FormHeapAlloc(8u);
              if ( v14 )
              {
                *v14 = *v7;
                v14[1] = 0;
              }
              else
              {
                v14 = 0;
              }
              v14[1] = v7[1];
              v7[1] = (int)v14;
            }
            *v7 = v8;
          }
          else if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 0x1F0))(v8)
                 || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 0x190))(v8)
                 && (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v8 + 0x334))(v8, 1) )
          {
            v18 = sub_6599B0((TESChildCELL *)v8);
            GameHour = TimeGlobals_GetGameHour(&TimeGlobals);
            v11 = v18;
            if ( v18 == flt_A30634 )
            {
              sub_659A20((_DWORD **)v8);
            }
            else
            {
              v12 = GameHour;
              v13 = GameHour - v11;
              if ( v13 >= dbl_A2F928 || v12 < v11 || 0.0 != a2 )
              {
                (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 0x1C0))(v8, LODWORD(a2));
                if ( sub_4F9FA0() )
                  RunScripts((TESObjectREFR *)v8, v13, v12, a2);
                if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 0x190))(v8) )
                {
                  if ( Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup((Concurrency::details::SchedulerBase *)v8) == (struct Concurrency::details::ScheduleGroupBase *)1 )
                  {
                    sub_67B320(v3, (_DWORD *)v8, 0);
                    sub_67B260((int)v3, v8, 1, 0, 0);
                    v4 = 0;
                    v17 = 0;
                  }
                }
                if ( Actor::GetProcessLevel((Actor *)v8) != 3 )
                  v4 = 0;
              }
            }
          }
          else
          {
            (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v8 + 0x58) + 0x20))(*(_DWORD *)(v8 + 0x58));
          }
          if ( v17 )
          {
            if ( !sub_7616D0(v3)
              || ((v15 = sub_7616D0(v3), *(_DWORD *)&v15->members.super.super.super.type) || v15->vtbl)
              && sub_7616D0(v3)->vtbl == (ActorVtbl *)v8
              && *(Actor **)&sub_7616D0(v3)->members.super.super.super.type == v4 )
            {
              v17 = 0;
            }
            else
            {
              v4 = sub_7616D0(v3);
            }
          }
        }
      }
    }
    while ( v4 );
    sub_7616D0(v3);
    for ( i = v7; i; i = (int *)i[1] )
    {
      if ( !*i )
        break;
      sub_67B320(v3, (_DWORD *)*i, 0);
    }
    BSSimpleList_Clear(v7);
    FormHeapFree((unsigned int)v7);
  }
}
