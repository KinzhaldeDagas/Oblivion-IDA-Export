int __thiscall sub_90F0B0(int *this, _DWORD *a2)
{
  _WORD *v3; // eax
  _WORD *v4; // eax
  int v5; // edx
  int *v6; // esi
  _WORD *v7; // edi
  int result; // eax

  if ( !*(this + 2) )
  {
    v3 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0xA0, 0x12);
    v3[2] = 0xA0;
    *(this + 2) = (int)sub_8A9510(v3);
  }
  sub_898DB0((int)a2, *(this + 2));
  v4 = sub_8991C0(a2);
  v5 = *(this + 5);
  v6 = this + 3;
  v7 = v4;
  if ( v6[1] == (v5 & 0x3FFFFFFF) )
    sub_8A6EE0((const void **)v6, 4);
  *(_DWORD *)(*v6 + 4 * v6[1]) = v7;
  result = v6[1] + 1;
  v6[1] = result;
  return result;
}
