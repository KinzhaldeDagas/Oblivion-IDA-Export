void __thiscall sub_79A450(int *this, int a2, __int16 a3, _DWORD *a4)
{
  int v4; // eax
  double v5; // st7
  double v6; // st7
  double v7; // st6
  int v9; // esi
  int v10; // ebp
  int v11; // eax
  int v12; // esi
  double v13; // st6
  double v14; // st6
  int v15; // eax
  unsigned __int16 v16; // bp
  __int64 v17; // rax
  int v18; // esi
  int v19; // ebx
  int v20; // eax
  int v21; // ebp
  int v22; // eax
  __int16 v23; // ax
  int v24; // ecx
  unsigned int v25; // eax
  int v26; // esi
  __int16 v27; // ax
  int v28; // ecx
  unsigned int v29; // eax
  int v30; // [esp+4h] [ebp-40h]
  int v31; // [esp+8h] [ebp-3Ch]
  int v32; // [esp+Ch] [ebp-38h]
  float v33; // [esp+10h] [ebp-34h]
  int v34; // [esp+10h] [ebp-34h]
  float v35; // [esp+14h] [ebp-30h]
  int v36; // [esp+18h] [ebp-2Ch]
  float v37; // [esp+1Ch] [ebp-28h]
  int v38; // [esp+20h] [ebp-24h]
  __int16 v39; // [esp+20h] [ebp-24h]
  int v40; // [esp+24h] [ebp-20h]
  __int16 v41; // [esp+28h] [ebp-1Ch]
  __int16 v42; // [esp+30h] [ebp-14h]
  __int16 v43; // [esp+30h] [ebp-14h]
  __int16 v44; // [esp+34h] [ebp-10h]
  unsigned __int16 v45; // [esp+3Ch] [ebp-8h]
  float v47; // [esp+50h] [ebp+Ch]
  __int16 v48; // [esp+50h] [ebp+Ch]
  int v49; // [esp+50h] [ebp+Ch]
  int v50; // [esp+50h] [ebp+Ch]

  if ( *this )
  {
    v4 = *(this + 0x14);
    if ( v4 == 1 )
    {
      v5 = 1.0;
    }
    else
    {
      v6 = (double)a2;
      if ( a2 < 0 )
        v6 = v6 + flt_A2FC78;
      v7 = (double)v4;
      if ( v4 < 0 )
        v7 = v7 + flt_A2FC78;
      v5 = 1.0 - v6 / (v7 - 1.0);
    }
    v9 = a4[1];
    v33 = v5;
    v10 = Double_To_SInt32(v33);
    v38 = v10;
    if ( v9 )
      v11 = (a4[2] - v9) / 0x38;
    else
      v11 = 0;
    v12 = v10 - 1;
    v13 = (double)v11;
    v34 = v10 - 1;
    if ( v11 < 0 )
      v13 = v13 + flt_A2FC78;
    v35 = v13 / (double)v34;
    v14 = (double)(int)a4[0xB];
    if ( (int)a4[0xB] < 0 )
      v14 = v14 + flt_A2FC78;
    v47 = v14;
    v15 = Double_To_SInt32(v47);
    v31 = v15 - 1;
    v36 = v15;
    v37 = v47 / (double)(v15 - 1);
    v16 = v12 * (2 * v15 + 1) - 1;
    v17 = 2LL * (unsigned int)(v12 * (2 * v15 + 1) - 1);
    v45 = v16;
    v18 = 0;
    v19 = FormHeapAlloc(HIDWORD(v17) != 0 ? 0xFFFFFFFF : v17);
    v30 = 0;
    if ( v34 > 0 )
    {
      v32 = v38 - 2;
      do
      {
        v40 = v30 + 1;
        v48 = Double_To_SInt32(v35);
        v20 = Double_To_SInt32(v35 * (double)(v30 + 1));
        LOWORD(v21) = v20;
        if ( v30 == v32 || v20 > sub_799EE0(a4) - 1 )
          v21 = sub_799EE0(a4) - 1;
        v39 = v21 - v48;
        v22 = a4[0xB];
        if ( v30 % 2 )
        {
          v27 = v48 * v22;
          v28 = v31;
          v41 = v27;
          v50 = v31;
          if ( v31 >= 0 )
          {
            v43 = a3 + v27;
            do
            {
              v29 = (__int64)((double)v50 * v37);
              if ( v28 == v31 )
                v29 = a4[0xB] - 1;
              if ( v29 > a4[0xB] - 1 )
                v29 = a4[0xB] - 1;
              *(_WORD *)(v19 + 2 * v18) = v29 + v43;
              v18 += 2;
              *(_WORD *)(v19 + 2 * v18 - 2) = a3 + v29 + v41 + v39 * *((_WORD *)a4 + 0x16);
              v50 = --v28;
            }
            while ( v28 >= 0 );
          }
        }
        else
        {
          v23 = v48 * v22;
          v24 = 0;
          v44 = v23;
          v49 = 0;
          if ( v36 > 0 )
          {
            v42 = v23 + a3;
            do
            {
              v25 = (__int64)((double)v49 * v37);
              if ( v24 == v31 )
                v25 = a4[0xB] - 1;
              if ( v25 > a4[0xB] - 1 )
                v25 = a4[0xB] - 1;
              *(_WORD *)(v19 + 2 * v18) = v25 + v42;
              v26 = v18 + 1;
              ++v24;
              *(_WORD *)(v19 + 2 * v26) = v25 + v44 + a3 + v39 * *((_WORD *)a4 + 0x16);
              v18 = v26 + 1;
              v49 = v24;
            }
            while ( v24 < v36 );
          }
        }
        if ( v30 < v32 )
        {
          *(_WORD *)(v19 + 2 * v18) = *(_WORD *)(v19 + 2 * v18 - 2);
          ++v18;
        }
        ++v30;
      }
      while ( v40 < v34 );
      v16 = v45;
    }
    sub_796100((_DWORD *)*this, a2, v19, v16);
    ++*(_WORD *)(*this + 0x26);
  }
}
