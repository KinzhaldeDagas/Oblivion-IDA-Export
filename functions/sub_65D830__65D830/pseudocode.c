double __usercall sub_65D830@<st0>(_DWORD *this@<ecx>, double result@<st0>)
{
  int *v4; // ecx

  v4 = (int *)*(this + 0x17D);
  if ( v4 )
  {
    if ( *((_BYTE *)this + 0x117) || !sub_5299B0(v4, this + 0x17E) )
    {
      result = sub_529A20(*(this + 0x17D), result, this + 0x17E);
      *((_BYTE *)this + 0x117) = 0;
    }
  }
  return result;
}
