ArchiveFile *__thiscall sub_42E790(ArchiveFile *this, char a2)
{
  _DWORD *v3; // edi

  v3 = *((_DWORD **)this + 0x57); /*0x42e794*/
  *(_DWORD *)this = &CompressedArchiveFile::`vftable'; /*0x42e79c*/
  if ( v3 ) /*0x42e7a2*/
  {
    Zlib_inflateEnd(v3); /*0x42e7a5*/
    FormHeapFree((unsigned int)v3); /*0x42e7ab*/
  }
  if ( *((_DWORD *)this + 0x58) ) /*0x42e7b3*/
    FormHeapFree(*((_DWORD *)this + 0x58)); /*0x42e7be*/
  ArchiveFile::~ArchiveFile(this); /*0x42e7c8*/
  if ( (a2 & 1) != 0 ) /*0x42e7d2*/
    FormHeapFree((unsigned int)this); /*0x42e7d5*/
  return this; /*0x42e7dd*/
}
