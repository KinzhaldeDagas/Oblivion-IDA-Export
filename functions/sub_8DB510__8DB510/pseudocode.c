int __thiscall sub_8DB510(_DWORD *this, int a2, int a3, int a4)
{
  int v4; // esi
  int v6; // edi
  int result; // eax
  int v8; // ebx
  unsigned __int16 v9; // cx

  v4 = a2 + *(_DWORD *)(a2 + 0x10); /*0x8db51a*/
  v6 = a3 + *(_DWORD *)(a3 + 0x10); /*0x8db52d*/
  result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x18, 0x1F); /*0x8db533*/
  *(_WORD *)(result + 4) = 0x18; /*0x8db536*/
  v8 = *(this + 2); /*0x8db53c*/
  *(_WORD *)(result + 6) = 1; /*0x8db53f*/
  *(_DWORD *)result = &off_A9A3D0; /*0x8db545*/
  v9 = *(_WORD *)(v6 + 0x8E); /*0x8db54b*/
  if ( *(_WORD *)(v4 + 0x8E) < v9 ) /*0x8db55e*/
    v9 = *(_WORD *)(v4 + 0x8E); /*0x8db560*/
  *(_DWORD *)(result + 0x10) = v6; /*0x8db562*/
  *(_DWORD *)(result + 0xC) = v4; /*0x8db566*/
  *(_DWORD *)(result + 8) = v8; /*0x8db56a*/
  *(_WORD *)(result + 0x14) = v9; /*0x8db56d*/
  return result; /*0x8db565*/
}
