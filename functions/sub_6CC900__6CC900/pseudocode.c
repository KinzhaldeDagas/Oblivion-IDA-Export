void __thiscall sub_6CC900(_BYTE *this)
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

  v2 = *(this + 0xD);
  v3 = 0;
  v4 = 0;
  v5 = 0;
  if ( !v2 )
    return;
  v6 = *((_DWORD *)this + 5);
  while ( !*(_DWORD *)(v6 + 0x18 * v5) )
  {
LABEL_6:
    if ( ++v5 >= v2 )
      goto LABEL_9;
  }
  if ( !v3 )
  {
    v3 = v6 + 0x18 * v5;
    goto LABEL_6;
  }
  v4 = v6 + 0x18 * v5;
LABEL_9:
  if ( v3 && v4 )
  {
    v17 = *(float *)(v3 + 4) * *(float *)(v3 + 0x10);
    v18 = *(float *)(v4 + 4) * *(float *)(v4 + 0x10);
    v7 = v17;
    v8 = v18;
    if ( v17 == 0.0 && 0.0 == v8 )
    {
      *(float *)(v3 + 8) = 0.0;
      *(float *)(v4 + 8) = 0.0;
      return;
    }
    v9 = *(_BYTE *)(v3 + 0xC);
    v10 = *(_BYTE *)(v4 + 0xC);
    if ( v9 <= v10 )
    {
      if ( v9 >= v10 )
      {
        v23 = 1.0 / (v8 + v7);
        *(float *)(v3 + 8) = v7 * v23;
        v13 = 1.0;
        v14 = v8 * v23;
        goto LABEL_24;
      }
      if ( 1.0 != *(float *)(v4 + 0x10) )
      {
        v21 = 1.0 - *(float *)(v4 + 0x10);
        v15 = v7 * v21;
        v22 = 1.0 / (v8 * *(float *)(v4 + 0x10) + v15);
        *(float *)(v3 + 8) = v15 * v22;
        v14 = v22 * (v8 * *(float *)(v4 + 0x10));
        v13 = 1.0;
        goto LABEL_24;
      }
      v13 = 1.0;
      goto LABEL_21;
    }
    if ( 1.0 == *(float *)(v3 + 0x10) )
    {
      *(float *)(v3 + 8) = 1.0;
      *(float *)(v4 + 8) = 0.0;
      return;
    }
    v19 = 1.0 - *(float *)(v3 + 0x10);
    v11 = v7 * *(float *)(v3 + 0x10);
    v12 = v8 * v19;
    v20 = 1.0 / (v12 + v11);
    *(float *)(v3 + 8) = v11 * v20;
    v13 = 1.0;
    v14 = v12 * v20;
LABEL_24:
    *(float *)(v4 + 8) = v14;
    if ( (*(this + 0xC) & 2) != 0 )
    {
      if ( *(float *)(v4 + 8) <= (double)*(float *)(v3 + 8) )
      {
        *(float *)(v3 + 8) = v13;
        *(float *)(v4 + 8) = 0.0;
        return;
      }
LABEL_21:
      *(float *)(v3 + 8) = 0.0;
      *(float *)(v4 + 8) = v13;
      return;
    }
    if ( *((float *)this + 7) > 0.0 )
    {
      v16 = 0;
      if ( *((float *)this + 7) > (double)*(float *)(v3 + 8) )
      {
        *(float *)(v3 + 8) = 0.0;
        v16 = 1;
      }
      if ( *((float *)this + 7) <= (double)*(float *)(v4 + 8) )
      {
        if ( v16 )
          *(float *)(v4 + 8) = v13;
      }
      else
      {
        *(float *)(v4 + 8) = 0.0;
        *(float *)(v4 + 8) = v13;
      }
    }
  }
}
