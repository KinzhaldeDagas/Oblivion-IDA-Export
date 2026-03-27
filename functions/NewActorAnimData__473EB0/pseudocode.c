ActorAnimData *__thiscall NewActorAnimData(ActorAnimData *this)
{
  UInt32 v2; // edx
  NiControllerManager *manager; // edi
  NiTPointerMap<unsigned short,AnimSequenceBase *> *v4; // eax
  NiTPointerMap<unsigned short,AnimSequenceBase *> *v5; // eax

  this->manager = 0;
  this->modelB4 = 0;
  this->modelB8 = 0;
  this->RootNode = 0;
  this->AccumNode = 0;
  *(float *)&this->unk0C = Vector3_InitValue_;
  this->unk10 = *(UInt32 *)(&Vector3_InitValue_ + 1);
  *(float *)&this->unk14 = dword_B3F9B0;
  *(float *)&this->unk18 = Vector3_InitValue_;
  this->unk1C = *(UInt32 *)(&Vector3_InitValue_ + 1);
  v2 = LODWORD(dword_B3F9B0);
  this->unk38 = 0.0;
  this->unk94 = 0.0;
  this->unk20 = v2;
  this->unk90 = 0xFF;
  this->unkC4 = 0;
  this->unk00 = 0;
  manager = this->manager;
  if ( manager )
  {
    if ( !InterlockedDecrement((volatile LONG *)manager + 1) )
      (**(void (__thiscall ***)(NiControllerManager *, int))manager)(manager, 1);
    this->manager = 0;
  }
  this->unkC8[1] = 0;
  this->unkC8[2] = 0;
  this->unkD4 = 0;
  this->unkD8 = 0;
  v4 = (NiTPointerMap<unsigned short,AnimSequenceBase *> *)FormHeapAlloc(0x10u);
  if ( v4 )
    v5 = NiTPointerMap<unsigned short,AnimSequenceBase *>::NiTPointerMap<unsigned short,AnimSequenceBase *>(v4, 0x65u);
  else
    v5 = 0;
  this->animsMap = v5;
  this->nBip01 = 0;
  this->nLForearm = 0;
  this->nTorch = 0;
  this->nWeapon = 0;
  this->nHead = 0;
  this->animSequences[0] = 0;
  this->animSequences[1] = 0;
  this->animSequences[2] = 0;
  this->animSequences[3] = 0;
  this->animSequences[4] = 0;
  *(_DWORD *)this->animsMapKey = 0xFFFFFFFF;
  *(_DWORD *)&this->animsMapKey[2] = 0xFFFFFFFF;
  this->animsMapKey[4] = 0xFFFF;
  this->unk70 = 0xFFFFFFFF;
  this->unk74 = 0xFFFFFFFF;
  this->unk78 = 0xFFFF;
  this->unk48State[0] = 0xFFFFFFFF;
  this->unk48State[1] = 0xFFFFFFFF;
  this->unk48State[2] = 0xFFFFFFFF;
  this->unk48State[3] = 0xFFFFFFFF;
  this->unk48State[4] = 0xFFFFFFFF;
  this->unk5C = 0xFFFFFFFF;
  this->unk60 = 0xFFFFFFFF;
  this->unk64 = 0xFFFFFFFF;
  this->unk68 = 0xFFFFFFFF;
  this->unk6C = 0xFFFFFFFF;
  this->unk7C = 0xFFFFFFFF;
  this->unk80 = 0xFFFFFFFF;
  this->unk84 = 0xFFFFFFFF;
  this->unk88 = 0xFFFFFFFF;
  this->unk8C = 0xFFFFFFFF;
  this->unkBC = 1.0;
  this->unkC0 = 1.0;
  this->unkC8[0] = 0;
  return this;
}
