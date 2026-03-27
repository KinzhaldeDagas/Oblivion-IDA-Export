int __thiscall sub_77BEE0(void *this)
{
  int result; // eax

  if ( !byte_B4288C )
  {
    byte_B4288C = 1;
    sub_77BE60(0x16);
    sub_77BE60(0x17);
    sub_77BE60(0x18);
    sub_772970();
    sub_7734A0();
    sub_7797B0();
    sub_76FAC0();
    sub_77D180(this);
    sub_77F6F0();
    sub_77BC90();
    sub_77BCE0();
    sub_77BC40();
    _cfltcvt_init();
  }
  return result;
}
