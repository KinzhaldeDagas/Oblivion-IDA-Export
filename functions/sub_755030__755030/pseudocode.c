void __thiscall sub_755030(float *this, float a2, int a3)
{
  float *v4; // edi
  unsigned __int16 v5; // si
  double z; // st6
  double y; // st5
  double x; // st4
  double v9; // st3
  float *v10; // ecx
  float *v11; // eax
  double v12; // st1
  float v13; // [esp+Ch] [ebp-ECh]
  float v14; // [esp+Ch] [ebp-ECh]
  float v15; // [esp+10h] [ebp-E8h]
  float v16; // [esp+14h] [ebp-E4h]
  float v17; // [esp+18h] [ebp-E0h]
  float v18; // [esp+1Ch] [ebp-DCh]
  float v19; // [esp+20h] [ebp-D8h]
  float v20; // [esp+24h] [ebp-D4h]
  NiTransform out; // [esp+28h] [ebp-D0h] BYREF
  NiTransform local; // [esp+5Ch] [ebp-9Ch] BYREF
  float v23[13]; // [esp+90h] [ebp-68h] BYREF
  NiTransform parent; // [esp+C4h] [ebp-34h] BYREF

  qmemcpy(&local, (const void *)(*((_DWORD *)this + 6) + 0x64), sizeof(local)); /*0x75504a*/
  qmemcpy(v23, (const void *)(*((_DWORD *)this + 4) + 0x64), sizeof(v23)); /*0x755065*/
  sub_718A80(v23, &parent); /*0x75506f*/
  NiTransform_Compose(&parent, &out, &local); /*0x755085*/
  v4 = *(float **)(a3 + 0x1C); /*0x755094*/
  v5 = 0; /*0x75509b*/
  if ( *(_WORD *)(a3 + 0x48) ) /*0x75509d*/
  {
    z = out.pos.z; /*0x7550ae*/
    y = out.pos.y; /*0x7550b2*/
    x = out.pos.x; /*0x7550b6*/
    v9 = *(this + 7); /*0x7550ba*/
    do /*0x75515a*/
    {
      v10 = (float *)(*(_DWORD *)(a3 + 0x5C) + 0x1C * v5); /*0x7550cf*/
      v13 = a2 - v10[5]; /*0x7550d5*/
      if ( v13 != 0.0 ) /*0x7550e8*/
      {
        v11 = v4; /*0x7550ea*/
        v12 = *v4; /*0x7550ec*/
        v4 += 3; /*0x7550ee*/
        v15 = v12 - x; /*0x7550f3*/
        v16 = v11[1] - y; /*0x7550fc*/
        v17 = v11[2] - z; /*0x755105*/
        v14 = v13 * v9; /*0x75510b*/
        v18 = v15 * v14; /*0x75511d*/
        v19 = v16 * v14; /*0x755127*/
        v20 = v14 * v17; /*0x75512f*/
        *v10 = *v10 + v18; /*0x755139*/
        v10[1] = v10[1] + v19; /*0x755142*/
        v10[2] = v20 + v10[2]; /*0x75514c*/
      }
      ++v5; /*0x755153*/
    }
    while ( v5 < *(_WORD *)(a3 + 0x48) ); /*0x75515a*/
  }
}
