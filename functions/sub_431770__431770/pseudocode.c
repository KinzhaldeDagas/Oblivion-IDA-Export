void __thiscall sub_431770(FileFinder *this)
{
  unsigned int numObjs; // edi
  unsigned int v3; // ecx
  UInt16 end; // ax
  unsigned __int16 v5; // cx
  char *data; // eax
  int v7; // edx
  unsigned int v8; // [esp-4h] [ebp-Ch]

  numObjs = this->searchPath.numObjs;
  this->vtbl = (FileFinderVtbl *)&FileFinder::`vftable';
  while ( numObjs )
  {
    v3 = *(_DWORD *)&this->searchPath.data[4 * numObjs-- - 4];
    FormHeapFree(v3);
    end = this->searchPath.end;
    if ( numObjs < end )
    {
      v5 = end - 1;
      data = this->searchPath.data;
      this->searchPath.end = v5;
      v7 = *(_DWORD *)&data[4 * numObjs];
      *(_DWORD *)&data[4 * numObjs] = *(_DWORD *)&data[4 * v5];
      *(_DWORD *)&this->searchPath.data[4 * this->searchPath.end] = 0;
      if ( v7 )
        --this->searchPath.numObjs;
    }
  }
  if ( OBSE_g_FileFinder == this )
    OBSE_g_FileFinder = 0;
  v8 = (unsigned int)this->searchPath.data;
  this->searchPath._vtbl = &NiTArray<char const *>::`vftable';
  FormHeapFree(v8);
}
