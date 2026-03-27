_DWORD *__thiscall sub_927310(void *this, int a2, int a3)
{
  _DWORD *result; // eax
  int v5; // eax

  if ( *(_DWORD *)(a2 + 4) != 1 || *(_DWORD *)(a3 + 4) )
    return 0;
  v5 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x50, 0x26);
  *(_WORD *)(v5 + 4) = 0x50;
  result = sub_926E80(
             (_DWORD *)v5,
             **(_WORD ***)a2,
             (_OWORD *)this + 2,
             (__int128 *)this + 3,
             *((_DWORD *)this + 0x10),
             *((_DWORD *)this + 0x11));
  result[4] = *((_DWORD *)this + 4);
  return result;
}
