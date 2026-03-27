void __usercall sub_60D950(double a1@<st2>, double st7_0@<st0>, ArrowProjectile *a3, int a4, __m128 *a5, __m128 *a6)
{
  TESChildCELL *v6; // edi
  NiAVObject *v7; // eax
  Actor *v8; // esi
  LowProcess *process; // ecx
  TESObjectREFR *v10; // edi
  float *v11; // eax
  int v12; // ebp
  TESObjectREFR *shooter; // ecx
  TESObjectREFR *v14; // edi
  float *v15; // eax
  int v16; // eax
  int v17; // eax
  TESObjectREFR *v18; // esi
  int v19; // eax
  int v20[3]; // [esp+10h] [ebp-18h] BYREF
  float v21[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v6 = 0;
  v7 = sub_8AFCE0(a4);
  if ( v7 )
    v6 = (TESChildCELL *)sub_4DC270((int)v7);
  v8 = (Actor *)OblivionDynamicCast(
                  v6,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                  &Actor `RTTI Type Descriptor',
                  0);
  if ( *(_BYTE *)(a4 + 0x18) != 2 || !(a4 + *(_DWORD *)(a4 + 0x10)) )
  {
LABEL_14:
    v12 = HIWORD(*(_DWORD *)(a4 + 0x1C));
    if ( v12 != sub_607B60() && (!v6 || v6 != (TESChildCELL *)TESDataHandler_g_PlayerRef->unk578) )
    {
      sub_43F3E0((float *)v20, a5);
      sub_4D68A0(v21, a6);
      if ( v12 == 1 )
      {
        sub_60BAC0((Actor *)a3, (int)v20, (void (__thiscall **)(MagicCaster *, MagicCaster *))v21);
        shooter = (TESObjectREFR *)a3->shooter;
        if ( shooter )
          sub_677760((int)&ActorProcessManager_ptr, a4, a1, st7_0, shooter, *(float *)v20, v20[1], v20[2], 0, 0);
      }
      else if ( v6 )
      {
        if ( v8 )
        {
          if ( !Actor_IsGhost(v8) )
          {
            v14 = (TESObjectREFR *)a3->shooter;
            if ( v14 )
            {
              v15 = v8->vtbl->super.super.GetPos(v8);
              sub_677760(
                (int)&ActorProcessManager_ptr,
                (char)a3,
                a1,
                st7_0,
                v14,
                *v15,
                *((_DWORD *)v15 + 1),
                *((_DWORD *)v15 + 2),
                1,
                (TESObjectREFR *)v8);
            }
            sub_60A640(
              (Actor *)a3,
              (float *)v20,
              (void (__thiscall **)(MagicCaster *, MagicCaster *))v21,
              (TESObjectREFR *)v8);
          }
        }
        else
        {
          v16 = sub_47DE00(a4);
          if ( v16 )
            v17 = *(_DWORD *)(v16 + 0xC);
          else
            v17 = 0;
          sub_60B120(a3, v20, v21, v6, v17);
          v18 = (TESObjectREFR *)a3->shooter;
          if ( v18 )
          {
            v19 = (*((int (__thiscall **)(TESChildCELL *))v6->vtbl + 0x5D))(v6);
            sub_677760(
              (int)&ActorProcessManager_ptr,
              a4,
              a1,
              st7_0,
              v18,
              *(float *)v19,
              *(_DWORD *)(v19 + 4),
              *(_DWORD *)(v19 + 8),
              0,
              0);
          }
        }
      }
    }
    return;
  }
  if ( v8 )
  {
    if ( !v8->vtbl->super.super.IsDead((TESObjectREFR *)v8, 0) )
    {
      process = v8->members.super.process;
      if ( !process
        || !((int (__thiscall *)(LowProcess *))process->GetKnockedState)(process)
        || ((int (__thiscall *)(LowProcess *))v8->members.super.process->GetKnockedState)(v8->members.super.process) == 6 )
      {
        if ( v8->vtbl->super.super.GetSleepState((TESObjectREFR *)v8) == kSitSleep_Sitting
          || v8->vtbl->super.super.GetSleepState((TESObjectREFR *)v8) == kSitSleep_Sleeping )
        {
          v10 = (TESObjectREFR *)a3->shooter;
          if ( v10 )
          {
            v11 = v8->vtbl->super.super.GetPos(v8);
            sub_677760(
              (int)&ActorProcessManager_ptr,
              a4,
              a1,
              st7_0,
              v10,
              *v11,
              *((_DWORD *)v11 + 1),
              *((_DWORD *)v11 + 2),
              1,
              (TESObjectREFR *)v8);
          }
          return;
        }
        goto LABEL_14;
      }
    }
  }
}
