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
        int a13,
        int a14,
        int a15,
        int a16)
{
  int v16; // ebp
  int v17; // edx

  (*(void (__thiscall **)(int))(*(_DWORD *)a3 + 0x24))(a3);
  v16 = TESForm_Static_FormRecordSize;
  sub_45BAB0(a1, a16, (int)TESForm_Static_FormRecordBuffer, TESForm_Static_FormRecordSize);
  if ( a1[0x10] )
  {
    v17 = *(_DWORD *)(a3 + 0xC);
    LOBYTE(a11) = *(_BYTE *)(a3 + 4);
    a10 = v17;
    HIWORD(a11) = v16;
    *(_DWORD *)((char *)&a11 + 1) = 0;
    sub_45AD00(&a10);
  }
  TESFile_ClearFormRecord();
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
           a15,
           a16);
}
