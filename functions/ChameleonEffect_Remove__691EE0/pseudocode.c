double __usercall ChameleonEffect_Remove@<st0>(ChamaleonEffect *a1@<ecx>, double result@<st0>, double a3@<st1>)
{
  MagicTarget *target; // ecx
  Actor *ParentActor; // esi
  int v6; // [esp+Ch] [ebp-10h]
  float v7; // [esp+10h] [ebp-Ch]
  float v8; // [esp+10h] [ebp-Ch]
  float v9; // [esp+10h] [ebp-Ch]
  float ChameleonMaxRefraction; // [esp+14h] [ebp-8h]
  float ChameleonMinRefraction; // [esp+18h] [ebp-4h]
  float v12; // [esp+18h] [ebp-4h]

  ValueModifierEffect_Remove(a1, v6, v7); /*0x691ee6*/
  target = a1->members.super.super.target; /*0x691eeb*/
  if ( target ) /*0x691ef0*/
  {
    ParentActor = MagicTarget_GetParentActor(target); /*0x691efb*/
    if ( ParentActor ) /*0x691eff*/
    {
      if ( OB_RendererGlobalState_010201A0.pad_00D[0x98] ) /*0x691f05*/
      {
        if ( OB_ShaderPassControl_010201A0.refractionPassEnabled ) /*0x691f12*/
        {
          if ( *(int *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le >= 2 ) /*0x691f26*/
          {
            ParentActor->vtbl->GetAV_F(ParentActor, kActorVal_Invisibility); /*0x691f38*/
            if ( a3 == *(float *)&SrcStr ) /*0x691f45*/
            {
              ParentActor->vtbl->GetAV_F(ParentActor, kActorVal_Chameleon); /*0x691f57*/
              v8 = result / fCostant_100; /*0x691f5f*/
              if ( v8 < dbl_A2FC68 ) /*0x691f72*/
                v8 = 0.0; /*0x691f78*/
              if ( v8 > dbl_A2F928 ) /*0x691f93*/
              {
                v8 = 1.0; /*0x691f9b*/
LABEL_12:
                ChameleonMinRefraction = Magic_GetChameleonMinRefraction(); /*0x691fb0*/
                ChameleonMaxRefraction = Magic_GetChameleonMaxRefraction(); /*0x691fbe*/
                v9 = 1.0 - v8 / fCostant_100; /*0x691fdf*/
                v12 = ChameleonMinRefraction /*0x692001*/
                    + (ChameleonMaxRefraction - ChameleonMinRefraction) * ((v9 - 0.0) / (1.0 - 0.0));
                return ((double (__thiscall *)(Actor *, int, _DWORD))ParentActor->vtbl->SetTransparency)( /*0x69200e*/
                         ParentActor,
                         1,
                         LODWORD(v12));
              }
              if ( v8 > 0.0 ) /*0x691fac*/
                goto LABEL_12; /*0x691fac*/
              result = ((double (__thiscall *)(Actor *, int, _DWORD))ParentActor->vtbl->SetTransparency)( /*0x692025*/
                         ParentActor,
                         1,
                         0.0);
            }
          }
        }
      }
      sub_5EE1B0(ParentActor, result); /*0x69202d*/
    }
  }
  return result; /*0x692010*/
}
