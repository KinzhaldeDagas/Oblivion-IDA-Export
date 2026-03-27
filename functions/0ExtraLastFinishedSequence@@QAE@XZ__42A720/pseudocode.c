ExtraLastFinishedSequence *__userpurge ExtraLastFinishedSequence::ExtraLastFinishedSequence@<eax>(
        ExtraLastFinishedSequence *this@<ecx>,
        char a2@<bpl>,
        const char *a3)
{
  FreeEntry *v4; // eax
  const char *v5; // ecx
  FreeEntry *v6; // edx
  char v7; // al
  size_t v9; // [esp-8h] [ebp-24h]
  int v10; // [esp+0h] [ebp-1Ch]

  *((_BYTE *)this + 4) = 0x4A;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraLastFinishedSequence::`vftable';
  HIDWORD(v9) = 1;
  LODWORD(v9) = strlen(a3) + 1;
  v4 = j_MemoryHeap_Alloc(&FormHeap, a2, v9, v10);
  *((_DWORD *)this + 3) = v4;
  v5 = a3;
  v6 = v4;
  do
  {
    v7 = *v5;
    LOBYTE(v6->prev) = *v5++;
    v6 = (FreeEntry *)((char *)v6 + 1);
  }
  while ( v7 );
  return this;
}
