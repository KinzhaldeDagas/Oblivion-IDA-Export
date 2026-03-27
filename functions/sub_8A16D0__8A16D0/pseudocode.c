int __thiscall sub_8A16D0(_DWORD *this, const void **a2)
{
  int v4; // ecx
  int v5; // ebx
  _DWORD *v6; // ebp
  int v7; // eax
  int v8; // eax
  _DWORD *v9; // edi
  int result; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // ebp
  unsigned int i; // edi
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // ecx
  _DWORD *v19; // [esp+10h] [ebp-4h]
  _DWORD *v20; // [esp+18h] [ebp+4h]

  sub_8CE4C0(a2);
  if ( this && (v4 = *(this + 2)) != 0 )
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x1C))(v4);
  else
    v5 = 0;
  v6 = a2 + 1;
  a2[2] = 0;
  v7 = (unsigned int)a2[3] & 0x3FFFFFFF;
  v20 = a2 + 1;
  if ( v7 < v5 )
  {
    v8 = 2 * v7;
    if ( v5 >= v8 )
      v8 = v5;
    sub_8A6E40(a2 + 1, v8, 4);
  }
  v9 = a2 + 4;
  v6[1] = v5;
  result = v9[2] & 0x3FFFFFFF;
  v19 = v9;
  if ( result < v5 )
  {
    v11 = 2 * result;
    if ( v5 >= v11 )
      v11 = v5;
    result = sub_8A6E40((const void **)v9, v11, 4);
  }
  v9[1] = v5;
  if ( this && (v12 = *(this + 2)) != 0 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0x20))(v12);
    v13 = result;
  }
  else
  {
    v13 = 0;
  }
  for ( i = 0; i < v5; ++i )
  {
    if ( this && (v15 = *(this + 2)) != 0 )
      v16 = *(_DWORD *)(*(_DWORD *)(v15 + 0x10) + 8 * i);
    else
      v16 = 0;
    *(_DWORD *)(*v20 + 4 * i) = v16;
    if ( this && (v17 = *(this + 2)) != 0 )
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v17 + 0x2C))(v17, v13);
    else
      result = 0;
    *(_DWORD *)(*v19 + 4 * i) = result;
    if ( this && (v18 = *(this + 2)) != 0 )
    {
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v18 + 0x24))(v18, v13);
      v13 = result;
    }
    else
    {
      v13 = 0;
    }
  }
  return result;
}
