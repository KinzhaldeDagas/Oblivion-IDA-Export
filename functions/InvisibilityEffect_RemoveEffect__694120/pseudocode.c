void __usercall InvisibilityEffect_RemoveEffect(_DWORD *this@<ecx>, double a2@<st0>)
{
  MagicTarget *v3; // ecx
  Actor *ParentActor; // esi
  #239 *v5; // edi
  double v6; // st6
  int v7; // eax
  unsigned __int16 v8; // cx
  volatile LONG *v9; // edi
  unsigned int v10; // eax
  float *v11; // edi
  int v12; // eax
  int v13; // eax
  float v14; // [esp+8h] [ebp-2Ch]
  float v15; // [esp+1Ch] [ebp-18h]
  float v16; // [esp+1Ch] [ebp-18h]
  float v17; // [esp+1Ch] [ebp-18h]
  float ChameleonMaxRefraction; // [esp+20h] [ebp-14h]
  float v19; // [esp+24h] [ebp-10h]

  ValueModifierEffect_Remove(a2);
  v3 = (MagicTarget *)*(this + 8);
  if ( v3 )
  {
    ParentActor = MagicTarget_GetParentActor(v3);
    if ( ParentActor )
    {
      if ( 0.0 == (double)ParentActor->vtbl->GetActorValue(ParentActor, kActorVal_Invisibility) )
      {
        if ( ImageSpaceEffectEnabled
          && enableRefraction
          && ShaderPackage >= 2
          && ParentActor == (Actor *)TESDataHandler_g_PlayerRef )
        {
          ((void (__thiscall *)(Actor *, int, _DWORD))ParentActor->vtbl->SetTransparency)(ParentActor, 1, 0.0);
        }
        else
        {
          v5 = (#239 *)OblivionDynamicCast(
                         ParentActor->members.super.process,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
                         &HighProcess `RTTI Type Descriptor',
                         0);
          if ( v5 )
          {
            if ( (*(int (__thiscall **)(#239 *))(*(_DWORD *)v5 + 0x47C))(v5) != 4 )
              sub_628630(v5, ParentActor, 0);
          }
        }
        ParentActor->vtbl->GetAV_F(ParentActor, kActorVal_Chameleon);
        v15 = 0.0 / fCostant_100;
        v6 = v15;
        if ( v15 < dbl_A2FC68 )
          v6 = 0.0;
        v16 = v6;
        if ( v16 <= dbl_A2F928 )
        {
          if ( v16 <= 0.0 )
            goto LABEL_21;
        }
        else
        {
          v16 = 1.0;
        }
        if ( ImageSpaceEffectEnabled && enableRefraction && ShaderPackage >= 2 )
        {
          Magic_GetChameleonMinRefraction();
          ChameleonMaxRefraction = Magic_GetChameleonMaxRefraction();
          v17 = 1.0 - v16;
          v19 = (float)0.0 + (ChameleonMaxRefraction - (float)0.0) * ((v17 - 0.0) / (1.0 - 0.0));
          ((void (__thiscall *)(Actor *, int, _DWORD))ParentActor->vtbl->SetTransparency)(ParentActor, 1, LODWORD(v19));
LABEL_22:
          v7 = *(_DWORD *)(*(this + 3) + 0x1C);
          v8 = *(_WORD *)(v7 + 0x20);
          v9 = 0;
          if ( v8 == 0xFFFF )
            v10 = strlen(*(const char **)(v7 + 0x1C));
          else
            v10 = v8;
          if ( v10 )
          {
            v11 = (float *)FormHeapAlloc(0x38u);
            if ( v11 )
            {
              v14 = flt_A30634;
              v12 = (*(int (**)(void))(*(_DWORD *)(*(_DWORD *)(*(this + 3) + 0x1C) + 0x18) + 0x14))();
              v13 = MagicModelHitEffect_constr_args2(v11, (int)ParentActor, v12, v14);
            }
            else
            {
              v13 = 0;
            }
            v9 = (volatile LONG *)v13;
          }
          if ( (*(unsigned __int8 (__thiscall **)(volatile LONG *))(*v9 + 0x68))(v9) )
            sub_678D30((int *)&ActorProcessManager_ptr, v9);
          else
            (**(void (__thiscall ***)(volatile LONG *, int))v9)(v9, 1);
          return;
        }
LABEL_21:
        sub_5EE1B0(ParentActor, 0.0);
        goto LABEL_22;
      }
    }
  }
}
