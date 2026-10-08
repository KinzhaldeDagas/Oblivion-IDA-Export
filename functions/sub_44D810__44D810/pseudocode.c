// Acquire one zeroed 12-byte NiTList node from Oblivion's synchronized global node pool, replenishing the pool when empty. This allocates list-node storage only; it does not allocate or retain a list payload.
BSTPersistentListPointerNode *__cdecl NiTListNodePool_Acquire()
{
  DWORD CurrentThreadId; // eax
  BSTPersistentListPointerNode *v1; // esi

  EnterCriticalSection((LPCRITICAL_SECTION)&MEMORY[0xB33E90][0x70]); /*0x44d816*/
  CurrentThreadId = GetCurrentThreadId(); /*0x44d81c*/
  v1 = *(BSTPersistentListPointerNode **)&MEMORY[0xB33E90][0x1C]; /*0x44d822*/
  ++*(_DWORD *)&MEMORY[0xB33E90][0xEC]; /*0x44d828*/
  *(_DWORD *)&MEMORY[0xB33E90][0xE8] = CurrentThreadId; /*0x44d831*/
  if ( !v1 ) /*0x44d836*/
  {
    NiTListNodePool_Refill(); /*0x44d838*/
    v1 = *(BSTPersistentListPointerNode **)&MEMORY[0xB33E90][0x1C]; /*0x44d83d*/
  }
  *(_DWORD *)&MEMORY[0xB33E90][0x1C] = v1->next; /*0x44d845*/
  v1->payload = 0; /*0x44d84a*/
  v1->next = 0; /*0x44d851*/
  v1->previous = 0; /*0x44d857*/
  if ( (*(_DWORD *)&MEMORY[0xB33E90][0xEC])-- == 1 ) /*0x44d85e*/
    *(_DWORD *)&MEMORY[0xB33E90][0xE8] = 0; /*0x44d867*/
  LeaveCriticalSection((LPCRITICAL_SECTION)&MEMORY[0xB33E90][0x70]); /*0x44d876*/
  return v1; /*0x44d87e*/
}
