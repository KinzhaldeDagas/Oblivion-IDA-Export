int __thiscall sub_89F3D0(_DWORD *this, char a2)
{
  int v3; // eax
  int *v4; // eax
  int v5; // eax
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // eax
  int *v9; // eax
  int v10; // eax
  int v11; // edi
  int v12; // eax

  if ( a2 )
  {
    if ( this && (v3 = *(this + 2)) != 0 && (v4 = (int *)(v3 + 0x14)) != 0 && (v5 = *v4) != 0 )
      v6 = *(_DWORD *)(v5 + 8);
    else
      v6 = 0;
    if ( v6 )
      InterlockedIncrement((volatile LONG *)(v6 + 4));
    v7 = this;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *))(*this + 0x60))(this);
    v8 = *(this + 2);
    if ( v8 && (v9 = (int *)(v8 + 0x14)) != 0 && (v10 = *v9) != 0 )
      v11 = *(_DWORD *)(v10 + 8);
    else
      v11 = 0;
    if ( v11 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) )
        (**(void (__thiscall ***)(int, int))v11)(v11, 1);
    }
    v7 = 0;
  }
  if ( this )
  {
    v12 = *(this + 2);
    if ( v12 )
      *(_DWORD *)(v12 + 0xC) = v7;
  }
  return sub_89D430(this, a2);
}
