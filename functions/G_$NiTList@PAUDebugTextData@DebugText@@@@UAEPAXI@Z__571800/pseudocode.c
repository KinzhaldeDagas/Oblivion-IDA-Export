NiTPointerList__BSImageSpaceShader *__thiscall NiTList<DebugText::DebugTextData *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTList<DebugText::DebugTextData *>::~NiTList<DebugText::DebugTextData *>(this); /*0x571803*/
  if ( (a2 & 1) != 0 ) /*0x57180d*/
    FormHeapFree((unsigned int)this); /*0x571810*/
  return this; /*0x57181a*/
}
