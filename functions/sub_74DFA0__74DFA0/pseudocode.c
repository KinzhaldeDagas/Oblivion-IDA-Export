void __thiscall sub_74DFA0(float *this, _DWORD *a2, unsigned __int16 a3)
{
  int v6; // ecx
  float *v7; // edi
  int v8; // eax
  int v9; // edi
  int v10; // eax
  float v11; // [esp+10h] [ebp-8h]
  float v12; // [esp+14h] [ebp-4h]
  float v13; // [esp+1Ch] [ebp+4h]
  float v14; // [esp+1Ch] [ebp+4h]
  float v15; // [esp+20h] [ebp+8h]
  float v16; // [esp+20h] [ebp+8h]
  float v17; // [esp+20h] [ebp+8h]
  float v18; // [esp+20h] [ebp+8h]
  float v19; // [esp+20h] [ebp+8h]
  float v20; // [esp+20h] [ebp+8h]
  float v21; // [esp+20h] [ebp+8h]
  float v22; // [esp+20h] [ebp+8h]
  float v23; // [esp+20h] [ebp+8h]
  float v24; // [esp+20h] [ebp+8h]
  float v25; // [esp+20h] [ebp+8h]
  float v26; // [esp+20h] [ebp+8h]

  v6 = a2[0x16];
  if ( v6 )
  {
    v7 = (float *)(v6 + 0xC * a3);
    if ( *((_BYTE *)this + 0x34) )
    {
      v15 = (double)rand() / dbl_A3D5A8;
      v16 = flt_B3F9A4 * v15;
      v17 = cos(v16);
      v11 = v17;
      v18 = 1.0 - v17 * v17;
      v19 = sqrt(v18);
      v13 = v19;
      v20 = (double)rand() / dbl_A3D5A8;
      v21 = flt_B3F9A0 * v20;
      v12 = cos(v21);
      *v7 = v12 * v13;
      v22 = sin(v21);
      v7[1] = v22 * v13;
      v7[2] = v11;
    }
    else
    {
      *v7 = *(this + 0xA);
      v7[1] = *(this + 0xB);
      v7[2] = *(this + 0xC);
    }
  }
  if ( a2[0x15] )
  {
    v8 = rand();
    v9 = 4 * a3;
    v23 = ((double)v8 + (double)v8) / dbl_A3D5A8 - dbl_A2F928;
    v24 = *(this + 9) * v23 + *(this + 8);
    *(float *)(v9 + a2[0x15]) = v24;
    v10 = rand();
    v25 = ((double)v10 + (double)v10) / dbl_A3D5A8 - dbl_A2F928;
    v26 = *(this + 7) * v25 + *(this + 6);
    if ( *((_BYTE *)this + 0x35) )
    {
      v14 = (double)rand() / dbl_A3D5A8;
      if ( v14 <= (double)flt_A3D65C )
        v26 = -v26;
    }
    *(float *)(v9 + a2[0x18]) = v26;
  }
}
