int __thiscall BSFile_GetFileSizeDirect(FILE **this)
{
  bool v2; // zf
  FILE *v3; // eax
  int v4; // edi
  int v5; // eax
  FILE *v7; // [esp-24h] [ebp-28h]

  v2 = *(this + 8) == (FILE *)1;
  *(this + 0x54) = 0;
  if ( v2 )
    NiFile_Flush((int)this);
  ((void (__thiscall *)(FILE **, _DWORD, _DWORD))(*this)->_bufsiz)(this, 0, 0);
  v3 = *(this + 7);
  if ( v3 )
  {
    v4 = ftell(v3);
    fseek(*(this + 7), 0, 2);
    v5 = ftell(*(this + 7));
    v7 = *(this + 7);
    *(this + 0x54) = (FILE *)v5;
    fseek(v7, v4, 0);
  }
  return (int)*(this + 0x54);
}
