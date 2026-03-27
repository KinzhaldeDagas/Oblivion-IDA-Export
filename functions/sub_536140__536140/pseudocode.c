signed int __cdecl sub_536140(int *a1, float *a2)
{
  int v2; // eax
  int v3; // eax
  int *i; // ecx
  signed int result; // eax

  if ( *a1 )
    v2 = *(_DWORD *)(*a1 + 8);
  else
    v2 = 0;
  if ( v2 )
  {
    result = *(_DWORD *)(v2 + 0x10);
    if ( result >= 0x1E )
      LOBYTE(result) = 0x1E;
    return (char)result;
  }
  else
  {
    v3 = a1[3];
    for ( i = a1; v3; v3 = *(_DWORD *)(v3 + 0xC) )
      i = (int *)v3;
    if ( (i[7] & 0x3F) == 0x11 )
      return (char)sub_440AC0(TES, a2);
    else
      return (char)sub_8AFC90(a1);
  }
}
