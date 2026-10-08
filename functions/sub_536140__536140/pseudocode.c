signed int __cdecl sub_536140(int *a1, float *a2)
{
  int v2; // eax
  int v3; // eax
  int *i; // ecx
  signed int result; // eax

  if ( *a1 ) /*0x536144*/
    v2 = *(_DWORD *)(*a1 + 8); /*0x53614a*/
  else
    v2 = 0; /*0x53614f*/
  if ( v2 ) /*0x536153*/
  {
    result = *(_DWORD *)(v2 + 0x10); /*0x536194*/
    if ( result >= 0x1E ) /*0x53619a*/
      LOBYTE(result) = 0x1E; /*0x53619c*/
    return (char)result; /*0x53619e*/
  }
  else
  {
    v3 = a1[3]; /*0x536155*/
    for ( i = a1; v3; v3 = *(_DWORD *)(v3 + 0xC) ) /*0x53615c*/
      i = (int *)v3; /*0x536160*/
    if ( (i[7] & 0x3F) == 0x11 ) /*0x536171*/
      return (char)sub_440AC0(MEMORY[0xB333A0], a2); /*0x536183*/
    else
      return (char)sub_8AFC90(a1); /*0x536190*/
  }
}
