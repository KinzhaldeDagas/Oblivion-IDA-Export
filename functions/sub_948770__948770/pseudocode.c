_DWORD *__thiscall sub_948770(_DWORD *this, int a2)
{
  int v3; // eax
  _DWORD *v4; // eax
  int v5; // ecx

  v3 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x1C, 0x17);
  *(_WORD *)(v3 + 4) = 0x1C;
  v4 = sub_8F5F10((_DWORD *)v3, a2, 0x2000);
  sub_9183A0(this, (int)v4, 0);
  v5 = *(this + 2);
  *this = &off_AA2B4C;
  if ( *(_WORD *)(v5 + 4) )
  {
    if ( !--*(_WORD *)(v5 + 6) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
  }
  return this;
}
