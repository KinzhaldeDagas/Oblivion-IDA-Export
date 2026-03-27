int __userpurge ChameleonEffect_PreLoad@<eax>(double a1@<st0>, ChamaleonEffect *a2)
{
  nullsub_returnvVoid_1arg((int)a2);
  if ( ImageSpaceEffectEnabled && enableRefraction && ShaderPackage >= 2 )
    return ((int (__usercall *)@<eax>(ChamaleonEffect *@<ecx>, int, _DWORD, double@<st0>))a2->vtbl[0x9C].super)(
             a2,
             1,
             0.0,
             a1);
  else
    return sub_5EE1B0((Actor *)a2, a1);
}
