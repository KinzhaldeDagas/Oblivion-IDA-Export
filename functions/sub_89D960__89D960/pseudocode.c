char __thiscall sub_89D960(int *this, int *a2)
{
  int v3; // ebp
  int v4; // eax

  if ( this )
    v3 = *(this + 2);
  else
    v3 = 0;
  if ( !v3 )
    return 0;
  v4 = *this;
  if ( a2 )
  {
    if ( (*(int (**)(void))(v4 + 0x58))() != a2[2] )
    {
      (*(void (__thiscall **)(int *))(*this + 0x60))(this);
      sub_88C3D0(a2, v3, v3);
      return 1;
    }
  }
  else
  {
    (*(void (**)(void))(v4 + 0x60))();
  }
  return 0;
}
