// positive sp value has been detected, the output may be wrong!
char __userpurge sub_613D33@<al>(int a1@<ebx>, int a2@<edi>, int a3, int a4, int a5)
{
  int v5; // edi
  int v6; // edi

  v5 = *(_DWORD *)(a2 + 8); /*0x613d33*/
  if ( v5 && (v6 = v5 - 4) != 0 ) /*0x613d3d*/
    return sub_613CE8(a1, v6, a3, a4, a5); /*0x613d3d*/
  else
    return 1; /*0x613d41*/
}
