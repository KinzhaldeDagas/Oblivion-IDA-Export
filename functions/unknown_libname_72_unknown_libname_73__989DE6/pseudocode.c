// positive sp value has been detected, the output may be wrong!
void *__usercall unknown_libname_72_::unknown_libname_73@<eax>(DWORD a1@<esi>, int a2)
{
  void *v2; // edi
  DWORD v3; // eax
  size_t v5; // [esp-Ch] [ebp-Ch]

  do /*0x989e1b*/
  {
    LODWORD(v5) = a2; /*0x989de6*/
    v2 = malloc(v5); /*0x989def*/
    if ( v2 ) /*0x989df4*/
      break; /*0x989df4*/
    if ( !dword_BA9E00[3] ) /*0x989dfc*/
      break; /*0x989dfc*/
    Sleep(a1); /*0x989dff*/
    v3 = a1 + 0x3E8; /*0x989e05*/
    if ( a1 + 0x3E8 > dword_BA9E00[3] ) /*0x989e11*/
      v3 = 0xFFFFFFFF; /*0x989e13*/
    a1 = v3; /*0x989e19*/
  }
  while ( v3 != 0xFFFFFFFF ); /*0x989e1b*/
  return v2; /*0x989e21*/
}
