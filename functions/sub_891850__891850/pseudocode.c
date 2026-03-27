void __thiscall sub_891850(_DWORD *this, int a2)
{
  int *v2; // ecx
  int v3; // edi
  int v4; // edx
  int i; // eax
  int v6; // esi
  int v7; // edx
  int *j; // eax
  char *v9; // edx
  hkVector4 *v10; // edx
  hkVector4 v11; // xmm0
  _DWORD *v12; // edx
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // esi
  bool v17; // zf

  if ( *(this + 0x85) != 0x1E )
  {
    v2 = *(int **)(a2 + 0x28);
    v3 = 0x1F;
    if ( v2 )
    {
      v4 = v2[3];
      for ( i = *(_DWORD *)(a2 + 0x28); v4; v4 = *(_DWORD *)(v4 + 0xC) )
        i = v4;
      v6 = *(_DWORD *)(i + 0x1C) & 0x3F;
      *(this + 0x86) = v6;
      v7 = v2[3];
      for ( j = v2; v7; v7 = *(_DWORD *)(v7 + 0xC) )
        j = (int *)v7;
      if ( *((_BYTE *)j + 0x18) == 1 && (v9 = (char *)j + j[4]) != 0 )
        v10 = (hkVector4 *)(*((_DWORD *)v9 + 0x14) + 0xD0);
      else
        v10 = &stru_BA7A40;
      v11 = *v10;
      v12 = this;
      *((hkVector4 *)this + 0x22) = v11;
      if ( *(_DWORD *)(a2 + 0x2C) == 0xFFFFFFFF )
      {
        v13 = *v2;
        if ( v13 )
          v14 = *(_DWORD *)(v13 + 8);
        else
          v14 = 0;
        if ( v14 )
        {
          v15 = *(_DWORD *)(v14 + 0x10);
          if ( v15 >= 0x1E )
            v15 = 0x1E;
          v3 = v15;
        }
      }
      else if ( v6 != 0x11 )
      {
        v16 = sub_8AFBE0(v2);
        if ( v16 )
        {
          if ( (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v16 + 0x9C))(v16, *(_DWORD *)(a2 + 0x2C)) >= 0x1E )
            v3 = 0x1E;
          else
            v3 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v16 + 0x9C))(v16, *(_DWORD *)(a2 + 0x2C));
        }
        v12 = this;
      }
      if ( v12[0x85] == 0x1F || v3 == 0x1E )
      {
        v17 = (*((_BYTE *)v12 + 0x1F6) & 1) == 0;
        v12[0x85] = v3;
        if ( !v17 || v3 == 0x1E )
        {
          if ( v3 == 0x1E )
            v12[0x7D] |= 0x20000u;
          else
            v12[0x7D] &= ~0x20000u;
        }
      }
    }
  }
}
