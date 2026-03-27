int __thiscall sub_89D6C0(_DWORD *this, int a2)
{
  int result; // eax

  nullsub_returnvVoid_1arg(a2);
  result = *(this + 3);
  if ( result )
    return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 0x70))(this, *(this + 3));
  return result;
}
