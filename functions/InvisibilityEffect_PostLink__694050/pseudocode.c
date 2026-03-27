int __userpurge InvisibilityEffect_PostLink@<eax>(_DWORD *ecx0@<ecx>, double a2@<st0>, Actor *a1)
{
  ValueModifierEffect_PostLink(ecx0, (int)a1);
  if ( !ImageSpaceEffectEnabled || !enableRefraction || ShaderPackage < 2 || a1 != (Actor *)TESDataHandler_g_PlayerRef )
    return sub_5EE1B0(a1, a2);
  ((void (__usercall *)(Actor *@<ecx>, _DWORD, double@<st0>))a1->vtbl->Unk_C9)(a1, 1.0, a2);
  return ((int (__thiscall *)(_DWORD, _DWORD, _DWORD))a1->vtbl->SetTransparency)(a1, 1, flt_A757CC);
}
