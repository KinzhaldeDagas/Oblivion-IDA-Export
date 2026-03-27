FreeEntry *__userpurge sub_453500@<eax>(_DWORD *this@<ecx>, char a2@<bpl>, unsigned int a3)
{
  FreeEntry *result; // eax
  int v5; // [esp+0h] [ebp-4h]

  result = j_MemoryHeap_Alloc(&FormHeap, a2, a3 | 0x100000000LL, v5);
  *(this + 5) = result;
  if ( !result )
  {
    sub_404EC0("Could not create save buffer, out of memory.");
    return (FreeEntry *)*(this + 5);
  }
  return result;
}
