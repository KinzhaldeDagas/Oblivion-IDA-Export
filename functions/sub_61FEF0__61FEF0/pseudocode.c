void __usercall sub_61FEF0(float *this@<ecx>, double a2@<st2>, double a3@<st0>)
{
  char v4; // al

  sub_6150E0(this, a2, a3, 0);
  if ( !v4 )
  {
    *((_BYTE *)this + 0x17F) = 1;
    if ( !sub_61C6E0((int)this) )
    {
      sub_619920((int)this, 0xF);
      *(this + 0x35) = *(this + 0x11);
      *(this + 0x36) = *(float *)&dword_A46C30;
      *(this + 0x37) = flt_A30634;
    }
  }
}
