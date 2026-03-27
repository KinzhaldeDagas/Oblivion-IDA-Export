char __thiscall sub_45E220(_DWORD *this, int a2)
{
  int v3; // edx
  void (__cdecl *v4)(int, unsigned int *, int, int *, int); // edx
  unsigned int i; // ebp
  int v6; // eax
  void (__cdecl *v7)(int, int *, int, int *, int); // eax
  int v8; // eax
  int (__cdecl *v9)(int, unsigned int *, int, int *, int); // eax
  unsigned int j; // ebp
  int v11; // ecx
  int (__cdecl *v12)(int, int *, int, int *, int); // ecx
  int v14; // [esp+10h] [ebp-118h] BYREF
  unsigned int v15; // [esp+14h] [ebp-114h] BYREF
  int v16; // [esp+18h] [ebp-110h] BYREF
  unsigned int v17; // [esp+1Ch] [ebp-10Ch] BYREF
  char v18[260]; // [esp+20h] [ebp-108h] BYREF

  v3 = *(this + 6) >> 9;
  v15 = *(_DWORD *)(*(this + 0x1D) + 0xC);
  if ( (v3 & 1) != 0 )
  {
    *(this + 0x24) += 4;
  }
  else
  {
    v4 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(a2 + 8);
    v14 = 1;
    v4(a2, &v15, 4, &v14, 1);
  }
  for ( i = 0; i < v15; ++i )
  {
    v6 = *(this + 6) >> 9;
    v16 = *(_DWORD *)(*(_DWORD *)(*(this + 0x1D) + 4) + 4 * i);
    if ( (v6 & 1) != 0 )
    {
      *(this + 0x24) += 4;
    }
    else
    {
      v7 = *(void (__cdecl **)(int, int *, int, int *, int))(a2 + 8);
      v14 = 1;
      v7(a2, &v16, 4, &v14, 1);
    }
  }
  v8 = *(this + 6) >> 9;
  v17 = *(_DWORD *)(*(this + 0x1E) + 0xC);
  if ( (v8 & 1) != 0 )
  {
    *(this + 0x24) += 4;
  }
  else
  {
    v9 = *(int (__cdecl **)(int, unsigned int *, int, int *, int))(a2 + 8);
    v16 = 1;
    LOBYTE(v8) = v9(a2, &v17, 4, &v16, 1);
  }
  for ( j = 0; j < v17; ++j )
  {
    v8 = *(_DWORD *)(*(_DWORD *)(*(this + 0x1E) + 4) + 4 * j);
    v11 = *(this + 6) >> 9;
    v14 = v8;
    if ( (v11 & 1) != 0 )
    {
      *(this + 0x24) += 4;
    }
    else
    {
      v12 = *(int (__cdecl **)(int, int *, int, int *, int))(a2 + 8);
      v16 = 1;
      LOBYTE(v8) = v12(a2, &v14, 4, &v16, 1);
    }
  }
  if ( *(this + 0x10) )
  {
    _sprintf(v18, "Numeric ID Array(%i)", v15);
    sub_4531B0((_DWORD *)*(this + 0x10), j, 4 * v15 + 4, v18);
    _sprintf(v18, "WorldSpace ID Array(%i)", v17);
    LOBYTE(v8) = sub_4531B0((_DWORD *)*(this + 0x10), j, 4 * v17 + 4, v18);
  }
  return v8;
}
