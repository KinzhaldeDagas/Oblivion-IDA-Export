double __usercall sub_65D830@<st0>(_DWORD *this@<ecx>, double result@<st0>)
{
  int *v3; // ecx

  v3 = (int *)*(this + 0x17D); /*0x65d833*/
  if ( v3 ) /*0x65d83b*/
  {
    if ( *((_BYTE *)this + 0x117) || !sub_5299B0(v3, this + 0x17E) ) /*0x65d852*/
    {
      result = sub_529A20(*(this + 0x17D), result, this + 0x17E); /*0x65d868*/
      *((_BYTE *)this + 0x117) = 0; /*0x65d86d*/
    }
  }
  return result; /*0x65d83f*/
}
