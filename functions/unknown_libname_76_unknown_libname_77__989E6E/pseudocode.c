// positive sp value has been detected, the output may be wrong!
void *__usercall unknown_libname_76_::unknown_libname_77@<eax>(DWORD a1@<esi>, void *a2, int a3)
{
  void *v3; // edi
  unsigned int v4; // eax
  size_t v6; // [esp-Ch] [ebp-Ch]

  do
  {
    LODWORD(v6) = a3;
    v3 = realloc(a2, v6);
    if ( v3 )
      break;
    if ( !a3 )
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
