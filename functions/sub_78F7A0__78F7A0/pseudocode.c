void __thiscall sub_78F7A0(_DWORD *this, int a2, unsigned __int16 a3)
{
  int v3; // edi
  int v5; // eax
  int v6; // ebp
  int v7; // edx
  int v8; // ebx
  int v9; // eax
  int v10; // ebx
  float *v11; // edi
  float *v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // edi
  int v16; // ecx
  int v17; // edi
  float *v18; // ebx
  float *v19; // eax
  int v20; // [esp+4h] [ebp-34h]
  _DWORD *v21; // [esp+8h] [ebp-30h]
  int v22; // [esp+Ch] [ebp-2Ch]
  float v23; // [esp+10h] [ebp-28h]
  float v24; // [esp+10h] [ebp-28h]
  float v25; // [esp+10h] [ebp-28h]
  float v26; // [esp+10h] [ebp-28h]
  float v27; // [esp+10h] [ebp-28h]
  float v28; // [esp+10h] [ebp-28h]
  float v29; // [esp+14h] [ebp-24h]
  float v30; // [esp+14h] [ebp-24h]
  float v31; // [esp+18h] [ebp-20h]
  float v32; // [esp+18h] [ebp-20h]
  float v33; // [esp+1Ch] [ebp-1Ch]
  float v34; // [esp+1Ch] [ebp-1Ch]
  float v35; // [esp+20h] [ebp-18h]
  float v36; // [esp+20h] [ebp-18h]
  float v37; // [esp+24h] [ebp-14h]
  float v38; // [esp+24h] [ebp-14h]
  float v39; // [esp+28h] [ebp-10h]
  float v40; // [esp+28h] [ebp-10h]
  float v41[3]; // [esp+2Ch] [ebp-Ch] BYREF
  int i; // [esp+3Ch] [ebp+4h]

  v3 = 0;
  v21 = this;
  v22 = 0;
  if ( (int)*(this + 7) > 0 )
  {
    v20 = a3 + 1;
    do
    {
      v5 = v3 * v20;
      v6 = 0;
      for ( i = v3 * v20; ; v5 = i )
      {
        v7 = v6 ? v5 + v6 - 1 : a3 + v5 - 1;
        v8 = v5 + 1;
        if ( v6 != a3 )
          v8 += v6;
        v9 = *(this + 9);
        v10 = v9 + v8;
        v11 = (float *)sub_794730((_DWORD *)a2, v9 + v7);
        v12 = (float *)sub_794730((_DWORD *)a2, v10);
        v35 = *v12 - *v11;
        v37 = v12[1] - v11[1];
        v39 = v12[2] - v11[2];
        v23 = v37 * v37 + v35 * v35 + v39 * v39;
        v24 = sqrt(v23);
        v25 = 1.0 / v24;
        v36 = v25 * v35;
        v38 = v37 * v25;
        v40 = v25 * v39;
        v13 = v22 ? v20 * (v22 - 1) : i;
        v14 = v6 + v13;
        v15 = v22 == v21[7] - 1 ? i + v6 : v6 + v20 * (v22 + 1);
        v16 = v21[9];
        v17 = v16 + v15;
        v18 = (float *)sub_794730((_DWORD *)a2, v16 + v14);
        v19 = (float *)sub_794730((_DWORD *)a2, v17);
        v29 = *v19 - *v18;
        v31 = v19[1] - v18[1];
        v33 = v19[2] - v18[2];
        v26 = v29 * v29 + v31 * v31 + v33 * v33;
        v27 = sqrt(v26);
        v28 = 1.0 / v27;
        v30 = v28 * v29;
        v32 = v28 * v31;
        v34 = v28 * v33;
        v41[0] = v34 * v38 - v40 * v32;
        v41[1] = v40 * v30 - v34 * v36;
        v41[2] = v32 * v36 - v30 * v38;
        sub_7962F0((char *)a2, (int)v41);
        ++*(_WORD *)(a2 + 0x22);
        ++v6;
        this = v21;
        if ( v6 > a3 )
          break;
      }
      v3 = ++v22;
    }
    while ( v22 < v21[7] );
  }
}
