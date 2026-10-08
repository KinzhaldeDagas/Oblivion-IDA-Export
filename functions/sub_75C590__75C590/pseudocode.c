void __thiscall sub_75C590(int this, float a2, int a3)
{
  bool v4; // zf
  float x; // eax
  float y; // ecx
  float z; // edx
  NiTransform *v8; // eax
  float v9; // ecx
  float v10; // edx
  unsigned __int16 v11; // dx
  double v12; // st5
  double v13; // st7
  double v14; // st6
  double v15; // st5
  float *v16; // ecx
  double v17; // st3
  float v18; // [esp+4h] [ebp-F8h]
  float v19; // [esp+4h] [ebp-F8h]
  float v20; // [esp+4h] [ebp-F8h]
  float v21; // [esp+8h] [ebp-F4h]
  float v22; // [esp+8h] [ebp-F4h]
  float v23; // [esp+Ch] [ebp-F0h]
  float v24; // [esp+10h] [ebp-ECh]
  float v25; // [esp+10h] [ebp-ECh]
  float v26; // [esp+14h] [ebp-E8h]
  float v27; // [esp+14h] [ebp-E8h]
  float v28; // [esp+18h] [ebp-E4h]
  float v29; // [esp+18h] [ebp-E4h]
  float v30; // [esp+1Ch] [ebp-E0h]
  float v31; // [esp+1Ch] [ebp-E0h]
  float v32; // [esp+20h] [ebp-DCh] BYREF
  float v33; // [esp+24h] [ebp-D8h]
  float v34; // [esp+28h] [ebp-D4h]
  NiTransform out; // [esp+2Ch] [ebp-D0h] BYREF
  float v36[13]; // [esp+60h] [ebp-9Ch] BYREF
  NiTransform local; // [esp+94h] [ebp-68h] BYREF
  NiTransform parent; // [esp+C8h] [ebp-34h] BYREF

  if ( 0.0 != *(float *)(this + 0x1C) ) /*0x75c5a3*/
  {
    qmemcpy(&local, (const void *)(*(_DWORD *)(this + 0x18) + 0x64), sizeof(local)); /*0x75c5bd*/
    qmemcpy(v36, (const void *)(*(_DWORD *)(this + 0x10) + 0x64), sizeof(v36)); /*0x75c5d5*/
    sub_718A80(v36, &parent); /*0x75c5dc*/
    NiTransform_Compose(&parent, &out, &local); /*0x75c5f5*/
    v4 = *(_BYTE *)(this + 0x60) == 0; /*0x75c5fa*/
    x = out.pos.x; /*0x75c605*/
    *(float *)(this + 0x3C) = a2; /*0x75c609*/
    y = out.pos.y; /*0x75c60c*/
    z = out.pos.z; /*0x75c610*/
    *(float *)(this + 0x30) = x; /*0x75c614*/
    *(float *)(this + 0x34) = y; /*0x75c617*/
    *(float *)(this + 0x38) = z; /*0x75c61a*/
    if ( v4 ) /*0x75c61d*/
    {
      v9 = *(float *)(this + 0x50); /*0x75c642*/
      v10 = *(float *)(this + 0x54); /*0x75c645*/
      v21 = *(float *)(this + 0x4C); /*0x75c648*/
    }
    else
    {
      v8 = sub_7101F0(&out, (NiTransform *)&v32, (NiPoint3 *)(this + 0x4C)); /*0x75c62c*/
      v9 = v8->rot.data[0][1]; /*0x75c633*/
      v21 = v8->rot.data[0][0]; /*0x75c636*/
      v10 = v8->rot.data[0][2]; /*0x75c63a*/
    }
    v24 = v10; /*0x75c662*/
    v11 = 0; /*0x75c66a*/
    v12 = *(float *)(this + 0x1C); /*0x75c670*/
    if ( *(_WORD *)(a3 + 0x48) ) /*0x75c66c*/
    {
      v30 = v12 * v24; /*0x75c688*/
      v13 = v30; /*0x75c692*/
      v28 = v9 * v12; /*0x75c680*/
      v14 = v28; /*0x75c696*/
      v26 = v21 * v12; /*0x75c676*/
      v15 = v26; /*0x75c69a*/
      do /*0x75c77a*/
      {
        v16 = (float *)(*(_DWORD *)(a3 + 0x5C) + 0x1C * v11); /*0x75c6b6*/
        v18 = a2 - v16[5]; /*0x75c6bc*/
        v17 = v18; /*0x75c6ca*/
        if ( v18 != 0.0 ) /*0x75c6cf*/
        {
          v27 = *v16 - v15; /*0x75c6d9*/
          v29 = v16[1] - v14; /*0x75c6e2*/
          v31 = v16[2] - v13; /*0x75c6eb*/
          v19 = v29 * v14 + v27 * v15 + v31 * v13; /*0x75c705*/
          if ( v19 < 0.0 ) /*0x75c714*/
          {
            v20 = *(float *)(this + 0x58); /*0x75c719*/
            v22 = v20 * v15; /*0x75c725*/
            v23 = v20 * v14; /*0x75c72d*/
            v25 = v20 * v13; /*0x75c733*/
            v32 = v22 * v17; /*0x75c73d*/
            v33 = v23 * v17; /*0x75c747*/
            v34 = v17 * v25; /*0x75c74f*/
            *v16 = *v16 + v32; /*0x75c759*/
            v16[1] = v33 + v16[1]; /*0x75c762*/
            v16[2] = v16[2] + v34; /*0x75c76c*/
          }
        }
        ++v11; /*0x75c773*/
      }
      while ( v11 < *(_WORD *)(a3 + 0x48) ); /*0x75c77a*/
    }
  }
}
