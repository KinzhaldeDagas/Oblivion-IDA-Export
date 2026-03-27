int __cdecl sub_897A90(int a1, char a2)
{
  int result; // eax
  _DWORD *v3; // ecx

  result = sub_4A05E0(a1);
  if ( result )
  {
    v3 = *(_DWORD **)(result + 0x10);
    if ( v3 )
      return sub_89F520(v3, a2);
  }
  return result;
}
