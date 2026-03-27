int __thiscall sub_94A560(_DWORD *this, const void **a2)
{
  int v3; // esi
  _DWORD *v4; // eax
  _WORD *v5; // eax

  v3 = 0;
  if ( !*(this + 4) )
  {
    v4 = (_DWORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x18, 0x24);
    if ( v4 )
    {
      *v4 = 0;
      v4[1] = 0;
      v4[2] = 0x80000000;
      v4[3] = 0;
      v4[4] = 0;
      v4[5] = 0x80000000;
      v3 = (int)v4;
    }
    v5 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x60, 8);
    v5[2] = 0x60;
    *(this + 4) = sub_94CCB0(v5, v3);
    if ( a2[1] == (const void *)((unsigned int)a2[2] & 0x3FFFFFFF) )
      sub_8A6EE0(a2, 4);
    *((_DWORD *)*a2 + (_DWORD)a2[1]) = *(this + 4);
    a2[1] = (char *)a2[1] + 1;
  }
  return *(this + 4);
}
