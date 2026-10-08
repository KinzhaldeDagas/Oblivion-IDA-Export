char __thiscall sub_5E6FA0(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // esi
  bool v4; // zf
  char result; // al

  v1 = *(this + 0x16); /*0x5e6fa0*/
  if ( !v1 ) /*0x5e6fa8*/
    return 0; /*0x5e6fa8*/
  v2 = *(_DWORD *)(v1 + 8); /*0x5e6faa*/
  if ( !v2 ) /*0x5e6faf*/
    return 0; /*0x5e6faf*/
  if ( *(_BYTE *)(v2 + 0x20) != 3 ) /*0x5e6fb5*/
    return 0; /*0x5e6fb5*/
  v3 = *(_DWORD *)(v2 + 0x18); /*0x5e6fbb*/
  v4 = *(_DWORD *)(*(_DWORD *)(4 * v3 + 0xB152B0) /*0x5e6fcf*/
                 + 4 * (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0x16) + 0x180))(*(this + 0x16))) == 5;
  result = 1; /*0x5e6fd4*/
  if ( !v4 ) /*0x5e6fd6*/
    return 0; /*0x5e6fd8*/
  return result; /*0x5e6fda*/
}
