void __thiscall NiTPointerMap<unsigned int,ChangeData *>::~NiTPointerMap<unsigned int,ChangeData *>(unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<unsigned int,ChangeData *>::`vftable'; /*0x45a648*/
  NiTMap_Clear(this); /*0x45a656*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,ChangeData *>::`vftable'; /*0x45a665*/
  NiTMap_Clear(this); /*0x45a66b*/
  FormHeapFree(*(this + 2)); /*0x45a674*/
}
