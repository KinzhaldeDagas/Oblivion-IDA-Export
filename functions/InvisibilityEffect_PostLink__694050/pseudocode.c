int __userpurge InvisibilityEffect_PostLink@<eax>(volatile LONG ***ecx0@<ecx>, double a2@<st0>, Actor *a1)
{
  ValueModifierEffect_PostLink(ecx0, (int)a1); /*0x694056*/
  if ( !OB_RendererGlobalState_010201A0.pad_00D[0x98] /*0x69407c*/
    || !OB_ShaderPassControl_010201A0.refractionPassEnabled
    || *(int *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le < 2
    || a1 != (Actor *)reference )
  {
    return sub_5EE1B0(a1, a2); /*0x6940ae*/
  }
  ((void (__usercall *)(Actor *@<ecx>, _DWORD, double@<st0>))a1->vtbl->Unk_C9)(a1, 1.0, a2); /*0x69408e*/
  return ((int (__thiscall *)(_DWORD, _DWORD, _DWORD))a1->vtbl->SetTransparency)(a1, 1, flt_A757CC); /*0x6940a8*/
}
