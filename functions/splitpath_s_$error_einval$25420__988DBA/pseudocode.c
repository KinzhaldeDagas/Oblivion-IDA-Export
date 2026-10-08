errno_t __usercall _splitpath_s_::_error_einval_25420@<eax>(_DWORD *a1@<ebp>, int a2@<ebx>, unsigned int a3@<edi>)
{
  a1[0xFFFFFFFF] = 1; /*0x988dba*/
  return _splitpath_s_::_error_erange_25451(a2, a1, a3);
}
