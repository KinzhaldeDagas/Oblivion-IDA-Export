void __cdecl sub_6D3540(int a1, int a2, float **a3, _DWORD *a4, float a5, float a6)
{
  int v6; // ecx
  float *v7; // edi
  unsigned int i; // ebx
  int v9; // esi
  int v10; // eax
  int v11; // ebp
  _DWORD *v12; // edi
  float **v13; // ebx
  void (__cdecl *v14)(_DWORD, float **, _DWORD *); // esi
  int v15; // [esp+18h] [ebp-4h] BYREF

  v15 = v6;
  if ( a2 == 4 )
  {
    v7 = *a3;
    for ( i = 0; i < 3; ++i )
    {
      v9 = (unsigned __int8)i;
      v10 = LODWORD(v7[(unsigned __int8)i + 5]);
      v11 = LODWORD(v7[(unsigned __int8)i + 8]);
      v15 = LODWORD(v7[(unsigned __int8)i + 0xC]);
      a2 = v10;
      if ( v10 )
      {
        sub_6D3540(0, v11, (int)&v15, (int)&a2, a5, a6);
        v10 = a2;
      }
      LODWORD(v7[(unsigned __int8)i + 0xC]) = v15;
      LODWORD(v7[(unsigned __int8)i + 5]) = v10;
      LODWORD(v7[(unsigned __int8)i + 8]) = v11;
      v7[(unsigned __int8)i + 0xF] = 0.0;
      *((_BYTE *)v7 + v9 + 0x2C) = byte_B3D3E8[v11];
    }
  }
  else
  {
    v12 = a4;
    v13 = a3;
    v14 = *(void (__cdecl **)(_DWORD, float **, _DWORD *))(4 * (a2 + 6 * a1) + 0xB3D1A8);
    if ( *a4 != 1 || a5 != **a3 )
    {
      v14(LODWORD(a5), a3, a4);
      v14(LODWORD(a6), v13, v12);
    }
  }
}
