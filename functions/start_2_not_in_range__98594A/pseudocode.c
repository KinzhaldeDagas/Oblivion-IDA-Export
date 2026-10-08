int start_2_::not_in_range()
{
  __asm /*0x98594a*/
  {
    fstp    st
    fld     tbyte ptr ds:0B319B0h
  }
  return start_2_::_Error_handling_1();
}
