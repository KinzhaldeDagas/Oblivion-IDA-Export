void __thiscall NiKeyframeManager::~NiKeyframeManager(NiKeyframeManager *this)
{
  NiTStringPointerMap<NiPointer<NiSequence>>::~NiTStringPointerMap<NiPointer<NiSequence>>((_DWORD *)this + 0xF);
  NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(this);
}
