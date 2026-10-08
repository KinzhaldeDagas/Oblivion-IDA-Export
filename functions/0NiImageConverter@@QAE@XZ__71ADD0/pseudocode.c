NiImageConverter *__thiscall NiImageConverter::NiImageConverter(NiImageConverter *this)
{
  *(_DWORD *)this = &NiRefObject::`vftable'; /*0x71adfd*/
  *((_DWORD *)this + 1) = 0; /*0x71ae03*/
  InterlockedIncrement(&MEMORY[0xB3FD64]); /*0x71ae0a*/
  *(_DWORD *)this = &NiImageConverter::`vftable'; /*0x71ae1e*/
  NiNIFImageReader::NiNIFImageReader((NiImageConverter *)((char *)this + 0x80)); /*0x71ae24*/
  return this; /*0x71ae2b*/
}
