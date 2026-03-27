errno_t __usercall _splitpath_s_::_error_einval_25420@<eax>(int a1@<ebp>, int a2)
{
  *(_DWORD *)(a1 - 4) = 1;
  return _splitpath_s_::_error_erange_25451(a2);
}
