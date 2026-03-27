bhkWorldSubUnk *__thiscall bhkWorldSubUnk::Init(bhkWorldSubUnk *this)
{
  bhkWorldSubUnk024 *Unk14; // esi
  int v3; // ebp

  CreateSemaphore(&this->semaphore, 0, 6);
  Unk14 = this->Unk14;
  v3 = 6;
  do
  {
    CreateSemaphore(&Unk14->semaphore, 0, 1);
    Unk14->Unk14 = 0;
    Unk14->Unk18 = 0;
    Unk14->Unk24 = 0;
    Unk14->Unk1C = 0;
    Unk14->Unk20 = 0;
    Unk14->Unk0C = 0;
    Unk14->idThread = 0xFFFFFFFF;
    Unk14->ThreadHandle = 0;
    Unk14->parentStruct = 0;
    ++Unk14;
    --v3;
  }
  while ( v3 );
  this->numThreads = 0;
  this->Unk10 = 0;
  this->Unk00 = 0;
  this->Unk04 = 0x3C888889;
  return this;
}
