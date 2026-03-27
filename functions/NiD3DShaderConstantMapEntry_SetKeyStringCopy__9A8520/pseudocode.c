UInt32 __thiscall NiD3DShaderConstantMapEntry::SetKeyStringCopy(NiD3DShaderConstantMapEntry *this, char *Src)
{
  char *v2; // ebp
  unsigned int v4; // kr00_4
  char *Key; // ecx
  unsigned int v6; // edi
  UInt32 result; // eax

  v2 = Src;
  if ( Src && *Src )
  {
    v4 = strlen(Src);
    Key = this->Key;
    v6 = v4 + 1;
    if ( Key )
    {
      if ( strlen(Key) < v6 )
      {
        FormHeapFree((unsigned int)Key);
        this->Key = 0;
      }
      v2 = Src;
    }
    if ( !this->Key )
      this->Key = (char *)FormHeapAlloc(v6);
    return strcpy_s(this->Key, v6, v2);
  }
  else
  {
    FormHeapFree((unsigned int)this->Key);
    this->Key = 0;
  }
  return result;
}
