unsigned int __usercall sub_4810A0@<eax>(int a1@<ebp>, const char **a2, const char **a3, int a4, int a5)
{
  int v6; // [esp+0h] [ebp-4h] BYREF

  v6 = 0;
  if ( sub_480FD0(a1, a2, a3, &v6, a4, a5) )
    return v6;
  else
    return 0xFFFFFFFF;
}
