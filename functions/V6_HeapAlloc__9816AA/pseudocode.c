int __cdecl V6_HeapAlloc(unsigned int a1)
{
  int v1; // ecx
  unsigned int v2; // edx
  int v4; // [esp-8h] [ebp-34h]

  if ( a1 > dword_BAABCC )
    return V6_HeapAlloc_::_LN9_0(v1);
  _lock(4);
  __sbh_alloc_block(v2, a1);
  _unlock(4);
  return V6_HeapAlloc_::_LN9_0(v4);
}
