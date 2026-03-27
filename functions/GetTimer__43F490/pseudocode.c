double __cdecl GetTimer(int a1, int a2)
{
  int v2; // ecx

  if ( !dword_B42D78 )
    return (float)0.0;
  return (float)((double (__cdecl *)(int, int, int))dword_B42D78)(a1, a2, v2);
}
