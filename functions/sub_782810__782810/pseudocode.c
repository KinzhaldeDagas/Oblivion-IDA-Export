unsigned int sub_782810()
{
  unsigned int result; // eax
  unsigned int v1; // esi

  result = dword_B428D4;
  if ( dword_B428D4 )
  {
    do
    {
      v1 = *(_DWORD *)(result + 0x18);
      *(_DWORD *)(result + 8) = 0;
      FormHeapFree(result);
      result = v1;
    }
    while ( v1 );
  }
  dword_B428D4 = 0;
  return result;
}
