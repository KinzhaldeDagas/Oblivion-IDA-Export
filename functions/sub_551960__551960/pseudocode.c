char __cdecl sub_551960(unsigned int **a1)
{
  int v1; // eax

  v1 = dword_B39B80;
  if ( dword_B39B80 && *(_DWORD *)(v1 + 0xDAC) )
    return sub_5517F0(*(char **)(v1 + 0xDAC), a1);
  else
    return 0;
}
