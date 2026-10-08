HANDLE __thiscall CreateHavokThreads(bhkWorldSubUnk *this, UInt16 *a2, signed int havokThreadNum)
{
  HANDLE result; // eax
  signed int v4; // ebp
  signed int i; // ebx
  UInt32 numThreads; // eax
  bhkWorldSubUnk024 *v8; // esi

  result = a2; /*0x8baf70*/
  v4 = havokThreadNum; /*0x8baf76*/
  this->Unk00 = a2; /*0x8baf80*/
  if ( havokThreadNum > 6 ) /*0x8baf82*/
    v4 = 6; /*0x8baf84*/
  for ( i = 0; i < v4; v8->ThreadHandle = result ) /*0x8baf8d*/
  {
    numThreads = this->numThreads; /*0x8baf90*/
    v8 = &this->Unk14[numThreads]; /*0x8baf9d*/
    this->numThreads = numThreads + 1; /*0x8bafaa*/
    v8->parentStruct = this; /*0x8bafb2*/
    v8->idThread = i; /*0x8bafb4*/
    result = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)sub_8BADF0, v8, 0, 0); /*0x8bafb7*/
    ++i; /*0x8bafbd*/
  }
  return result; /*0x8bafc6*/
}
