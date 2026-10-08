int __thiscall sub_90F0B0(int *this, _DWORD *a2)
{
  _WORD *v3; // eax
  const void **v4; // eax
  int v5; // edx
  int *v6; // esi
  const void **v7; // edi
  int result; // eax

  if ( !*(this + 2) ) /*0x90f0b3*/
  {
    v3 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0xA0, 0x12); /*0x90f0ca*/
    v3[2] = 0xA0; /*0x90f0cf*/
    *(this + 2) = (int)sub_8A9510(v3); /*0x90f0da*/
  }
  sub_898DB0((int)a2, *(this + 2)); /*0x90f0e7*/
  v4 = sub_8991C0(a2); /*0x90f0ee*/
  v5 = *(this + 5); /*0x90f0f3*/
  v6 = this + 3; /*0x90f0f6*/
  v7 = v4; /*0x90f0f9*/
  if ( v6[1] == (v5 & 0x3FFFFFFF) ) /*0x90f106*/
    sub_8A6EE0((const void **)v6, 4); /*0x90f10b*/
  *(_DWORD *)(*v6 + 4 * v6[1]) = v7; /*0x90f118*/
  result = v6[1] + 1; /*0x90f11e*/
  v6[1] = result; /*0x90f120*/
  return result; /*0x90f11f*/
}
