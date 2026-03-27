_Ctypevec *__cdecl _Getctype(_Ctypevec *__return_ptr retstr)
{
  const __int16 *v1; // eax
  const unsigned __int16 *v2; // eax
  const __int16 *v3; // eax
  size_t v5; // [esp-4h] [ebp-8h]

  retstr->_Hand = *(_DWORD *)(___lc_handle_func() + 4);
  retstr->_Page = ___lc_codepage_func();
  v1 = (const __int16 *)unknown_libname_74(0x100, 2);
  retstr->_Table = v1;
  if ( v1 )
  {
    LODWORD(v5) = 0x200;
    v2 = __pctype_func();
    memcpy((void *)retstr->_Table, v2, v5);
    retstr->_Delfl = 1;
  }
  else
  {
    v3 = (const __int16 *)__pctype_func();
    retstr->_Delfl = 0;
    retstr->_Table = v3;
  }
  return retstr;
}
