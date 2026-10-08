// EnginePatch v1: save-buffer allocation hook used to track record buffer base/end for later savegame parser count clamps.
FreeEntry *__userpurge sub_453500@<eax>(_DWORD *this@<ecx>, char a2@<bpl>, unsigned int a3)
{
  FreeEntry *result; // eax
  int v5; // [esp+0h] [ebp-4h]

  result = j_MemoryHeap_Alloc(&FormHeap, a2, a3 | 0x100000000LL, v5); /*0x45350f*/
  *(this + 5) = result; /*0x453516*/
  if ( !result ) /*0x453519*/
  {
    sub_404EC0("Could not create save buffer, out of memory."); /*0x453520*/
    return (FreeEntry *)*(this + 5); /*0x453525*/
  }
  return result; /*0x45352b*/
}
