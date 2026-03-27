void __thiscall BSFaceGenAnimationData::~BSFaceGenAnimationData(BSFaceGenAnimationData *this)
{
  *(_DWORD *)this = &BSFaceGenAnimationData::`vftable';
  ((void (__thiscall *)(int **, char, char, char, char))off_A64300[0])((int **)this, 1, 1, 1, 1);
  (*(void (__thiscall **)(BSFaceGenAnimationData *, int, int, int, int))(*(_DWORD *)this + 0xB8))(this, 1, 1, 1, 1);
  BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple((BSFaceGenAnimationData *)((char *)this + 0x15C));
  BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple((BSFaceGenAnimationData *)((char *)this + 0x148));
  NiTPointerList<BSFaceGenKeyframe *>::~NiTPointerList<BSFaceGenKeyframe *>((NiTPointerList__BSImageSpaceShader *)((char *)this + 0x138));
  BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple((BSFaceGenAnimationData *)((char *)this + 0x124));
  NiTPointerList<BSFaceGenKeyframe *>::~NiTPointerList<BSFaceGenKeyframe *>((NiTPointerList__BSImageSpaceShader *)((char *)this + 0x114));
  BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple((BSFaceGenAnimationData *)((char *)this + 0x100));
  BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple((BSFaceGenAnimationData *)((char *)this + 0xEC));
  NiTPointerList<BSFaceGenKeyframe *>::~NiTPointerList<BSFaceGenKeyframe *>((NiTPointerList__BSImageSpaceShader *)((char *)this + 0xDC));
  BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple((BSFaceGenAnimationData *)((char *)this + 0xC8));
  NiTPointerList<BSFaceGenKeyframe *>::~NiTPointerList<BSFaceGenKeyframe *>((NiTPointerList__BSImageSpaceShader *)((char *)this + 0xB8));
  BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple((BSFaceGenAnimationData *)((char *)this + 0xA4));
  BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple((BSFaceGenAnimationData *)((char *)this + 0x90));
  NiTPointerList<BSFaceGenKeyframe *>::~NiTPointerList<BSFaceGenKeyframe *>((NiTPointerList__BSImageSpaceShader *)((char *)this + 0x80));
  BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple((BSFaceGenAnimationData *)((char *)this + 0x6C));
  NiTPointerList<BSFaceGenKeyframe *>::~NiTPointerList<BSFaceGenKeyframe *>((NiTPointerList__BSImageSpaceShader *)((char *)this + 0x5C));
  BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple((BSFaceGenAnimationData *)((char *)this + 0x48));
  BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple((BSFaceGenAnimationData *)((char *)this + 0x34));
  NiTPointerList<BSFaceGenKeyframe *>::~NiTPointerList<BSFaceGenKeyframe *>((NiTPointerList__BSImageSpaceShader *)((char *)this + 0x24));
  BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple((BSFaceGenAnimationData *)((char *)this + 0x10));
  NiExtraData_dtor(this);
}
