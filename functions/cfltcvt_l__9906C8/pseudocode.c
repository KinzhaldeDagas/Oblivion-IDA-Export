int __usercall _cfltcvt_l@<eax>(
        int a1@<ebx>,
        unsigned int *a2,
        char *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        struct localeinfo_struct *a8)
{
  switch ( a5 )
  {
    case 'e':
    case 'E':
      return _cftoe_l(a2, a3, a4, a6, a7, a8);
    case 'f':
      return _cftof_l(a2, a3, a4, a6, a8);
    case 'a':
    case 'A':
      return _cftoa_l(a1, a2, a3, a4, a6, a7, a8);
  }
  return _cftog_l(a2, a3, a4, a6, a7, a8);
}
