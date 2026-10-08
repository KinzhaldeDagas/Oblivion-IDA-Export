NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<BSShaderProperty::RenderPass *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<BSShaderProperty::RenderPass *>::~NiTPointerList<BSShaderProperty::RenderPass *>(this); /*0x7aa9b3*/
  if ( (a2 & 1) != 0 ) /*0x7aa9bd*/
    FormHeapFree((unsigned int)this); /*0x7aa9c0*/
  return this; /*0x7aa9ca*/
}
