int __thiscall sub_948580(void **this, _DWORD *a2)
{
  int result; // eax
  int i; // esi

  sub_918440(*(this + 3), a2[1]);
  result = a2[1];
  for ( i = 0; i < result; ++i )
  {
    sub_948910((_DWORD **)*(this + 3), *(Concurrency::details::InternalContextBase **)(*a2 + 4 * i));
    result = a2[1];
  }
  return result;
}
