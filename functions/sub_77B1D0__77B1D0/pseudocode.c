int __thiscall sub_77B1D0(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = *(unsigned __int16 *)(2 * a3 + 0xB427E0);
  if ( (unsigned __int16)result < 8u )
    return (*(int (__thiscall **)(_DWORD *, int, int, _DWORD, _DWORD))(*this + 0xC8))(
             this,
             a2,
             a3,
             *(this + 0x10 * a2 + 2 * (unsigned __int16)result + 0x249),
             0);
  return result;
}
