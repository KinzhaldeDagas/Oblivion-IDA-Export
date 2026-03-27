void __userpurge sub_737373(
        int a1@<ebp>,
        _RTL_CRITICAL_SECTION_0 *a2@<esi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        char a12,
        char a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        char *a37)
{
  _RTL_CRITICAL_SECTION_DEBUG *CurrentThreadId; // eax
  int v38; // edx
  unsigned __int8 (__thiscall *v39)(int, int, char *, char *, int *, char *, int *); // eax
  char *v41; // edi
  int v42; // ebx
  char *v43; // eax
  NiPixelData *v44; // eax

  CurrentThreadId = (_RTL_CRITICAL_SECTION_DEBUG *)GetCurrentThreadId();
  ++HIDWORD(a2[3].SpinCount);
  v38 = a36;
  LODWORD(a2[3].SpinCount) = CurrentThreadId;
  v39 = *(unsigned __int8 (__thiscall **)(int, int, char *, char *, int *, char *, int *))(*(_DWORD *)a1 + 0xC);
  *(_BYTE *)(a1 + 0x10C) = 0;
  if ( !v39(a1, v38, &a13, &a12, &a15, (char *)&a7 + 3, &a8) )
  {
    if ( HIDWORD(a2[3].SpinCount)-- == 1 )
      LODWORD(a2[3].SpinCount) = 0;
    LeaveCriticalSection(a2);
    JUMPOUT(0x7376E4);
  }
  v41 = a37;
  if ( !a37
    || **((_DWORD **)a37 + 0x15) != *(_DWORD *)(a1 + 0x104)
    || **((_DWORD **)a37 + 0x16) != *(_DWORD *)(a1 + 0x100)
    || !sub_71AD40((_DWORD *)a37 + 2, (int)&a15)
    || *((_DWORD *)v41 + 0x18) != *(_DWORD *)(a1 + 0x108)
    || (v42 = a8, *((_DWORD *)v41 + 0x1B) != a8) )
  {
    v43 = (char *)FormHeapAlloc(0x70u);
    a37 = v43;
    a34 = 0;
    if ( v43 )
      v44 = NiPixelData::NiPixelData(
              (NiPixelData *)v43,
              *(_DWORD *)(a1 + 0x104),
              *(_DWORD *)(a1 + 0x100),
              (int)&a15,
              *(_DWORD *)(a1 + 0x108),
              a8);
    else
      v44 = 0;
    v42 = a8;
    a34 = 0xFFFFFFFF;
    v41 = (char *)v44;
  }
  a37 = *((char **)v41 + 0x18);
  if ( sub_71AD40(&a15, a1 + 0x110) )
  {
    if ( v42 )
    {
      a9 = 0xFFFFFFFF;
      JUMPOUT(0x7374D8);
    }
  }
  else if ( v42 )
  {
    a9 = 0xFFFFFFFF;
    JUMPOUT(0x73758C);
  }
  JUMPOUT(0x7376CE);
}
