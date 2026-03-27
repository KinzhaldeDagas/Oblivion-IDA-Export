void __thiscall sub_55A3B0(int *this, int a2, unsigned int a3, int a4, float a5)
{
  int v6; // ebp
  double v7; // st7
  float *v8; // eax
  int v9; // esi
  unsigned int v10; // edx
  int v11; // edi
  unsigned int v12; // ebp
  int v13; // edx
  double v14; // st5
  int v15; // edx
  int v16; // ebx
  double v17; // st5
  float v18; // edx
  float *v19; // eax
  int v20; // edx
  double v21; // st5
  int v22; // edx
  float v23; // edx
  float *v24; // eax
  int v25; // edx
  double v26; // st5
  int v27; // edx
  double v28; // st5
  float v29; // edx
  float *v30; // eax
  int v31; // edx
  double v32; // st5
  int v33; // edx
  double v34; // st5
  int v35; // edi
  unsigned int v36; // ebp
  int v37; // edx
  double v38; // st6
  int v39; // edx
  double v40; // st6
  float v41; // [esp+0h] [ebp-18h]
  float v42; // [esp+0h] [ebp-18h]
  float v43; // [esp+0h] [ebp-18h]
  float v44; // [esp+0h] [ebp-18h]
  float v45; // [esp+0h] [ebp-18h]
  float v46; // [esp+0h] [ebp-18h]
  float v47; // [esp+0h] [ebp-18h]
  float v48; // [esp+0h] [ebp-18h]
  float v49; // [esp+4h] [ebp-14h]
  float v50; // [esp+4h] [ebp-14h]
  float v51; // [esp+4h] [ebp-14h]
  float v52; // [esp+4h] [ebp-14h]
  float v53; // [esp+4h] [ebp-14h]
  float v54; // [esp+4h] [ebp-14h]
  float v55; // [esp+8h] [ebp-10h]
  float v56; // [esp+8h] [ebp-10h]
  float v57; // [esp+8h] [ebp-10h]
  float v58; // [esp+8h] [ebp-10h]
  float v59; // [esp+8h] [ebp-10h]
  float v60; // [esp+8h] [ebp-10h]
  float v61; // [esp+8h] [ebp-10h]
  float v62; // [esp+8h] [ebp-10h]
  float v63; // [esp+8h] [ebp-10h]
  float v64; // [esp+8h] [ebp-10h]
  float v65; // [esp+Ch] [ebp-Ch]
  float v66; // [esp+Ch] [ebp-Ch]
  float v67; // [esp+Ch] [ebp-Ch]
  float v68; // [esp+Ch] [ebp-Ch]
  float v69; // [esp+Ch] [ebp-Ch]
  float v70; // [esp+10h] [ebp-8h]
  float v71; // [esp+10h] [ebp-8h]
  float v72; // [esp+10h] [ebp-8h]
  float v73; // [esp+10h] [ebp-8h]
  float v74; // [esp+10h] [ebp-8h]
  float v75; // [esp+14h] [ebp-4h]
  float v76; // [esp+14h] [ebp-4h]
  float v77; // [esp+14h] [ebp-4h]
  float v78; // [esp+14h] [ebp-4h]
  float v79; // [esp+14h] [ebp-4h]
  int v80; // [esp+1Ch] [ebp+4h]
  int v81; // [esp+20h] [ebp+8h]

  if ( *(_DWORD *)a2 )
  {
    v6 = a3;
    if ( a3 )
    {
      v7 = a5;
      if ( a5 > 0.0 && v7 <= 1.0 )
      {
        if ( *(this + 1) )
        {
          if ( a3 >= *(this + 2) )
          {
            v80 = *(this + 2);
            v6 = v80;
          }
          else
          {
            v80 = a3;
          }
          v8 = *(float **)a2;
          v9 = *(_DWORD *)(a2 + 4);
          v10 = 0;
          if ( v6 >= 4 )
          {
            v11 = 0;
            v12 = ((unsigned int)(v6 - 4) >> 2) + 1;
            v81 = 4 * v12;
            do
            {
              v55 = v8[2];
              v13 = *(this + 1);
              v14 = *(float *)(v13 + v11);
              v15 = v11 + v13;
              v16 = v11 + 0x24;
              v65 = v14 * v7;
              v70 = *(float *)(v15 + 4) * v7;
              v75 = *(float *)(v15 + 8) * v7;
              v41 = v65 + *v8;
              v17 = v8[1];
              *v8 = v41;
              v49 = v17 + v70;
              v8[1] = v49;
              v56 = v55 + v75;
              v8[2] = v56;
              v42 = *(float *)((char *)v8 + v9);
              v18 = *(float *)((char *)v8 + v9 + 4);
              v19 = (float *)((char *)v8 + v9);
              v50 = v18;
              v57 = v19[2];
              v20 = *(this + 1);
              v21 = *(float *)(v11 + v20 + 0xC);
              v22 = v11 + v20 + 0xC;
              v66 = v21 * v7;
              v71 = *(float *)(v22 + 4) * v7;
              v76 = *(float *)(v22 + 8) * v7;
              v43 = v66 + v42;
              *v19 = v43;
              v51 = v50 + v71;
              v19[1] = v51;
              v58 = v57 + v76;
              v19[2] = v58;
              v23 = *(float *)((char *)v19 + v9);
              v24 = (float *)((char *)v19 + v9);
              v44 = v23;
              v59 = v24[2];
              v25 = *(this + 1);
              v26 = *(float *)(v11 + 0x24 + v25 - 0xC);
              v27 = v11 + 0x24 + v25 - 0xC;
              v67 = v26 * v7;
              v72 = *(float *)(v27 + 4) * v7;
              v11 += 0x30;
              v77 = *(float *)(v27 + 8) * v7;
              v45 = v67 + v44;
              v28 = v24[1];
              *v24 = v45;
              v52 = v28 + v72;
              v24[1] = v52;
              v60 = v59 + v77;
              v24[2] = v60;
              v29 = *(float *)((char *)v24 + v9);
              v30 = (float *)((char *)v24 + v9);
              v46 = v29;
              v61 = v30[2];
              v31 = *(this + 1);
              v32 = *(float *)(v31 + v16);
              v33 = v16 + v31;
              v68 = v32 * v7;
              v73 = *(float *)(v33 + 4) * v7;
              v78 = *(float *)(v33 + 8) * v7;
              v47 = v68 + v46;
              v34 = v30[1];
              *v30 = v47;
              v53 = v34 + v73;
              v30[1] = v53;
              v62 = v61 + v78;
              v30[2] = v62;
              v8 = (float *)((char *)v30 + v9);
              --v12;
            }
            while ( v12 );
            v10 = v81;
            v6 = v80;
          }
          if ( v10 < v6 )
          {
            v35 = 0xC * v10;
            v36 = v6 - v10;
            do
            {
              v63 = v8[2];
              v37 = *(this + 1);
              v38 = *(float *)(v37 + v35);
              v39 = v35 + v37;
              v35 += 0xC;
              v69 = v38 * v7;
              v74 = *(float *)(v39 + 4) * v7;
              v79 = *(float *)(v39 + 8) * v7;
              v48 = v69 + *v8;
              v40 = v8[1];
              *v8 = v48;
              v54 = v40 + v74;
              v8[1] = v54;
              v64 = v63 + v79;
              v8[2] = v64;
              v8 = (float *)((char *)v8 + v9);
              --v36;
            }
            while ( v36 );
          }
        }
      }
    }
  }
}
