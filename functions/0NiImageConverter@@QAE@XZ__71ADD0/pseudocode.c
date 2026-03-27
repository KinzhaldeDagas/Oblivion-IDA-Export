NiImageConverter *__thiscall NiImageConverter::NiImageConverter(NiImageConverter *this)
{
  *(_DWORD *)this = &NiRefObject::`vftable';
  *((_DWORD *)this + 1) = 0;
  InterlockedIncrement(&NiRefObject_objcount);
  *(_DWORD *)this = &NiImageConverter::`vftable';
  NiNIFImageReader::NiNIFImageReader((NiImageConverter *)((char *)this + 0x80));
  return this;
}
