// positive sp value has been detected, the output may be wrong!
void start_3_::_ErrorHandling()
{
  if ( *(_DWORD *)&byte_BA9DCC[0x10] ) /*0x985c45*/
    start_8_::unknown_libname_162(); /*0x985c4c*/
  else
    unknown_libname_155(); /*0x985c5d*/
}
