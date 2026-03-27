unsigned __int8 *__cdecl _mbslwr(unsigned __int8 *Str)
{
  return _mbslwr_s_l((char *)Str, (unsigned int)-(Str != 0)) == 0 ? Str : 0;
}
