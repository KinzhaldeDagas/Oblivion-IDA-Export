NiTPointerList__BSImageSpaceShader *__thiscall sub_74ECF0(NiTPointerList__BSImageSpaceShader *this, char a2)
{
  NiTStringPointerMap<NiPSysModifier *>::~NiTStringPointerMap<NiPSysModifier *>((_DWORD *)this + 0x35);
  *((_DWORD *)this + 0x31) = &NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiPSysModifier>>::`vftable';
  NiTPointerList::FreeAllNodes(this + 7);
  *((_DWORD *)this + 0x31) = &NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiPSysModifier>>::`vftable';
  NiParticles::~NiParticles((NiAVObject *)this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
