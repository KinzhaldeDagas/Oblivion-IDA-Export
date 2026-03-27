signed int __thiscall sub_9266B0(_DWORD *this)
{
  int v2; // eax

  if ( !*(this + 1) )
  {
    v2 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0xA0, 0x29);
    *(_WORD *)(v2 + 4) = 0xA0;
    *(this + 1) = sub_9285E0((_DWORD *)v2);
  }
  return 0xA0;
}
