signed int __thiscall NiFile_GetFileSize(FILE **this)
{
  int v2; // ebx
  int v4; // edi

  v2 = ftell(*(this + 7));
  if ( v2 < 0 )
    return 0;
  fseek(*(this + 7), 0, 2);
  v4 = ftell(*(this + 7));
  fseek(*(this + 7), v2, 0);
  return v4 < 0 ? 0 : v4;
}
