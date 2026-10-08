int __cdecl V6_HeapAlloc(unsigned int a1)
{
  int v1; // ebp

  if ( a1 <= unk_BAABCC ) /*0x9816c3*/
  {
    _lock(4); /*0x9816c7*/
    __sbh_alloc_block(a1); /*0x9816d2*/
    _unlock(4); /*0x9816f2*/
  }
  return V6_HeapAlloc_::_LN9_0(v1);
}
