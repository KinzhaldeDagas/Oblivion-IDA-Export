unsigned int __cdecl sub_7AA390(int a1, int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ecx

  v2 = *(_DWORD *)(**(_DWORD **)a2 + 0xB4);
  v3 = *(_DWORD *)(**(_DWORD **)a1 + 0xB4);
  if ( v3 == v2 )
    return 0;
  else
    return v3 < v2 ? 0xFFFFFFFF : 1;
}
