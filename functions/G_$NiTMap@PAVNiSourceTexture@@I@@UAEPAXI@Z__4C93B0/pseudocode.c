unsigned int *__thiscall NiTMap<NiSourceTexture *,unsigned int>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTMap<NiSourceTexture *,unsigned int>::~NiTMap<NiSourceTexture *,unsigned int>(this); /*0x4c93b3*/
  if ( (a2 & 1) != 0 ) /*0x4c93bd*/
    FormHeapFree((unsigned int)this); /*0x4c93c0*/
  return this; /*0x4c93ca*/
}
