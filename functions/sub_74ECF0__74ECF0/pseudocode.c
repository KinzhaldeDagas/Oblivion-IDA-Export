NiTPointerList__BSImageSpaceShader *__thiscall sub_74ECF0(NiTPointerList__BSImageSpaceShader *this, char a2)
{
  NiTStringPointerMap<NiPSysModifier *>::~NiTStringPointerMap<NiPSysModifier *>((_DWORD *)this + 0x35); /*0x74ecfa*/
  *((_DWORD *)this + 0x31) = &NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiPSysModifier>>::`vftable'; /*0x74ed07*/
  NiTPointerList::FreeAllNodes(this + 7); /*0x74ed0d*/
  *((_DWORD *)this + 0x31) = &NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiPSysModifier>>::`vftable'; /*0x74ed14*/
  NiParticles::~NiParticles((NiAVObject *)this); /*0x74ed1a*/
  if ( (a2 & 1) != 0 ) /*0x74ed24*/
    FormHeapFree((unsigned int)this); /*0x74ed27*/
  return this; /*0x74ed2f*/
}
