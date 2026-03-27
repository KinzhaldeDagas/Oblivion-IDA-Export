int __cdecl sub_712520(int a1)
{
  int (*v1)(void); // ecx
  int (*v3)(void); // [esp+0h] [ebp-4h] BYREF

  v3 = v1;
  if ( NiTMap_GetAt((_DWORD *)dword_B3FB80, a1, &v3) )
    return v3();
  else
    return 0;
}
