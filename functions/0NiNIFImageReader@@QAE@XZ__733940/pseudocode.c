NiNIFImageReader *__thiscall NiNIFImageReader::NiNIFImageReader(NiNIFImageReader *this)
{
  *(_DWORD *)this = &NiImageReader::`vftable'; /*0x73396e*/
  *((_DWORD *)this + 0x3E) = 0; /*0x733975*/
  *((_DWORD *)this + 0x3F) = 0; /*0x73397c*/
  InitializeCriticalSection((LPCRITICAL_SECTION)this + 4); /*0x733983*/
  *(_DWORD *)this = &NiNIFImageReader::`vftable'; /*0x733997*/
  NiStream::NiStream((NiNIFImageReader *)((char *)this + 0x100)); /*0x73399d*/
  return this; /*0x7339a4*/
}
