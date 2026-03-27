int __fastcall sub_6135F0(int a1)
{
  int v1; // esi
  _DWORD *v2; // ecx
  int result; // eax
  _DWORD *v4; // eax

  while ( 1 )
  {
    v1 = a1;
    v2 = *(_DWORD **)(a1 + 0x40);
    result = 0;
    if ( !v2 || !v2[1] && !*v2 )
      break;
    if ( *v2 )
      return *(_DWORD *)*v2;
    v4 = (_DWORD *)v2[1];
    if ( v4 )
    {
      v2[1] = v4[1];
      *v2 = *v4;
      FormHeapFree((unsigned int)v4);
    }
    else
    {
      *v2 = 0;
    }
    a1 = v1;
  }
  return result;
}
