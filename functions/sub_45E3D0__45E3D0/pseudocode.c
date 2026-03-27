char __thiscall sub_45E3D0(_DWORD *this, int a2)
{
  _DWORD *v3; // eax
  unsigned int v4; // edi
  unsigned int i; // ecx
  _DWORD *v6; // eax
  unsigned int j; // ecx
  void (__cdecl *v8)(int, unsigned int *, int, int *, int); // edx
  void (__cdecl *v9)(int, int *, int, int *, int); // edx
  int v10; // edx
  unsigned __int8 v11; // dl
  int v12; // eax
  unsigned int *v13; // esi
  int (__cdecl *v14)(int, unsigned int *, int, int *, int); // eax
  char result; // al
  unsigned int k; // edi
  void (__cdecl *v17)(int, int *, int, int *, int); // eax
  int v18; // edx
  unsigned __int8 v19; // dl
  int v20; // eax
  unsigned int *v21; // esi
  int v22; // [esp+10h] [ebp-118h] BYREF
  int v23; // [esp+14h] [ebp-114h] BYREF
  unsigned int v24; // [esp+18h] [ebp-110h] BYREF
  unsigned int v25; // [esp+1Ch] [ebp-10Ch] BYREF
  char v26[260]; // [esp+20h] [ebp-108h] BYREF

  v3 = (_DWORD *)*(this + 0x1D);
  v4 = 0;
  for ( i = 0; i < v3[3]; ++i )
    *(_DWORD *)(v3[1] + 4 * i) = 0;
  v3[3] = 0;
  v3[4] = 0;
  v6 = (_DWORD *)*(this + 0x1E);
  for ( j = 0; j < v6[3]; ++j )
    *(_DWORD *)(v6[1] + 4 * j) = 0;
  v6[3] = 0;
  v6[4] = 0;
  v8 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(a2 + 4);
  v22 = 1;
  v8(a2, &v25, 4, &v22, 1);
  if ( v25 )
  {
    do
    {
      v9 = *(void (__cdecl **)(int, int *, int, int *, int))(a2 + 4);
      v23 = 1;
      v9(a2, &v22, 4, &v23, 1);
      v10 = *(this + 0x13);
      if ( !v10 || HIBYTE(v22) == 0xFF )
      {
        v12 = v22;
      }
      else if ( HIBYTE(v22) >= *((_BYTE *)this + 0x48) || (v11 = *(_BYTE *)(HIBYTE(v22) + v10), v11 == 0xFF) )
      {
        v12 = 0;
      }
      else
      {
        v12 = (v22 & 0xFFFFFF) + (v11 << 0x18);
      }
      v13 = (unsigned int *)*(this + 0x1D);
      v22 = v12;
      if ( v4 >= v13[2] )
        sub_452910(v13, v4 + v13[5]);
      if ( v4 < v13[3] )
      {
        if ( v22 )
        {
          if ( !*(_DWORD *)(v13[1] + 4 * v4) )
            ++v13[4];
        }
        else if ( *(_DWORD *)(v13[1] + 4 * v4) )
        {
          --v13[4];
        }
      }
      else
      {
        v13[3] = v4 + 1;
        if ( v22 )
          ++v13[4];
      }
      *(_DWORD *)(v13[1] + 4 * v4++) = v22;
    }
    while ( v4 < v25 );
  }
  v14 = *(int (__cdecl **)(int, unsigned int *, int, int *, int))(a2 + 4);
  v23 = 1;
  result = v14(a2, &v24, 4, &v23, 1);
  for ( k = 0; k < v24; ++k )
  {
    v17 = *(void (__cdecl **)(int, int *, int, int *, int))(a2 + 4);
    v23 = 1;
    v17(a2, &v22, 4, &v23, 1);
    v18 = *(this + 0x13);
    if ( !v18 || HIBYTE(v22) == 0xFF )
    {
      v20 = v22;
    }
    else if ( HIBYTE(v22) >= *((_BYTE *)this + 0x48) || (v19 = *(_BYTE *)(HIBYTE(v22) + v18), v19 == 0xFF) )
    {
      v20 = 0;
    }
    else
    {
      v20 = (v22 & 0xFFFFFF) + (v19 << 0x18);
    }
    v21 = (unsigned int *)*(this + 0x1E);
    v22 = v20;
    if ( k >= v21[2] )
      sub_452910(v21, k + v21[5]);
    if ( k < v21[3] )
    {
      if ( v22 )
      {
        if ( !*(_DWORD *)(v21[1] + 4 * k) )
          ++v21[4];
      }
      else if ( *(_DWORD *)(v21[1] + 4 * k) )
      {
        --v21[4];
      }
    }
    else
    {
      v21[3] = k + 1;
      if ( v22 )
        ++v21[4];
    }
    result = v22;
    *(_DWORD *)(v21[1] + 4 * k) = v22;
  }
  if ( *(this + 0x10) )
  {
    _sprintf(v26, "Numeric ID Array(%i)", v25);
    sub_4531B0((_DWORD *)*(this + 0x10), (char)this, 4 * v25 + 4, v26);
    _sprintf(v26, "WorldSpace ID Array(%i)", v24);
    return sub_4531B0((_DWORD *)*(this + 0x10), (char)this, 4 * v24 + 4, v26);
  }
  return result;
}
