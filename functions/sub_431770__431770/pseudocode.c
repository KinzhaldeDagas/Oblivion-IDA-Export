void __thiscall sub_431770(FileFinder *this)
{
  unsigned int numObjs; // edi
  unsigned int v3; // ecx
  UInt16 end; // ax
  UInt16 v5; // cx
  char *data; // eax
  int v7; // edx
  char *v8; // [esp-4h] [ebp-Ch]

  numObjs = this->searchPath.numObjs; /*0x431774*/
  this->vtbl = (FileFinderVtbl *)&FileFinder::`vftable'; /*0x43177a*/
  while ( numObjs ) /*0x431780*/
  {
    v3 = *(_DWORD *)&this->searchPath.data[4 * numObjs-- - 4]; /*0x431785*/
    FormHeapFree(v3); /*0x43178d*/
    end = this->searchPath.end; /*0x431792*/
    if ( numObjs < end ) /*0x43179e*/
    {
      v5 = end - 1; /*0x4317a0*/
      data = this->searchPath.data; /*0x4317a3*/
      this->searchPath.end = v5; /*0x4317a6*/
      v7 = *(_DWORD *)&data[4 * numObjs]; /*0x4317aa*/
      *(_DWORD *)&data[4 * numObjs] = *(_DWORD *)&data[4 * v5]; /*0x4317b5*/
      *(_DWORD *)&this->searchPath.data[4 * this->searchPath.end] = 0; /*0x4317bf*/
      if ( v7 ) /*0x4317c6*/
        --this->searchPath.numObjs; /*0x4317c8*/
    }
  }
  if ( MEMORY[0xB33A04] == this ) /*0x4317d8*/
    MEMORY[0xB33A04] = 0; /*0x4317da*/
  v8 = this->searchPath.data; /*0x4317e7*/
  this->searchPath._vtbl = &NiTArray<char const *>::`vftable'; /*0x4317e8*/
  FormHeapFree((unsigned int)v8); /*0x4317ef*/
}
