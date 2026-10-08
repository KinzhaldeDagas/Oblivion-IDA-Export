unsigned int __usercall sub_481210@<eax>(int a1@<esi>, const char **a2, NiProperty *a3, int a4, int a5)
{
  int v6; // [esp+0h] [ebp-4h] BYREF

  v6 = 0; /*0x48122a*/
  if ( sub_4810E0(a1, a2, a3, &v6, a4, a5) ) /*0x481232*/
    return v6; /*0x48123e*/
  else
    return 0xFFFFFFFF; /*0x481243*/
}
