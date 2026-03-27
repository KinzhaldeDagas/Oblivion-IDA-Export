size_t __cdecl fwrite(const void *Str, size_t Size, size_t Count, FILE *File)
{
  int v4; // ebx
  int v5; // edi
  size_t v7; // [esp-4h] [ebp-30h]
  FILE *v8; // [esp+4h] [ebp-28h]

  if ( !(HIDWORD(Size) * (_DWORD)Size) )
LABEL_6:
    JUMPOUT(0x987FD8);
  if ( !(_DWORD)Count || !Str )
  {
    *_errno() = 0;
    _invalid_parameter(v4, v5, 0);
    goto LABEL_6;
  }
  _lock_file(Count);
  LODWORD(v7) = Count;
  _fwrite_nolock(Str, Size, v7, v8);
  _unlock_file();
  return fwrite_::_LN11_4();
}
