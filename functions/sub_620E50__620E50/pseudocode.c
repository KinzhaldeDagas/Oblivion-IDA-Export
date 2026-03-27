void __usercall sub_620E50(Actor **this@<ecx>, double a2@<st2>, double a3@<st0>)
{
  int v4; // eax

  sub_6160B0(this);
  v4 = (int)*(this + 0x1C);
  if ( v4 == 2 || v4 == 4 )
    sub_61FE90((float *)this, a2, a3);
  else
    sub_61FEF0((float *)this, a2, a3);
}
