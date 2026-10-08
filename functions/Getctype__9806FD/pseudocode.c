_Ctypevec *__cdecl _Getctype(_Ctypevec *__return_ptr retstr)
{
  const __int16 *v1; // eax
  const unsigned __int16 *v2; // eax
  const __int16 *v3; // eax

  retstr->_Hand = *((_DWORD *)___lc_handle_func() + 1); /*0x98070a*/
  retstr->_Page = ___lc_codepage_func(); /*0x980718*/
  v1 = (const __int16 *)unknown_libname_74(); /*0x98071b*/
  retstr->_Table = v1; /*0x980724*/
  if ( v1 ) /*0x980727*/
  {
    v2 = __pctype_func(); /*0x98072e*/
    memcpy((void *)retstr->_Table, v2, 0x200u); /*0x980737*/
    retstr->_Delfl = 1; /*0x98073f*/
  }
  else
  {
    v3 = (const __int16 *)__pctype_func(); /*0x980748*/
    retstr->_Delfl = 0; /*0x98074d*/
    retstr->_Table = v3; /*0x980751*/
  }
  return retstr; /*0x980756*/
}
