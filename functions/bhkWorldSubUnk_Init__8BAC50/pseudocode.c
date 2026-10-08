bhkWorldSubUnk *__thiscall bhkWorldSubUnk::Init(bhkWorldSubUnk *this)
{
  bhkWorldSubUnk024 *Unk14; // esi
  int v3; // ebp

  CreateSemaphore(&this->semaphore, 0, 6); /*0x8bac5e*/
  Unk14 = this->Unk14; /*0x8bac63*/
  v3 = 6; /*0x8bac66*/
  do /*0x8bac9d*/
  {
    CreateSemaphore(&Unk14->semaphore, 0, 1); /*0x8bac76*/
    Unk14->Unk14 = 0; /*0x8bac7b*/
    Unk14->Unk18 = 0; /*0x8bac7e*/
    Unk14->Unk24 = 0; /*0x8bac81*/
    Unk14->Unk1C = 0; /*0x8bac84*/
    Unk14->Unk20 = 0; /*0x8bac87*/
    Unk14->Unk0C = 0; /*0x8bac8a*/
    Unk14->idThread = 0xFFFFFFFF; /*0x8bac8d*/
    Unk14->ThreadHandle = 0; /*0x8bac94*/
    Unk14->parentStruct = 0; /*0x8bac97*/
    ++Unk14; /*0x8bac99*/
    --v3; /*0x8bac9c*/
  }
  while ( v3 ); /*0x8bac9d*/
  this->numThreads = 0; /*0x8bac9f*/
  this->Unk10 = 0; /*0x8baca5*/
  this->Unk00 = 0; /*0x8baca8*/
  this->Unk04 = 0x3C888889; /*0x8bacaa*/
  return this; /*0x8bacb3*/
}
