int *__userpurge sub_777240@<eax>(
        char *this@<ecx>,
        int a2@<ebp>,
        NiGeometryBufferData *a3,
        unsigned __int16 a4,
        float *a5,
        float *a6,
        _DWORD *a7,
        char a8,
        int *a9,
        int a10)
{
  float *v10; // esi
  UInt32 v11; // edi
  int v12; // ebx
  int v13; // eax
  int *v14; // eax
  unsigned __int16 v15; // bp
  float *v16; // ecx
  int v17; // edx
  int *v18; // edx
  int v19; // eax
  int v20; // ecx
  int v21; // edi
  int v22; // ebp
  _DWORD *v23; // edx
  _DWORD *v24; // eax
  int v25; // ecx
  int v28; // [esp+8h] [ebp-24h]
  float v29; // [esp+Ch] [ebp-20h]
  float v30; // [esp+Ch] [ebp-20h]
  float v31; // [esp+Ch] [ebp-20h]
  float v32; // [esp+Ch] [ebp-20h]
  int v33; // [esp+10h] [ebp-1Ch]
  _DWORD v34[6]; // [esp+14h] [ebp-18h] BYREF
  int v35; // [esp+30h] [ebp+4h]
  char v36; // [esp+3Ch] [ebp+10h]

  if ( !a4 || !a5 )
    return a9;
  v10 = a6;
  v11 = 4;
  v12 = 0x10;
  if ( a6 )
  {
    v28 = 0x10;
    v11 = 0x44;
    v12 = 0x14;
  }
  if ( a7 )
  {
    v11 |= 0x100u;
    v33 = v12;
    v12 += 8;
  }
  sub_7780A0(a3, v11);
  if ( a3->StreamCount )
    *a3->VertexStride = v12;
  v36 = 1;
  if ( a10 )
  {
    v35 = (int)a9;
    v36 = 0;
  }
  else
  {
    if ( a9
      && (v13 = a9[2]) != 0
      && ((*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)v13 + 0x34))(v13, v34), v34[0] == 0x64)
      && v34[5] == v11
      && v34[4] >= v12 * (unsigned int)a4 )
    {
      v14 = a9;
      v35 = (int)a9;
    }
    else
    {
      if ( !NiGeometryBufferData::RefreshVBChips(a3, 0) )
        return 0;
      v14 = (int *)sub_761AC0(a3, 0);
      v35 = (int)v14;
    }
    a10 = sub_776C90(this, v14[2], v14[3], __PAIR64__(v14[4], v14[5]), a2);
  }
  v15 = a4;
  if ( (a8 & 1) != 0 )
  {
    v16 = (float *)(a10 + 0xC);
    v17 = a4;
    do
    {
      v16[0xFFFFFFFD] = *a5;
      v16[0xFFFFFFFE] = a5[1];
      v16[0xFFFFFFFF] = 0.0;
      *v16 = 1.0;
      v16 = (float *)((char *)v16 + v12);
      --v17;
      a5 += 2;
    }
    while ( v17 );
  }
  if ( v10 )
  {
    if ( (a8 & 4) != 0 )
    {
      v18 = (int *)(v28 + a10);
      v19 = a4;
      do
      {
        v29 = v10[3] * dbl_A3DDD8;
        v20 = (int)v29;
        v30 = *v10 * dbl_A3DDD8;
        v21 = (int)v30;
        v31 = v10[1] * dbl_A3DDD8;
        v22 = (int)v31;
        v32 = v10[2] * dbl_A3DDD8;
        v10 += 4;
        *v18 = (int)v32 | ((v22 | ((v21 | (v20 << 8)) << 8)) << 8);
        v18 = (int *)((char *)v18 + v12);
        --v19;
      }
      while ( v19 );
      v15 = a4;
    }
  }
  v23 = a7;
  if ( a7 )
  {
    if ( (a8 & 2) != 0 )
    {
      v24 = (_DWORD *)(a10 + v33);
      v25 = v15;
      do
      {
        *v24 = *v23;
        v10 = (float *)v23[1];
        v24[1] = v10;
        v24 = (_DWORD *)((char *)v24 + v12);
        v23 += 2;
        --v25;
      }
      while ( v25 );
    }
  }
  if ( v36 && !sub_776D80((int)this, (int)v10, *(_DWORD *)(v35 + 8)) )
    return 0;
  return (int *)v35;
}
