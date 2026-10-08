double __usercall ChameleonEffect_Apply@<st0>(ChamaleonEffect *a1@<ecx>, double result@<st0>, double a3@<st1>)
{
  MagicTarget *target; // ecx
  Actor *ParentActor; // esi
  double v6; // st7
  double v7; // st7
  float v8; // [esp+10h] [ebp-14h]
  float v9; // [esp+18h] [ebp-Ch]
  float v10; // [esp+18h] [ebp-Ch]
  float v11; // [esp+18h] [ebp-Ch]
  float v12; // [esp+18h] [ebp-Ch]
  float ChameleonMaxRefraction; // [esp+1Ch] [ebp-8h]
  float ChameleonMinRefraction; // [esp+20h] [ebp-4h]
  float v15; // [esp+20h] [ebp-4h]

  target = a1->members.super.super.target; /*0x691da7*/
  if ( target ) /*0x691dac*/
    ParentActor = MagicTarget_GetParentActor(target); /*0x691db3*/
  else
    ParentActor = 0; /*0x691db7*/
  ValueModifierEffect_Apply((float *)a1, v8); /*0x691dbb*/
  if ( ParentActor ) /*0x691dc2*/
  {
    if ( OB_RendererGlobalState_010201A0.pad_00D[0x98] /*0x691e08*/
      && OB_ShaderPassControl_010201A0.refractionPassEnabled
      && *(int *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le >= 2
      && (ParentActor->vtbl->GetAV_F(ParentActor, kActorVal_Invisibility), a3 == *(float *)&SrcStr) )
    {
      ((void (__usercall *)(Actor *@<ecx>, _DWORD, double@<st0>))ParentActor->vtbl->Unk_C9)(ParentActor, 1.0, result); /*0x691e1e*/
      v9 = ((double (__thiscall *)(Actor *, int))ParentActor->vtbl->GetAV_F)(ParentActor, 0x2E) / fCostant_100; /*0x691e34*/
      v6 = v9; /*0x691e38*/
      if ( v9 < dbl_A2FC68 ) /*0x691e47*/
        v6 = 0.0; /*0x691e4b*/
      v10 = v6; /*0x691e4d*/
      v7 = v10; /*0x691e51*/
      if ( v10 > dbl_A2F928 ) /*0x691e60*/
        v7 = 1.0; /*0x691e64*/
      v11 = v7; /*0x691e66*/
      ChameleonMinRefraction = Magic_GetChameleonMinRefraction(); /*0x691e6f*/
      ChameleonMaxRefraction = Magic_GetChameleonMaxRefraction(); /*0x691e78*/
      v12 = 1.0 - v11; /*0x691e93*/
      v15 = ChameleonMinRefraction + (ChameleonMaxRefraction - ChameleonMinRefraction) * ((v12 - 0.0) / (1.0 - 0.0)); /*0x691eb5*/
      result = v15;                             // Diocane /*0x691eb9*/
                                                //
      ParentActor->vtbl->SetTransparency(ParentActor, 1, v15); /*0x691ec2*/
    }
    else
    {
      sub_5EE1B0(ParentActor, result); /*0x691ed1*/
    }
  }
  return result; /*0x691ec4*/
}
