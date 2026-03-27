int __thiscall sub_8C82D0(void *this, int a2, int a3, float a4)
{
  int v5; // eax
  int v6; // esi
  int result; // eax

  v5 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x60, 0x24);
  *(_WORD *)(v5 + 4) = 0x60;
  v6 = sub_8F3230(v5, a2, a3, a4, SLODWORD(flt_B2FFE4));
  result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0x4C))(this, v6);
  if ( *(_WORD *)(v6 + 4) )
  {
    result = (unsigned __int16)--*(_WORD *)(v6 + 6);
    if ( !(_WORD)result )
      return (**(int (__thiscall ***)(int, int))v6)(v6, 1);
  }
  return result;
}
