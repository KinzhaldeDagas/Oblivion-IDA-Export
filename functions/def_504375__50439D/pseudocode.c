// positive sp value has been detected, the output may be wrong!
char __usercall def_504375@<al>(
        int a1@<eax>,
        _DWORD *a2@<ebx>,
        int a3@<edi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        double *a10)
{
  int v11; // [esp+0h] [ebp-4h]

  *a10 = 0.0; /*0x5043a6*/
  if ( a3 ) /*0x5043a8*/
  {
    if ( a2 ) /*0x5043ac*/
    {
      if ( sub_4FB5F0(a2, v11, a1) ) /*0x5043b6*/
        *a10 = 1.0; /*0x5043c1*/
    }
  }
  return 1; /*0x5043cb*/
}
