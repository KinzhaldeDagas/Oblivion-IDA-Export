bool __thiscall sub_6D60B0(int this, float a2, int a3, void *a4)
{
  double v5; // st7
  int v7; // eax
  int v8; // esi
  char v9; // cl
  int v10; // edi
  int v11; // eax
  float *v12; // eax
  int v13; // eax
  int v14; // esi
  char v15; // dl
  int v16; // edi
  int v17; // eax
  float *v18; // eax
  int v19; // eax
  int v20; // esi
  char v21; // cl
  int v22; // edi
  float *v23; // eax
  float v24; // [esp+0h] [ebp-3Ch]
  float v25; // [esp+0h] [ebp-3Ch]
  float v26; // [esp+14h] [ebp-28h]
  int v27; // [esp+24h] [ebp-18h] BYREF
  char v28[4]; // [esp+28h] [ebp-14h]
  int v29[4]; // [esp+2Ch] [ebp-10h] BYREF

  v5 = a2;
  if ( a2 == *(float *)(this + 8) )
  {
    qmemcpy(a4, (const void *)(this + 0xC), 0x20u);
    return !sub_6CBC10((float *)(this + 0xC));
  }
  else
  {
    v7 = *(_DWORD *)(this + 0x2C);
    if ( v7 )
    {
      v8 = *(unsigned __int16 *)(v7 + 0xA);
      v9 = *(_BYTE *)(v7 + 0x1D);
      v10 = *(_DWORD *)(v7 + 0x14);
      v11 = *(_DWORD *)(v7 + 0x24);
      v28[0] = v9;
      if ( v8 )
      {
        v27 = *(unsigned __int16 *)(this + 0x30);
        v12 = (float *)sub_6BBBA0(v29, a2, v11, v10, v8, &v27, v28[0]);
        sub_471390((_DWORD *)(this + 0xC), v12);
        v5 = a2;
        *(_WORD *)(this + 0x30) = v27;
      }
    }
    v13 = *(_DWORD *)(this + 0x2C);
    if ( v13 )
    {
      v14 = *(unsigned __int16 *)(v13 + 8);
      v15 = *(_BYTE *)(v13 + 0x1C);
      v16 = *(_DWORD *)(v13 + 0x10);
      v17 = *(_DWORD *)(v13 + 0x20);
      v28[0] = v15;
      if ( v14 )
      {
        v27 = *(unsigned __int16 *)(this + 0x32);
        v24 = v5;
        v18 = (float *)sub_6BCF70(v29, v24, v17, v16, v14, &v27, v28[0]);
        sub_471430((_DWORD *)(this + 0xC), v18);
        v5 = a2;
        *(_WORD *)(this + 0x32) = v27;
      }
    }
    v19 = *(_DWORD *)(this + 0x2C);
    if ( v19 )
    {
      v20 = *(unsigned __int16 *)(v19 + 0xC);
      v21 = *(_BYTE *)(v19 + 0x1E);
      v22 = *(_DWORD *)(v19 + 0x18);
      v23 = *(float **)(v19 + 0x28);
      v28[0] = v21;
      if ( v20 )
      {
        v27 = *(unsigned __int16 *)(this + 0x34);
        v25 = v5;
        v26 = sub_6BB270(v25, v23, v22, v20, &v27, v28[0]);
        sub_471560((float *)(this + 0xC), v26);
        *(_WORD *)(this + 0x34) = v27;
      }
    }
    qmemcpy(a4, (const void *)(this + 0xC), 0x20u);
    if ( sub_6CBC10((float *)(this + 0xC)) )
    {
      return 0;
    }
    else
    {
      *(float *)(this + 8) = a2;
      return 1;
    }
  }
}
