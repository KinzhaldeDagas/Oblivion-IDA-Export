// Return one 12-byte NiTList node to Oblivion's synchronized global node pool. The caller must already have handled or cleared node+0x08 payload ownership.
void __stdcall sub_44D880(_DWORD *a1)
{
  bool v1; // zf

  EnterCriticalSection((LPCRITICAL_SECTION)&MEMORY[0xB33E90][0x70]); /*0x44d886*/
  *(_DWORD *)&MEMORY[0xB33E90][0xE8] = GetCurrentThreadId(); /*0x44d892*/
  ++*(_DWORD *)&MEMORY[0xB33E90][0xEC]; /*0x44d8a0*/
  a1[1] = 0; /*0x44d8a8*/
  *a1 = *(_DWORD *)&MEMORY[0xB33E90][0x1C]; /*0x44d8b1*/
  v1 = (*(_DWORD *)&MEMORY[0xB33E90][0xEC])-- == 1; /*0x44d8b3*/
  *(_DWORD *)&MEMORY[0xB33E90][0x1C] = a1; /*0x44d8b9*/
  if ( v1 ) /*0x44d8bf*/
    *(_DWORD *)&MEMORY[0xB33E90][0xE8] = 0; /*0x44d8c1*/
  LeaveCriticalSection((LPCRITICAL_SECTION)&MEMORY[0xB33E90][0x70]); /*0x44d8cf*/
}
