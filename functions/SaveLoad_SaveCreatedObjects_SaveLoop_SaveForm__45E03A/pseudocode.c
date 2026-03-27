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

  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)edi0 + 0x24))(edi0);
  v16 = TESForm_Static_FormRecordSize;
  if ( (ebx0[6] & 0x200) != 0 )
  {
    ebx0[0x24] += v16;
  }
  else
  {
    v19 = TESForm_Static_FormRecordBuffer;
    v17 = *(void (__cdecl **)(int, void *, int, int *, int))(a16 + 8);
    a9 = 1;
    v17(a16, v19, v16, &a9, 1);
  }
  if ( ebx0[0x10] )
  {
    LOBYTE(a14) = edi0[4];
    a13 = ebp0;
    HIWORD(a14) = v16;
    *(_DWORD *)((char *)&a14 + 1) = 0;
    sub_45AD00(&a13);
  }
  TESFile_ClearFormRecord();
  return SaveLoad_SaveCreatedObjects_::FormLoop_Next(a4, a5, a6, a7, a8);
}
