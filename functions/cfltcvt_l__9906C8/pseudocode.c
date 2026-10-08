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
  switch ( a5 ) /*0x9906d6*/
  {
    case 'e': /*0x9906d6*/
    case 'E': /*0x9906d6*/
      return _cftoe_l((int *)a2, a3, a4, a6, a7, a8); /*0x990744*/
    case 'f': /*0x9906d6*/
      return _cftof_l((int *)a2, a3, a4, a6, a8); /*0x9906ec*/
    case 'a': /*0x9906d6*/
    case 'A': /*0x9906d6*/
      return _cftoa_l(a1, a2, a3, a4, a6, a7, a8); /*0x99072b*/
  }
  return _cftog_l((int *)a2, a3, a4, a6, a7, a8); /*0x9906f4*/
}
