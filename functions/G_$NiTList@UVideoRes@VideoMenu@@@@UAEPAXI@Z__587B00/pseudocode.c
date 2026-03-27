NiTPointerList__BSImageSpaceShader *__thiscall NiTList<VideoMenu::VideoRes>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTList<VideoMenu::VideoRes>::~NiTList<VideoMenu::VideoRes>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
