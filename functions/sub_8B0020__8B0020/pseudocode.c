bool __thiscall sub_8B0020(int *this)
{
  int v2; // eax
  unsigned int *v3; // eax

  v2 = (*(int (__thiscall **)(int *))(*this + 0x58))(this);
  if ( v2 )
    v3 = *(unsigned int **)(v2 + 0x2B0);
  else
    v3 = 0;
  return v3 && sub_88B430(v3, *(this + 2));
}
