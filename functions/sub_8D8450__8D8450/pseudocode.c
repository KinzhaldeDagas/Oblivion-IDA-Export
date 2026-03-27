_DWORD *__thiscall sub_8D8450(_DWORD *this)
{
  int v2; // eax
  _DWORD *v3; // eax
  int v4; // ecx

  v2 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 8, 0x1E);
  *(_WORD *)(v2 + 4) = 8;
  *(_WORD *)(v2 + 6) = 1;
  *(_DWORD *)v2 = &off_A9A24C;
  *(this + 0x40) = v2;
  v3 = this + 2;
  v4 = 8;
  do
  {
    v3[0xFFFFFFFE] = *(this + 0x40);
    v3[0xFFFFFFFF] = *(this + 0x40);
    *v3 = *(this + 0x40);
    v3[1] = *(this + 0x40);
    v3[2] = *(this + 0x40);
    v3[3] = *(this + 0x40);
    v3[4] = *(this + 0x40);
    v3[5] = *(this + 0x40);
    v3 += 8;
    --v4;
  }
  while ( v4 );
  return this;
}
