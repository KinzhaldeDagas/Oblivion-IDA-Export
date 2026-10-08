int __thiscall BSFile_GetFileSizeDirect(FILE **this)
{
  bool v2; // zf
  FILE *v3; // eax
  int v4; // edi
  FILE *v5; // eax
  FILE *v7; // [esp-24h] [ebp-28h]

  v2 = *(this + 8) == (FILE *)1; /*0x430243*/
  *(this + 0x54) = 0; /*0x430247*/
  if ( v2 ) /*0x430251*/
    NiFile_Flush((int)this); /*0x430253*/
  ((void (__thiscall *)(FILE **, _DWORD, _DWORD))(*this)->_bufsiz)(this, 0, 0); /*0x430263*/
  v3 = *(this + 7); /*0x430265*/
  if ( v3 ) /*0x43026a*/
  {
    v4 = ftell(v3); /*0x430275*/
    fseek(*(this + 7), 0, 2); /*0x43027d*/
    v5 = (FILE *)ftell(*(this + 7)); /*0x430286*/
    v7 = *(this + 7); /*0x430291*/
    *(this + 0x54) = v5; /*0x430292*/
    fseek(v7, v4, 0); /*0x430298*/
  }
  return (int)*(this + 0x54); /*0x4302a7*/
}
