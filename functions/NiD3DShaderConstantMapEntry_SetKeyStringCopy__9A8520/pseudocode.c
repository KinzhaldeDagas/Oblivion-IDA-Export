UInt32 __thiscall NiD3DShaderConstantMapEntry::SetKeyStringCopy(NiD3DShaderConstantMapEntry *this, char *Src)
{
  char *v2; // ebp
  unsigned int v4; // kr00_4
  char *Key; // ecx
  unsigned int v6; // edi
  UInt32 result; // eax

  v2 = Src; /*0x9a8521*/
  if ( Src && *Src ) /*0x9a852c*/
  {
    v4 = strlen(Src); /*0x9a8534*/
    Key = this->Key; /*0x9a8540*/
    v6 = v4 + 1; /*0x9a8548*/
    if ( Key ) /*0x9a854b*/
    {
      if ( strlen(Key) < v6 ) /*0x9a855f*/
      {
        FormHeapFree((unsigned int)Key); /*0x9a8562*/
        this->Key = 0; /*0x9a856a*/
      }
      v2 = Src; /*0x9a8571*/
    }
    if ( !this->Key ) /*0x9a8575*/
      this->Key = (char *)FormHeapAlloc(v6); /*0x9a8584*/
    return strcpy_s(this->Key, v6, v2); /*0x9a858d*/
  }
  else
  {
    FormHeapFree((unsigned int)this->Key); /*0x9a859f*/
    this->Key = 0; /*0x9a85a7*/
  }
  return result; /*0x9a8596*/
}
