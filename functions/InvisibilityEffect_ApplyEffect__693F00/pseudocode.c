void __usercall InvisibilityEffect_ApplyEffect(int a1@<ecx>, double a2@<st1>)
{
  MagicTarget *v4; // ecx
  Actor *ParentActor; // esi
  void *v6; // edi
  float v7; // [esp+Ch] [ebp-Ch]

  v4 = *(MagicTarget **)(a1 + 0x20);
  if ( v4 )
    ParentActor = MagicTarget_GetParentActor(v4);
  else
    ParentActor = 0;
  ValueModifierEffect_Apply((float *)a1, v7);
  if ( ParentActor )
  {
    if ( (double)ParentActor->vtbl->GetActorValue(ParentActor, kActorVal_Invisibility) > *(float *)&SrcStr )
    {
      if ( ImageSpaceEffectEnabled
        && enableRefraction
        && ShaderPackage >= 2
        && ParentActor == (Actor *)TESDataHandler_g_PlayerRef )
      {
        ((void (__thiscall *)(Actor *, _DWORD))ParentActor->vtbl->Unk_C9)(ParentActor, 1.0);
        ParentActor->vtbl->SetTransparency(ParentActor, 1, flt_A757CC);
      }
      else
      {
        v6 = OblivionDynamicCast(
               ParentActor->members.super.process,
               0,
               (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
               &HighProcess `RTTI Type Descriptor',
               0);
        if ( v6 )
        {
          if ( (*(int (__thiscall **)(void *))(*(_DWORD *)v6 + 0x47C))(v6) != 4 )
            sub_633080((int)v6, a2, ParentActor, 0, 0);
        }
      }
    }
  }
}
