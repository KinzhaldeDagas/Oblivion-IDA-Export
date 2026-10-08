_DWORD *__thiscall sub_8F5F10(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  int v5; // eax

  *((_WORD *)this + 3) = 1; /*0x8f5f1c*/
  *(this + 2) = a2; /*0x8f5f20*/
  *this = &off_A9B3BC; /*0x8f5f23*/
  *((_BYTE *)this + 0x18) = 1; /*0x8f5f29*/
  v4 = *(this + 2); /*0x8f5f2c*/
  if ( v4 ) /*0x8f5f32*/
  {
    if ( *(_WORD *)(v4 + 4) ) /*0x8f5f34*/
      ++*(_WORD *)(v4 + 6); /*0x8f5f3b*/
  }
  v5 = (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)unk_BA7D98 + 8))(unk_BA7D98, 0x40, a3, 0x17); /*0x8f5f50*/
  *(this + 5) = a3; /*0x8f5f53*/
  *(this + 3) = v5; /*0x8f5f56*/
  *(this + 4) = 0; /*0x8f5f5a*/
  return this; /*0x8f5f59*/
}
