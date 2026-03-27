void __thiscall sub_6575B0(_BYTE *this, PlayerCharacter *a2, char a3, char a4, char a5)
{
  int v6; // eax
  TESObjectREFRVtbl *process; // ecx
  int v8; // eax
  int FormEnchantment; // edi
  void **v10; // eax
  int FXEffect; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  float *v15; // edi
  int v16; // eax
  int v17; // edi
  int v18; // eax
  _DWORD *unk5E0; // esi
  int v20; // edi
  float *v21; // eax
  UInt32 v22; // eax
  float v23; // [esp+20h] [ebp-2Ch]
  double v24; // [esp+38h] [ebp-14h]
  char v25; // [esp+58h] [ebp+Ch]

  *(this + 0x160) = 0;
  if ( a4 )
  {
    v6 = sub_679120((int *)&ActorProcessManager_ptr, (int)a2);
    if ( v6 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 0x68))(v6);
  }
  if ( a3 )
  {
    (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)this + 0x420))(this, 0);
    process = (TESObjectREFRVtbl *)a2->super.super.super.process;
    if ( process )
    {
      if ( (*((int (__thiscall **)(TESObjectREFRVtbl *, int))process->super.super.InitializeComponent + 0x3B))(
             process,
             1) )
      {
        if ( !a2->super.super.super.process->Unk_4E(a2->super.super.super.process) )
        {
          v8 = (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0xEC))(this, 1);
          FormEnchantment = TESEnchantableForm_GetFormEnchantment(*(void **)(v8 + 8));
          if ( FormEnchantment )
          {
            v10 = (void **)a2->super.super.super.process->GetEquippedWeaponData(a2->super.super.super.process, 1);
            v24 = sub_4849C0(v10);
            if ( ((double (__thiscall *)(int, PlayerCharacter *))**(_DWORD **)(FormEnchantment + 0x24))(
                   FormEnchantment + 0x24,
                   a2) <= v24 )
            {
              FXEffect = MagicItem_GetFXEffect((_DWORD *)(FormEnchantment + 0x18), 0);
              if ( FXEffect )
              {
                v12 = *(_DWORD *)(FXEffect + 0x7C);
                if ( v12 )
                  (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x420))(this, v12);
              }
            }
          }
        }
      }
    }
    v25 = 0;
    v13 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x41C))(this);
    v14 = sub_679240((int *)&ActorProcessManager_ptr, (int)a2, v13);
    if ( v14 )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 0x68))(v14);
    }
    else if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x41C))(this) )
    {
      v15 = (float *)FormHeapAlloc(0x4Cu);
      if ( v15 )
      {
        v23 = flt_A30634;
        v16 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x41C))(this);
        v17 = MagicShaderHitEffect_constr_args2(v15, (int)a2, v16, v23);
      }
      else
      {
        v17 = 0;
      }
      *(_BYTE *)(v17 + 0x28) = 1;
      if ( a5 )
        *(float *)(v17 + 0x38) = flt_A2FE7C;
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v17 + 0x68))(v17) )
      {
        sub_678D30((int *)&ActorProcessManager_ptr, (volatile LONG *)v17);
        if ( !a5 )
          v25 = 1;
      }
    }
    if ( a2 == TESDataHandler_g_PlayerRef && TESDataHandler_g_PlayerRef->inventoryPC )
    {
      v18 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x41C))(this);
      unk5E0 = (_DWORD *)TESDataHandler_g_PlayerRef->unk5E0;
      v20 = v18;
      if ( v18 )
      {
        if ( unk5E0 )
        {
          if ( unk5E0[0xD] == v18 )
          {
LABEL_35:
            if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*unk5E0 + 0x68))(unk5E0) )
            {
              (*(void (__thiscall **)(_DWORD *, int))*unk5E0)(unk5E0, 1);
              TESDataHandler_g_PlayerRef->unk5E0 = 0;
            }
            return;
          }
          (*(void (__thiscall **)(_DWORD *, int))*unk5E0)(unk5E0, 1);
        }
        v21 = (float *)FormHeapAlloc(0x4Cu);
        if ( v21 )
          v22 = MagicShaderHitEffect_constr_args2(v21, (int)TESDataHandler_g_PlayerRef, v20, flt_A30634);
        else
          v22 = 0;
        *(_BYTE *)(v22 + 0x28) = 1;
        unk5E0 = (_DWORD *)v22;
        TESDataHandler_g_PlayerRef->unk5E0 = v22;
        if ( !v25 )
          *(float *)(v22 + 0x38) = flt_A2FE7C;
        goto LABEL_35;
      }
      if ( unk5E0 )
      {
        (*(void (__thiscall **)(_DWORD *, int))*unk5E0)(unk5E0, 1);
        TESDataHandler_g_PlayerRef->unk5E0 = 0;
      }
    }
  }
}
