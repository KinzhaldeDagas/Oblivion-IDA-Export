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
        int a12,
        int a13,
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
  DWORD CurrentThreadId; // eax
  int v38; // edx
  unsigned __int8 (__thiscall *v39)(int, int, int *, int *, int *, char *, int *); // eax
  char *v41; // edi
  int v42; // ebx
  char *v43; // eax
  NiPixelData *v44; // eax

  CurrentThreadId = GetCurrentThreadId(); /*0x737373*/
  ++HIDWORD(a2[3].SpinCount); /*0x737379*/
  v38 = a36; /*0x737391*/
  LODWORD(a2[3].SpinCount) = CurrentThreadId; /*0x737398*/
  v39 = *(unsigned __int8 (__thiscall **)(int, int, int *, int *, int *, char *, int *))(*(_DWORD *)a1 + 0xC); /*0x73739e*/
  *(_BYTE *)(a1 + 0x10C) = 0; /*0x7373a9*/
  if ( !v39(a1, v38, &a13, &a12, &a15, (char *)&a7 + 3, &a8) ) /*0x7373b0*/
  {
    if ( HIDWORD(a2[3].SpinCount)-- == 1 ) /*0x7373b6*/
      LODWORD(a2[3].SpinCount) = 0; /*0x7373bc*/
    LeaveCriticalSection(a2); /*0x7373c4*/
    JUMPOUT(0x7376E4); /*0x7376e4*/
  }
  v41 = a37; /*0x7373d1*/
  if ( !a37 /*0x73741b*/
    || **((_DWORD **)a37 + 0x15) != *(_DWORD *)(a1 + 0x104)
    || **((_DWORD **)a37 + 0x16) != *(_DWORD *)(a1 + 0x100)
    || !sub_71AD40((_DWORD *)a37 + 2, (int)&a15)
    || *((_DWORD *)v41 + 0x18) != *(_DWORD *)(a1 + 0x108)
    || (v42 = a8, *((_DWORD *)v41 + 0x1B) != a8) )
  {
    v43 = (char *)FormHeapAlloc(0x70u); /*0x73741f*/
    a37 = v43; /*0x737427*/
    a34 = 0; /*0x737430*/
    if ( v43 ) /*0x73743b*/
      v44 = NiPixelData::NiPixelData( /*0x73745e*/
              (NiPixelData *)v43,
              *(_DWORD *)(a1 + 0x104),
              *(_DWORD *)(a1 + 0x100),
              (int)&a15,
              *(_DWORD *)(a1 + 0x108),
              a8);
    else
      v44 = 0; /*0x737465*/
    v42 = a8; /*0x737467*/
    a34 = 0xFFFFFFFF; /*0x73746b*/
    v41 = (char *)v44; /*0x737476*/
  }
  a37 = *((char **)v41 + 0x18); /*0x737486*/
  if ( sub_71AD40(&a15, a1 + 0x110) ) /*0x73748d*/
  {
    if ( v42 ) /*0x73749c*/
    {
      a9 = 0xFFFFFFFF; /*0x7374a5*/
      JUMPOUT(0x7374D8); /*0x7374d8*/
    }
  }
  else if ( v42 ) /*0x737550*/
  {
    a9 = 0xFFFFFFFF; /*0x737559*/
    JUMPOUT(0x73758C); /*0x73758c*/
  }
  JUMPOUT(0x7376CE); /*0x7376ce*/
}
