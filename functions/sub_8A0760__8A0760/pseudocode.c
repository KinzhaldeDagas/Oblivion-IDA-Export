char __thiscall sub_8A0760(int *this)
{
  char v2; // bl
  int v3; // eax
  unsigned int *v4; // edi

  v2 = 0;
  v3 = (*(int (__thiscall **)(int *))(*this + 0x58))(this);
  if ( v3 )
    v4 = *(unsigned int **)(v3 + 0x2B0);
  else
    v4 = 0;
  if ( v4 )
  {
    v2 = sub_88B600(v4, *(this + 2));
    (*(void (__thiscall **)(int *, unsigned int *, _DWORD))(*this + 0x90))(this, v4, 0);
  }
  return v2;
}
