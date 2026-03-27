unsigned __int64 __stdcall _allmul(__int64 a1, __int64 a2)
{
  if ( HIDWORD(a1) | HIDWORD(a2) )
    return a1 * a2;
  else
    return (unsigned int)a2 * (unsigned __int64)(unsigned int)a1;
}
