_DWORD *__thiscall sub_8B8AE0(_OWORD *this, int a2, int a3)
{
  _DWORD *result; // eax
  int v5; // eax

  if ( *(_DWORD *)(a2 + 4) != 1 || *(_DWORD *)(a3 + 4) ) /*0x8b8af2*/
    return 0; /*0x8b8afa*/
  v5 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x50, 0x26); /*0x8b8b0c*/
  *(_WORD *)(v5 + 4) = 0x50; /*0x8b8b0f*/
  result = sub_8B8970((_DWORD *)v5, **(_WORD ***)a2); /*0x8b8b1c*/
  *((_OWORD *)result + 2) = *(this + 2); /*0x8b8b25*/
  *((_OWORD *)result + 3) = *(this + 3); /*0x8b8b2d*/
  result[0x10] = *((_DWORD *)this + 0x10); /*0x8b8b34*/
  result[0x11] = *((_DWORD *)this + 0x11); /*0x8b8b3a*/
  result[0x12] = *((_DWORD *)this + 0x12); /*0x8b8b40*/
  result[0x13] = *((_DWORD *)this + 0x13); /*0x8b8b46*/
  result[4] = *((_DWORD *)this + 4); /*0x8b8b4d*/
  return result; /*0x8b8af9*/
}
