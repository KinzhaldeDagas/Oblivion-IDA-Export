char __thiscall sub_89FF10(int *this)
{
  char v2; // bl
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // ebp
  int v7; // eax
  int v8; // eax
  int *v9; // ecx

  v2 = 0;
  v3 = (*(int (__thiscall **)(int *))(*this + 0x58))(this);
  if ( v3 )
    v4 = *(_DWORD *)(v3 + 0x2B0);
  else
    v4 = 0;
  if ( v4 )
  {
    v2 = sub_89D9C0(this);
    v5 = *(this + 2);
    if ( v5 )
      v6 = *(_DWORD *)(v5 + 0x1C);
    else
      v6 = 0;
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x58))(v4);
    if ( v7 )
      v8 = *(_DWORD *)(v7 + 0x34);
    else
      v8 = 0;
    if ( v6 == v8 )
    {
      v9 = (int *)*(this + 2);
      if ( v9 )
        sub_8E7C20(v9, 0);
    }
  }
  return v2;
}
