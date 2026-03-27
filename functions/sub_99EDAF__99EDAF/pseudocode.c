signed int __usercall sub_99EDAF@<eax>(int a1@<ebx>, int a2@<edi>, _DWORD *a3)
{
  if ( a3 )
  {
    *a3 = dword_B31FEC;
    return 0;
  }
  else
  {
    *_errno() = 0x16;
    _invalid_parameter(a1, a2, 0);
    return 0x16;
  }
}
