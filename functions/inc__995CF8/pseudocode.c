int __fastcall _inc(int a1, FILE *a2)
{
  if ( --a2->_cnt < 0 )
    return _filbuf(a2);
  return *(unsigned __int8 *)a2->_ptr++;
}
