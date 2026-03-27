unsigned int __cdecl sub_4EEB10(int a1, int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ecx

  v2 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a2 + 4);
  if ( v2 <= v3 )
    return v2 < v3;
  else
    return 0xFFFFFFFF;
}
