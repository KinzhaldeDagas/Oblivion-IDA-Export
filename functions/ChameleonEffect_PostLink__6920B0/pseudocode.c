int __userpurge ChameleonEffect_PostLink@<eax>(
        ChamaleonEffect *ecx0@<ecx>,
        double a2@<st0>,
        double st6_0@<st1>,
        Actor *a1)
{
  double v5; // st7
  double v6; // st7
  float ChameleonMaxRefraction; // [esp+18h] [ebp-8h]
  float ChameleonMinRefraction; // [esp+1Ch] [ebp-4h]
  float a1a; // [esp+24h] [ebp+4h]
  float a1b; // [esp+24h] [ebp+4h]
  float a1c; // [esp+24h] [ebp+4h]
  float a1d; // [esp+24h] [ebp+4h]
  float a1e; // [esp+24h] [ebp+4h]

  ValueModifierEffect_PostLink((volatile LONG ***)ecx0, (int)a1); /*0x6920b9*/
  if ( !OB_RendererGlobalState_010201A0.pad_00D[0x98] ) /*0x6920be*/
    return sub_5EE1B0(a1, a2); /*0x6920be*/
  if ( !OB_ShaderPassControl_010201A0.refractionPassEnabled ) /*0x6920cb*/
    return sub_5EE1B0(a1, a2); /*0x6920cb*/
  if ( *(int *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le < 2 ) /*0x6920df*/
    return sub_5EE1B0(a1, a2); /*0x6920df*/
  a1->vtbl->GetAV_F(a1, kActorVal_Invisibility); /*0x6920f1*/
  if ( st6_0 != *(float *)&SrcStr ) /*0x6920fe*/
    return sub_5EE1B0(a1, a2); /*0x6921c3*/
  ((void (__usercall *)(Actor *@<ecx>, _DWORD, double@<st0>))a1->vtbl->Unk_C9)(a1, 1.0, a2); /*0x692114*/
  a1a = ((double (__thiscall *)(Actor *, int))a1->vtbl->GetAV_F)(a1, 0x2E) / fCostant_100; /*0x69212a*/
  v5 = a1a; /*0x69212e*/
  if ( a1a < dbl_A2FC68 ) /*0x69213d*/
    v5 = 0.0; /*0x692141*/
  a1b = v5; /*0x692143*/
  v6 = a1b; /*0x692147*/
  if ( a1b > dbl_A2F928 ) /*0x692156*/
    v6 = 1.0; /*0x69215a*/
  a1c = v6; /*0x69215c*/
  ChameleonMinRefraction = Magic_GetChameleonMinRefraction(); /*0x692165*/
  ChameleonMaxRefraction = Magic_GetChameleonMaxRefraction(); /*0x69216e*/
  a1d = 1.0 - a1c; /*0x692189*/
  a1e = ChameleonMinRefraction + (ChameleonMaxRefraction - ChameleonMinRefraction) * ((a1d - 0.0) / (1.0 - 0.0)); /*0x6921ab*/
  return ((int (__thiscall *)(Actor *, int, _DWORD))a1->vtbl->SetTransparency)(a1, 1, LODWORD(a1e)); /*0x6921ba*/
}
