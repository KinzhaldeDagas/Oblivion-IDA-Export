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

  v6 = a2[0x16]; /*0x74dfb1*/
  if ( v6 ) /*0x74dfb7*/
  {
    v7 = (float *)(v6 + 0xC * a3); /*0x74dfc7*/
    if ( *((_BYTE *)this + 0x34) ) /*0x74dfbd*/
    {
      v15 = (double)rand() / dbl_A3D5A8; /*0x74dfe3*/
      v16 = unk_B3F9A4 * v15; /*0x74dff1*/
      v17 = cos(v16); /*0x74dffe*/
      v11 = v17; /*0x74e006*/
      v18 = 1.0 - v17 * v17; /*0x74e014*/
      v19 = sqrt(v18); /*0x74e021*/
      v13 = v19; /*0x74e029*/
      v20 = (double)rand() / dbl_A3D5A8; /*0x74e040*/
      v21 = unk_B3F9A0 * v20; /*0x74e04e*/
      v12 = cos(v21); /*0x74e05b*/
      *v7 = v12 * v13; /*0x74e067*/
      v22 = sin(v21); /*0x74e072*/
      v7[1] = v22 * v13; /*0x74e07e*/
      v7[2] = v11; /*0x74e085*/
    }
    else
    {
      *v7 = *(this + 0xA); /*0x74e08d*/
      v7[1] = *(this + 0xB); /*0x74e092*/
      v7[2] = *(this + 0xC); /*0x74e098*/
    }
  }
  if ( a2[0x15] ) /*0x74e09b*/
  {
    v8 = rand(); /*0x74e0a5*/
    v9 = 4 * a3; /*0x74e0bc*/
    v23 = ((double)v8 + (double)v8) / dbl_A3D5A8 - dbl_A2F928; /*0x74e0ca*/
    v24 = *(this + 9) * v23 + *(this + 8); /*0x74e0d8*/
    *(float *)(v9 + a2[0x15]) = v24; /*0x74e0e0*/
    v10 = rand(); /*0x74e0e3*/
    v25 = ((double)v10 + (double)v10) / dbl_A3D5A8 - dbl_A2F928; /*0x74e102*/
    v26 = *(this + 7) * v25 + *(this + 6); /*0x74e110*/
    if ( *((_BYTE *)this + 0x35) ) /*0x74e0e8*/
    {
      v14 = (double)rand() / dbl_A3D5A8; /*0x74e129*/
      if ( v14 <= (double)kHeadBodyNormalMatchRadius ) /*0x74e13c*/
        v26 = -v26; /*0x74e144*/
    }
    *(float *)(v9 + a2[0x18]) = v26; /*0x74e14f*/
  }
}
