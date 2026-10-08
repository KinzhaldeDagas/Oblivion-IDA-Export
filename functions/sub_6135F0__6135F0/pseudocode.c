int __fastcall sub_6135F0(int a1)
{
  int v1; // esi
  _DWORD *v2; // ecx
  int result; // eax
  _DWORD *v4; // eax

  while ( 1 ) /*0x6135f1*/
  {
    v1 = a1; /*0x6135f1*/
    v2 = *(_DWORD **)(a1 + 0x40); /*0x6135f3*/
    result = 0; /*0x6135f6*/
    if ( !v2 || !v2[1] && !*v2 ) /*0x613601*/
      break; /*0x613601*/
    if ( *v2 ) /*0x613605*/
      return *(_DWORD *)*v2; /*0x61360b*/
    v4 = (_DWORD *)v2[1]; /*0x61360f*/
    if ( v4 ) /*0x613614*/
    {
      v2[1] = v4[1]; /*0x613619*/
      *v2 = *v4; /*0x61361f*/
      FormHeapFree((unsigned int)v4); /*0x613621*/
    }
    else
    {
      *v2 = 0; /*0x613631*/
    }
    a1 = v1; /*0x613629*/
  }
  return result; /*0x61360d*/
}
