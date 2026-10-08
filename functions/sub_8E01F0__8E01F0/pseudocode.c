void __thiscall sub_8E01F0(_RTL_CRITICAL_SECTION_0 *lpCriticalSection)
{
  char *v2; // esi
  int v3; // ebx
  int v4; // eax

  sub_8F5890((HANDLE *)lpCriticalSection + 0x1C); /*0x8e01f8*/
  v2 = (char *)lpCriticalSection + 0x78; /*0x8e01fd*/
  v3 = 2; /*0x8e0200*/
  do /*0x8e0228*/
  {
    v4 = *((_DWORD *)v2 + 0xFFFFFFFB); /*0x8e0205*/
    v2 += 0xFFFFFFEC; /*0x8e0208*/
    if ( v4 ) /*0x8e020d*/
      (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8e0224*/
        unk_BA7D98,
        *((_DWORD *)v2 + 0xFFFFFFFF),
        0xC * v4,
        0x14);
    --v3; /*0x8e0227*/
  }
  while ( v3 ); /*0x8e0228*/
  DeleteCriticalSection(lpCriticalSection); /*0x8e022b*/
}
