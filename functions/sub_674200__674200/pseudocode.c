// ActorProcessManager process-level-1 list update used during fast-travel time simulation.
void __userpurge sub_674200(ActorList *a1@<ecx>, float a2@<edi>, float a3, float a4)
{
  Actor *v5; // ebp
  Actor **v6; // eax
  Actor **v7; // edi
  ActorVtbl *vtbl; // esi
  bool v9; // zf
  void (__thiscall *CopyFromBase)(BaseFormComponent *, BaseFormComponent *); // eax
  MobileObject *v11; // edi
  double v12; // st5
  Actor *v13; // eax
  Actor **v14; // eax
  Actor *v15; // esi
  char v17; // [esp+17h] [ebp-Dh]
  Actor **v18; // [esp+18h] [ebp-Ch]
  float v19; // [esp+1Ch] [ebp-8h]
  float GameHour; // [esp+20h] [ebp-4h]
  float retaddr; // [esp+24h] [ebp+0h]

  v5 = ActorList_ReturnHead(a1); /*0x67420d*/
  v17 = 1; /*0x674214*/
  if ( v5->vtbl ) /*0x674211*/
  {
    v6 = (Actor **)FormHeapAlloc(8u); /*0x674222*/
    if ( v6 ) /*0x67422c*/
    {
      v7 = v6; /*0x67422e*/
      *v6 = 0; /*0x674230*/
      v6[1] = 0; /*0x674232*/
      v18 = v6; /*0x674235*/
    }
    else
    {
      v18 = 0; /*0x67423b*/
      v7 = 0; /*0x67423f*/
    }
    while ( 1 ) /*0x674241*/
    {
      if ( !*(_DWORD *)&v5->members.super.super.super.type && !v5->vtbl ) /*0x67424b*/
      {
LABEL_47:
        ActorList_ReturnHead(a1); /*0x674497*/
        if ( v18 ) /*0x6744a4*/
        {
          do /*0x6744d6*/
          {
            v15 = *v7; /*0x6744a6*/
            if ( !*v7 ) /*0x6744a6*/
              break; /*0x6744aa*/
            sub_67B320(&a1->head.node.data, v15, 0); /*0x6744b1*/
            if ( ((unsigned __int8 (__thiscall *)(Actor *))v15->vtbl->super.Unk_7F)(v15) ) /*0x6744c0*/
              v15->vtbl->super.super.super.Destroy((TESForm *)v15, 1); /*0x6744cf*/
            v7 = (Actor **)v7[1]; /*0x6744d1*/
          }
          while ( v7 ); /*0x6744d6*/
        }
        BSSimpleList_Clear(v18); /*0x6744da*/
        FormHeapFree((unsigned int)v18); /*0x6744e0*/
        return; /*0x6744e0*/
      }
      vtbl = v5->vtbl; /*0x674251*/
      v9 = v5->vtbl == 0; /*0x674254*/
      v5 = *(Actor **)&v5->members.super.super.super.type; /*0x674256*/
      if ( !v9 ) /*0x674258*/
      {
        CopyFromBase = vtbl->super.super.super.super.CopyFromBase; /*0x67425e*/
        if ( ((unsigned int)CopyFromBase & 0x200000) == 0 ) /*0x674269*/
          break; /*0x674269*/
      }
LABEL_46:
      if ( !v5 ) /*0x674491*/
        goto LABEL_47; /*0x674491*/
    }
    if ( ((unsigned __int16)CopyFromBase & 0x800) == 0 /*0x674292*/
      && ((unsigned __int8)CopyFromBase & 0x20) == 0
      && Actor::GetProcessLevel((Actor *)vtbl) == 1 )
    {
      v19 = sub_6599B0((TESChildCELL *)vtbl); /*0x67429f*/
      GameHour = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x6742ad*/
      if ( kTerrainLODQuadRayDirectionZ == v19 ) /*0x6742c2*/
      {
        sub_659A20(vtbl); /*0x6742c4*/
      }
      else
      {
        v11 = 0; /*0x6742d3*/
        if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))vtbl->super.super.super.super.InitializeComponent + 0x64))(vtbl) ) /*0x6742d5*/
          v11 = (MobileObject *)vtbl; /*0x6742db*/
        v12 = GameHour - v19; /*0x6742eb*/
        if ( v12 >= dbl_A74560 || v19 > (double)GameHour || 0.0 != a3 ) /*0x67430e*/
        {
          retaddr = ((double (__thiscall *)(void (__thiscall *)(TESForm *), _DWORD))*(_DWORD *)(*(_DWORD *)vtbl->super.super.super.Unk_16 /*0x67437a*/
                                                                                              + 0x168))(
                      vtbl->super.super.super.Unk_16,
                      LODWORD(a2));
          if ( retaddr <= 0.0 ) /*0x67438d*/
          {
            if ( v11 ) /*0x6743b7*/
            {
              if ( !MobileObject_GetCharProxy(v11) ) /*0x6743bb*/
              {
                if ( v11->vtbl->super.GetNiNode((TESObjectREFR *)v11) ) /*0x6743ce*/
                  v11->vtbl->super.Unk_52((TESObjectREFR *)v11); /*0x6743de*/
              }
            }
            a2 = a4; /*0x6743ef*/
            (*((void (__thiscall **)(ActorVtbl *))vtbl->super.super.super.super.InitializeComponent + 0x70))(vtbl); /*0x6743f2*/
            if ( sub_4F9FA0() ) /*0x6743f4*/
              RunScripts((TESObjectREFR *)vtbl, v12, retaddr, a4); /*0x6743ff*/
            if ( v11 ) /*0x674406*/
            {
              if ( Actor::GetDeadState((Actor *)v11) == 1 ) /*0x674412*/
              {
                sub_67B320(&a1->head.node.data, (Actor *)vtbl, 0); /*0x674419*/
                ProcessLevelList_InsertMobileObject(a1, (MobileObject *)vtbl, 1, 0, 0); /*0x674427*/
                v5 = 0; /*0x67442c*/
                v17 = 0; /*0x67442e*/
              }
            }
            if ( Actor::GetProcessLevel((Actor *)vtbl) != 1 ) /*0x67443d*/
              v5 = 0; /*0x674443*/
          }
          else
          {
            retaddr = retaddr - *(float *)&MEMORY[0xB33E90][0xC]; /*0x6743a0*/
            a2 = retaddr; /*0x6743a9*/
            (*(void (**)(void))(*(_DWORD *)vtbl->super.super.super.Unk_16 + 0x164))(); /*0x6743ac*/
          }
        }
        v7 = v18; /*0x674310*/
      }
      goto LABEL_20; /*0x6742c9*/
    }
    if ( *v7 ) /*0x67444a*/
    {
      v14 = (Actor **)FormHeapAlloc(8u); /*0x674451*/
      if ( v14 ) /*0x67445b*/
      {
        *v14 = *v7; /*0x67445f*/
        v14[1] = 0; /*0x674461*/
        v14[1] = v7[1]; /*0x67446b*/
        v7[1] = (Actor *)v14; /*0x67446e*/
        *v7 = (Actor *)vtbl; /*0x674471*/
        goto LABEL_20; /*0x674473*/
      }
      *(_DWORD *)4 = v7[1]; /*0x67447d*/
      v7[1] = 0; /*0x674480*/
    }
    *v7 = (Actor *)vtbl; /*0x674483*/
LABEL_20:
    if ( v17 ) /*0x674319*/
    {
      if ( !ActorList_ReturnHead(a1) /*0x674355*/
        || ((v13 = ActorList_ReturnHead(a1), *(_DWORD *)&v13->members.super.super.super.type) || v13->vtbl)
        && ActorList_ReturnHead(a1)->vtbl == vtbl
        && *(Actor **)&ActorList_ReturnHead(a1)->members.super.super.super.type == v5 )
      {
        v17 = 0; /*0x67448a*/
      }
      else
      {
        v5 = ActorList_ReturnHead(a1); /*0x674362*/
      }
    }
    goto LABEL_46; /*0x674364*/
  }
}
