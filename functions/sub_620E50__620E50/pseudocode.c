void __usercall sub_620E50(Actor **this@<ecx>, double a2@<st0>)
{
  int v4; // eax

  sub_6160B0(this); /*0x620e53*/
  v4 = (int)*(this + 0x1C); /*0x620e58*/
  if ( v4 == 2 || v4 == 4 ) /*0x620e63*/
    sub_61FE90((float *)this, a2); /*0x620e68*/
  else
    sub_61FEF0((float *)this, a2); /*0x620e70*/
}
