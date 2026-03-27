// positive sp value has been detected, the output may be wrong!
void *__usercall unknown_libname_72_::unknown_libname_73@<eax>(DWORD a1@<esi>, int a2)
{
  void *v2; // edi
  unsigned int v3; // eax
  size_t v5; // [esp-Ch] [ebp-Ch]

  do
  {
    LODWORD(v5) = a2;
    v2 = malloc(v5);
    if ( v2 )
      break;
    if ( !dword_BA9E0C )
      break;
    Sleep(a1);
    v3 = a1 + 0x3E8;
    if ( a1 + 0x3E8 > dword_BA9E0C )
      v3 = 0xFFFFFFFF;
    a1 = v3;
  }
  while ( v3 != 0xFFFFFFFF );
  return v2;
}
