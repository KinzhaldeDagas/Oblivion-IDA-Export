char __thiscall sub_5E6FE0(_DWORD *this)
{
  int v1; // eax
  bool v2; // zf
  char result; // al

  if ( !*(this + 0x16) ) /*0x5e6fe3*/
    return 0; /*0x5e6fe3*/
  v1 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0x16) + 0x184))(*(this + 0x16)); /*0x5e6ff4*/
  if ( !v1 ) /*0x5e6ff8*/
    return 0; /*0x5e6ff8*/
  v2 = *(_BYTE *)(v1 + 0x20) == 0x1C; /*0x5e6ffa*/
  result = 1; /*0x5e6ffe*/
  if ( !v2 ) /*0x5e7000*/
    return 0; /*0x5e7002*/
  return result; /*0x5e7004*/
}
