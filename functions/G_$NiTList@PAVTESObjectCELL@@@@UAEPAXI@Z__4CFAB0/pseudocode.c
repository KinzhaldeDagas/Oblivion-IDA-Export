NiTPointerList__BSImageSpaceShader *__thiscall NiTList<TESObjectCELL *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTList<TESObjectCELL *>::~NiTList<TESObjectCELL *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
