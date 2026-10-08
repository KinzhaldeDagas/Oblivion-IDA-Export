int __fastcall _inc(int a1, FILE *a2)
{
  if ( --a2->_cnt < 0 ) /*0x995cf8*/
    return _filbuf(a2); /*0x995d07*/
  return *(unsigned __int8 *)a2->_ptr++; /*0x995d05*/
}
