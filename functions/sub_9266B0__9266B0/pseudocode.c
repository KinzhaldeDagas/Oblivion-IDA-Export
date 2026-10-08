signed int __thiscall sub_9266B0(_DWORD *this)
{
  int v2; // eax

  if ( !*(this + 1) ) /*0x9266d4*/
  {
    v2 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0xA0, 0x29); /*0x9266ec*/
    *(_WORD *)(v2 + 4) = 0xA0; /*0x9266ee*/
    *(this + 1) = sub_9285E0((_DWORD *)v2); /*0x926707*/
  }
  return 0xA0; /*0x92670f*/
}
