char __thiscall sub_8AECA0(int *this)
{
  int v2; // eax
  unsigned int *v3; // eax

  v2 = (*(int (__thiscall **)(int *))(*this + 0x58))(this);
  if ( v2 )
    v3 = *(unsigned int **)(v2 + 0x2B0);
  else
    v3 = 0;
  if ( v3 )
    return sub_88B4E0(v3, *(this + 2));
  else
    return 0;
}
