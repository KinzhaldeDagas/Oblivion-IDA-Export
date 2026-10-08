NiTPointerList__BSImageSpaceShader *__thiscall NiTList<RechargeItemAndIndex *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTList<RechargeItemAndIndex *>::~NiTList<RechargeItemAndIndex *>(this); /*0x5cedf3*/
  if ( (a2 & 1) != 0 ) /*0x5cedfd*/
    FormHeapFree((unsigned int)this); /*0x5cee00*/
  return this; /*0x5cee0a*/
}
