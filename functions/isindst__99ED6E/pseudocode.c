int __usercall _isindst@<eax>(int a1@<ebx>, _DWORD *a2)
{
  _lock(6);
  _isindst_nolock(a1, a2);
  _unlock(6);
  return _isindst_::_LN8_12();
}
