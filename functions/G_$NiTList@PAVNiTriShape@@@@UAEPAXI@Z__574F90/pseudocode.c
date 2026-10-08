NiTPointerList__BSImageSpaceShader *__thiscall NiTList<NiTriShape *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTList<NiTriShape *>::~NiTList<NiTriShape *>(this); /*0x574f93*/
  if ( (a2 & 1) != 0 ) /*0x574f9d*/
    FormHeapFree((unsigned int)this); /*0x574fa0*/
  return this; /*0x574faa*/
}
