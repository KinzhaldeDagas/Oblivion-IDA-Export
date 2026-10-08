// ActorProcessManager process-level-2 list update used during fast-travel time simulation.
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

  v4 = (ActorList *)(LODWORD(a1) + 0xC); /*0x673e95*/
  v22 = a1; /*0x673e98*/
  v5 = ActorList_ReturnHead((ActorList *)(LODWORD(a1) + 0xC)); /*0x673ea4*/
  vtbl = v5->vtbl; /*0x673ea6*/
  v7 = (Actor **)FormHeapAlloc(8u); /*0x673eab*/
  if ( v7 ) /*0x673eb5*/
  {
    *v7 = 0; /*0x673eb7*/
    v7[1] = 0; /*0x673ebd*/
    v19 = v7; /*0x673ec4*/
  }
  else
  {
    v19 = 0; /*0x673eca*/
  }
  if ( !vtbl ) /*0x673ed4*/
  {
    FormHeapFree((unsigned int)v19); /*0x673edb*/
    return; /*0x673ee9*/
  }
  LODWORD(qword_B3BB2C[0x72]) = 0x83; /*0x673eec*/
  v18 = 1; /*0x673ef6*/
  while ( *(_DWORD *)&v5->members.super.super.super.type || v5->vtbl ) /*0x673f0a*/
  {
    v8 = (Actor *)v5->vtbl; /*0x673f10*/
    v9 = 0; /*0x673f13*/
    v10 = v5->vtbl == 0; /*0x673f15*/
    v5 = *(Actor **)&v5->members.super.super.super.type; /*0x673f17*/
    if ( v10 || (v8->members.super.super.super.flags & 0x200000) != 0 ) /*0x673f28*/
      goto LABEL_49; /*0x673f28*/
    if ( v8->vtbl->super.super.IsActor((TESObjectREFR *)v8) ) /*0x673f38*/
      v9 = v8; /*0x673f3e*/
    flags = v8->members.super.super.super.flags; /*0x673f40*/
    if ( (flags & 0x800) != 0 || (flags & 0x20) != 0 || Actor::GetProcessLevel(v8) != 2 ) /*0x673f66*/
    {
      LODWORD(qword_B3BB2C[0x72]) = 0x84; /*0x67411d*/
      if ( *v19 ) /*0x674127*/
      {
        v14 = (Actor **)FormHeapAlloc(8u); /*0x67412e*/
        if ( v14 ) /*0x674138*/
        {
          *v14 = *v19; /*0x67413c*/
          v14[1] = 0; /*0x67413e*/
        }
        else
        {
          v14 = 0; /*0x674147*/
        }
        v14[1] = v19[1]; /*0x67414c*/
        v19[1] = (Actor *)v14; /*0x67414f*/
      }
      *v19 = v8; /*0x674152*/
      goto LABEL_41; /*0x674152*/
    }
    if ( !((unsigned __int8 (__thiscall *)(Actor *))v8->vtbl->super.Unk_7C)(v8) && v9 && !v9->vtbl->IsInCombat(v9, 1) ) /*0x673f8c*/
    {
      LODWORD(qword_B3BB2C[0x72]) = 0x85; /*0x673f92*/
      v8->members.super.process->Unk_08(v8->members.super.process); /*0x673fa4*/
      goto LABEL_41; /*0x673fa6*/
    }
    LODWORD(qword_B3BB2C[0x72]) = 0x86; /*0x673fad*/
    v20 = sub_6599B0((TESChildCELL *)v8); /*0x673fbc*/
    GameHour = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x673fca*/
    v12 = v20; /*0x673fdc*/
    if ( v20 == kTerrainLODQuadRayDirectionZ ) /*0x673fe1*/
    {
      sub_659A20(v8); /*0x673fe7*/
      goto LABEL_41; /*0x673fec*/
    }
    v13 = GameHour - v12; /*0x673ff7*/
    if ( v13 >= dbl_A432F0 || GameHour < v12 || 0.0 != a3 ) /*0x67401a*/
    {
      LODWORD(qword_B3BB2C[0x72]) = 0x87; /*0x674026*/
      v22 = ((double (__thiscall *)(LowProcess *, _DWORD))v8->members.super.process->SetUnk028)( /*0x67403d*/
              v8->members.super.process,
              LODWORD(a2));
      if ( v22 > 0.0 ) /*0x674050*/
      {
        v22 = v22 - *(float *)&MEMORY[0xB33E90][0xC]; /*0x674063*/
        a2 = v22; /*0x67406c*/
        ((void (*)(void))v8->members.super.process->GetUnk028)(); /*0x67406f*/
        LODWORD(qword_B3BB2C[0x72]) = 0x1F9; /*0x674071*/
        goto LABEL_41; /*0x67407b*/
      }
      a2 = a4; /*0x674091*/
      v8->vtbl->super.Unk_70((MobileObject *)v8); /*0x674094*/
      LODWORD(qword_B3BB2C[0x72]) = 0x88; /*0x674096*/
      if ( sub_4F9FA0() ) /*0x6740a0*/
        RunScripts((TESObjectREFR *)v8, v13, v22, a4); /*0x6740ab*/
      LODWORD(qword_B3BB2C[0x72]) = 0x89; /*0x6740b0*/
      if ( v8->vtbl->super.super.IsActor((TESObjectREFR *)v8) && Actor::GetDeadState(v8) == 1 ) /*0x6740d4*/
      {
        LODWORD(qword_B3BB2C[0x72]) = 0x8A; /*0x6740db*/
        sub_67B320(&v4->head.node.data, v8, 0); /*0x6740e5*/
        ProcessLevelList_InsertMobileObject(v4, (MobileObject *)v8, 1, 0, 0); /*0x6740f3*/
        v5 = 0; /*0x6740f8*/
        v18 = 0; /*0x6740fa*/
      }
      if ( Actor::GetProcessLevel(v8) != 2 ) /*0x674109*/
        v5 = 0; /*0x67410b*/
    }
    LODWORD(qword_B3BB2C[0x72]) = 0x1F9; /*0x67410d*/
LABEL_41:
    if ( v18 ) /*0x674159*/
    {
      if ( !ActorList_ReturnHead(v4) /*0x67418d*/
        || ((v15 = ActorList_ReturnHead(v4), *(_DWORD *)&v15->members.super.super.super.type) || v15->vtbl)
        && (Actor *)ActorList_ReturnHead(v4)->vtbl == v8
        && *(Actor **)&ActorList_ReturnHead(v4)->members.super.super.super.type == v5 )
      {
        v18 = 0; /*0x67419a*/
      }
      else
      {
        v5 = ActorList_ReturnHead(v4); /*0x674196*/
      }
    }
LABEL_49:
    if ( !v5 ) /*0x6741a1*/
      break; /*0x6741a1*/
  }
  ActorList_ReturnHead((ActorList *)(LODWORD(v22) + 0x18)); /*0x6741a7*/
  for ( i = v19; i; i = (Actor **)i[1] ) /*0x6741bd*/
  {
    if ( !*i ) /*0x6741c0*/
      break; /*0x6741c4*/
    sub_67B320((Actor **)(LODWORD(v22) + 0x18), *i, 0); /*0x6741cb*/
  }
  BSSimpleList_Clear(v19); /*0x6741d9*/
  FormHeapFree((unsigned int)v19); /*0x6741df*/
}
