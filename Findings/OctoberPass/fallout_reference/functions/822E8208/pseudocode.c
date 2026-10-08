void __fastcall BGSDecalManager::UpdateDecalEmitters(BGSDecalManager *this, int a2, int a3)
{
  int v3; // r3
  _DWORD *v4; // r30
  NiTPointerListBase<NiTPointerAllocator<unsigned int>,BSTextureManager::RenderedTextureData *> *v5; // r29
  BGSDecalEmitter *v6; // r31
  void *v7; // [sp+50h] [-30h] BYREF

  v3 = (unsigned __int64)_savegprlr_28(this, a2, a3) >> 32; /*0x822e820c*/
  v4 = *(_DWORD **)(v3 + 20); /*0x822e8214*/
  v5 = (NiTPointerListBase<NiTPointerAllocator<unsigned int>,BSTextureManager::RenderedTextureData *> *)(v3 + 20); /*0x822e8218*/
  while ( v4 ) /*0x822e8220*/
  {
    v7 = v4; /*0x822e8230*/
    v6 = (BGSDecalEmitter *)v4[2]; /*0x822e8238*/
    v4 = (_DWORD *)*v4; /*0x822e8234*/
    if ( v6 ) /*0x822e8240*/
    {
      BGSDecalEmitter::Update(v6); /*0x822e8248*/
      if ( v6->bFinished ) /*0x822e824c*/
      {
        NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiLight *>::RemovePos(v5, &v7); /*0x822e8260*/
        BGSDecalEmitter::~BGSDecalEmitter(v6); /*0x822e8268*/
        MemoryManager::Deallocate(&MemoryManager::s_Instance, v6); /*0x822e8274*/
      }
    }
  }
  JUMPOUT(0x82C364E8); /*0x82c364e8*/
}
