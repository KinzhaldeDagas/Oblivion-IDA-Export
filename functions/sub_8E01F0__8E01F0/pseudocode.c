void __thiscall sub_8E01F0(char *lpCriticalSection)
{
  char *v2; // esi
  int v3; // ebx
  int v4; // eax

  sub_8F5890((HANDLE *)lpCriticalSection + 0x1C);
  v2 = lpCriticalSection + 0x78;
  v3 = 2;
  do
  {
    v4 = *((_DWORD *)v2 + 0xFFFFFFFB);
    v2 += 0xFFFFFFEC;
    if ( v4 )
      (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
        dword_BA7D98,
        *((_DWORD *)v2 + 0xFFFFFFFF),
        0xC * v4,
        0x14);
    --v3;
  }
  while ( v3 );
  DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
}
