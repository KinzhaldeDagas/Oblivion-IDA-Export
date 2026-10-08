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

  *((_BYTE *)this + 4) = 0x4A; /*0x42a749*/
  *((_DWORD *)this + 2) = 0; /*0x42a74d*/
  *(_DWORD *)this = &ExtraLastFinishedSequence::`vftable'; /*0x42a762*/
  HIDWORD(v9) = 1; /*0x42a77b*/
  LODWORD(v9) = strlen(a3) + 1; /*0x42a780*/
  v4 = j_MemoryHeap_Alloc(&FormHeap, a2, v9, v10); /*0x42a786*/
  *((_DWORD *)this + 3) = v4; /*0x42a78b*/
  v5 = a3; /*0x42a78e*/
  v6 = v4; /*0x42a790*/
  do /*0x42a79e*/
  {
    v7 = *v5; /*0x42a792*/
    LOBYTE(v6->prev) = *v5++; /*0x42a794*/
    v6 = (FreeEntry *)((char *)v6 + 1); /*0x42a799*/
  }
  while ( v7 ); /*0x42a79e*/
  return this; /*0x42a7a2*/
}
