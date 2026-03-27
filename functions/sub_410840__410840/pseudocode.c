int __usercall sub_410840@<eax>(int a1@<edi>, int a2@<esi>, const char *a3)
{
  unsigned int v4; // eax
  char *v5; // edi
  int v7; // edx
  int *v8; // esi
  int result; // eax
  double v10; // st7
  int v11; // eax
  DWORD v12; // edi
  float v13; // [esp+48h] [ebp-154h]
  int v15; // [esp+5Ch] [ebp-140h]
  float v17; // [esp+68h] [ebp-134h] BYREF
  float v18; // [esp+6Ch] [ebp-130h]
  __int64 v19; // [esp+70h] [ebp-12Ch]
  _DWORD v20[5]; // [esp+7Ch] [ebp-120h] BYREF
  int v21; // [esp+90h] [ebp-10Ch] BYREF
  _DWORD v22[65]; // [esp+94h] [ebp-108h] BYREF

  qmemcpy(v22, "Data\\Vid", 8);
  v22[2] = &loc_5C6F65;
  v4 = strlen(a3) + 1;
  v5 = (char *)&v21 + 3;
  while ( *++v5 )
    ;
  v7 = dword_B350D8;
  qmemcpy(v5, a3, v4);
  v17 = 0.0;
  v8 = *(int **)(v7 + 0x280);
  result = D3DXCreateTextureFromFileA_0(v8, v22, &v17);
  if ( !result )
  {
    (*(void (__stdcall **)(int *, _DWORD, _DWORD, int, unsigned int, _DWORD, _DWORD, int, int))(*v8 + 0xAC))(
      v8,
      0,
      0,
      1,
      0xFF000000,
      1.0,
      0,
      a1,
      a2);
    (*(void (__stdcall **)(int *))(*v8 + 0xA4))(v8);
    memset(v20, 0, sizeof(v20));
    v21 = 0;
    v22[0] = 0;
    v22[1] = 0;
    (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD *))(*(_DWORD *)v19 + 0x44))(v19, 0, v20);
    v18 = (double)nHeight / (double)v22[1];
    v18 = ((double)nWidth - v18 * (double)v22[0]) * 0.5;
    sub_40F970((int)v8);
    (*(void (__stdcall **)(int *, _DWORD))(*v8 + 0x104))(v8, 0);
    v15 = nHeight;
    v10 = v17;
    v11 = Double_To_SInt32(v17);
    v13 = v10;
    sub_40F760(v8, v13, 0.0, 1.0, 1.0, v11, v15);
    (*(void (__stdcall **)(int *))(*v8 + 0xA8))(v8);
    (*(void (__stdcall **)(int *, _DWORD, _DWORD, _DWORD, _DWORD))(*v8 + 0x44))(v8, 0, 0, 0, 0);
    v19 = (__int64)((double)GetTickCount() + flt_B030AC * 1000.0);
    v12 = v19;
    while ( v12 > GetTickCount() && sub_410390(1) )
      ;
    return (*(int (__cdecl **)(float))(*(_DWORD *)LODWORD(v18) + 8))(COERCE_FLOAT(LODWORD(v18)));
  }
  return result;
}
