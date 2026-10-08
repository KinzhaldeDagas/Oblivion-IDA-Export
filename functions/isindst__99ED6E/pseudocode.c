int __usercall _isindst@<eax>(int a1@<ebx>, _DWORD *a2)
{
  int v2; // ebp

  _lock(6); /*0x99ed7c*/
  _isindst_nolock(a1, a2); /*0x99ed89*/
  _unlock(6); /*0x99eda8*/
  return _isindst_::_LN8_12(v2);
}
