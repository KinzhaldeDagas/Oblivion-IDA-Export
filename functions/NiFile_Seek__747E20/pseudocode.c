void __thiscall NiFile_Seek(int this, int Offset, int Origin)
{
  int v4; // edi
  int v5; // eax
  int v6; // ecx

  if ( *(_BYTE *)(this + 0x24) ) /*0x747e23*/
  {
    v4 = Offset; /*0x747e32*/
    if ( Origin == 1 ) /*0x747e36*/
    {
      v5 = *(_DWORD *)(this + 0x14); /*0x747e38*/
      v6 = v5 + Offset; /*0x747e3b*/
      if ( v5 + Offset >= 0 && v6 < *(_DWORD *)(this + 0x10) ) /*0x747e45*/
      {
        *(_DWORD *)(this + 0x14) = v6; /*0x747e49*/
        return; /*0x747e4d*/
      }
      v4 = v5 - *(_DWORD *)(this + 0x10) + Offset; /*0x747e53*/
    }
    NiFile_Flush(this); /*0x747e57*/
    *(_BYTE *)(this + 0x24) = fseek(*(FILE **)(this + 0x1C), v4, Origin) == 0; /*0x747e70*/
    NiFile_Seek_::Done(Offset, Origin); /*0x747e73*/
  }
  else
  {
    NiFile_Seek_::Done(Offset, Origin); /*0x747e27*/
  }
}
