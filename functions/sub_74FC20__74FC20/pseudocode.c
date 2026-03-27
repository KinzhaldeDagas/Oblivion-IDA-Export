int __thiscall sub_74FC20(int *this, float a2, float a3)
{
  int result; // eax
  int v5; // ecx

  result = sub_6CE260(this, a2, a3);
  v5 = *(this + 0x12);
  if ( v5 )
    return (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v5 + 0x84))(v5, LODWORD(a2), LODWORD(a3));
  return result;
}
