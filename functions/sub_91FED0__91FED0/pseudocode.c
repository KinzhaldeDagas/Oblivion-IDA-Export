int __thiscall sub_91FED0(_DWORD *this, int a2, int a3, _DWORD *a4)
{
  int v4; // eax
  int v5; // ecx
  _DWORD *v6; // ecx
  int v7; // edx
  unsigned int v8; // eax
  int v9; // eax

  v4 = *(this + 2); /*0x91fed0*/
  v5 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x91fee0*/
  a4[7] = v4; /*0x91fee9*/
  v6 = *(_DWORD **)(v5 + 0x19C); /*0x91feec*/
  v7 = v6[8]; /*0x91fef2*/
  v8 = (v4 + 0x10) & 0xFFFFFFF0; /*0x91fefb*/
  if ( v7 + v8 > v6[0xB] ) /*0x91ff04*/
  {
    v9 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v6 + 0xC))(v6, v8); /*0x91ff10*/
  }
  else
  {
    v6[8] = v7 + v8; /*0x91ff06*/
    v9 = v7; /*0x91ff09*/
  }
  a4[6] = v9; /*0x91ff13*/
  a4[2] = 0x3E8; /*0x91ff1c*/
  a4[3] = 0x3E8; /*0x91ff1f*/
  a4[1] = 0x3E8; /*0x91ff22*/
  a4[4] = 3; /*0x91ff25*/
  a4[5] = 4; /*0x91ff2c*/
  *a4 = 2; /*0x91ff33*/
  return 0; /*0x91ff1b*/
}
