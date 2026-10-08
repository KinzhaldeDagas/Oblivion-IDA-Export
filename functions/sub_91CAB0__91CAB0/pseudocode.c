_DWORD *__thiscall sub_91CAB0(char *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // eax
  int v5; // ecx

  v2 = *((_DWORD *)this + 9); /*0x91cab3*/
  *(_DWORD *)this = &off_A9D6B0; /*0x91cab8*/
  *((_DWORD *)this + 2) = &off_A9D698; /*0x91cabe*/
  *((_DWORD *)this + 8) = off_A9D350; /*0x91cac5*/
  *((_DWORD *)this + 0xA) = off_A9D684; /*0x91cacc*/
  *((_DWORD *)this + 0xB) = &off_A9D678; /*0x91cad3*/
  if ( v2 ) /*0x91cada*/
  {
    v3 = 0; /*0x91cae0*/
    if ( *(int *)(v2 + 0x60) > 0 ) /*0x91cae4*/
    {
      do /*0x91cb00*/
        sub_919C40(this, *(int **)(*(_DWORD *)(*((_DWORD *)this + 9) + 0x5C) + 4 * v3++)); /*0x91caf2*/
      while ( v3 < *(_DWORD *)(*((_DWORD *)this + 9) + 0x60) ); /*0x91cb00*/
    }
  }
  v4 = *((_DWORD *)this + 0xE); /*0x91cb03*/
  if ( v4 >= 0 ) /*0x91cb08*/
  {
    v5 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x91cb1a*/
    if ( !v5 ) /*0x91cb22*/
      v5 = unk_BA7D9C; /*0x91cb24*/
    sub_8A75D0(v5, *((_DWORD **)this + 0xC), 4 * v4, 0x14); /*0x91cb39*/
  }
  *((_DWORD *)this + 0xB) = &off_A9D2B4; /*0x91cb3e*/
  *((_DWORD *)this + 0xA) = &hkEntityListener::`vftable'; /*0x91cb45*/
  return sub_949180(this); /*0x91cb4e*/
}
