_DWORD *__thiscall sub_8F5F10(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  int v5; // eax

  *((_WORD *)this + 3) = 1;
  *(this + 2) = a2;
  *this = &off_A9B3BC;
  *((_BYTE *)this + 0x18) = 1;
  v4 = *(this + 2);
  if ( v4 )
  {
    if ( *(_WORD *)(v4 + 4) )
      ++*(_WORD *)(v4 + 6);
  }
  v5 = (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_BA7D98 + 8))(dword_BA7D98, 0x40, a3, 0x17);
  *(this + 5) = a3;
  *(this + 3) = v5;
  *(this + 4) = 0;
  return this;
}
