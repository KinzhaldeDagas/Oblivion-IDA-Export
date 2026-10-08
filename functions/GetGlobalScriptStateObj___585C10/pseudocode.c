int __cdecl GetGlobalScriptStateObj__(char a1)
{
  int result; // eax
  _DWORD *v2; // eax
  _DWORD *v3; // eax

  result = MEMORY[0xB3A6FC]; /*0x585c31*/
  if ( !MEMORY[0xB3A6FC] ) /*0x585c31*/
  {
    if ( a1 ) /*0x585c3e*/
    {
      v2 = (_DWORD *)FormHeapAlloc(0x34u); /*0x585c42*/
      if ( v2 ) /*0x585c58*/
        v3 = sub_585B60(v2); /*0x585c5c*/
      else
        v3 = 0; /*0x585c63*/
      MEMORY[0xB3A6FC] = (int)v3; /*0x585c6f*/
      sub_585540(v3); /*0x585c74*/
      return MEMORY[0xB3A6FC]; /*0x585c79*/
    }
  }
  return result; /*0x585c7e*/
}
