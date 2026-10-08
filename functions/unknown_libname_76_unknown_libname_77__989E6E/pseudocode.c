// positive sp value has been detected, the output may be wrong!
void *__usercall unknown_libname_76_::unknown_libname_77@<eax>(DWORD a1@<esi>, void *a2, int a3)
{
  void *v3; // edi
  DWORD v4; // eax
  size_t v6; // [esp-Ch] [ebp-Ch]

  do /*0x989eae*/
  {
    LODWORD(v6) = a3; /*0x989e6e*/
    v3 = realloc(a2, v6); /*0x989e7b*/
    if ( v3 ) /*0x989e81*/
      break; /*0x989e81*/
    if ( !a3 ) /*0x989e87*/
      break; /*0x989e87*/
    if ( !dword_BA9E00[3] ) /*0x989e8f*/
      break; /*0x989e8f*/
    Sleep(a1); /*0x989e92*/
    v4 = a1 + 0x3E8; /*0x989e98*/
    if ( a1 + 0x3E8 > dword_BA9E00[3] ) /*0x989ea4*/
      v4 = 0xFFFFFFFF; /*0x989ea6*/
    a1 = v4; /*0x989eac*/
  }
  while ( v4 != 0xFFFFFFFF ); /*0x989eae*/
  return v3; /*0x989eb4*/
}
