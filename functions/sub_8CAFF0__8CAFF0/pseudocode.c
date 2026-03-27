void __thiscall sub_8CAFF0(_DWORD *this, int *a2)
{
  int v3; // ecx
  int v4; // ebp
  int **i; // eax
  _DWORD *v6; // eax
  int j; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // ecx

  v3 = *(this + 0x18);
  v4 = 0;
  if ( v3 > 0 )
  {
    for ( i = (int **)*(this + 0x17); *i != a2; ++i )
    {
      if ( ++v4 >= v3 )
        return;
    }
    if ( v4 >= 0 )
    {
      if ( this )
        v6 = this + 0x12;
      else
        v6 = 0;
      sub_898B20(a2, (int)v6);
      for ( j = 0; j < *(this + 0x1B); ++j )
      {
        v8 = *(_DWORD *)(*(this + 0x1A) + 4 * j);
        (*(void (__thiscall **)(int, int *))(*(_DWORD *)v8 + 4))(v8, a2);
      }
      v9 = *(this + 0x17);
      v10 = *(this + 0x18) - 1;
      *(this + 0x18) = v10;
      *(_DWORD *)(v9 + 4 * v4) = *(_DWORD *)(v9 + 4 * v10);
      sub_8CAE40(this, a2);
    }
  }
}
