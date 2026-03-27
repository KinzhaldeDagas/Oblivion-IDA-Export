void __userpurge SetCamera(
        int a1@<ecx>,
        int a2@<ebx>,
        int a3@<edi>,
        float *a4,
        float *a5,
        float *a6,
        float *a7,
        float a8,
        float a9,
        int a10,
        float *a11)
{
  float v12; // ecx
  float v13; // edx
  float v14; // eax
  double v15; // st4
  int v16; // eax
  double v18; // st7
  bool v19; // zf
  int (*v20)(void); // eax
  char v21; // al
  double v22; // st7
  float *v23; // ecx
  double v24; // st5
  double v25; // st5
  double v26; // st4
  double v27; // st7
  char v28; // al
  double v29; // st7
  double v30; // st5
  double v31; // st5
  double v32; // st4
  int v33; // eax
  double v34; // st7
  double v35; // st7
  _DWORD v36[4]; // [esp+50h] [ebp-10h] BYREF
  float retaddr; // [esp+60h] [ebp+0h]
  float v38; // [esp+64h] [ebp+4h]
  float v39; // [esp+64h] [ebp+4h]
  float v40; // [esp+64h] [ebp+4h]
  float v41; // [esp+6Ch] [ebp+Ch]
  int v42; // [esp+6Ch] [ebp+Ch]
  int v43; // [esp+6Ch] [ebp+Ch]
  int v44; // [esp+6Ch] [ebp+Ch]
  int v45; // [esp+70h] [ebp+10h]
  float v46; // [esp+74h] [ebp+14h]
  float v47; // [esp+74h] [ebp+14h]
  float v48; // [esp+78h] [ebp+18h]
  int v49; // [esp+78h] [ebp+18h]
  float v50; // [esp+7Ch] [ebp+1Ch]

  if ( !*(_BYTE *)(a1 + 0x6F0) )
  {
    CameraWorldTranslate = *a4;
    v12 = Vector3_InitValue_;
    flt_B3F930 = a4[1];
    v13 = *(&Vector3_InitValue_ + 1);
    flt_B3F934 = a4[2];
    v14 = dword_B3F9B0;
    *(float *)(a1 + 0x980) = *a7;
    *(float *)(a1 + 0x984) = *a6;
    *(float *)(a1 + 0x988) = *a5;
    *(float *)(a1 + 0x98C) = 0.0;
    *(float *)(a1 + 0x990) = a7[1];
    *(float *)(a1 + 0x994) = a6[1];
    *(float *)(a1 + 0x998) = a5[1];
    *(float *)(a1 + 0x99C) = 0.0;
    *(float *)(a1 + 0x9A0) = a7[2];
    *(float *)(a1 + 0x9A4) = a6[2];
    *(float *)(a1 + 0x9A8) = a5[2];
    *(float *)(a1 + 0x9AC) = 0.0;
    v15 = v14;
    v38 = *a7 * v12 + a7[1] * v13 + v14 * a7[2];
    *(float *)(a1 + 0x9B0) = -v38;
    v39 = *a6 * v12 + v13 * a6[1] + a6[2] * v14;
    *(float *)(a1 + 0x9B4) = -v39;
    v40 = *a5 * v12 + a5[1] * v13 + a5[2] * v14;
    *(float *)(a1 + 0x9B8) = -v40;
    *(float *)(a1 + 0x9BC) = 1.0;
    *(float *)(a1 + 0xA00) = *a7;
    *(float *)(a1 + 0xA04) = a7[1];
    *(float *)(a1 + 0xA08) = a7[2];
    *(float *)(a1 + 0xA0C) = 0.0;
    *(float *)(a1 + 0xA10) = *a6;
    *(float *)(a1 + 0xA14) = a6[1];
    *(float *)(a1 + 0xA18) = a6[2];
    *(float *)(a1 + 0xA1C) = 0.0;
    *(float *)(a1 + 0xA20) = *a5;
    *(float *)(a1 + 0xA24) = a5[1];
    v16 = *(_DWORD *)(a1 + 0x280);
    *(float *)(a1 + 0xA28) = a5[2];
    *(float *)(a1 + 0xA2C) = 0.0;
    *(float *)(a1 + 0xA30) = v12;
    *(float *)(a1 + 0xA34) = v13;
    *(float *)(a1 + 0xA38) = v15;
    *(float *)(a1 + 0xA3C) = 1.0;
    (*(void (__stdcall **)(int, int, int, int, int))(*(_DWORD *)v16 + 0xB0))(v16, 2, a1 + 0x980, a3, a2);
    *(float *)(a1 + 0x640) = *a7;
    *(float *)(a1 + 0x644) = a7[1];
    *(float *)(a1 + 0x648) = a7[2];
    *(float *)(a1 + 0x628) = *a7;
    *(float *)(a1 + 0x62C) = a7[1];
    *(float *)(a1 + 0x630) = a7[2];
    *(float *)(a1 + 0x64C) = *a6;
    *(float *)(a1 + 0x650) = a6[1];
    *(float *)(a1 + 0x654) = a6[2];
    *(float *)(a1 + 0x634) = *a6;
    *(float *)(a1 + 0x638) = a6[1];
    *(float *)(a1 + 0x63C) = a6[2];
    *(float *)(a1 + 0x678) = *(float *)(a10 + 0x10);
    v41 = *(float *)(a10 + 0x14) - *(float *)(a10 + 0x10);
    v18 = v41;
    *(float *)(a1 + 0x67C) = v41;
    *(float *)&v42 = *(float *)(a10 + 4) - *(float *)a10;
    v48 = *(float *)(a10 + 4) + *(float *)a10;
    v46 = *(float *)(a10 + 8) - *(float *)(a10 + 0xC);
    v19 = *(_BYTE *)(a10 + 0x18) == 0;
    *(float *)&v45 = *(float *)(a10 + 0xC) + *(float *)(a10 + 8);
    v20 = *(int (**)(void))(**(_DWORD **)(a1 + 0x8AC) + 0x48);
    v50 = 1.0 / v18;
    if ( v19 )
    {
      v28 = v20();
      v29 = dbl_A3D0C0;
      v23 = (float *)(a1 + 0x9C0);
      v30 = *(float *)&v42;
      if ( v28 )
      {
        *v23 = dbl_A3F400 / v30;
        v31 = 0.0;
        *(float *)(a1 + 0x9D0) = 0.0;
        v32 = v48;
      }
      else
      {
        *v23 = v29 / v30;
        v31 = 0.0;
        *(float *)(a1 + 0x9D0) = 0.0;
        v32 = -v48;
      }
      *(float *)(a1 + 0x9E0) = v32 / *(float *)&v42;
      *(float *)(a1 + 0x9F0) = v31;
      *(float *)(a1 + 0x9C4) = v31;
      *(float *)(a1 + 0x9D4) = v29 / v46;
      v27 = v31;
      *(float *)(a1 + 0x9E4) = -*(float *)&v45 / v46;
      *(float *)(a1 + 0x9F4) = v31;
      *(float *)(a1 + 0x9C8) = v31;
      *(float *)(a1 + 0x9D8) = v31;
      *(float *)(a1 + 0x9E8) = *(float *)(a10 + 0x14) * v50;
      *(float *)(a1 + 0x9F8) = -(v50 * (*(float *)(a10 + 0x14) * *(float *)(a10 + 0x10)));
      *(float *)(a1 + 0x9CC) = v31;
      *(float *)(a1 + 0x9DC) = v31;
      *(float *)(a1 + 0x9EC) = 1.0;
    }
    else
    {
      v21 = v20();
      v22 = dbl_A3D0C0;
      v23 = (float *)(a1 + 0x9C0);
      v24 = *(float *)&v42;
      if ( v21 )
      {
        *v23 = dbl_A3F400 / v24;
        v25 = 0.0;
        *(float *)(a1 + 0x9D0) = 0.0;
        *(float *)(a1 + 0x9E0) = 0.0;
        v26 = v48;
      }
      else
      {
        *v23 = v22 / v24;
        v25 = 0.0;
        *(float *)(a1 + 0x9D0) = 0.0;
        *(float *)(a1 + 0x9E0) = 0.0;
        v26 = -v48;
      }
      *(float *)(a1 + 0x9F0) = v26 / *(float *)&v42;
      *(float *)(a1 + 0x9C4) = v25;
      *(float *)(a1 + 0x9D4) = v22 / v46;
      *(float *)(a1 + 0x9E4) = v25;
      *(float *)(a1 + 0x9F4) = -*(float *)&v45 / v46;
      *(float *)(a1 + 0x9C8) = v25;
      *(float *)(a1 + 0x9D8) = v25;
      *(float *)(a1 + 0x9E8) = v50;
      *(float *)(a1 + 0x9F8) = -(v50 * *(float *)(a10 + 0x10));
      *(float *)(a1 + 0x9CC) = v25;
      *(float *)(a1 + 0x9DC) = v25;
      *(float *)(a1 + 0x9EC) = v25;
      v27 = 1.0;
    }
    v33 = *(_DWORD *)(a1 + 0x280);
    *(float *)(a1 + 0x9FC) = v27;
    (*(void (__stdcall **)(int, int, float *))(*(_DWORD *)v33 + 0xB0))(v33, 3, v23);
    v43 = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 0x87C) + 0x4C))(*(_DWORD *)(a1 + 0x87C), 0);
    v34 = (double)v43;
    if ( v43 < 0 )
      v34 = v34 + flt_A2FC78;
    *(float *)&v44 = v34;
    v49 = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 0x87C) + 0x50))(*(_DWORD *)(a1 + 0x87C), 0);
    v35 = (double)v49;
    if ( v49 < 0 )
      v35 = v35 + flt_A2FC78;
    v47 = v35;
    v36[0] = (__int64)(*a11 * *(float *)&v44);
    v36[1] = (__int64)((1.0 - a11[2]) * v47);
    v36[2] = (__int64)(*(float *)&v44 * (a11[1] - *a11));
    v36[3] = (__int64)(v47 * (a11[2] - a11[3]));
    retaddr = 0.0;
    (*(void (__cdecl **)(_DWORD, _DWORD *))(**(_DWORD **)(a1 + 0x280) + 0xBC))(*(_DWORD *)(a1 + 0x280), v36);
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(a1 + 0x8AC) + 0x44))(
      *(_DWORD *)(a1 + 0x8AC),
      *(float *)(a10 + 0x10),
      *(float *)(a10 + 0x14));
  }
}
