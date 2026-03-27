int __userpurge ChameleonEffect_PostLink@<eax>(
        ChamaleonEffect *a1@<ecx>,
        double a2@<st0>,
        double st6_0@<st1>,
        Actor *a3)
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

  ValueModifierEffect_PostLink(a1, (int)a3);
  if ( !ImageSpaceEffectEnabled )
    return sub_5EE1B0(a3, a2);
  if ( !enableRefraction )
    return sub_5EE1B0(a3, a2);
  if ( ShaderPackage < 2 )
    return sub_5EE1B0(a3, a2);
  a3->vtbl->GetAV_F(a3, kActorVal_Invisibility);
  if ( st6_0 != *(float *)&SrcStr )
    return sub_5EE1B0(a3, a2);
  ((void (__usercall *)(Actor *@<ecx>, _DWORD, double@<st0>))a3->vtbl->Unk_C9)(a3, 1.0, a2);
  a1a = ((double (__thiscall *)(Actor *, int))a3->vtbl->GetAV_F)(a3, 0x2E) / fCostant_100;
  v5 = a1a;
  if ( a1a < dbl_A2FC68 )
    v5 = 0.0;
  a1b = v5;
  v6 = a1b;
  if ( a1b > dbl_A2F928 )
    v6 = 1.0;
  a1c = v6;
  ChameleonMinRefraction = Magic_GetChameleonMinRefraction();
  ChameleonMaxRefraction = Magic_GetChameleonMaxRefraction();
  a1d = 1.0 - a1c;
  a1e = ChameleonMinRefraction + (ChameleonMaxRefraction - ChameleonMinRefraction) * ((a1d - 0.0) / (1.0 - 0.0));
  return ((int (__thiscall *)(Actor *, int, _DWORD))a3->vtbl->SetTransparency)(a3, 1, LODWORD(a1e));
}
