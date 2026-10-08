char __thiscall sub_6DC2C0(int this, float a2, int a3, int a4)
{
  int v6; // eax
  char v7; // cl
  float v8; // edx
  int v9; // edi
  float *v10; // eax
  int v11; // ecx
  int v12; // edi
  int v13; // ebx
  _DWORD *v14; // eax
  char v15[4]; // [esp+24h] [ebp-3Ch] BYREF
  int v16; // [esp+28h] [ebp-38h] BYREF
  int v17; // [esp+2Ch] [ebp-34h] BYREF
  int v18[3]; // [esp+30h] [ebp-30h] BYREF
  NiMatrix33 v19; // [esp+3Ch] [ebp-24h] BYREF

  if ( a2 == *(float *)(this + 8) ) /*0x6dc2d9*/
  {
    if ( *(float *)&dword_B24FC8 == *(float *)(this + 0x4C) /*0x6dc317*/
      && *(float *)&dword_B24FCC == *(float *)(this + 0x50)
      && *(float *)&dword_B24FD0 == *(float *)(this + 0x54) )
    {
      *(float *)a4 = -flt_A7DEB4; /*0x6dc326*/
      *(float *)(a4 + 0x10) = -flt_A7DEB4; /*0x6dc331*/
      *(float *)(a4 + 0x1C) = -flt_A7DEB4; /*0x6dc33c*/
      return 0; /*0x6dc344*/
    }
    sub_471390((_DWORD *)a4, (float *)(this + 0x4C)); /*0x6dc34e*/
    if ( (*(_BYTE *)(this + 0xC) & 0x20) != 0 ) /*0x6dc35b*/
    {
      sub_471430((_DWORD *)a4, (float *)(this + 0x3C)); /*0x6dc367*/
      return 1; /*0x6dc373*/
    }
  }
  else
  {
    v6 = *(_DWORD *)(this + 0x1C); /*0x6dc376*/
    if ( !v6 ) /*0x6dc37b*/
      return 0; /*0x6dc37b*/
    v7 = *(_BYTE *)(v6 + 0x14); /*0x6dc37d*/
    v8 = *(float *)(v6 + 8); /*0x6dc380*/
    v9 = *(_DWORD *)(v6 + 0x10); /*0x6dc383*/
    v10 = *(float **)(v6 + 0xC); /*0x6dc386*/
    v15[0] = v7; /*0x6dc38b*/
    if ( !v10 ) /*0x6dc38f*/
      return 0; /*0x6dc38f*/
    v11 = *(_DWORD *)(this + 0x18); /*0x6dc39d*/
    if ( !v11 || !*(_DWORD *)(v11 + 0xC) ) /*0x6dc3a4*/
      return 0; /*0x6dc39a*/
    *(float *)v15 = NiFloatKey_EvaluateTrack(a2, v10, v9, v8, (int *)(this + 0x14), v15[0]); /*0x6dc3c3*/
    sub_6DBDB0(this, *(float *)v15, (unsigned int *)&v17, &v16, (float *)v15); /*0x6dc3e0*/
    v12 = v16; /*0x6dc3e8*/
    v13 = v17; /*0x6dc3ec*/
    if ( (*(_BYTE *)(this + 0xC) & 0x20) != 0 ) /*0x6dc3f6*/
    {
      sub_6DAEB0((_DWORD *)this, v17, v16, *(float *)v15, &v19); /*0x6dc409*/
      sub_7150F0((float *)(this + 0x3C), (float *)&v19); /*0x6dc416*/
    }
    v14 = (_DWORD *)sub_6DAE50((_DWORD *)this, (int)v18, v13, v12, *(float *)v15); /*0x6dc42c*/
    *(_DWORD *)(this + 0x4C) = *v14; /*0x6dc43a*/
    *(_DWORD *)(this + 0x50) = v14[1]; /*0x6dc43f*/
    *(_DWORD *)(this + 0x54) = v14[2]; /*0x6dc445*/
    sub_471390((_DWORD *)a4, (float *)(this + 0x4C)); /*0x6dc44b*/
    if ( (*(_BYTE *)(this + 0xC) & 0x20) != 0 ) /*0x6dc45a*/
      sub_471430((_DWORD *)a4, (float *)(this + 0x3C)); /*0x6dc462*/
    *(float *)(this + 0x58) = a2; /*0x6dc46b*/
  }
  return 1; /*0x6dc341*/
}
