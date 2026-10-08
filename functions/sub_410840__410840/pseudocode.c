int __usercall sub_410840@<eax>(int a1@<edi>, int a2@<esi>, const char *a3)
{
  unsigned int v3; // eax
  char *v4; // edi
  int v6; // edx
  int *v7; // esi
  int result; // eax
  double v9; // st7
  int v10; // eax
  DWORD v11; // edi
  float v12; // [esp+48h] [ebp-154h]
  int v14; // [esp+5Ch] [ebp-140h]
  float v16; // [esp+68h] [ebp-134h] BYREF
  float v17; // [esp+6Ch] [ebp-130h]
  __int64 v18; // [esp+70h] [ebp-12Ch]
  _DWORD v19[5]; // [esp+7Ch] [ebp-120h] BYREF
  int v20; // [esp+90h] [ebp-10Ch] BYREF
  _DWORD v21[65]; // [esp+94h] [ebp-108h] BYREF

  qmemcpy(v21, "Data\\Vid", 8); /*0x410867*/
  v21[2] = &loc_5C6F65; /*0x410875*/
  v3 = strlen(a3) + 1; /*0x410887*/
  v4 = (char *)&v20 + 3; /*0x410891*/
  while ( *++v4 ) /*0x41089c*/
    ; /*0x410894*/
  v6 = *(_DWORD *)&MEMORY[0xB33E90][0x1248]; /*0x4108a5*/
  qmemcpy(v4, a3, v3); /*0x4108ab*/
  v16 = 0.0; /*0x4108bd*/
  v7 = *(int **)(v6 + 0x280); /*0x4108c5*/
  result = D3DXCreateTextureFromFileA_0((int)v7, (int)v21, (int)&v16); /*0x4108cd*/
  if ( !result ) /*0x4108d4*/
  {
    (*(void (__stdcall **)(int *, _DWORD, _DWORD, int, unsigned int, _DWORD, _DWORD, int, int))(*v7 + 0xAC))( /*0x4108f3*/
      v7,
      0,
      0,
      1,
      0xFF000000,
      1.0,
      0,
      a1,
      a2);
    (*(void (__stdcall **)(int *))(*v7 + 0xA4))(v7); /*0x4108fe*/
    memset(v19, 0, sizeof(v19)); /*0x410902*/
    v20 = 0; /*0x410916*/
    v21[0] = 0; /*0x41091a*/
    v21[1] = 0; /*0x41091e*/
    (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD *))(*(_DWORD *)v18 + 0x44))(v18, 0, v19); /*0x410933*/
    v17 = (double)nHeight / (double)v21[1]; /*0x41095b*/
    v17 = ((double)nWidth - v17 * (double)v21[0]) * 0.5; /*0x410979*/
    sub_40F970((int)v7); /*0x41097d*/
    (*(void (__stdcall **)(int *, _DWORD))(*v7 + 0x104))(v7, 0); /*0x410992*/
    v14 = nHeight; /*0x4109a5*/
    v9 = v16; /*0x4109aa*/
    v10 = Double_To_SInt32(v16); /*0x4109ac*/
    v12 = v9; /*0x4109c5*/
    sub_40F760(v7, v12, 0.0, 1.0, 1.0, v10, v14); /*0x4109c8*/
    (*(void (__stdcall **)(int *))(*v7 + 0xA8))(v7); /*0x4109d9*/
    (*(void (__stdcall **)(int *, _DWORD, _DWORD, _DWORD, _DWORD))(*v7 + 0x44))(v7, 0, 0, 0, 0); /*0x4109e9*/
    v18 = (__int64)((double)GetTickCount() + flt_B030AC * 1000.0);// ModernWindowsCompatible patch site: loading texture wait computes future GetTickCount target through signed x87 conversion, then compares target > now. /*0x410a29*/
    v11 = v18; /*0x410a2d*/
    while ( v11 > GetTickCount() && Input_CheckLoadPumpControls(1) )// ModernWindowsCompatible decode: vanilla wait loop calls GetTickCount and exits on unsigned target <= now; replaced by wrap-safe elapsed tick wait. /*0x410a3d*/
      ; /*0x410a35*/
    return (*(int (__cdecl **)(float))(*(_DWORD *)LODWORD(v17) + 8))(COERCE_FLOAT(LODWORD(v17))); /*0x410a53*/
  }
  return result; /*0x410a5e*/
}
