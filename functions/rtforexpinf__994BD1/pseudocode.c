void __fastcall rtforexpinf(char a1)
{
  if ( a1 ) /*0x994bd3*/
  {
    rtforloginf_::tranzeronpop(); /*0x994bd3*/
  }
  else
  {
    __asm /*0x994bd5*/
    {
      fstp    st
      fld     tbyte_B31CD0
    }
  }
}
