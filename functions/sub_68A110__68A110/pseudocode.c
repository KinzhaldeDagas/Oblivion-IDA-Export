char __thiscall sub_68A110(_DWORD *this)
{
  int v2; // ecx
  int v3; // eax

  v2 = *(this + 1);
  if ( !v2 || (v3 = DName::status(v2), v3 != 1) || !*(this + 2) )
    LOBYTE(v3) = 0;
  return v3;
}
