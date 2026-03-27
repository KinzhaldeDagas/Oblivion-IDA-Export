int __cdecl sub_95DB10(signed int a1)
{
  unsigned int v2; // [esp+4h] [ebp-4h] BYREF

  sub_6BE990(a1, &v2);
  if ( v2 > 5 )
    return 0;
  else
    return ((int (__cdecl *)(signed int))funcs_95DB35[v2])(a1);
}
