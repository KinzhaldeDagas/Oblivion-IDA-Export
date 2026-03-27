int __userpurge ExtraDataList_SetReferencePointer_::SetRefPointer@<eax>(int a1@<eax>, int a2@<esi>, int a3)
{
  *(_DWORD *)(a1 + 0xC) = a2;
  return ExtraDataList_SetReferencePointer_::Done(a3);
}
