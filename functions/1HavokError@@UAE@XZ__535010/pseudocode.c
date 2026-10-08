void __thiscall HavokError::~HavokError(HavokError *this)
{
  char *v2; // edi
  int v3; // eax
  int v4; // ecx

  *(_DWORD *)this = &HavokError::`vftable'; /*0x535039*/
  v2 = (char *)this + 8; /*0x53503f*/
  sub_534D30((_DWORD *)this + 2); /*0x53504b*/
  sub_8B0E60((_DWORD *)this + 5); /*0x535058*/
  v3 = *((_DWORD *)v2 + 2); /*0x53505d*/
  if ( v3 >= 0 ) /*0x535067*/
  {
    v4 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x535079*/
    if ( !v4 ) /*0x535081*/
      v4 = unk_BA7D9C; /*0x535083*/
    sub_8A75D0(v4, *(_DWORD **)v2, 8 * v3, 0x14); /*0x53509a*/
  }
  *(_DWORD *)this = &hkBaseObject::`vftable'; /*0x53509f*/
}
