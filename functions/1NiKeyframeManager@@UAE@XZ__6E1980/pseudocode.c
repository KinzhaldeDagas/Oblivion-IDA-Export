void __thiscall NiKeyframeManager::~NiKeyframeManager(NiKeyframeManager *this)
{
  NiTStringPointerMap<NiPointer<NiSequence>>::~NiTStringPointerMap<NiPointer<NiSequence>>((_DWORD *)this + 0xF); /*0x6e19b3*/
  NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(this); /*0x6e19c2*/
}
