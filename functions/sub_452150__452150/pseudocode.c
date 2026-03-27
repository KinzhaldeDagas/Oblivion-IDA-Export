unsigned int __cdecl sub_452150(int a1, int a2)
{
  unsigned __int16 v2; // ax
  unsigned __int16 v3; // cx

  v2 = *(_WORD *)(a1 + 0xA);
  v3 = *(_WORD *)(a2 + 0xA);
  if ( v2 <= v3 )
    return v2 < v3;
  else
    return 0xFFFFFFFF;
}
