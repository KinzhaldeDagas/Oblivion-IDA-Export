void __cdecl sub_55F750(char a1)
{
  unsigned int v1; // esi
  float *v2; // eax
  float *v3; // eax

  if ( dword_B39E04 )
  {
    if ( !a1 )
      return;
    v1 = dword_B39E04;
    sub_55F550((unsigned int *)dword_B39E04);
    FormHeapFree(v1);
    dword_B39E04 = 0;
  }
  v2 = (float *)FormHeapAlloc(0x28u);
  if ( v2 )
    v3 = sub_55E850(v2);
  else
    v3 = 0;
  dword_B39E04 = (int)v3;
}
