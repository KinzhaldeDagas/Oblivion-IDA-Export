_DWORD *__thiscall sub_8F5BC0(_DWORD *this, int a2, int a3)
{
  int v4; // eax

  *((_WORD *)this + 3) = 1;
  *this = &off_A9B38C;
  *(this + 2) = a2;
  *(this + 3) = (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_BA7D98 + 8))(dword_BA7D98, 0x40, a3, 0x17);
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 6) = a3;
  *(this + 7) = 0xFFFFFFFF;
  *(this + 8) = 0xFFFFFFFF;
  v4 = *(this + 2);
  if ( *(_WORD *)(v4 + 4) )
    ++*(_WORD *)(v4 + 6);
  return this;
}
