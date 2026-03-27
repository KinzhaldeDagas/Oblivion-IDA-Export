int __userpurge sub_42C3E0@<eax>(FILE **this@<ecx>, void *DstBuf, size_t Count, int a4)
{
  int v5; // eax
  char *v6; // edi
  int v7; // ecx
  char *v8; // edx
  int v9; // edx
  int v10; // ecx
  unsigned int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // ebx
  char *v15; // eax
  _RTL_CRITICAL_SECTION_0 *v16; // esi
  size_t v18; // [esp-4h] [ebp-10h]

  v5 = (int)*(this + 0x55);
  v6 = (char *)*(this + 0x56) + (_DWORD)*(this + 0x52) + HIDWORD(Count);
  if ( v5 )
    NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)(v5 + 0x200), v5 + 0x3C);
  v7 = (int)*(this + 0x55);
  v8 = *(char **)(v7 + 0x30);
  if ( v8 == (char *)0xFFFFFFFF )
    v8 = *(char **)(v7 + 0x148);
  if ( v6 != v8 )
    NiFile_Seek(v7, v6 - v8, BSFile_FilePos_Cur);
  v9 = (int)*(this + 0x52);
  v10 = Count;
  v11 = (unsigned int)*(this + 0x54);
  if ( HIDWORD(Count) + v9 + (int)Count > v11 )
    v10 = v11 - v9 - HIDWORD(Count);
  LODWORD(v18) = v10;
  v12 = sub_747D10(this, DstBuf, v18);
  v13 = (int)*(this + 0x55);
  v14 = v12;
  v15 = &v6[v12];
  *(_DWORD *)(v13 + 0x148) = v15;
  *(_DWORD *)(v13 + 0x14C) = v15;
  v16 = (_RTL_CRITICAL_SECTION_0 *)*(this + 0x55);
  if ( v16 )
    NiLeaveCriticalSection_0(v16 + 0x10);
  return v14;
}
