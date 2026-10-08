int __thiscall sub_948580(void **this, _DWORD *a2)
{
  int result; // eax
  int i; // esi

  sub_918440(*(this + 3), a2[1]); /*0x948590*/
  result = a2[1]; /*0x948595*/
  for ( i = 0; i < result; ++i ) /*0x94859c*/
  {
    sub_948910((_DWORD **)*(this + 3), *(Concurrency::details::InternalContextBase **)(*a2 + 4 * i)); /*0x9485a9*/
    result = a2[1]; /*0x9485ae*/
  }
  return result; /*0x9485b6*/
}
