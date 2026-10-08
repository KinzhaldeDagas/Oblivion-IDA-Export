Actor **__thiscall sub_6758E0(ActorProcessManager *this, TESObjectREFR *a2, int a3, char a4)
{
  Actor **v4; // ebp
  ActorProcessManager *v5; // esi
  int v6; // edi
  Actor *ListHead; // eax
  Actor *vtbl; // esi
  int v9; // eax
  _DWORD *v10; // ecx
  Actor **v11; // eax
  Actor **v12; // eax
  TESPackage *CurrentPackage; // edi
  Actor **v14; // eax
  Actor **v15; // eax
  Actor *v17; // [esp+10h] [ebp-Ch]
  int v18; // [esp+14h] [ebp-8h]

  v4 = 0; /*0x6758e9*/
  v5 = this; /*0x6758eb*/
  v6 = 0; /*0x6758ed*/
  v18 = 0; /*0x6758f3*/
  do /*0x675b19*/
  {
    if ( v6 ) /*0x6758f9*/
    {
      switch ( v6 ) /*0x675901*/
      {
        case 1: /*0x675901*/
          ListHead = ActorProcessManager_GetListHead(v5, 1); /*0x675904*/
          break;
        case 2: /*0x675901*/
          ListHead = ActorProcessManager_GetListHead(v5, 2); /*0x67590c*/
          break;
        case 3: /*0x675901*/
          ListHead = ActorProcessManager_GetListHead(v5, 3); /*0x67591a*/
          break;
        default:
          goto LABEL_62; /*0x675911*/
      }
    }
    else
    {
      ListHead = ActorProcessManager_GetListHead(v5, 0); /*0x6758fc*/
    }
    v17 = ActorList_ReturnHead((ActorList *)ListHead); /*0x675928*/
    if ( v17 ) /*0x67592c*/
    {
      while ( 1 ) /*0x675936*/
      {
        vtbl = (Actor *)v17->vtbl; /*0x675936*/
        if ( !v17->vtbl || a4 && v6 ) /*0x675948*/
        {
LABEL_61:
          v5 = this; /*0x675b0b*/
          break; /*0x675b0b*/
        }
        if ( vtbl->vtbl->super.super.IsActor((TESObjectREFR *)v17->vtbl) ) /*0x675958*/
        {
          if ( !vtbl->vtbl->IsInCombat(vtbl, 1) || a3 != 0xC ) /*0x67597d*/
          {
            CurrentPackage = Actor::GetCurrentPackage(vtbl); /*0x675a77*/
            if ( CurrentPackage ) /*0x675a7b*/
            {
              if ( (Actor_IsGuardClass(vtbl) || a3 != 0xF) /*0x675aaa*/
                && vtbl->members.super.process->GetUnk02C(vtbl->members.super.process) == a2
                && CurrentPackage->members.type == a3 )
              {
                if ( !v4 ) /*0x675aae*/
                {
                  v14 = (Actor **)FormHeapAlloc(8u); /*0x675ab2*/
                  if ( v14 ) /*0x675abc*/
                  {
                    *v14 = 0; /*0x675abe*/
                    v14[1] = 0; /*0x675ac0*/
                  }
                  else
                  {
                    v14 = 0; /*0x675ac5*/
                  }
                  v4 = v14; /*0x675ac7*/
                }
                if ( *v4 ) /*0x675ac9*/
                {
                  v15 = (Actor **)FormHeapAlloc(8u); /*0x675ad0*/
                  if ( v15 ) /*0x675ada*/
                  {
                    *v15 = *v4; /*0x675adf*/
                    v15[1] = 0; /*0x675ae1*/
                  }
                  else
                  {
                    v15 = 0; /*0x675ae6*/
                  }
                  v15[1] = v4[1]; /*0x675aeb*/
                  v4[1] = (Actor *)v15; /*0x675aee*/
                }
                *v4 = vtbl; /*0x675af1*/
              }
            }
            v6 = v18; /*0x675af4*/
            goto LABEL_60; /*0x675af4*/
          }
          v9 = sub_5E03A0(vtbl); /*0x675985*/
          v10 = 0; /*0x67598a*/
          if ( *(_BYTE *)(v9 + 0x20) == 0xC ) /*0x675990*/
            v10 = (_DWORD *)v9; /*0x675992*/
          if ( a4 ) /*0x675998*/
          {
            if ( !v10 || (TESObjectREFR *)CombatController_GetCurrentTarget((int)v10) != a2 ) /*0x6759ab*/
              goto LABEL_60; /*0x6759ab*/
            if ( !v4 ) /*0x6759b3*/
            {
              v11 = (Actor **)FormHeapAlloc(8u); /*0x6759b7*/
              if ( v11 ) /*0x6759c1*/
              {
                *v11 = 0; /*0x6759c3*/
                v11[1] = 0; /*0x6759c5*/
              }
              else
              {
                v11 = 0; /*0x6759ca*/
              }
              v4 = v11; /*0x6759cc*/
            }
            if ( v6 != 2 || !Actor_IsCreature(vtbl) && TESObjectREFR_IsPersistent((TESObjectREFR *)vtbl) ) /*0x6759e4*/
            {
LABEL_42:
              BSSimpleList_PushFront(v4, (int)vtbl); /*0x675a63*/
              goto LABEL_60; /*0x675a6b*/
            }
          }
          else
          {
            if ( !v10 || !sub_613670(v10, (int)a2) ) /*0x675a0c*/
              goto LABEL_60; /*0x675a13*/
            if ( !v4 ) /*0x675a1b*/
            {
              v12 = (Actor **)FormHeapAlloc(8u); /*0x675a1f*/
              if ( v12 ) /*0x675a29*/
              {
                *v12 = 0; /*0x675a2b*/
                v12[1] = 0; /*0x675a2d*/
              }
              else
              {
                v12 = 0; /*0x675a32*/
              }
              v4 = v12; /*0x675a34*/
            }
            if ( v6 != 2 || !Actor_IsCreature(vtbl) && TESObjectREFR_IsPersistent((TESObjectREFR *)vtbl) ) /*0x675a48*/
              goto LABEL_42; /*0x675a4f*/
          }
          ((void (__thiscall *)(Actor *, _DWORD))vtbl->vtbl->Unk_D0)(vtbl, 0); /*0x6759f8*/
        }
LABEL_60:
        v17 = *(Actor **)&v17->members.super.super.super.type; /*0x675af8*/
        if ( !v17 ) /*0x675b05*/
          goto LABEL_61; /*0x675b05*/
      }
    }
LABEL_62:
    v18 = ++v6; /*0x675b15*/
  }
  while ( v6 < 4 ); /*0x675b19*/
  return v4; /*0x675b1f*/
}
