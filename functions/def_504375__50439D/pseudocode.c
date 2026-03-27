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

  *a10 = 0.0;
  if ( a3 )
  {
    if ( a2 )
    {
      if ( sub_4FB5F0(a2, v11, a1) )
        *a10 = 1.0;
    }
  }
  return 1;
}
