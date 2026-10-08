int __thiscall sub_74FC20(int *this, float a2, float a3)
{
  int result; // eax
  int v5; // ecx

  result = sub_6CE260(this, a2, a3); /*0x74fc35*/
  v5 = *(this + 0x12); /*0x74fc3a*/
  if ( v5 ) /*0x74fc40*/
    return (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v5 + 0x84))(v5, LODWORD(a2), LODWORD(a3)); /*0x74fc5c*/
  return result; /*0x74fc5e*/
}
