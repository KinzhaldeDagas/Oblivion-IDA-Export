char __thiscall sub_4706B0(_DWORD *this, int a2)
{
  if ( *(this + 1) != a2 )
    return 0;
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 4))(this, 0);
  return 1;
}
