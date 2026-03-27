HANDLE __thiscall CreateHavokThreads(bhkWorldSubUnk *this, UInt16 *a2, signed int havokThreadNum)
{
  HANDLE result; // eax
  signed int v4; // ebp
  signed int i; // ebx
  UInt32 numThreads; // eax
  bhkWorldSubUnk024 *v8; // esi

  result = a2;
  v4 = havokThreadNum;
  this->Unk00 = a2;
  if ( havokThreadNum > 6 )
    v4 = 6;
  for ( i = 0; i < v4; v8->ThreadHandle = result )
  {
    numThreads = this->numThreads;
    v8 = &this->Unk14[numThreads];
    this->numThreads = numThreads + 1;
    v8->parentStruct = this;
    v8->idThread = i;
    result = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)sub_8BADF0, v8, 0, 0);
    ++i;
  }
  return result;
}
