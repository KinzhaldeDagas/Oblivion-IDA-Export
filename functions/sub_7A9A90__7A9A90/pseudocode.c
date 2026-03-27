unsigned int __cdecl sub_7A9A90(int a1, int a2)
{
  unsigned __int16 v2; // ax
  unsigned __int16 v3; // cx

  v2 = *(_WORD *)(*(_DWORD *)a1 + 4);
  v3 = *(_WORD *)(*(_DWORD *)a2 + 4);
  if ( v2 == v3 )
    return 0;
  else
    return v2 < v3 ? 0xFFFFFFFF : 1;
}
