int __thiscall sub_9568A0(int *this)
{
  int v2; // edi
  signed int v3; // eax
  int v4; // ecx
  int v5; // ecx
  int v7; // [esp+Ch] [ebp-4h]

  v7 = *(this + 3); /*0x9568bb*/
  v2 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x30, 0x25); /*0x9568c2*/
  v3 = v7; /*0x9568c4*/
  *(_WORD *)(v2 + 4) = 0x30; /*0x9568cb*/
  *(_WORD *)(v2 + 6) = 1; /*0x9568d1*/
  *(_DWORD *)v2 = &hkMoppCode::`vftable'; /*0x9568d7*/
  *(_DWORD *)(v2 + 0x20) = 0; /*0x9568dd*/
  *(_DWORD *)(v2 + 0x24) = 0; /*0x9568e3*/
  *(_DWORD *)(v2 + 0x28) = 0x80000000; /*0x9568ea*/
  *(_OWORD *)(v2 + 0x10) = 0; /*0x9568f4*/
  if ( (*(_DWORD *)(v2 + 0x28) & 0x3FFFFFFF) < v7 ) /*0x956903*/
  {
    sub_8A6E40((const void **)(v2 + 0x20), v7, 1); /*0x956909*/
    v3 = v7; /*0x95690e*/
  }
  v4 = *(_DWORD *)(v2 + 0x28) & 0x3FFFFFFF; /*0x956918*/
  if ( v4 < v3 ) /*0x956920*/
  {
    v5 = 2 * v4; /*0x956922*/
    if ( v3 < v5 ) /*0x956926*/
      v3 = v5; /*0x956928*/
    sub_8A6E40((const void **)(v2 + 0x20), v3, 1); /*0x95692e*/
    v3 = v7; /*0x956933*/
  }
  *(_DWORD *)(v2 + 0x24) = v3; /*0x95693a*/
  sub_8B1890(*(void **)(v2 + 0x20), (const void *)(*(this + 2) + *(this + 4) - *(this + 3)), v3); /*0x95694d*/
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)unk_BA7D98 + 4))(unk_BA7D98, *(this + 4)); /*0x956961*/
  *(this + 3) = 0; /*0x95696c*/
  *(this + 2) = v7; /*0x956973*/
  return v2; /*0x95696a*/
}
