double __usercall ChameleonEffect_Remove@<st0>(ChamaleonEffect *a1@<ecx>, double result@<st0>)
{
  double v3; // st6
  MagicTarget *target; // ecx
  Actor *ParentActor; // esi
  float v6; // [esp+10h] [ebp-Ch]
  float v7; // [esp+10h] [ebp-Ch]
  float ChameleonMaxRefraction; // [esp+14h] [ebp-8h]
  float ChameleonMinRefraction; // [esp+18h] [ebp-4h]
  float v10; // [esp+18h] [ebp-4h]

  v3 = ValueModifierEffect_Remove();
  target = a1->members.super.super.target;
  if ( target )
  {
    ParentActor = MagicTarget_GetParentActor(target);
    if ( ParentActor )
    {
      if ( ImageSpaceEffectEnabled )
      {
        if ( enableRefraction )
        {
          if ( ShaderPackage >= 2 )
          {
            ParentActor->vtbl->GetAV_F(ParentActor, kActorVal_Invisibility);
            if ( v3 == *(float *)&SrcStr )
            {
              ParentActor->vtbl->GetAV_F(ParentActor, kActorVal_Chameleon);
              v6 = result / fCostant_100;
              if ( v6 < dbl_A2FC68 )
                v6 = 0.0;
              if ( v6 > dbl_A2F928 )
              {
                v6 = 1.0;
LABEL_12:
                ChameleonMinRefraction = Magic_GetChameleonMinRefraction();
                ChameleonMaxRefraction = Magic_GetChameleonMaxRefraction();
                v7 = 1.0 - v6 / fCostant_100;
                v10 = ChameleonMinRefraction
                    + (ChameleonMaxRefraction - ChameleonMinRefraction) * ((v7 - 0.0) / (1.0 - 0.0));
                return ((double (__thiscall *)(Actor *, int, _DWORD))ParentActor->vtbl->SetTransparency)(
                         ParentActor,
                         1,
                         LODWORD(v10));
              }
              if ( v6 > 0.0 )
                goto LABEL_12;
              result = ((double (__thiscall *)(Actor *, int, _DWORD))ParentActor->vtbl->SetTransparency)(
                         ParentActor,
                         1,
                         0.0);
            }
          }
        }
      }
      sub_5EE1B0(ParentActor, result);
    }
  }
  return result;
}
