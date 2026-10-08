void __thiscall NiTMap<unsigned int,unsigned char>::~NiTMap<unsigned int,unsigned char>(unsigned int *this)
{
  *this = (unsigned int)&NiTMap<unsigned int,unsigned char>::`vftable'; /*0x664068*/
  NiTMap_Clear(this); /*0x664076*/
  *this = (unsigned int)&NiTMapBase<DFALL<unsigned char>,unsigned int,unsigned char>::`vftable'; /*0x664085*/
  NiTMap_Clear(this); /*0x66408b*/
  FormHeapFree(*(this + 2)); /*0x664094*/
}
