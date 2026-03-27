char __thiscall sub_955CA0(float *this, int a2, char *a3, char *a4)
{
  int v4; // eax
  int v6; // edx
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // ebp
  _DWORD *v10; // ebx
  int v11; // ecx
  int *v12; // eax
  float *v13; // edi
  _DWORD *v14; // esi
  int v15; // eax
  int *v16; // edi
  int *v17; // ecx
  int v18; // ebp
  int v19; // edx
  char v20; // dl
  int v21; // edx
  int v22; // esi
  int v23; // edx
  unsigned int v25; // [esp+0h] [ebp-ACh]
  int v26; // [esp+14h] [ebp-98h]
  int v27; // [esp+18h] [ebp-94h] BYREF
  _DWORD *v28; // [esp+1Ch] [ebp-90h]
  signed int v29; // [esp+20h] [ebp-8Ch]
  _DWORD *v30; // [esp+24h] [ebp-88h]
  _DWORD *v31; // [esp+28h] [ebp-84h] BYREF
  float *v32; // [esp+2Ch] [ebp-80h]
  _DWORD v33[2]; // [esp+30h] [ebp-7Ch]
  int v34[24]; // [esp+38h] [ebp-74h] BYREF
  _BYTE v35[20]; // [esp+98h] [ebp-14h] BYREF

  LOBYTE(v4) = *(_BYTE *)(a2 + 0x38);
  v32 = this;
  v26 = a2 + 0x38;
  if ( (_BYTE)v4 )
    return v4;
  if ( *(_BYTE *)(a2 + 4) )
  {
    sub_954760(a4);
    LOBYTE(v4) = sub_955150(this, a2, (int)a4);
    return v4;
  }
  if ( *(_BYTE *)(a2 + 0x3C) == 1 )
    sub_954DB0(a3, a4, (int)v35);
  sub_954760(a4);
  v29 = sub_9553B0(*(float **)(a2 + 0xB8));
  sub_9558D0(this, a2, a4, &v27, (int *)&v31);
  v6 = *(_DWORD *)(a2 + 0xEC);
  v31 = *(_DWORD **)(a2 + 0xF0);
  v33[0] = v31;
  v33[1] = v6;
  v7 = (_DWORD *)(a2 + 0x50);
  v8 = 3;
  do
  {
    *(float *)&v25 = *(this + 0xF) * *(this + 0x11);
    sub_8ECB30(v25);
    v7[0xFFFFFFFD] = 0;
    *v7++ = 0x7FFFFFFF;
    --v8;
  }
  while ( v8 );
  v4 = 0;
  v27 = 0;
  do
  {
    v9 = (_DWORD *)v33[v4];
    v10 = v9 + 0xE;
    if ( !v9 )
      goto LABEL_38;
    qmemcpy(v34, a4, 0x48u);
    v34[0xE] = v9[0xA] - v9[9];
    v34[0xF] = v9[0xB];
    v11 = 0;
    if ( (int)v9[0xB] > 0 )
    {
      v12 = v9 + 0xC;
      do
      {
        *(int *)((char *)v12 + (char *)&v34[4] - (char *)v9) = *v12;
        ++v11;
        *(int *)((char *)v12 + (char *)&v34[5] - (char *)v9) = v12[1] - *v12;
        ++v12;
      }
      while ( v11 < v9[0xB] );
    }
    v13 = v32;
    sub_954C10(v34, (int)v9, (int)(v32 + 0xC));
    v34[0] = *(_DWORD *)a4 + 1;
    LOBYTE(v34[1]) = 0;
    sub_954CA0(v34);
    sub_955CA0(v13, (int)v9, a4, v34);
    if ( v9 == v31 )
    {
      if ( v29 <= 2 )
        v9[v29 + 0x11] = 0;
    }
    else if ( v29 <= 2 )
    {
      v9[v29 + 0x14] = 0x7FFFFFFF;
    }
    v14 = a4 + 0x54;
    v15 = 0;
    v16 = (int *)(a2 + 0x50);
    v17 = v9 + 0x11;
    v28 = a4 + 0x10;
    v30 = a4 + 0x54;
    v18 = v26 - (_DWORD)v10;
    do
    {
      v19 = *((char *)v10 + v15 + 8);
      if ( v19 == 1 )
      {
        if ( *v17 <= v14[0xFFFFFFFD] && v17[3] >= *v14 )
        {
          v20 = 1;
          if ( *(char *)(v15 + v26 + 8) >= 1 )
            v20 = *(_BYTE *)(v15 + v26 + 8);
          *(_BYTE *)(v15 + v26 + 8) = v20;
          goto LABEL_29;
        }
      }
      else if ( v19 == 2 && *v17 <= v28[0xFFFFFFFF] && v17[3] >= *v28 )
      {
        *(_BYTE *)(v15 + v26 + 8) = 2;
LABEL_29:
        *((_BYTE *)v10 + v15 + 8) = 0;
      }
      if ( !*((_BYTE *)v10 + v15 + 8) )
      {
        v21 = *v17;
        if ( *(int *)((char *)v17 + v18) > *v17 )
          v21 = *(int *)((char *)v17 + v18);
        v22 = *v16;
        *(int *)((char *)v17 + v18) = v21;
        v23 = v17[3];
        if ( v22 < v23 )
          v23 = v22;
        *v16 = v23;
      }
      ++v15;
      v14 = v30 + 1;
      ++v17;
      ++v16;
      ++v30;
      v28 += 2;
    }
    while ( v15 < 3 );
    v4 = v27;
LABEL_38:
    v27 = ++v4;
  }
  while ( v4 < 2 );
  return v4;
}
