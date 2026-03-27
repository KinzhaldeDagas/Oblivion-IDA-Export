int __thiscall RestoreSamplerState(_DWORD *this, int a2, int a3)
{
  unsigned __int16 v3; // dx
  int result; // eax

  v3 = *(_WORD *)(2 * a3 + 0xB427B0);
  if ( v3 < 5u )
    return (*(int (__thiscall **)(_DWORD *, int, int, _DWORD, _DWORD))(*this + 0xD0))(
             this,
             a2,
             a3,
             *(this + 0xA * a2 + 2 * v3 + 0x349),
             0);
  return result;
}
