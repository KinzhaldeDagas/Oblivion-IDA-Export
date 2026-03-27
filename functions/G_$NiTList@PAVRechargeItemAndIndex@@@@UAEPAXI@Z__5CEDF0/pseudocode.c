NiTPointerList__BSImageSpaceShader *__thiscall NiTList<RechargeItemAndIndex *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTList<RechargeItemAndIndex *>::~NiTList<RechargeItemAndIndex *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
