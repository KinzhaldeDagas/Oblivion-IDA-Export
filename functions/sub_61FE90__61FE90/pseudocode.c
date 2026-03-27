void __usercall sub_61FE90(float *this@<ecx>, double a2@<st2>, double a3@<st0>)
{
  char v4; // al

  sub_6150E0(this, a2, a3, 0);
  if ( !v4 )
  {
    *((_BYTE *)this + 0x17E) = 1;
    if ( !sub_61C6E0((int)this) )
    {
      *(this + 0x35) = *(this + 0x11);
      *(this + 0x36) = *(float *)&dword_A46C30;
      *(this + 0x37) = flt_A30634;
      sub_619920((int)this, 0xA);
      sub_6160B0((Actor **)this);
    }
  }
}
