int __userpurge SaveLoad_SaveCreatedObjects_::SaveLoop_SaveForm@<eax>(
        _DWORD *ebx0@<ebx>,
        int ebp0@<ebp>,
        _BYTE *edi0@<edi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        __int64 a14,
        int a15,
        int a16)
{
  int v16; // esi
  void (__cdecl *v17)(int, void *, int, int *, int); // ecx
  void *v19; // [esp-10h] [ebp-10h]

  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)edi0 + 0x24))(edi0); /*0x45e041*/
  v16 = MEMORY[0xB33C18]; /*0x45e046*/
  if ( (ebx0[6] & 0x200) != 0 ) /*0x45e052*/
  {
    ebx0[0x24] += v16; /*0x45e054*/
  }
  else
  {
    v19 = MEMORY[0xB33C14]; /*0x45e069*/
    v17 = *(void (__cdecl **)(int, void *, int, int *, int))(a16 + 8); /*0x45e06e*/
    a9 = 1; /*0x45e072*/
    v17(a16, v19, v16, &a9, 1); /*0x45e07a*/
  }
  if ( ebx0[0x10] ) /*0x45e07f*/
  {
    LOBYTE(a14) = edi0[4]; /*0x45e08e*/
    a13 = ebp0; /*0x45e092*/
    HIWORD(a14) = v16; /*0x45e096*/
    *(_DWORD *)((char *)&a14 + 1) = 0; /*0x45e09b*/
    sub_45AD00(&a13); /*0x45e0a3*/
  }
  TESFile_ClearFormRecord(); /*0x45e0aa*/
  return SaveLoad_SaveCreatedObjects_::FormLoop_Next(a4, a5, a6, a7, a8);
}
