int __userpurge SaveLoad_SaveCreatedObjects_::SaveEnchantment_@<eax>(
        _DWORD *a1@<ebx>,
        _BYTE *a2@<edi>,
        int a3@<esi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 a11,
        int a12,
        __int64 a13,
        int a14,
        int a15)
{
  int v15; // ebp
  int v16; // edx

  (*(void (__thiscall **)(int))(*(_DWORD *)a3 + 0x24))(a3); /*0x45dfe7*/
  v15 = MEMORY[0xB33C18]; /*0x45dfe9*/
  sub_45BAB0(a1, a15, (int)MEMORY[0xB33C14], MEMORY[0xB33C18]); /*0x45dffe*/
  if ( a1[0x10] ) /*0x45e003*/
  {
    v16 = *(_DWORD *)(a3 + 0xC); /*0x45e00d*/
    LOBYTE(a11) = *(_BYTE *)(a3 + 4); /*0x45e010*/
    a10 = v16; /*0x45e019*/
    HIWORD(a11) = v15; /*0x45e01d*/
    *(_DWORD *)((char *)&a11 + 1) = 0; /*0x45e022*/
    sub_45AD00(&a10); /*0x45e02a*/
  }
  TESFile_ClearFormRecord(); /*0x45e031*/
  return SaveLoad_SaveCreatedObjects_::SaveLoop_SaveForm(
           a1,
           a9,
           a2,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           SHIDWORD(a11),
           a12,
           a13,
           a14,
           a15);
}
