int __thiscall sub_926320(_DWORD *this, int a2)
{
  int result; // eax
  void *v4; // ebx
  const void *v5; // eax

  result = *(this + 4);
  if ( result < a2 )
  {
    v4 = (void *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0xC * a2, 0x14);
    v5 = (const void *)*(this + 3);
    if ( v5 )
      sub_8B1890(v4, v5, 0xC * *(this + 4));
    result = *(this + 4);
    if ( result )
      result = (*(int (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
                 dword_BA7D98,
                 *(this + 3),
                 0xC * result,
                 0x14);
    *(this + 3) = v4;
    *(this + 4) = a2;
  }
  return result;
}
