// Builds temporary BSSimpleList of combat-group friendly entry pointers: same team byte, mount/rider equivalence, and shouldActorFight<=0. arg=0 disables process-level filter.
_DWORD *__thiscall CombatGroupManager_BuildFriendlyEntryList(int *this, PlayerCharacter *friendlyFight_, int a3)
{
  int v3; // ecx
  _DWORD *v4; // ebp
  int **v5; // eax
  int *v6; // ecx
  int *v7; // eax
  int v8; // esi
  int *i; // edi
  int v10; // esi
  int v11; // ecx
  LowProcess *process; // ecx
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  int v15; // ebp
  int v16; // ecx
  Actor *v17; // esi
  PlayerCharacter *v18; // edi
  LowProcess *v19; // ecx
  LowProcess *v20; // ecx
  LowProcess *v21; // ecx
  LowProcess *v22; // ecx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  _DWORD *v26; // eax
  float v28; // [esp+4h] [ebp-38h]
  int a6; // [esp+Ch] [ebp-30h]
  char v30; // [esp+10h] [ebp-2Ch]
  bool v31; // [esp+2Bh] [ebp-11h]
  _DWORD *v32; // [esp+2Ch] [ebp-10h]
  int v33; // [esp+30h] [ebp-Ch]
  int *v34; // [esp+34h] [ebp-8h]
  int v35; // [esp+38h] [ebp-4h]

  v3 = *this; /*0x67c887*/
  v4 = 0; /*0x67c88d*/
  v35 = v3; /*0x67c892*/
  v32 = 0; /*0x67c896*/
  v31 = 0; /*0x67c89a*/
  if ( a3 != 4 ) /*0x67c89e*/
    v31 = a3 != 0xFFFFFFFF; /*0x67c8a5*/
  if ( v3 ) /*0x67c8ac*/
  {
    while ( 1 ) /*0x67c8b8*/
    {
      v5 = *(int ***)v35; /*0x67c8b8*/
      if ( !*(_DWORD *)v35 ) /*0x67c8bc*/
        return v4; /*0x67c8bc*/
      v6 = *v5; /*0x67c8c2*/
      v7 = *v5; /*0x67c8c4*/
      if ( v7 ) /*0x67c8c8*/
      {
        while ( 1 ) /*0x67c8d0*/
        {
          v8 = *v7; /*0x67c8d0*/
          v33 = *v7; /*0x67c8d4*/
          if ( !*v7 ) /*0x67c8d8*/
            goto LABEL_11; /*0x67c8d8*/
          if ( *(PlayerCharacter **)v8 == friendlyFight_ ) /*0x67c8e0*/
            break; /*0x67c8e0*/
          v7 = (int *)v7[1]; /*0x67c8e2*/
          if ( !v7 ) /*0x67c8e7*/
            goto LABEL_11; /*0x67c8e7*/
        }
        if ( v8 ) /*0x67c8ed*/
          break; /*0x67c8ed*/
      }
LABEL_11:
      for ( i = v6; i; i = (int *)i[1] ) /*0x67c8f7*/
      {
        v10 = *i; /*0x67c900*/
        if ( !*i ) /*0x67c900*/
          break; /*0x67c904*/
        if ( *(_DWORD *)v10 ) /*0x67c90a*/
        {
          v11 = *(_DWORD *)(*(_DWORD *)v10 + 0x58); /*0x67c910*/
          if ( v11 ) /*0x67c915*/
          {
            if ( (PlayerCharacter *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 0x3D0))(v11) == friendlyFight_ /*0x67c93c*/
              || (process = friendlyFight_->super.super.super.process) != 0
              && ((int (__thiscall *)(LowProcess *))process->Unk_F3)(process) == *(_DWORD *)v10 )
            {
              if ( !v4 ) /*0x67c940*/
              {
                v13 = (_DWORD *)FormHeapAlloc(8u); /*0x67c944*/
                if ( v13 ) /*0x67c94e*/
                {
                  *v13 = 0; /*0x67c950*/
                  v13[1] = 0; /*0x67c952*/
                }
                else
                {
                  v13 = 0; /*0x67c957*/
                }
                v32 = v13; /*0x67c959*/
                v4 = v13; /*0x67c95d*/
              }
              if ( *v4 ) /*0x67c95f*/
              {
                v14 = (_DWORD *)FormHeapAlloc(8u); /*0x67c966*/
                if ( v14 ) /*0x67c970*/
                {
                  *v14 = *v4; /*0x67c975*/
                  v14[1] = 0; /*0x67c977*/
                }
                else
                {
                  v14 = 0; /*0x67c97c*/
                }
                v14[1] = v4[1]; /*0x67c981*/
                v4[1] = v14; /*0x67c984*/
              }
              *v4 = v10; /*0x67c987*/
            }
          }
        }
      }
LABEL_60:
      v35 = *(_DWORD *)(v35 + 4); /*0x67cb2d*/
      if ( !v35 ) /*0x67cb3a*/
        return v4; /*0x67cb3a*/
    }
    v34 = v6; /*0x67c99c*/
    if ( !v6 ) /*0x67c9a0*/
      goto LABEL_60; /*0x67c9a0*/
    while ( 1 ) /*0x67c9aa*/
    {
      v15 = *v34; /*0x67c9aa*/
      if ( !*v34 ) /*0x67c9ae*/
      {
LABEL_59:
        v4 = v32; /*0x67cb29*/
        goto LABEL_60; /*0x67cb29*/
      }
      if ( *(PlayerCharacter **)v15 != friendlyFight_ && *(_BYTE *)(v15 + 4) == *(_BYTE *)(v8 + 4) ) /*0x67c9c7*/
      {
        if ( !v31 ) /*0x67c9d1*/
          goto LABEL_38; /*0x67c9d1*/
        v16 = *(_DWORD *)(*(_DWORD *)v15 + 0x58); /*0x67c9d3*/
        if ( v16 ) /*0x67c9d8*/
        {
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 8))(v16) == a3 ) /*0x67c9e9*/
          {
LABEL_38:
            v17 = *(Actor **)v15; /*0x67c9ef*/
            v18 = friendlyFight_; /*0x67c9f4*/
            if ( *(_DWORD *)v15 ) /*0x67c9ef*/
            {
              v19 = v17->members.super.process; /*0x67c9fa*/
              if ( v19 ) /*0x67c9ff*/
              {
                if ( (PlayerCharacter *)((int (__thiscall *)(LowProcess *))v19->Unk_F3)(v19) == friendlyFight_ ) /*0x67ca0f*/
                  goto LABEL_51; /*0x67ca0f*/
                v20 = friendlyFight_->super.super.super.process; /*0x67ca15*/
                if ( v20 ) /*0x67ca1a*/
                {
                  if ( (Actor *)((int (__thiscall *)(LowProcess *))v20->Unk_F3)(v20) == v17 ) /*0x67ca28*/
                    goto LABEL_51; /*0x67ca28*/
                }
              }
            }
            v21 = v17->members.super.process; /*0x67ca2e*/
            if ( v21 ) /*0x67ca33*/
            {
              if ( ((int (__thiscall *)(LowProcess *))v21->Unk_F3)(v21) ) /*0x67ca3d*/
                v17 = (Actor *)((int (__thiscall *)(LowProcess *))v17->members.super.process->Unk_F3)(v17->members.super.process); /*0x67ca50*/
            }
            v22 = friendlyFight_->super.super.super.process; /*0x67ca54*/
            if ( v22 ) /*0x67ca59*/
            {
              if ( ((int (__thiscall *)(LowProcess *))v22->Unk_F3)(v22) ) /*0x67ca63*/
              {
                v18 = (PlayerCharacter *)((int (__thiscall *)(LowProcess *))friendlyFight_->super.super.super.process->Unk_F3)(friendlyFight_->super.super.super.process); /*0x67ca78*/
                if ( v18 == reference ) /*0x67ca81*/
                {
                  v18 = (PlayerCharacter *)v17; /*0x67ca83*/
                  v17 = (Actor *)reference; /*0x67ca85*/
                }
              }
            }
            LOBYTE(v23) = Actor_IsCreature(v17); /*0x67ca8c*/
            v30 = ((int (__thiscall *)(Actor *, int, int, _DWORD))v17->vtbl->IsInCombat)(v17, 1, v23, 0); /*0x67caa2*/
            *(float *)&a6 = TesObjectREF_GetDistance((TESObjectREFR *)v17, (TESObjectREFR *)v18, 0); /*0x67cab3*/
            v28 = COERCE_FLOAT(((int (__thiscall *)(Actor *))v17->vtbl->GetActorValue)(v17)); /*0x67cabe*/
            v24 = ((int (__thiscall *)(Actor *))v17->vtbl->GetDisposition)(v17); /*0x67cac9*/
            shouldActorFight(v24, (int)v18, 0, v28, 0x21, a6, v30, 0x64); /*0x67cacc*/
            if ( v25 <= 0 ) /*0x67cadb*/
            {
LABEL_51:
              *(_DWORD *)(v15 + 8) = *(_DWORD *)(v33 + 8); /*0x67cae8*/
              if ( !v32 ) /*0x67caeb*/
              {
                v26 = (_DWORD *)FormHeapAlloc(8u); /*0x67caef*/
                if ( v26 ) /*0x67caf9*/
                {
                  *v26 = 0; /*0x67cafb*/
                  v26[1] = 0; /*0x67cafd*/
                }
                else
                {
                  v26 = 0; /*0x67cb02*/
                }
                v32 = v26; /*0x67cb04*/
              }
              BSSimpleList_PushFront(v32, v15); /*0x67cb0d*/
            }
          }
          v8 = v33; /*0x67cb12*/
        }
      }
      v34 = (int *)v34[1]; /*0x67cb16*/
      if ( !v34 ) /*0x67cb23*/
        goto LABEL_59; /*0x67cb23*/
    }
  }
  return v4; /*0x67cb44*/
}
