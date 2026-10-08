int __thiscall sub_94A560(_DWORD *this, const void **a2)
{
  int v3; // esi
  _DWORD *v4; // eax
  _WORD *v5; // eax

  v3 = 0; /*0x94a567*/
  if ( !*(this + 4) ) /*0x94a564*/
  {
    v4 = (_DWORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x18, 0x24); /*0x94a579*/
    if ( v4 ) /*0x94a57e*/
    {
      *v4 = 0; /*0x94a580*/
      v4[1] = 0; /*0x94a582*/
      v4[2] = 0x80000000; /*0x94a58a*/
      v4[3] = 0; /*0x94a58d*/
      v4[4] = 0; /*0x94a590*/
      v4[5] = 0x80000000; /*0x94a593*/
      v3 = (int)v4; /*0x94a596*/
    }
    v5 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x60, 8); /*0x94a5a4*/
    v5[2] = 0x60; /*0x94a5aa*/
    *(this + 4) = sub_94CCB0(v5, v3); /*0x94a5b9*/
    if ( a2[1] == (const void *)((unsigned int)a2[2] & 0x3FFFFFFF) ) /*0x94a5c9*/
      sub_8A6EE0(a2, 4); /*0x94a5ce*/
    *((_DWORD *)*a2 + (_DWORD)a2[1]) = *(this + 4); /*0x94a5de*/
    a2[1] = (char *)a2[1] + 1; /*0x94a5e1*/
  }
  return *(this + 4); /*0x94a5e7*/
}
