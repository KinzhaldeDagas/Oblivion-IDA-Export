char __thiscall sub_707B50(void *this, int a2)
{
  int v4; // eax
  _DWORD *v5; // esi
  _DWORD *v6; // edi
  int v7; // ecx
  int *v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // eax

  if ( !sub_700200((NiTriBasedGeomData *)this, a2) )
    return 0;
  if ( ((*((_BYTE *)this + 0x18) ^ *(_BYTE *)(a2 + 0x18)) & 1) != 0 )
    return 0;
  if ( sub_718B20((float *)this + 0xC, (float *)(a2 + 0x30)) )
    return 0;
  v4 = *((_DWORD *)this + 0x29);
  if ( v4 != *(_DWORD *)(a2 + 0xA4) )
    return 0;
  if ( v4 )
  {
    v5 = *((_DWORD **)this + 0x27);
    v6 = *(_DWORD **)(a2 + 0x9C);
    while ( v5 )
    {
      v7 = v5[2];
      v5 = (_DWORD *)*v5;
      v8 = v6 + 2;
      v6 = (_DWORD *)*v6;
      v9 = *v8;
      if ( v7 )
      {
        if ( !v9 || !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v7 + 0x2C))(v7, v9) )
          return 0;
      }
      else if ( v9 )
      {
        return 0;
      }
    }
  }
  v10 = *((_DWORD *)this + 0x2A);
  v11 = *(_DWORD *)(a2 + 0xA8);
  if ( v10 && v11 )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v10 + 0x2C))(v10, *(_DWORD *)(a2 + 0xA8)) )
      return 0;
  }
  else if ( v10 != v11 )
  {
    return 0;
  }
  return 1;
}
