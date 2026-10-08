void __thiscall InvisibilityEffect_ApplyEffect(int this)
{
  MagicTarget *v3; // ecx
  Actor *ParentActor; // esi
  void *v5; // edi
  float v6; // [esp+Ch] [ebp-Ch]

  v3 = *(MagicTarget **)(this + 0x20); /*0x693f05*/
  if ( v3 ) /*0x693f0a*/
    ParentActor = MagicTarget_GetParentActor(v3); /*0x693f11*/
  else
    ParentActor = 0; /*0x693f15*/
  ValueModifierEffect_Apply((float *)this, v6); /*0x693f19*/
  if ( ParentActor ) /*0x693f20*/
  {
    if ( (double)ParentActor->vtbl->GetActorValue(ParentActor, kActorVal_Invisibility) > *(float *)&SrcStr ) /*0x693f47*/
    {
      if ( OB_RendererGlobalState_010201A0.pad_00D[0x98] /*0x693f6e*/
        && OB_ShaderPassControl_010201A0.refractionPassEnabled
        && *(int *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le >= 2
        && ParentActor == (Actor *)reference )
      {
        ((void (__thiscall *)(Actor *, _DWORD))ParentActor->vtbl->Unk_C9)(ParentActor, 1.0); /*0x693f80*/
        ParentActor->vtbl->SetTransparency(ParentActor, 1, flt_A757CC); /*0x693f98*/
      }
      else
      {
        v5 = OblivionDynamicCast( /*0x693fb5*/
               ParentActor->members.super.process,
               0,
               (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
               &HighProcess `RTTI Type Descriptor',
               0);
        if ( v5 ) /*0x693fbc*/
        {
          if ( (*(int (__thiscall **)(void *))(*(_DWORD *)v5 + 0x47C))(v5) != 4 ) /*0x693fcd*/
            sub_633080((int)v5, ParentActor, 0, 0); /*0x693fd6*/
        }
      }
    }
  }
}
