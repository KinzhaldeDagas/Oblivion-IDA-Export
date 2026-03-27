void __thiscall sub_67EFE0(_DWORD *this, int a2)
{
  _DWORD *v3; // eax
  int v4; // ecx

  if ( a2 )
  {
    v3 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 4))(this);
    v3[2] = a2;
    v3[1] = 0;
    *v3 = *(this + 1);
    v4 = *(this + 1);
    if ( v4 )
    {
      *(_DWORD *)(v4 + 4) = v3;
      ++*(this + 3);
    }
    else
    {
      ++*(this + 3);
      *(this + 2) = v3;
    }
    *(this + 1) = v3;
  }
}
