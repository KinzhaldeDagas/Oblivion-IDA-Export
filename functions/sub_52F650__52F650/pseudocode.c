_DWORD *__thiscall sub_52F650(char *this, int a2)
{
  _DWORD *result; // eax
  unsigned int v3; // esi
  unsigned int i; // ecx
  int v5; // edx

  result = sub_52EFA0(this, a2);
  if ( result )
  {
    v3 = result[3];
    for ( i = 0; i < v3; ++i )
    {
      v5 = *(_DWORD *)(result[1] + 4 * i);
      if ( v5 )
        *(_WORD *)(v5 + 0x20) = i;
    }
  }
  return result;
}
