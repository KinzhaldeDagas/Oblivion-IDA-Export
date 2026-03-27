_DWORD *__thiscall sub_91E7B0(_WORD *this, _DWORD *a2)
{
  int v3; // edi
  int v4; // eax

  sub_9491F0(this, a2);
  *((_DWORD *)this + 0xA) = &off_A9D2B4;
  v3 = 0;
  *(_DWORD *)this = &off_A9D8B8;
  *((_DWORD *)this + 2) = &off_A9D8A0;
  *((_DWORD *)this + 8) = off_A9D84C;
  *((_DWORD *)this + 0xA) = &off_A9D894;
  *((_DWORD *)this + 0xB) = 0;
  *((_DWORD *)this + 0xC) = 0;
  *((_DWORD *)this + 0xD) = 0x80000000;
  v4 = *((_DWORD *)this + 9);
  if ( v4 )
  {
    if ( *(int *)(v4 + 0x60) > 0 )
    {
      do
        sub_899D20(*(_DWORD **)(*(_DWORD *)(*((_DWORD *)this + 9) + 0x5C) + 4 * v3++), (int)(this + 0x14));
      while ( v3 < *(_DWORD *)(*((_DWORD *)this + 9) + 0x60) );
    }
  }
  return this;
}
