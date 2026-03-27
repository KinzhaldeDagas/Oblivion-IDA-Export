char __thiscall sub_708C30(_DWORD *this, _DWORD *a2)
{
  int v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx
  int *v8; // esi
  int v9; // esi
  int v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // ecx
  int v13; // edx
  int *v14; // esi
  int v15; // esi

  if ( !sub_707B50(this, (int)a2) )
    return 0;
  v4 = *(this + 0x32);
  if ( v4 != a2[0x32] )
    return 0;
  if ( v4 )
  {
    v5 = (_DWORD *)*(this + 0x30);
    v6 = (_DWORD *)a2[0x30];
    while ( v5 )
    {
      v7 = v5[2];
      v5 = (_DWORD *)*v5;
      v8 = v6 + 2;
      v6 = (_DWORD *)*v6;
      v9 = *v8;
      if ( v7 )
      {
        if ( !v9 )
          return 0;
      }
      else if ( v9 )
      {
        return 0;
      }
    }
  }
  v10 = *(this + 0x36);
  if ( v10 != a2[0x36] )
    return 0;
  if ( v10 )
  {
    v11 = (_DWORD *)*(this + 0x34);
    v12 = (_DWORD *)a2[0x34];
    while ( v11 )
    {
      v13 = v11[2];
      v11 = (_DWORD *)*v11;
      v14 = v12 + 2;
      v12 = (_DWORD *)*v12;
      v15 = *v14;
      if ( v13 )
      {
        if ( !v15 )
          return 0;
      }
      else if ( v15 )
      {
        return 0;
      }
    }
  }
  return 1;
}
