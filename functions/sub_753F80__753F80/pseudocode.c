void __thiscall sub_753F80(float *this, int a2, int a3)
{
  unsigned __int16 i; // bp
  float *v5; // esi
  float *v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  float v10; // [esp+10h] [ebp-104h]
  float v11; // [esp+10h] [ebp-104h]
  float v12; // [esp+14h] [ebp-100h]
  float v13; // [esp+18h] [ebp-FCh]
  float v14; // [esp+1Ch] [ebp-F8h]
  float v15; // [esp+20h] [ebp-F4h]
  float v16; // [esp+24h] [ebp-F0h]
  float v17; // [esp+28h] [ebp-ECh]
  float v18; // [esp+2Ch] [ebp-E8h]
  float v19; // [esp+30h] [ebp-E4h]
  float v20; // [esp+34h] [ebp-E0h]
  NiTransform out; // [esp+44h] [ebp-D0h] BYREF
  NiTransform local; // [esp+78h] [ebp-9Ch] BYREF
  float v23[13]; // [esp+ACh] [ebp-68h] BYREF
  NiTransform parent; // [esp+E0h] [ebp-34h] BYREF

  qmemcpy(&local, (const void *)(*((_DWORD *)this + 6) + 0x64), sizeof(local)); /*0x753f9b*/
  qmemcpy(v23, (const void *)(*((_DWORD *)this + 4) + 0x64), sizeof(v23)); /*0x753fb6*/
  sub_718A80(v23, &parent); /*0x753fc0*/
  NiTransform_Compose(&parent, &out, &local); /*0x753fd6*/
  for ( i = 0; i < *(_WORD *)(a3 + 0x48); ++i ) /*0x753fe4*/
  {
    v5 = (float *)(*(_DWORD *)(a3 + 0x5C) + 0x1C * i); /*0x753fff*/
    v6 = (float *)(*(_DWORD *)(a3 + 0x1C) + 0xC * i); /*0x75400c*/
    v18 = *v6 - out.pos.x; /*0x754028*/
    v19 = v6[1] - out.pos.y; /*0x754034*/
    v20 = v6[2] - out.pos.z; /*0x754040*/
    v10 = v19 * v19 + v18 * v18 + v20 * v20; /*0x754060*/
    if ( *(this + 0xB) >= (double)v10 ) /*0x754072*/
    {
      v7 = rand(); /*0x754078*/
      v15 = ((double)v7 + (double)v7) / dbl_A3D5A8 - dbl_A2F928; /*0x754093*/
      v8 = rand(); /*0x754097*/
      v16 = ((double)v8 + (double)v8) / dbl_A3D5A8 - dbl_A2F928; /*0x7540b2*/
      v9 = rand(); /*0x7540b6*/
      v17 = ((double)v9 + (double)v9) / dbl_A3D5A8 - dbl_A2F928; /*0x7540d1*/
      v11 = *(this + 7); /*0x7540d8*/
      v12 = v11 * v15; /*0x7540e6*/
      v13 = v11 * v16; /*0x7540f0*/
      v14 = v11 * v17; /*0x7540f8*/
      *v5 = *v5 + v12; /*0x754102*/
      v5[1] = v5[1] + v13; /*0x75410b*/
      v5[2] = v5[2] + v14; /*0x754115*/
    }
  }
}
