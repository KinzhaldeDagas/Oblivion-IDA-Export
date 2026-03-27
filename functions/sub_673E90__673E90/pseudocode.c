void __userpurge sub_673E90(float a1@<ecx>, float a2@<edi>, float a3, float a4)
{
  ActorList *v4; // ebx
  Actor *v5; // ebp
  ActorVtbl *vtbl; // esi
  Actor **v7; // eax
  Actor *v8; // esi
  Actor *v9; // edi
  bool v10; // zf
  TESForm::FormFlags flags; // eax
  double v12; // st7
  double v13; // st5
  Actor **v14; // eax
  Actor *v15; // eax
  Actor **i; // esi
  char v18; // [esp+17h] [ebp-11h]
  Actor **v19; // [esp+18h] [ebp-10h]
  float v20; // [esp+1Ch] [ebp-Ch]
  float GameHour; // [esp+20h] [ebp-8h]
  float v22; // [esp+24h] [ebp-4h]

  v4 = (ActorList *)(LODWORD(a1) + 0xC);
  v22 = a1;
  v5 = sub_7616D0((ActorList *)(LODWORD(a1) + 0xC));
  vtbl = v5->vtbl;
  v7 = (Actor **)FormHeapAlloc(8u);
  if ( v7 )
  {
    *v7 = 0;
    v7[1] = 0;
    v19 = v7;
  }
  else
  {
    v19 = 0;
  }
  if ( !vtbl )
  {
    FormHeapFree((unsigned int)v19);
    return;
  }
  dword_B3BCF4 = 0x83;
  v18 = 1;
  while ( *(_DWORD *)&v5->members.super.super.super.type || v5->vtbl )
  {
    v8 = (Actor *)v5->vtbl;
    v9 = 0;
    v10 = v5->vtbl == 0;
    v5 = *(Actor **)&v5->members.super.super.super.type;
    if ( v10 || (v8->members.super.super.super.flags & 0x200000) != 0 )
      goto LABEL_49;
    if ( v8->vtbl->super.super.IsActor((TESObjectREFR *)v8) )
      v9 = v8;
    flags = v8->members.super.super.super.flags;
    if ( (flags & 0x800) != 0 || (flags & 0x20) != 0 || Actor::GetProcessLevel(v8) != 2 )
    {
      dword_B3BCF4 = 0x84;
      if ( *v19 )
      {
        v14 = (Actor **)FormHeapAlloc(8u);
        if ( v14 )
        {
          *v14 = *v19;
          v14[1] = 0;
        }
        else
        {
          v14 = 0;
        }
        v14[1] = v19[1];
        v19[1] = (Actor *)v14;
      }
      *v19 = v8;
      goto LABEL_41;
    }
    if ( !((unsigned __int8 (__thiscall *)(Actor *))v8->vtbl->super.Unk_7C)(v8) && v9 && !v9->vtbl->IsInCombat(v9, 1) )
    {
      dword_B3BCF4 = 0x85;
      v8->members.super.process->Unk_08(v8->members.super.process);
      goto LABEL_41;
    }
    dword_B3BCF4 = 0x86;
    v20 = sub_6599B0((TESChildCELL *)v8);
    GameHour = TimeGlobals_GetGameHour(&TimeGlobals);
    v12 = v20;
    if ( v20 == flt_A30634 )
    {
      sub_659A20(v8);
      goto LABEL_41;
    }
    v13 = GameHour - v12;
    if ( v13 >= dbl_A432F0 || GameHour < v12 || 0.0 != a3 )
    {
      dword_B3BCF4 = 0x87;
      v22 = ((double (__thiscall *)(LowProcess *, _DWORD))v8->members.super.process->SetUnk028)(
              v8->members.super.process,
              LODWORD(a2));
      if ( v22 > 0.0 )
      {
        v22 = v22 - flt_B33E9C;
        a2 = v22;
        ((void (*)(void))v8->members.super.process->GetUnk028)();
        dword_B3BCF4 = 0x1F9;
        goto LABEL_41;
      }
      a2 = a4;
      v8->vtbl->super.Unk_70((MobileObject *)v8);
      dword_B3BCF4 = 0x88;
      if ( sub_4F9FA0() )
        RunScripts((TESObjectREFR *)v8, v13, v22, a4);
      dword_B3BCF4 = 0x89;
      if ( v8->vtbl->super.super.IsActor((TESObjectREFR *)v8)
        && Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup((Concurrency::details::SchedulerBase *)v8) == (struct Concurrency::details::ScheduleGroupBase *)1 )
      {
        dword_B3BCF4 = 0x8A;
        sub_67B320(v4, v8, 0);
        sub_67B260((int)v4, (int)v8, 1, 0, 0);
        v5 = 0;
        v18 = 0;
      }
      if ( Actor::GetProcessLevel(v8) != 2 )
        v5 = 0;
    }
    dword_B3BCF4 = 0x1F9;
LABEL_41:
    if ( v18 )
    {
      if ( !sub_7616D0(v4)
        || ((v15 = sub_7616D0(v4), *(_DWORD *)&v15->members.super.super.super.type) || v15->vtbl)
        && (Actor *)sub_7616D0(v4)->vtbl == v8
        && *(Actor **)&sub_7616D0(v4)->members.super.super.super.type == v5 )
      {
        v18 = 0;
      }
      else
      {
        v5 = sub_7616D0(v4);
      }
    }
LABEL_49:
    if ( !v5 )
      break;
  }
  sub_7616D0((ActorList *)(LODWORD(v22) + 0x18));
  for ( i = v19; i; i = (Actor **)i[1] )
  {
    if ( !*i )
      break;
    sub_67B320((_DWORD *)(LODWORD(v22) + 0x18), *i, 0);
  }
  BSSimpleList_Clear(v19);
  FormHeapFree((unsigned int)v19);
}
