int __userpurge InvisibilityEffect_PreLoad@<eax>(double st7_0@<st0>, Actor *a1)
{
  nullsub_returnvVoid_1arg((int)a1); /*0x6940c6*/
  if ( OB_RendererGlobalState_010201A0.pad_00D[0x98] /*0x6940ec*/
    && OB_ShaderPassControl_010201A0.refractionPassEnabled
    && *(int *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le >= 2
    && a1 == (Actor *)reference )
  {
    return ((int (__usercall *)@<eax>(Actor *@<ecx>, int, _DWORD, double@<st0>))a1->vtbl->SetTransparency)( /*0x694100*/
             a1,
             1,
             0.0,
             st7_0);
  }
  else
  {
    return sub_5EE1B0(a1, st7_0); /*0x694108*/
  }
}
