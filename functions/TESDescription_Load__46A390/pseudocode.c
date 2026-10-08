int __cdecl TESDescription_Load(int a1, int a2)
{
  int result; // eax

  if ( a1 ) /*0x46a396*/
  {
    result = a2; /*0x46a398*/
    if ( a2 ) /*0x46a39e*/
    {
      result = *(_DWORD *)(a2 + 0x25C); /*0x46a3a0*/
      *(_DWORD *)(a1 + 4) = result; /*0x46a3a6*/
    }
  }
  return result; /*0x46a3a9*/
}
