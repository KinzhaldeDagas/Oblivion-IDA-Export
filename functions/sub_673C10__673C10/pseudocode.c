// ActorProcessManager process-level-3 list update used during fast-travel time simulation.
void __thiscall sub_673C10(ActorList *this, float a2, int a3)
{
  ActorList *v3; // ebp
  Actor *v4; // edi
  ActorVtbl *vtbl; // esi
  ActorVtbl **v6; // eax
  ActorVtbl **v7; // ebx
  ActorVtbl *v8; // esi
  bool v9; // zf
  void (__thiscall *CopyFromBase)(BaseFormComponent *, BaseFormComponent *); // eax
  double v11; // st7
  double v12; // st6
  double v13; // st5
  ActorVtbl **v14; // eax
  Actor *v15; // eax
  Actor **v16; // esi
  char v17; // [esp+17h] [ebp-9h]
  float v18; // [esp+18h] [ebp-8h]
  float GameHour; // [esp+1Ch] [ebp-4h]

  v3 = this + 2; /*0x673c16*/
  v4 = ActorList_ReturnHead(this + 2); /*0x673c21*/
  vtbl = v4->vtbl; /*0x673c23*/
  v6 = (ActorVtbl **)FormHeapAlloc(8u); /*0x673c27*/
  if ( v6 ) /*0x673c31*/
  {
    *v6 = 0; /*0x673c33*/
    v6[1] = 0; /*0x673c39*/
    v7 = v6; /*0x673c40*/
  }
  else
  {
    v7 = 0; /*0x673c44*/
  }
  if ( vtbl ) /*0x673c48*/
  {
    v17 = 1; /*0x673c4e*/
    do /*0x673e43*/
    {
      if ( !*(_DWORD *)&v4->members.super.super.super.type && !v4->vtbl ) /*0x673c5a*/
        break; /*0x673c5c*/
      v8 = v4->vtbl; /*0x673c62*/
      v9 = v4->vtbl == 0; /*0x673c64*/
      v4 = *(Actor **)&v4->members.super.super.super.type; /*0x673c66*/
      if ( !v9 ) /*0x673c68*/
      {
        CopyFromBase = v8->super.super.super.super.CopyFromBase; /*0x673c6e*/
        if ( ((unsigned int)CopyFromBase & 0x200000) == 0 ) /*0x673c79*/
        {
          if ( ((unsigned __int16)CopyFromBase & 0x800) != 0 /*0x673ca2*/
            || ((unsigned __int8)CopyFromBase & 0x20) != 0
            || Actor::GetProcessLevel((Actor *)v8) != 3 )
          {
            if ( *v7 ) /*0x673dc9*/
            {
              v14 = (ActorVtbl **)FormHeapAlloc(8u); /*0x673dd0*/
              if ( v14 ) /*0x673dda*/
              {
                *v14 = *v7; /*0x673dde*/
                v14[1] = 0; /*0x673de0*/
              }
              else
              {
                v14 = 0; /*0x673de9*/
              }
              v14[1] = v7[1]; /*0x673dee*/
              v7[1] = (ActorVtbl *)v14; /*0x673df1*/
            }
            *v7 = v8; /*0x673df4*/
          }
          else if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))v8->super.super.super.super.InitializeComponent /*0x673cd4*/
                     + 0x7C))(v8)
                 || (*((unsigned __int8 (__thiscall **)(ActorVtbl *))v8->super.super.super.super.InitializeComponent
                     + 0x64))(v8)
                 && (*((unsigned __int8 (__thiscall **)(ActorVtbl *, int))v8->super.super.super.super.InitializeComponent
                     + 0xCD))(
                      v8,
                      1) )
          {
            v18 = sub_6599B0((TESChildCELL *)v8); /*0x673cf0*/
            GameHour = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x673cfe*/
            v11 = v18; /*0x673d10*/
            if ( v18 == kTerrainLODQuadRayDirectionZ ) /*0x673d15*/
            {
              sub_659A20(v8); /*0x673d1b*/
            }
            else
            {
              v12 = GameHour; /*0x673d25*/
              v13 = GameHour - v11; /*0x673d2b*/
              if ( v13 >= dbl_A2F928 || v12 < v11 || 0.0 != a2 ) /*0x673d4e*/
              {
                (*((void (__thiscall **)(ActorVtbl *, _DWORD))v8->super.super.super.super.InitializeComponent + 0x70))( /*0x673d6c*/
                  v8,
                  LODWORD(a2));
                if ( sub_4F9FA0() ) /*0x673d6e*/
                  RunScripts((TESObjectREFR *)v8, v13, v12, a2); /*0x673d79*/
                if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))v8->super.super.super.super.InitializeComponent /*0x673d88*/
                      + 0x64))(v8) )
                {
                  if ( Actor::GetDeadState((Actor *)v8) == 1 ) /*0x673d98*/
                  {
                    sub_67B320(&v3->head.node.data, (Actor *)v8, 0); /*0x673d9f*/
                    ProcessLevelList_InsertMobileObject(v3, (MobileObject *)v8, 1, 0, 0); /*0x673dad*/
                    v4 = 0; /*0x673db2*/
                    v17 = 0; /*0x673db4*/
                  }
                }
                if ( Actor::GetProcessLevel((Actor *)v8) != 3 ) /*0x673dc3*/
                  v4 = 0; /*0x673dc5*/
              }
            }
          }
          else
          {
            (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v8->super.super.super.Unk_16 + 0x20))(v8->super.super.super.Unk_16); /*0x673ce2*/
          }
          if ( v17 ) /*0x673dfb*/
          {
            if ( !ActorList_ReturnHead(v3) /*0x673e2f*/
              || ((v15 = ActorList_ReturnHead(v3), *(_DWORD *)&v15->members.super.super.super.type) || v15->vtbl)
              && ActorList_ReturnHead(v3)->vtbl == v8
              && *(Actor **)&ActorList_ReturnHead(v3)->members.super.super.super.type == v4 )
            {
              v17 = 0; /*0x673e3c*/
            }
            else
            {
              v4 = ActorList_ReturnHead(v3); /*0x673e38*/
            }
          }
        }
      }
    }
    while ( v4 ); /*0x673e43*/
    ActorList_ReturnHead(v3); /*0x673e4b*/
    v16 = (Actor **)v7; /*0x673e52*/
    if ( v7 ) /*0x673e54*/
    {
      do /*0x673e6b*/
      {
        if ( !*v16 ) /*0x673e56*/
          break; /*0x673e5a*/
        sub_67B320(&v3->head.node.data, *v16, 0); /*0x673e61*/
        v16 = (Actor **)v16[1]; /*0x673e66*/
      }
      while ( v16 ); /*0x673e6b*/
    }
    BSSimpleList_Clear(v7); /*0x673e6f*/
    FormHeapFree((unsigned int)v7); /*0x673e75*/
  }
}
