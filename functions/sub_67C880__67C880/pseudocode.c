_DWORD *__thiscall sub_67C880(int *this, PlayerCharacter *friendlyFight_, int a3)
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

  v3 = *this;
  v4 = 0;
  v35 = v3;
  v32 = 0;
  v31 = 0;
  if ( a3 != 4 )
    v31 = a3 != 0xFFFFFFFF;
  if ( v3 )
  {
    while ( 1 )
    {
      v5 = *(int ***)v35;
      if ( !*(_DWORD *)v35 )
        return v4;
      v6 = *v5;
      v7 = *v5;
      if ( v7 )
      {
        while ( 1 )
        {
          v8 = *v7;
          v33 = *v7;
          if ( !*v7 )
            goto LABEL_11;
          if ( *(PlayerCharacter **)v8 == friendlyFight_ )
            break;
          v7 = (int *)v7[1];
          if ( !v7 )
            goto LABEL_11;
        }
        if ( v8 )
          break;
      }
LABEL_11:
      for ( i = v6; i; i = (int *)i[1] )
      {
        v10 = *i;
        if ( !*i )
          break;
        if ( *(_DWORD *)v10 )
        {
          v11 = *(_DWORD *)(*(_DWORD *)v10 + 0x58);
          if ( v11 )
          {
            if ( (PlayerCharacter *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 0x3D0))(v11) == friendlyFight_
              || (process = friendlyFight_->super.super.super.process) != 0
              && ((int (__thiscall *)(LowProcess *))process->Unk_F3)(process) == *(_DWORD *)v10 )
            {
              if ( !v4 )
              {
                v13 = (_DWORD *)FormHeapAlloc(8u);
                if ( v13 )
                {
                  *v13 = 0;
                  v13[1] = 0;
                }
                else
                {
                  v13 = 0;
                }
                v32 = v13;
                v4 = v13;
              }
              if ( *v4 )
              {
                v14 = (_DWORD *)FormHeapAlloc(8u);
                if ( v14 )
                {
                  *v14 = *v4;
                  v14[1] = 0;
                }
                else
                {
                  v14 = 0;
                }
                v14[1] = v4[1];
                v4[1] = v14;
              }
              *v4 = v10;
            }
          }
        }
      }
LABEL_60:
      v35 = *(_DWORD *)(v35 + 4);
      if ( !v35 )
        return v4;
    }
    v34 = v6;
    if ( !v6 )
      goto LABEL_60;
    while ( 1 )
    {
      v15 = *v34;
      if ( !*v34 )
      {
LABEL_59:
        v4 = v32;
        goto LABEL_60;
      }
      if ( *(PlayerCharacter **)v15 != friendlyFight_ && *(_BYTE *)(v15 + 4) == *(_BYTE *)(v8 + 4) )
      {
        if ( !v31 )
          goto LABEL_38;
        v16 = *(_DWORD *)(*(_DWORD *)v15 + 0x58);
        if ( v16 )
        {
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 8))(v16) == a3 )
          {
LABEL_38:
            v17 = *(Actor **)v15;
            v18 = friendlyFight_;
            if ( *(_DWORD *)v15 )
            {
              v19 = v17->members.super.process;
              if ( v19 )
              {
                if ( (PlayerCharacter *)((int (__thiscall *)(LowProcess *))v19->Unk_F3)(v19) == friendlyFight_ )
                  goto LABEL_51;
                v20 = friendlyFight_->super.super.super.process;
                if ( v20 )
                {
                  if ( (Actor *)((int (__thiscall *)(LowProcess *))v20->Unk_F3)(v20) == v17 )
                    goto LABEL_51;
                }
              }
            }
            v21 = v17->members.super.process;
            if ( v21 )
            {
              if ( ((int (__thiscall *)(LowProcess *))v21->Unk_F3)(v21) )
                v17 = (Actor *)((int (__thiscall *)(LowProcess *))v17->members.super.process->Unk_F3)(v17->members.super.process);
            }
            v22 = friendlyFight_->super.super.super.process;
            if ( v22 )
            {
              if ( ((int (__thiscall *)(LowProcess *))v22->Unk_F3)(v22) )
              {
                v18 = (PlayerCharacter *)((int (__thiscall *)(LowProcess *))friendlyFight_->super.super.super.process->Unk_F3)(friendlyFight_->super.super.super.process);
                if ( v18 == TESDataHandler_g_PlayerRef )
                {
                  v18 = (PlayerCharacter *)v17;
                  v17 = (Actor *)TESDataHandler_g_PlayerRef;
                }
              }
            }
            LOBYTE(v23) = Actor_IsCreature(v17);
            v30 = ((int (__thiscall *)(Actor *, int, int, _DWORD))v17->vtbl->IsInCombat)(v17, 1, v23, 0);
            *(float *)&a6 = TesObjectREF_GetDistance((TESObjectREFR *)v17, (TESObjectREFR *)v18, 0);
            v28 = COERCE_FLOAT(((int (__thiscall *)(Actor *))v17->vtbl->GetActorValue)(v17));
            v24 = ((int (__thiscall *)(Actor *))v17->vtbl->GetDisposition)(v17);
            shouldActorFight(v24, (int)v18, 0, v28, 0x21, a6, v30, 0x64);
            if ( v25 <= 0 )
            {
LABEL_51:
              *(_DWORD *)(v15 + 8) = *(_DWORD *)(v33 + 8);
              if ( !v32 )
              {
                v26 = (_DWORD *)FormHeapAlloc(8u);
                if ( v26 )
                {
                  *v26 = 0;
                  v26[1] = 0;
                }
                else
                {
                  v26 = 0;
                }
                v32 = v26;
              }
              BSSimpleList_PushFront(v32, v15);
            }
          }
          v8 = v33;
        }
      }
      v34 = (int *)v34[1];
      if ( !v34 )
        goto LABEL_59;
    }
  }
  return v4;
}
