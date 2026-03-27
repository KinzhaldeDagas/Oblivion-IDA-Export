unsigned int __thiscall sub_726850(char *this, int a2, int a3, int a4, int a5, unsigned __int16 a6)
{
  int v6; // ebp
  int v7; // eax
  void (__cdecl *v8)(int, char *, int, int *, int); // eax
  int v9; // ecx
  unsigned int v10; // edi
  unsigned int i; // esi
  int v13; // eax
  unsigned int j; // ecx
  int v15; // edx
  int v16; // edx
  int v17; // eax
  unsigned int v18; // ecx
  int v19; // esi
  unsigned int v20; // edi
  void (__cdecl *v21)(int, unsigned int *, int, int *, int); // eax
  void (__cdecl *v22)(int, int *, unsigned int, int *, int); // eax
  unsigned int result; // eax
  unsigned int v24; // edi
  unsigned int v25; // ebx
  unsigned int k; // esi
  int v27; // eax
  void (__cdecl *v28)(int, unsigned int *, int, int *, int); // edx
  void (__cdecl *v29)(int, int *, unsigned int, int *, int); // eax
  int v30; // edx
  unsigned int m; // ecx
  int v32; // [esp-28h] [ebp-250h]
  int v33; // [esp-28h] [ebp-250h]
  int v34; // [esp-14h] [ebp-23Ch]
  int v35; // [esp-14h] [ebp-23Ch]
  int v36; // [esp+10h] [ebp-218h] BYREF
  unsigned int v37; // [esp+14h] [ebp-214h]
  unsigned int v38; // [esp+18h] [ebp-210h] BYREF
  unsigned int v39; // [esp+1Ch] [ebp-20Ch] BYREF
  char *v40; // [esp+20h] [ebp-208h]
  int v41; // [esp+24h] [ebp-204h]
  int v42[32]; // [esp+28h] [ebp-200h]
  _DWORD v43[32]; // [esp+A8h] [ebp-180h]
  int v44[32]; // [esp+128h] [ebp-100h] BYREF
  int v45[32]; // [esp+1A8h] [ebp-80h] BYREF

  v6 = a2;
  v7 = *(_DWORD *)(a2 + 0x220);
  v40 = this;
  v34 = v7;
  v8 = *(void (__cdecl **)(int, char *, int, int *, int))(v7 + 8);
  v36 = 4;
  v8(v34, this + 4, 4, &v36, 1);
  v9 = a5;
  v10 = 0;
  v37 = 0;
  if ( a5 )
  {
    do
    {
      if ( *(_DWORD *)(a4 + 0x14) == a3 )
        v42[v10++] = a4;
      a4 += 0x1C;
      --v9;
    }
    while ( v9 );
    v37 = v10;
  }
  for ( i = 0; i < v10; ++i )
  {
    v13 = v42[i];
    for ( j = 0; j < i; ++j )
    {
      v15 = v42[j];
      if ( *(_DWORD *)(v15 + 0x18) > *(_DWORD *)(v13 + 0x18) )
      {
        v42[j] = v13;
        v13 = v15;
      }
    }
    v42[i] = v13;
  }
  v16 = v42[0];
  v17 = 1;
  v43[0] = 0;
  v45[0] = 0;
  v38 = 1;
  v18 = 1;
  if ( v10 > 1 )
  {
    do
    {
      v19 = v42[v18];
      v20 = *(_DWORD *)(v19 + 0x18);
      if ( v20 > *(_DWORD *)(v16 + 0x18) + (unsigned int)a6 * *(_DWORD *)(v16 + 0x10) )
      {
        v43[v17] = v18;
        v45[v17++] = v20;
        v38 = v17;
        v16 = v19;
      }
      v10 = v37;
      ++v18;
    }
    while ( v18 < v37 );
    v6 = a2;
  }
  v43[v17] = v10;
  v35 = *(_DWORD *)(v6 + 0x220);
  v21 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(v35 + 8);
  v36 = 4;
  v21(v35, &v38, 4, &v36, 1);
  v32 = *(_DWORD *)(v6 + 0x220);
  v22 = *(void (__cdecl **)(int, int *, unsigned int, int *, int))(v32 + 8);
  v36 = 4;
  v22(v32, v45, 4 * v38, &v36, 1);
  result = 0;
  v37 = 0;
  if ( v38 )
  {
    v41 = a6;
    while ( 1 )
    {
      v24 = v43[result];
      v25 = v43[result + 1];
      v36 = 0;
      for ( k = v24; k < v25; ++k )
        sub_725DE0((_DWORD *)v42[k], (int)v44, &v36, 0x20);
      v27 = *(_DWORD *)(v6 + 0x220);
      v39 = v36;
      v28 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(v27 + 8);
      v36 = 4;
      v28(v27, &v39, 4, &v36, 1);
      v33 = *(_DWORD *)(v6 + 0x220);
      v29 = *(void (__cdecl **)(int, int *, unsigned int, int *, int))(v33 + 8);
      v36 = 4;
      v29(v33, v44, 4 * v39, &v36, 1);
      v30 = 0;
      for ( m = 0; m < v39; ++m )
        v30 += v44[m];
      (*(void (__cdecl **)(_DWORD, int, int, int *, unsigned int))(*(_DWORD *)(v6 + 0x220) + 8))(
        *(_DWORD *)(v6 + 0x220),
        *((_DWORD *)v40 + 2) + *(_DWORD *)(v42[v24] + 0x18),
        v30 * v41,
        v44,
        v39);
      result = ++v37;
      if ( v37 >= v38 )
        break;
      result = v37;
    }
  }
  return result;
}
