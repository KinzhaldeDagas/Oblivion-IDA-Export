NiTPointerList__BSImageSpaceShader *__thiscall NiTList<VideoMenu::VideoRes>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTList<VideoMenu::VideoRes>::~NiTList<VideoMenu::VideoRes>(this); /*0x587b03*/
  if ( (a2 & 1) != 0 ) /*0x587b0d*/
    FormHeapFree((unsigned int)this); /*0x587b10*/
  return this; /*0x587b1a*/
}
