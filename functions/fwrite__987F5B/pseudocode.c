size_t __cdecl fwrite(const void *Str, size_t Size, size_t Count, FILE *File)
{
  int v4; // ebx
  int v5; // ebp
  int v6; // edi
  size_t result; // rax
  size_t v8; // [esp-4h] [ebp-30h]
  FILE *v9; // [esp+4h] [ebp-28h]

  if ( !(HIDWORD(Size) * (_DWORD)Size) ) /*0x987f70*/
LABEL_6:
    JUMPOUT(0x987FD8); /*0x987fd8*/
  if ( !(_DWORD)Count || !Str ) /*0x987fa4*/
  {
    *_errno() = 0; /*0x987f89*/
    _invalid_parameter(v4, v6, 0); /*0x987f90*/
    goto LABEL_6; /*0x987f98*/
  }
  _lock_file((_RTL_CRITICAL_SECTION_0 *)Count); /*0x987fa9*/
  LODWORD(v8) = Count; /*0x987fb2*/
  _fwrite_nolock(Str, Size, v8, v9); /*0x987fbe*/
  _unlock_file((_RTL_CRITICAL_SECTION_0 *)Count); /*0x987fe1*/
  LODWORD(result) = fwrite_::_LN11_4(v5); /*0x987fe7*/
  return result;
}
