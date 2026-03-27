char __thiscall sub_8A06E0(int *this, int *a2)
{
  int v3; // ebp
  int v4; // eax
  int v5; // ebx

  if ( this )
    v3 = *(this + 2);
  else
    v3 = 0;
  if ( !v3 )
    return 0;
  v4 = *this;
  if ( a2 )
  {
    v5 = (*(int (**)(void))(v4 + 0x58))();
    if ( v5 == (*(int (__thiscall **)(int *))(*a2 + 0x58))(a2) )
    {
      return 0;
    }
    else
    {
      (*(void (__thiscall **)(int *))(*this + 0x60))(this);
      (*(void (__thiscall **)(int *, int *, int))(*this + 0x90))(this, a2, 1);
      sub_88C330(a2, v3, v3);
      return 1;
    }
  }
  else
  {
    (*(void (**)(void))(v4 + 0x60))();
    return 0;
  }
}
