int __userpurge ChameleonEffect_PreLoad@<eax>(double a1@<st0>, ChamaleonEffect *a2)
{
  nullsub_returnvVoid_1arg((int)a2); /*0x6921d6*/
  if ( OB_RendererGlobalState_010201A0.pad_00D[0x98] /*0x6921f4*/
    && OB_ShaderPassControl_010201A0.refractionPassEnabled
    && *(int *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le >= 2 )
  {
    return ((int (__usercall *)@<eax>(ChamaleonEffect *@<ecx>, int, _DWORD, double@<st0>))a2->vtbl[0x9C].super)( /*0x692208*/
             a2,
             1,
             0.0,
             a1);
  }
  else
  {
    return sub_5EE1B0((Actor *)a2, a1); /*0x692210*/
  }
}
