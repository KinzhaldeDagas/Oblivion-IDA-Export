_DWORD *__usercall sub_917FE0@<eax>(int a1@<ebx>)
{
  int v1; // eax

  v1 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x24, 0x12); /*0x917fec*/
  *(_WORD *)(v1 + 4) = 0x24; /*0x917ff3*/
  return (_DWORD *)sub_945F70(v1, a1, 0xFFFFFFFF); /*0x917ffe*/
}
