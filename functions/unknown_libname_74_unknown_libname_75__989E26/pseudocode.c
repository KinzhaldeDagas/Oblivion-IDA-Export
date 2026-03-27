// positive sp value has been detected, the output may be wrong!
int __usercall unknown_libname_74_::unknown_libname_75@<eax>(DWORD a1@<esi>, int a2, int a3)
{
  int v3; // edi
  unsigned int v4; // eax

  do
  {
    v3 = _calloc_impl(a2, a3);
    if ( v3 )
      break;
    if ( !dword_BA9E0C )
      break;
    Sleep(a1);
    v4 = a1 + 0x3E8;
    if ( a1 + 0x3E8 > dword_BA9E0C )
      v4 = 0xFFFFFFFF;
    a1 = v4;
  }
  while ( v4 != 0xFFFFFFFF );
  return v3;
}
