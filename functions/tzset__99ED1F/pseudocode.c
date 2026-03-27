int __usercall __tzset@<eax>(int a1@<edi>)
{
  if ( dword_BAA874 )
    return __tzset_::_LN10_10();
  _lock(6);
  if ( !dword_BAA874 )
  {
    _tzset_nolock(a1, 0);
    ++dword_BAA874;
  }
  _unlock(6);
  return __tzset_::_LN10_10();
}
