// Oblivion: special two-active-item normalization. Combines item+4 base weight with item+0x10 ease weight, accounts for item+0x0C priority, then applies highest-only flag or blend threshold.
void __thiscall NiBlendInterpolator_NormalizeTwoItems(_BYTE *this)
{
  unsigned __int8 v2; // cl
  int v3; // edx
  int v4; // esi
  unsigned __int8 v5; // bl
  int v6; // edi
  double v7; // st6
  double v8; // st5
  char v9; // al
  char v10; // bl
  double v11; // st6
  double v12; // st5
  double v13; // st6
  double v14; // st5
  double v15; // st6
  char v16; // bl
  float v17; // [esp+Ch] [ebp-8h]
  float v18; // [esp+10h] [ebp-4h]
  float v19; // [esp+10h] [ebp-4h]
  float v20; // [esp+10h] [ebp-4h]
  float v21; // [esp+10h] [ebp-4h]
  float v22; // [esp+10h] [ebp-4h]
  float v23; // [esp+10h] [ebp-4h]

  v2 = *(this + 0xD); /*0x6cc907*/
  v3 = 0; /*0x6cc90b*/
  v4 = 0; /*0x6cc90d*/
  v5 = 0; /*0x6cc90f*/
  if ( !v2 ) /*0x6cc913*/
    return; /*0x6cc913*/
  v6 = *((_DWORD *)this + 5); /*0x6cc91a*/
  while ( !*(_DWORD *)(v6 + 0x18 * v5) ) /*0x6cc92c*/
  {
LABEL_6:
    if ( ++v5 >= v2 ) /*0x6cc939*/
      goto LABEL_9; /*0x6cc939*/
  }
  if ( !v3 ) /*0x6cc930*/
  {
    v3 = v6 + 0x18 * v5; /*0x6cc932*/
    goto LABEL_6; /*0x6cc932*/
  }
  v4 = v6 + 0x18 * v5; /*0x6cc943*/
LABEL_9:
  if ( v3 && v4 ) /*0x6cc951*/
  {
    v17 = *(float *)(v3 + 4) * *(float *)(v3 + 0x10); /*0x6cc95d*/
    v18 = *(float *)(v4 + 4) * *(float *)(v4 + 0x10); /*0x6cc967*/
    v7 = v17; /*0x6cc977*/
    v8 = v18; /*0x6cc97c*/
    if ( v17 == 0.0 && 0.0 == v8 ) /*0x6cc98b*/
    {
      *(float *)(v3 + 8) = 0.0; /*0x6cc991*/
      *(float *)(v4 + 8) = 0.0; /*0x6cc994*/
      return; /*0x6cc99d*/
    }
    v9 = *(_BYTE *)(v3 + 0xC); /*0x6cc99e*/
    v10 = *(_BYTE *)(v4 + 0xC); /*0x6cc9a3*/
    if ( v9 <= v10 ) /*0x6cc9a8*/
    {
      if ( v9 >= v10 ) /*0x6cc9fc*/
      {
        v23 = 1.0 / (v8 + v7); /*0x6cca5f*/
        *(float *)(v3 + 8) = v7 * v23; /*0x6cca6d*/
        v13 = 1.0; /*0x6cca70*/
        v14 = v8 * v23; /*0x6cca72*/
        goto LABEL_24; /*0x6cca72*/
      }
      if ( 1.0 != *(float *)(v4 + 0x10) ) /*0x6cca06*/
      {
        v21 = 1.0 - *(float *)(v4 + 0x10); /*0x6cca26*/
        v15 = v7 * v21; /*0x6cca2e*/
        v22 = 1.0 / (v8 * *(float *)(v4 + 0x10) + v15); /*0x6cca39*/
        *(float *)(v3 + 8) = v15 * v22; /*0x6cca47*/
        v14 = v22 * (v8 * *(float *)(v4 + 0x10)); /*0x6cca53*/
        v13 = 1.0; /*0x6cca53*/
        goto LABEL_24; /*0x6cca55*/
      }
      v13 = 1.0; /*0x6cca0a*/
      goto LABEL_21; /*0x6cca0a*/
    }
    if ( 1.0 == *(float *)(v3 + 0x10) ) /*0x6cc9b2*/
    {
      *(float *)(v3 + 8) = 1.0; /*0x6cc9b8*/
      *(float *)(v4 + 8) = 0.0; /*0x6cc9bb*/
      return; /*0x6cc9c4*/
    }
    v19 = 1.0 - *(float *)(v3 + 0x10); /*0x6cc9d0*/
    v11 = v7 * *(float *)(v3 + 0x10); /*0x6cc9d7*/
    v12 = v8 * v19; /*0x6cc9dd*/
    v20 = 1.0 / (v12 + v11); /*0x6cc9e5*/
    *(float *)(v3 + 8) = v11 * v20; /*0x6cc9f3*/
    v13 = 1.0; /*0x6cc9f6*/
    v14 = v12 * v20; /*0x6cc9f8*/
LABEL_24:
    *(float *)(v4 + 8) = v14; /*0x6cca74*/
    if ( (*(this + 0xC) & 2) != 0 ) /*0x6cca7b*/
    {
      if ( *(float *)(v4 + 8) <= (double)*(float *)(v3 + 8) ) /*0x6cca8a*/
      {
        *(float *)(v3 + 8) = v13; /*0x6cca8c*/
        *(float *)(v4 + 8) = 0.0; /*0x6cca8f*/
        return; /*0x6cca98*/
      }
LABEL_21:
      *(float *)(v3 + 8) = 0.0; /*0x6cca0c*/
      *(float *)(v4 + 8) = v13; /*0x6cca11*/
      return; /*0x6cca1a*/
    }
    if ( *((float *)this + 7) > 0.0 ) /*0x6ccaa3*/
    {
      v16 = 0; /*0x6ccaa8*/
      if ( *((float *)this + 7) > (double)*(float *)(v3 + 8) ) /*0x6ccab4*/
      {
        *(float *)(v3 + 8) = 0.0; /*0x6ccab6*/
        v16 = 1; /*0x6ccab9*/
      }
      if ( *((float *)this + 7) <= (double)*(float *)(v4 + 8) ) /*0x6ccac8*/
      {
        if ( v16 ) /*0x6ccadb*/
          *(float *)(v4 + 8) = v13; /*0x6ccadd*/
      }
      else
      {
        *(float *)(v4 + 8) = 0.0; /*0x6ccaca*/
        *(float *)(v4 + 8) = v13; /*0x6ccacd*/
      }
    }
  }
}
