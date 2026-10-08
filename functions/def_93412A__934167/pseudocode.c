void __usercall def_93412A(
        unsigned int a1@<ebx>,
        _DWORD *a2@<edi>,
        unsigned int a3@<esi>,
        int a4,
        int a5,
        int a6,
        int a7)
{
  _DWORD *v7; // eax
  int v8; // ecx
  int v9; // edx

  if ( a3 >= a1 ) /*0x934169*/
  {
    v7 = *(_DWORD **)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x93417a*/
    v8 = v7[0x2A]; /*0x934180*/
    if ( v8 >= v7[0xC] ) /*0x934189*/
    {
      (*(void (__thiscall **)(int, _DWORD *, int, int))(*(_DWORD *)unk_BA7D98 + 0x1C))(unk_BA7D98, a2, 0xC, 0x1C); /*0x9341a9*/
    }
    else
    {
      v9 = v7[0x19]; /*0x93418b*/
      v7[0x2A] = v8 + 1; /*0x93418f*/
      *a2 = v9; /*0x934195*/
      v7[0x19] = a2; /*0x934197*/
    }
    JUMPOUT(0x93411C); /*0x93411c*/
  }
  JUMPOUT(0x934120); /*0x934120*/
}
