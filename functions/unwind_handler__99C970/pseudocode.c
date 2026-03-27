int __cdecl _unwind_handler(int a1, int a2, int a3, _DWORD *a4, int a5)
{
  if ( (*(_DWORD *)(a1 + 4) & 6) != 0 )
  {
    _local_unwind2(*(_DWORD *)(a5 + 0x24));
    *a4 = a2;
  }
  return _unwind_handler_::_uh_return();
}
