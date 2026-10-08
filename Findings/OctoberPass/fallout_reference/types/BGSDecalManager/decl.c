struct __cppobj BGSDecalManager
{
NiPointer<BSRenderedTexture> spQueryTexture;
bool bClearQueryTexture;
NiTPointerList<NiPointer<BSTempEffectSimpleDecal> > PendingSimpleDecalList;
NiTPointerList<BGSDecalEmitter *> DecalEmitterList;
NiPointer<BSShaderAccumulator> spQueryAccum;
NiPointer<NiCamera> spQueryCamera;
};
