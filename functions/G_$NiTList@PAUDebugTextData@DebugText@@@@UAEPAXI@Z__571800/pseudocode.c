NiTPointerList__BSImageSpaceShader *__thiscall NiTList<DebugText::DebugTextData *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTList<DebugText::DebugTextData *>::~NiTList<DebugText::DebugTextData *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
