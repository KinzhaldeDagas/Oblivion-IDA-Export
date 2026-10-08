// Allocates and initializes ActorAnimData. Creates the +0x9C 0x65-bucket UInt16 animation-key map; nulls manager/root/accumulation, active-slot, pending-KF, and sequence pointers; initializes current/queued keys to 0xFFFF:0xFFFF, action arrays to -1, update state +0x90 to 0xFF, and blend scales +0xBC/+0xC0 to 1.0.
ActorAnimData *__thiscall NewActorAnimData(ActorAnimData *this)
{
  UInt32 v2; // edx
  NiControllerManager *manager; // edi
  NiTPointerMap<unsigned short,AnimSequenceBase *> *v4; // eax
  NiTPointerMap<unsigned short,AnimSequenceBase *> *v5; // eax

  this->manager = 0; /*0x473ede*/
  this->modelB4 = 0; /*0x473ee6*/
  this->modelB8 = 0; /*0x473eec*/
  this->RootNode = 0; /*0x473ef2*/
  this->AccumNode = 0; /*0x473ef5*/
  *(float *)&this->unk0C = g_zeroNiPoint3; /*0x473efd*/
  *(float *)&this->unk10 = MEMORY[0xB3F9AC]; /*0x473f06*/
  *(float *)&this->unk14 = MEMORY[0xB3F9B0][0]; /*0x473f0f*/
  *(float *)&this->unk18 = g_zeroNiPoint3; /*0x473f17*/
  *(float *)&this->unk1C = MEMORY[0xB3F9AC]; /*0x473f20*/
  v2 = LODWORD(MEMORY[0xB3F9B0][0]); /*0x473f23*/
  this->unk38 = 0.0; /*0x473f29*/
  this->unk94 = 0.0; /*0x473f2c*/
  this->unk20 = v2; /*0x473f32*/
  this->unk90 = 0xFF; /*0x473f35*/
  this->unkC4 = 0; /*0x473f3c*/
  this->unk00 = 0; /*0x473f42*/
  manager = this->manager; /*0x473f44*/
  if ( manager ) /*0x473f50*/
  {
    if ( !InterlockedDecrement((volatile LONG *)manager + 1) ) /*0x473f56*/
      (**(void (__thiscall ***)(NiControllerManager *, int))manager)(manager, 1); /*0x473f6c*/
    this->manager = 0; /*0x473f6e*/
  }
  this->unkC8[1] = 0; /*0x473f76*/
  this->unkC8[2] = 0; /*0x473f7c*/
  this->unkD4 = 0; /*0x473f82*/
  this->unkD8 = 0; /*0x473f8a*/
  v4 = (NiTPointerMap<unsigned short,AnimSequenceBase *> *)FormHeapAlloc(0x10u); /*0x473f90*/
  if ( v4 ) /*0x473fa3*/
    v5 = NiTPointerMap<unsigned short,AnimSequenceBase *>::NiTPointerMap<unsigned short,AnimSequenceBase *>(v4, 0x65u); /*0x473fa9*/
  else
    v5 = 0; /*0x473fb0*/
  this->animsMap = v5; /*0x473fb2*/
  this->nBip01 = 0; /*0x473fbc*/
  this->nLForearm = 0; /*0x473fbf*/
  this->nTorch = 0; /*0x473fc2*/
  this->nWeapon = 0; /*0x473fc5*/
  this->nHead = 0; /*0x473fc8*/
  this->animSequences[0] = 0; /*0x473fcb*/
  this->animSequences[1] = 0; /*0x473fd1*/
  this->animSequences[2] = 0; /*0x473fd7*/
  this->animSequences[3] = 0; /*0x473fdd*/
  this->animSequences[4] = 0; /*0x473fe3*/
  *(_DWORD *)this->animsMapKey = 0xFFFFFFFF; /*0x473fec*/
  *(_DWORD *)&this->animsMapKey[2] = 0xFFFFFFFF; /*0x473fef*/
  this->animsMapKey[4] = 0xFFFF; /*0x473ff2*/
  this->unk70 = 0xFFFFFFFF; /*0x473ff9*/
  this->unk74 = 0xFFFFFFFF; /*0x473ffc*/
  this->unk78 = 0xFFFF; /*0x473fff*/
  this->unk48State[0] = 0xFFFFFFFF; /*0x474006*/
  this->unk48State[1] = 0xFFFFFFFF; /*0x474009*/
  this->unk48State[2] = 0xFFFFFFFF; /*0x47400c*/
  this->unk48State[3] = 0xFFFFFFFF; /*0x47400f*/
  this->unk48State[4] = 0xFFFFFFFF; /*0x474012*/
  this->unk5C = 0xFFFFFFFF; /*0x474018*/
  this->unk60 = 0xFFFFFFFF; /*0x47401b*/
  this->unk64 = 0xFFFFFFFF; /*0x47401e*/
  this->unk68 = 0xFFFFFFFF; /*0x474021*/
  this->unk6C = 0xFFFFFFFF; /*0x474024*/
  this->unk7C = 0xFFFFFFFF; /*0x47402a*/
  this->unk80 = 0xFFFFFFFF; /*0x47402d*/
  this->unk84 = 0xFFFFFFFF; /*0x474033*/
  this->unk88 = 0xFFFFFFFF; /*0x474039*/
  this->unk8C = 0xFFFFFFFF; /*0x47403f*/
  this->unkBC = 1.0; /*0x474045*/
  this->unkC0 = 1.0; /*0x47404b*/
  this->unkC8[0] = 0; /*0x474051*/
  return this; /*0x474059*/
}
