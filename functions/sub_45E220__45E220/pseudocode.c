char __thiscall SaveLoad_SaveIDArrays(_DWORD *this, int a2)
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

  v3 = *(this + 6) >> 9; /*0x45e242*/
  v15 = *(_DWORD *)(*(this + 0x1D) + 0xC); /*0x45e254*/
  if ( (v3 & 1) != 0 ) /*0x45e258*/
  {
    *(this + 0x24) += 4; /*0x45e25a*/
  }
  else
  {
    v4 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(a2 + 8); /*0x45e263*/
    v14 = 1; /*0x45e274*/
    v4(a2, &v15, 4, &v14, 1); /*0x45e278*/
  }
  for ( i = 0; i < v15; ++i ) /*0x45e283*/
  {
    v6 = *(this + 6) >> 9; /*0x45e291*/
    v16 = *(_DWORD *)(*(_DWORD *)(*(this + 0x1D) + 4) + 4 * i); /*0x45e296*/
    if ( (v6 & 1) != 0 ) /*0x45e29a*/
    {
      *(this + 0x24) += 4; /*0x45e29c*/
    }
    else
    {
      v7 = *(void (__cdecl **)(int, int *, int, int *, int))(a2 + 8); /*0x45e2a5*/
      v14 = 1; /*0x45e2b6*/
      v7(a2, &v16, 4, &v14, 1); /*0x45e2ba*/
    }
  }
  v8 = *(this + 6) >> 9; /*0x45e2d0*/
  v17 = *(_DWORD *)(*(this + 0x1E) + 0xC); /*0x45e2d5*/
  if ( (v8 & 1) != 0 ) /*0x45e2d9*/
  {
    *(this + 0x24) += 4; /*0x45e2db*/
  }
  else
  {
    v9 = *(int (__cdecl **)(int, unsigned int *, int, int *, int))(a2 + 8); /*0x45e2e4*/
    v16 = 1; /*0x45e2f5*/
    LOBYTE(v8) = v9(a2, &v17, 4, &v16, 1); /*0x45e2f9*/
  }
  for ( j = 0; j < v17; ++j ) /*0x45e304*/
  {
    v8 = *(_DWORD *)(*(_DWORD *)(*(this + 0x1E) + 4) + 4 * j); /*0x45e30f*/
    v11 = *(this + 6) >> 9; /*0x45e312*/
    v14 = v8; /*0x45e317*/
    if ( (v11 & 1) != 0 ) /*0x45e31b*/
    {
      *(this + 0x24) += 4; /*0x45e31d*/
    }
    else
    {
      v12 = *(int (__cdecl **)(int, int *, int, int *, int))(a2 + 8); /*0x45e326*/
      v16 = 1; /*0x45e337*/
      LOBYTE(v8) = v12(a2, &v14, 4, &v16, 1); /*0x45e33b*/
    }
  }
  if ( *(this + 0x10) ) /*0x45e348*/
  {
    _sprintf(v18, "Numeric ID Array(%i)", v15); /*0x45e35d*/
    sub_4531B0((_DWORD *)*(this + 0x10), j, 4 * v15 + 4, v18); /*0x45e379*/
    _sprintf(v18, "WorldSpace ID Array(%i)", v17); /*0x45e38d*/
    LOBYTE(v8) = sub_4531B0((_DWORD *)*(this + 0x10), j, 4 * v17 + 4, v18); /*0x45e3a9*/
  }
  return v8; /*0x45e3ae*/
}
