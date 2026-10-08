// EnginePatch v5 CTD hotfix: bug remains verified here (raw-read clamp can underflow), but the full archive raw-read replacement is disabled by default because this asset-stream primitive is load-critical.
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

  v5 = (int)*(this + 0x55); /*0x42c3e8*/
  v6 = (char *)*(this + 0x56) + (_DWORD)*(this + 0x52) + HIDWORD(Count);// MEF decode: raw archive member read target guard. Validate current <= memberSize, relative <= remaining, base+current+relative does not wrap and does not equal 0xFFFFFFFF sentinel before entering archive critical section. /*0x42c3fb*/
  if ( v5 ) /*0x42c3ff*/
    NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)(v5 + 0x200), v5 + 0x3C); /*0x42c40b*/
  v7 = (int)*(this + 0x55); /*0x42c410*/
  v8 = *(char **)(v7 + 0x30); /*0x42c41c*/
  if ( v8 == (char *)0xFFFFFFFF ) /*0x42c41e*/
    v8 = *(char **)(v7 + 0x148); /*0x42c420*/
  if ( v6 != v8 ) /*0x42c42a*/
    NiFile_Seek(v7, v6 - v8, BSFile_FilePos_Cur); /*0x42c434*/
  v9 = (int)*(this + 0x52);                     // MEF decode: raw archive member read count clamp. Compute remaining as memberSize - current - relative after bounds checks; clamp requested count or force zero on invalid state before raw fread. /*0x42c439*/
  v10 = Count; /*0x42c43f*/
  v11 = (unsigned int)*(this + 0x54); /*0x42c443*/
  if ( HIDWORD(Count) + v9 + (int)Count > v11 ) /*0x42c452*/
    v10 = v11 - v9 - HIDWORD(Count); /*0x42c458*/
  LODWORD(v18) = v10; /*0x42c45e*/
  v12 = sub_747D10(this, DstBuf, v18); /*0x42c462*/
  v13 = (int)*(this + 0x55); /*0x42c467*/
  v14 = v12; /*0x42c46d*/
  v15 = &v6[v12]; /*0x42c46f*/
  *(_DWORD *)(v13 + 0x148) = v15; /*0x42c472*/
  *(_DWORD *)(v13 + 0x14C) = v15; /*0x42c478*/
  v16 = (_RTL_CRITICAL_SECTION_0 *)*(this + 0x55); /*0x42c47e*/
  if ( v16 ) /*0x42c486*/
    NiLeaveCriticalSection_0(v16 + 0x10); /*0x42c48e*/
  return v14; /*0x42c493*/
}
