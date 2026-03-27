void __userpurge sub_674200(ActorList *a1@<ecx>, float a2@<edi>, float a3, float a4)
{
  Actor *v5; // ebp
  ActorVtbl **v6; // eax
  ActorVtbl **v7; // edi
  ActorVtbl *vtbl; // esi
  bool v9; // zf
  void (__thiscall *CopyFromBase)(BaseFormComponent *, BaseFormComponent *); // eax
  MobileObject *v11; // edi
  double v12; // st5
  Actor *v13; // eax
  ActorVtbl **v14; // eax
  ActorVtbl *v15; // esi
  char v17; // [esp+17h] [ebp-Dh]
  ActorVtbl **v18; // [esp+18h] [ebp-Ch]
  float v19; // [esp+1Ch] [ebp-8h]
  float GameHour; // [esp+20h] [ebp-4h]
  float retaddr; // [esp+24h] [ebp+0h]

  v5 = sub_7616D0(a1);
  v17 = 1;
  if ( v5->vtbl )
  {
    v6 = (ActorVtbl **)FormHeapAlloc(8u);
    if ( v6 )
    {
      v7 = v6;
      *v6 = 0;
      v6[1] = 0;
      v18 = v6;
    }
    else
    {
      v18 = 0;
      v7 = 0;
    }
    while ( 1 )
    {
      if ( !*(_DWORD *)&v5->members.super.super.super.type && !v5->vtbl )
      {
LABEL_47:
        sub_7616D0(a1);
        if ( v18 )
        {
          do
          {
            v15 = *v7;
            if ( !*v7 )
              break;
            sub_67B320(a1, v15, 0);
            if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))v15->super.super.super.super.InitializeComponent + 0x7F))(v15) )
              (*((void (__thiscall **)(ActorVtbl *, int))v15->super.super.super.super.InitializeComponent + 4))(v15, 1);
            v7 = (ActorVtbl **)v7[1];
          }
          while ( v7 );
        }
        BSSimpleList_Clear(v18);
        FormHeapFree((unsigned int)v18);
        return;
      }
      vtbl = v5->vtbl;
      v9 = v5->vtbl == 0;
      v5 = *(Actor **)&v5->members.super.super.super.type;
      if ( !v9 )
      {
        CopyFromBase = vtbl->super.super.super.super.CopyFromBase;
        if ( ((unsigned int)CopyFromBase & 0x200000) == 0 )
          break;
      }
LABEL_46:
      if ( !v5 )
        goto LABEL_47;
    }
    if ( ((unsigned __int16)CopyFromBase & 0x800) == 0
      && ((unsigned __int8)CopyFromBase & 0x20) == 0
      && Actor::GetProcessLevel((Actor *)vtbl) == 1 )
    {
      v19 = sub_6599B0((TESChildCELL *)vtbl);
      GameHour = TimeGlobals_GetGameHour(&TimeGlobals);
      if ( flt_A30634 == v19 )
      {
        sub_659A20(vtbl);
      }
      else
      {
        v11 = 0;
        if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))vtbl->super.super.super.super.InitializeComponent + 0x64))(vtbl) )
          v11 = (MobileObject *)vtbl;
        v12 = GameHour - v19;
        if ( v12 >= dbl_A74560 || v19 > (double)GameHour || 0.0 != a3 )
        {
          retaddr = ((double (__thiscall *)(void (__thiscall *)(TESForm *), _DWORD))*(_DWORD *)(*(_DWORD *)vtbl->super.super.super.Unk_16
                                                                                              + 0x168))(
                      vtbl->super.super.super.Unk_16,
                      LODWORD(a2));
          if ( retaddr <= 0.0 )
          {
            if ( v11 )
            {
              if ( !MobileObject_GetCharProxy(v11) )
              {
                if ( v11->vtbl->super.GetNiNode((TESObjectREFR *)v11) )
                  v11->vtbl->super.Unk_52((TESObjectREFR *)v11);
              }
            }
            a2 = a4;
            (*((void (__thiscall **)(ActorVtbl *))vtbl->super.super.super.super.InitializeComponent + 0x70))(vtbl);
            if ( sub_4F9FA0() )
              RunScripts((TESObjectREFR *)vtbl, v12, retaddr, a4);
            if ( v11 )
            {
              if ( Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup((Concurrency::details::SchedulerBase *)v11) == (struct Concurrency::details::ScheduleGroupBase *)1 )
              {
                sub_67B320(a1, vtbl, 0);
                sub_67B260((int)a1, (int)vtbl, 1, 0, 0);
                v5 = 0;
                v17 = 0;
              }
            }
            if ( Actor::GetProcessLevel((Actor *)vtbl) != 1 )
              v5 = 0;
          }
          else
          {
            retaddr = retaddr - flt_B33E9C;
            a2 = retaddr;
            (*(void (**)(void))(*(_DWORD *)vtbl->super.super.super.Unk_16 + 0x164))();
          }
        }
        v7 = v18;
      }
      goto LABEL_20;
    }
    if ( *v7 )
    {
      v14 = (ActorVtbl **)FormHeapAlloc(8u);
      if ( v14 )
      {
        *v14 = *v7;
        v14[1] = 0;
        v14[1] = v7[1];
        v7[1] = (ActorVtbl *)v14;
        *v7 = vtbl;
        goto LABEL_20;
      }
      *(_DWORD *)4 = v7[1];
      v7[1] = 0;
    }
    *v7 = vtbl;
LABEL_20:
    if ( v17 )
    {
      if ( !sub_7616D0(a1)
        || ((v13 = sub_7616D0(a1), *(_DWORD *)&v13->members.super.super.super.type) || v13->vtbl)
        && sub_7616D0(a1)->vtbl == vtbl
        && *(Actor **)&sub_7616D0(a1)->members.super.super.super.type == v5 )
      {
        v17 = 0;
      }
      else
      {
        v5 = sub_7616D0(a1);
      }
    }
    goto LABEL_46;
  }
}
