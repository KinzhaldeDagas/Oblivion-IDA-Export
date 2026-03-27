char __cdecl NiTMap<unsigned int,VertexDist>::NiTMap<unsigned int,VertexDist>(
        int a1,
        int a2,
        float a3,
        int a4,
        char a5)
{
  unsigned int v5; // ebx
  int v6; // ebp
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  unsigned int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  unsigned int v14; // eax
  unsigned int v15; // edi
  float *v17; // eax
  float *v18; // eax
  double v19; // st7
  unsigned int v20; // ebp
  unsigned int v21; // esi
  float *v22; // edi
  float *v23; // eax
  int v24; // ebp
  NiTransform *v25; // eax
  int v26; // edi
  float *v27; // esi
  unsigned int v28; // ebx
  _DWORD *v29; // eax
  float *v30; // eax
  int v31; // ebp
  int v32; // edi
  float *v33; // eax
  _DWORD *v34; // eax
  char v35; // [esp+23h] [ebp-11Dh]
  unsigned int v36; // [esp+24h] [ebp-11Ch]
  float v37; // [esp+28h] [ebp-118h]
  float v38; // [esp+2Ch] [ebp-114h] BYREF
  unsigned int v39; // [esp+30h] [ebp-110h]
  unsigned int *v40[2]; // [esp+34h] [ebp-10Ch] BYREF
  int v41; // [esp+3Ch] [ebp-104h]
  int v42; // [esp+40h] [ebp-100h]
  float v43; // [esp+44h] [ebp-FCh] BYREF
  float *v44; // [esp+48h] [ebp-F8h]
  float *v45; // [esp+4Ch] [ebp-F4h]
  float *v46; // [esp+50h] [ebp-F0h]
  int v47; // [esp+54h] [ebp-ECh]
  int v48; // [esp+58h] [ebp-E8h]
  int v49; // [esp+5Ch] [ebp-E4h] BYREF
  unsigned int v50; // [esp+60h] [ebp-E0h]
  int v51; // [esp+64h] [ebp-DCh]
  int v52; // [esp+68h] [ebp-D8h]
  int v53; // [esp+6Ch] [ebp-D4h]
  int v54[2]; // [esp+70h] [ebp-D0h] BYREF
  float v55; // [esp+78h] [ebp-C8h]
  _BYTE v56[60]; // [esp+7Ch] [ebp-C4h] BYREF
  float v57[9]; // [esp+B8h] [ebp-88h] BYREF
  float v58[9]; // [esp+DCh] [ebp-64h] BYREF
  float v59[13]; // [esp+100h] [ebp-40h] BYREF
  unsigned int v60; // [esp+13Ch] [ebp-4h]

  v40[1] = (unsigned int *)0x25;
  v5 = 0;
  v42 = 0;
  v41 = FormHeapAlloc(0x94u);
  _memset(v41, 0, 0x94);
  v40[0] = (unsigned int *)&NiTMap<unsigned int,VertexDist>::`vftable';
  v6 = a1;
  v60 = 0;
  v35 = 0;
  if ( !a1 )
    goto LABEL_13;
  if ( !a2 )
    goto LABEL_13;
  if ( a1 == a2 )
    goto LABEL_13;
  v7 = *(_DWORD *)(a1 + 0xB4);
  v8 = *(_DWORD *)(v7 + 0x1C);
  v9 = *(_DWORD *)(v7 + 0x20);
  v10 = *(unsigned __int16 *)(v7 + 8);
  v53 = v8;
  v48 = v9;
  v39 = v10;
  if ( !v8 )
    goto LABEL_13;
  if ( !v9 )
    goto LABEL_13;
  if ( !v10 )
    goto LABEL_13;
  v11 = *(_DWORD *)(a2 + 0xB4);
  v12 = *(_DWORD *)(v11 + 0x1C);
  v13 = *(_DWORD *)(v11 + 0x20);
  v14 = *(unsigned __int16 *)(v11 + 8);
  v52 = v12;
  v47 = v13;
  v36 = v14;
  if ( !v12 )
    goto LABEL_13;
  if ( !v13 )
    goto LABEL_13;
  if ( !v14 )
    goto LABEL_13;
  v15 = sub_4802E0(a1);
  v46 = (float *)v15;
  if ( !v15 )
    goto LABEL_13;
  v45 = (float *)sub_4802E0(a2);
  if ( !v45 )
  {
    FormHeapFree(v15);
LABEL_13:
    v60 = 0xFFFFFFFF;
    NiTMap<unsigned int,VertexDist>::~NiTMap<unsigned int,VertexDist>((unsigned int *)v40);
    return 0;
  }
  sub_718A80((float *)(a2 + 0x64), v59);
  v17 = sub_7103C0((float *)(a2 + 0x64), v57);
  v18 = NiMAtrix33_Multiply(v17, v58, (float *)(a1 + 0x64));
  v38 = flt_A32048;
  qmemcpy(&v56[0x18], v18, 0x24u);
  if ( !v36 )
    goto LABEL_33;
  v44 = v45;
  do
  {
    v19 = a3;
    v20 = v39;
    if ( a3 < 0.0 )
      v19 = flt_A32048;
    v21 = 0;
    v37 = v19;
    if ( v39 )
    {
      v22 = v46;
      do
      {
        v23 = sub_4121A0(v44, (float *)v56, v22);
        v43 = sub_404C90(v23);
        if ( v37 > (double)v43 )
        {
          v37 = v43;
          v20 = v21;
        }
        if ( v38 > (double)v43 )
          v38 = v43;
        ++v21;
        v22 += 3;
      }
      while ( v21 < v39 );
      if ( v20 < v39 )
      {
        *(float *)&v51 = v37;
        if ( !sub_47DB90(v40, v20, v54) )
          goto LABEL_30;
        if ( sub_47DF40(v37, v55, flt_A37080) )
        {
          sub_47DAD0(v40, v20, v5, v54[0], v51);
          goto LABEL_31;
        }
        if ( v55 > (double)v37 )
LABEL_30:
          sub_47DAD0(v40, v20, v5, v36, v51);
      }
    }
LABEL_31:
    v44 += 3;
    ++v5;
  }
  while ( v5 < v36 );
  v6 = a1;
LABEL_33:
  v38 = COERCE_FLOAT(sub_6A9030(v40));
  if ( v38 != 0.0 )
  {
    v35 = 1;
    do
    {
      sub_47DBF0(v40, (unsigned int *)&v38, &v43, &v49);
      v24 = 0xC * LODWORD(v43);
      v25 = sub_7101F0((NiTransform *)&v56[0x18], (NiTransform *)v56, (NiPoint3 *)(v48 + 0xC * LODWORD(v43)));
      v26 = 0xC * v49;
      v27 = (float *)(0xC * v49 + v47);
      *v27 = v25->rot.data[0][0];
      v27[1] = v25->rot.data[0][1];
      v27[2] = v25->rot.data[0][2];
      sub_43F350(v27);
      v28 = v50;
      if ( v50 < v36 )
      {
        v29 = (_DWORD *)(v47 + 0xC * v50);
        *v29 = *(_DWORD *)v27;
        v29[1] = *((_DWORD *)v27 + 1);
        v29[2] = *((_DWORD *)v27 + 2);
      }
      if ( a5 )
      {
        if ( dword_B34408 != a1 )
        {
          v30 = sub_47DA10((float *)v54, flt_A31C80, (float *)(v48 + v24));
          sub_4121D0((float *)(v53 + v24), v30);
        }
        v31 = v52;
        v32 = v52 + v26;
        v33 = sub_47DA10((float *)&v56[0xC], flt_A31C80, v27);
        sub_4121D0((float *)v32, v33);
        if ( v28 < v36 )
        {
          v34 = (_DWORD *)(v31 + 0xC * v28);
          *v34 = *(_DWORD *)v32;
          v34[1] = *(_DWORD *)(v32 + 4);
          v34[2] = *(_DWORD *)(v32 + 8);
        }
      }
    }
    while ( v38 != 0.0 );
    if ( a5 )
      *(_WORD *)(*(_DWORD *)(a1 + 0xB4) + 0x2E) |= 3u;
    *(_WORD *)(*(_DWORD *)(a2 + 0xB4) + 0x2E) |= 3u;
    v6 = a1;
  }
  FormHeapFree((unsigned int)v46);
  FormHeapFree((unsigned int)v45);
  dword_B34408 = v6;
  v60 = 0xFFFFFFFF;
  NiTMap<unsigned int,VertexDist>::~NiTMap<unsigned int,VertexDist>((unsigned int *)v40);
  return v35;
}
