NiNIFImageReader *__thiscall NiNIFImageReader::NiNIFImageReader(NiNIFImageReader *this)
{
  *(_DWORD *)this = &NiImageReader::`vftable';
  *((_DWORD *)this + 0x3E) = 0;
  *((_DWORD *)this + 0x3F) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)this + 4);
  *(_DWORD *)this = &NiNIFImageReader::`vftable';
  NiStream::NiStream((NiNIFImageReader *)((char *)this + 0x100));
  return this;
}
