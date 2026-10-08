int __usercall _splitpath_helper_::_error_einval_25424@<eax>(_DWORD *a1@<ebp>, _BYTE *a2@<ebx>, _BYTE *a3@<edi>)
{
  a1[0xFFFFFFFE] = 1; /*0x9842d7*/
  return _splitpath_helper_::_error_erange_25455(a2, a1, a3);
}
