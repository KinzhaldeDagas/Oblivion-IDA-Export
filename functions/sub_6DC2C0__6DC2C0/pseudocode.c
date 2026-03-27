char __thiscall sub_6DC2C0(int this, float a2, int a3, int a4)
{
  int v6; // eax
  char v7; // cl
  int v8; // edx
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
  int v19[9]; // [esp+3Ch] [ebp-24h] BYREF

  if ( a2 == *(float *)(this + 8) )
  {
    if ( *(float *)&dword_B24FC8 == *(float *)(this + 0x4C)
      && *(float *)&dword_B24FCC == *(float *)(this + 0x50)
      && *(float *)&dword_B24FD0 == *(float *)(this + 0x54) )
    {
      *(float *)a4 = -flt_A7DEB4;
      *(float *)(a4 + 0x10) = -flt_A7DEB4;
      *(float *)(a4 + 0x1C) = -flt_A7DEB4;
      return 0;
    }
    sub_471390((_DWORD *)a4, (float *)(this + 0x4C));
    if ( (*(_BYTE *)(this + 0xC) & 0x20) != 0 )
    {
      sub_471430((_DWORD *)a4, (float *)(this + 0x3C));
      return 1;
    }
  }
  else
  {
    v6 = *(_DWORD *)(this + 0x1C);
    if ( !v6 )
      return 0;
    v7 = *(_BYTE *)(v6 + 0x14);
    v8 = *(_DWORD *)(v6 + 8);
    v9 = *(_DWORD *)(v6 + 0x10);
    v10 = *(float **)(v6 + 0xC);
    v15[0] = v7;
    if ( !v10 )
      return 0;
    v11 = *(_DWORD *)(this + 0x18);
    if ( !v11 || !*(_DWORD *)(v11 + 0xC) )
      return 0;
    *(float *)v15 = sub_6BB270(a2, v10, v9, v8, (int *)(this + 0x14), v15[0]);
    sub_6DBDB0(this, *(float *)v15, (unsigned int *)&v17, &v16, (float *)v15);
    v12 = v16;
    v13 = v17;
    if ( (*(_BYTE *)(this + 0xC) & 0x20) != 0 )
    {
      sub_6DAEB0((_DWORD *)this, v17, v16, *(float *)v15, (float *)v19);
      sub_7150F0((float *)(this + 0x3C), (float *)v19);
    }
    v14 = (_DWORD *)sub_6DAE50((_DWORD *)this, (int)v18, v13, v12, *(float *)v15);
    *(_DWORD *)(this + 0x4C) = *v14;
    *(_DWORD *)(this + 0x50) = v14[1];
    *(_DWORD *)(this + 0x54) = v14[2];
    sub_471390((_DWORD *)a4, (float *)(this + 0x4C));
    if ( (*(_BYTE *)(this + 0xC) & 0x20) != 0 )
      sub_471430((_DWORD *)a4, (float *)(this + 0x3C));
    *(float *)(this + 0x58) = a2;
  }
  return 1;
}
