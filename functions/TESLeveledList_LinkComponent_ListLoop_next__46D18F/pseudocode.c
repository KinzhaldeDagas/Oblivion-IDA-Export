// positive sp value has been detected, the output may be wrong!
int __userpurge TESLeveledList_LinkComponent_::ListLoop_next@<eax>(
        _DWORD *a1@<ebp>,
        int a2@<edi>,
        int a3,
        int a4,
        Data *a5,
        int a6,
        UInt32 a7)
{
  unsigned int *v7; // edi
  int result; // eax

  v7 = *(unsigned int **)(a2 + 4); /*0x46d18f*/
  if ( v7 ) /*0x46d194*/
    return TESLeveledList_LinkComponent_::ListLoop(a1, v7, a3, a4, a5, a6, a7); /*0x46d194*/
  return result; /*0x46d19e*/
}
