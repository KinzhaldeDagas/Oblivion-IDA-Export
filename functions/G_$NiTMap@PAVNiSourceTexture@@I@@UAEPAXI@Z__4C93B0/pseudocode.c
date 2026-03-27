unsigned int *__thiscall NiTMap<NiSourceTexture *,unsigned int>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTMap<NiSourceTexture *,unsigned int>::~NiTMap<NiSourceTexture *,unsigned int>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
