int __userpurge InvisibilityEffect_PreLoad@<eax>(double st7_0@<st0>, Actor *a1)
{
  nullsub_returnvVoid_1arg((int)a1);
  if ( ImageSpaceEffectEnabled && enableRefraction && ShaderPackage >= 2 && a1 == (Actor *)TESDataHandler_g_PlayerRef )
    return ((int (__usercall *)@<eax>(Actor *@<ecx>, int, _DWORD, double@<st0>))a1->vtbl->SetTransparency)(
             a1,
             1,
             0.0,
             st7_0);
  else
    return sub_5EE1B0(a1, st7_0);
}
