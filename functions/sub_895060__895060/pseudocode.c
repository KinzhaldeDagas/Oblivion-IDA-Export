int __thiscall sub_895060(_DWORD *this, int *a2)
{
  _DWORD *v3; // ecx
  int v4; // eax
  int result; // eax
  int *v6; // edi
  int v7; // ecx
  int v8; // ecx
  char *v9; // ecx
  int v10; // edi
  int v11; // eax
  int v12; // ecx

  if ( this && (v3 = (_DWORD *)*(this + 2)) != 0 )
    v4 = sub_8AC0C0(v3);
  else
    v4 = 0;
  result = *(_DWORD *)(v4 + 8);
  if ( result )
    v6 = *(int **)(result + 0x2B0);
  else
    v6 = 0;
  if ( v6 != a2 )
  {
    if ( v6 )
    {
      (*(void (__thiscall **)(int *))(*v6 + 0x58))(v6);
      sub_8B9F60((_DWORD **)this);
      v7 = *(this + 0xD9);
      if ( v7 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 0x60))(v7);
      v8 = *(this + 0xDA);
      if ( v8 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 0x60))(v8);
      result = (*(int (__thiscall **)(int *))(*v6 + 0x58))(v6);
    }
    if ( this )
    {
      v9 = (char *)*(this + 2);
      if ( v9 )
      {
        result = sub_8ABDB0(v9);
        *(_DWORD *)(result + 4) = 0;
      }
    }
    if ( a2 )
    {
      if ( *(this + 0xD9) )
      {
        if ( (*(_BYTE *)(this + 0x7D) & 1) == 0 && (*(this + 0x7D) & 0x100000) == 0 )
        {
          sub_894BD0((int)this, flt_A968E0);
          sub_8912A0(this, flt_A968E0);
          sub_894BD0((int)this, 0.0);
        }
        (*(void (__thiscall **)(_DWORD, int *))(*(_DWORD *)*(this + 0xD9) + 0x5C))(*(this + 0xD9), a2);
        v10 = *(this + 0xD9);
        v11 = sub_8AEB80(0x96u, 0x96u, 0, 0x19u);
        result = sub_88BB60(a2, v10, v11);
      }
      v12 = *(this + 0xDA);
      if ( v12 )
        return (*(int (__thiscall **)(int, int *))(*(_DWORD *)v12 + 0x5C))(v12, a2);
    }
  }
  return result;
}
