int __thiscall sub_6CE260(int *this, float a2, float a3)
{
  int v3; // ecx
  int result; // eax

  v3 = *(this + 0xF);
  if ( v3 )
    return (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v3 + 0x84))(v3, LODWORD(a2), LODWORD(a3));
  return result;
}
