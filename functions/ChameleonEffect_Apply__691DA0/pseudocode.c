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

  target = a1->members.super.super.target;
  if ( target )
    ParentActor = MagicTarget_GetParentActor(target);
  else
    ParentActor = 0;
  ValueModifierEffect_Apply((float *)a1, v8);
  if ( ParentActor )
  {
    if ( ImageSpaceEffectEnabled
      && enableRefraction
      && ShaderPackage >= 2
      && (ParentActor->vtbl->GetAV_F(ParentActor, kActorVal_Invisibility), a3 == *(float *)&SrcStr) )
    {
      ((void (__usercall *)(Actor *@<ecx>, _DWORD, double@<st0>))ParentActor->vtbl->Unk_C9)(ParentActor, 1.0, result);
      v9 = ((double (__thiscall *)(Actor *, int))ParentActor->vtbl->GetAV_F)(ParentActor, 0x2E) / fCostant_100;
      v6 = v9;
      if ( v9 < dbl_A2FC68 )
        v6 = 0.0;
      v10 = v6;
      v7 = v10;
      if ( v10 > dbl_A2F928 )
        v7 = 1.0;
      v11 = v7;
      ChameleonMinRefraction = Magic_GetChameleonMinRefraction();
      ChameleonMaxRefraction = Magic_GetChameleonMaxRefraction();
      v12 = 1.0 - v11;
      v15 = ChameleonMinRefraction + (ChameleonMaxRefraction - ChameleonMinRefraction) * ((v12 - 0.0) / (1.0 - 0.0));
      result = v15;                             // Diocane
                                                // 
      ParentActor->vtbl->SetTransparency(ParentActor, 1, v15);
    }
    else
    {
      sub_5EE1B0(ParentActor, result);
    }
  }
  return result;
}
