unsigned int *__thiscall NiTPointerMap<TESObjectTREE *,NiPointer<BSTreeModel> *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<TESObjectTREE *,NiPointer<BSTreeModel> *>::~NiTPointerMap<TESObjectTREE *,NiPointer<BSTreeModel> *>(this); /*0x55ef13*/
  if ( (a2 & 1) != 0 ) /*0x55ef1d*/
    FormHeapFree((unsigned int)this); /*0x55ef20*/
  return this; /*0x55ef2a*/
}
