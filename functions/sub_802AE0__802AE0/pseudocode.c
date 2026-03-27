void __thiscall sub_802AE0(int this)
{
  unsigned __int16 v2; // ax
  float *v3; // ecx
  int v4; // esi
  int v5; // edi
  NiObject *v6; // esi
  double v7; // st7
  double v8; // st5
  double v9; // st3
  double v10; // rtt
  int v11; // eax
  char v12; // al
  NiObject *v13; // eax
  NiObject *v14; // esi
  float v15; // [esp+Ch] [ebp-30h]
  float v16; // [esp+Ch] [ebp-30h]
  float v17; // [esp+Ch] [ebp-30h]
  float v18; // [esp+Ch] [ebp-30h]
  float v20; // [esp+14h] [ebp-28h]
  float v21; // [esp+14h] [ebp-28h]
  float v22; // [esp+18h] [ebp-24h]
  float v23; // [esp+18h] [ebp-24h]
  float v24; // [esp+1Ch] [ebp-20h]
  float v25; // [esp+1Ch] [ebp-20h]
  float v26; // [esp+20h] [ebp-1Ch]
  float v27; // [esp+20h] [ebp-1Ch]
  float v28; // [esp+24h] [ebp-18h]
  float v29; // [esp+24h] [ebp-18h]
  float v30; // [esp+28h] [ebp-14h]
  float v31; // [esp+28h] [ebp-14h]
  float v32; // [esp+2Ch] [ebp-10h]
  float v33; // [esp+2Ch] [ebp-10h]
  float v34; // [esp+30h] [ebp-Ch]
  float v35; // [esp+30h] [ebp-Ch]
  float v36; // [esp+34h] [ebp-8h]
  float v37; // [esp+34h] [ebp-8h]
  float v38; // [esp+38h] [ebp-4h]

  v15 = flt_A9372C;
  v2 = *(_WORD *)(this + 0xE);
  if ( !v2 )
    v15 = 0.0;
  v26 = v15;
  v28 = v15;
  v30 = v15;
  v16 = -v15;
  v20 = v16;
  v22 = v16;
  v24 = v16;
  if ( v2 )
  {
    v3 = *(float **)(this + 0x10);
    v4 = v2;
    do
    {
      if ( flt_A6D2D8 < (double)v3[2] )
      {
        if ( *v3 <= (double)v26 )
          v26 = *v3;
        if ( *v3 >= (double)v20 )
          v20 = *v3;
        if ( v3[1] <= (double)v28 )
          v28 = v3[1];
        if ( v3[1] >= (double)v22 )
          v22 = v3[1];
        if ( v3[2] <= (double)v30 )
          v30 = v3[2];
        if ( v3[2] >= (double)v24 )
          v24 = v3[2];
      }
      v3 += 4;
      --v4;
    }
    while ( v4 );
  }
  v5 = *(_DWORD *)(this + 4);
  if ( v5 )
  {
    v6 = *(NiObject **)this;
    if ( *(_DWORD *)this )
    {
      v7 = v20;
      v32 = v20 - v26;
      v8 = v22;
      v34 = v22 - v28;
      v9 = v24;
      v36 = v24 - v30;
      v10 = dbl_A2FAA0;
      v21 = v32 * v10;
      v23 = v34 * v10;
      v25 = v10 * v36;
      v27 = v26 + v21;
      v29 = v28 + v23;
      v31 = v30 + v25;
      v33 = v7 - v27;
      v35 = v8 - v29;
      v37 = v9 - v31;
      v17 = v35 * v35 + v33 * v33 + v37 * v37;
      v18 = sqrt(v17);
      v38 = v18 + *(float *)(v5 + 0x28);
      v11 = (int)v6->__vftable->GetType(v6);
      if ( v11 )
      {
        while ( (_UNKNOWN *)v11 != &unk_B47878 )
        {
          v11 = *(_DWORD *)(v11 + 4);
          if ( !v11 )
            goto LABEL_24;
        }
        v12 = 1;
      }
      else
      {
LABEL_24:
        v12 = 0;
      }
      v13 = v12 != 0 ? v6 : 0;
      v14 = v13;
      if ( v13 || (v13 = NiRTTI_Cast(&stru_B4786C, *(NiObject **)this), (v14 = v13) != 0) )
      {
        ((void (__thiscall *)(NiObject *, float, float, float, float))v13->__vftable[2].GetType)(
          v13,
          COERCE_FLOAT(LODWORD(v27)),
          COERCE_FLOAT(LODWORD(v29)),
          COERCE_FLOAT(LODWORD(v31)),
          COERCE_FLOAT(LODWORD(v38)));
        ((void (__thiscall *)(NiObject *, _DWORD))v14->__vftable[2].Unk_02)(v14, *(unsigned __int16 *)(this + 0xE));
      }
    }
  }
}
