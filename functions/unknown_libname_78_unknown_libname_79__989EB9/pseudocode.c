// positive sp value has been detected, the output may be wrong!
void *__usercall unknown_libname_78_::unknown_libname_79@<eax>(DWORD a1@<esi>, void *a2, size_t a3)
{
  void *v3; // edi
  DWORD v4; // eax
  size_t v6; // [esp-8h] [ebp-8h]

  do /*0x989efe*/
  {
    v3 = _recalloc(a2, a3, v6); /*0x989eca*/
    if ( v3 ) /*0x989ed1*/
      break; /*0x989ed1*/
    if ( !HIDWORD(a3) ) /*0x989ed7*/
      break; /*0x989ed7*/
    if ( !dword_BA9E00[3] ) /*0x989edf*/
      break; /*0x989edf*/
    Sleep(a1); /*0x989ee2*/
    v4 = a1 + 0x3E8; /*0x989ee8*/
    if ( a1 + 0x3E8 > dword_BA9E00[3] ) /*0x989ef4*/
      v4 = 0xFFFFFFFF; /*0x989ef6*/
    a1 = v4; /*0x989efc*/
  }
  while ( v4 != 0xFFFFFFFF ); /*0x989efe*/
  return v3; /*0x989f04*/
}
