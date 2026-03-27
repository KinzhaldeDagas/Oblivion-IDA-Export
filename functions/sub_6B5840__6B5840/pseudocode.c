int __thiscall sub_6B5840(float *this, int *a2)
{
  float *v3; // esi
  float *v5; // ebx
  double v6; // st7
  int result; // eax
  bool v8; // zf
  float *v10; // ebx
  double v11; // st7
  float *v13; // ebx
  double v14; // st7
  float *v16; // ebx
  double v17; // st7
  float *v19; // ebx
  double v20; // st7
  float *v22; // ebx
  double v23; // st7
  float *v25; // ebx
  double v26; // st7
  float *v28; // ebx
  double v29; // st7
  float *v31; // ebx
  double v32; // st7
  float *v34; // ebx
  double v35; // st7
  float *v37; // ebx
  double v38; // st7
  float *v40; // ebx
  double v41; // st7
  float *v43; // ebx
  double v44; // st7
  float *v46; // ebx
  double v47; // st7
  float *v49; // ebx
  double v50; // st7
  float *v52; // ebx
  double v53; // st7
  float v54; // [esp+14h] [ebp-4h]
  float v55; // [esp+14h] [ebp-4h]
  float v56; // [esp+14h] [ebp-4h]
  float v57; // [esp+14h] [ebp-4h]
  float v58; // [esp+14h] [ebp-4h]
  float v59; // [esp+14h] [ebp-4h]
  float v60; // [esp+14h] [ebp-4h]
  float v61; // [esp+14h] [ebp-4h]
  float v62; // [esp+14h] [ebp-4h]
  float v63; // [esp+14h] [ebp-4h]
  float v64; // [esp+14h] [ebp-4h]
  float v65; // [esp+14h] [ebp-4h]
  float v66; // [esp+14h] [ebp-4h]
  float v67; // [esp+14h] [ebp-4h]
  float v68; // [esp+14h] [ebp-4h]
  float v69; // [esp+14h] [ebp-4h]
  int v70; // [esp+1Ch] [ebp+4h]
  int v71; // [esp+1Ch] [ebp+4h]
  int v72; // [esp+1Ch] [ebp+4h]
  int v73; // [esp+1Ch] [ebp+4h]
  int v74; // [esp+1Ch] [ebp+4h]
  int v75; // [esp+1Ch] [ebp+4h]
  int v76; // [esp+1Ch] [ebp+4h]
  int v77; // [esp+1Ch] [ebp+4h]
  int v78; // [esp+1Ch] [ebp+4h]
  int v79; // [esp+1Ch] [ebp+4h]
  int v80; // [esp+1Ch] [ebp+4h]
  int v81; // [esp+1Ch] [ebp+4h]
  int v82; // [esp+1Ch] [ebp+4h]
  int v83; // [esp+1Ch] [ebp+4h]
  int v84; // [esp+1Ch] [ebp+4h]
  int v85; // [esp+1Ch] [ebp+4h]

  v3 = *((float **)this + 0x400);
  switch ( *((_DWORD *)this + 0x401) )
  {
    case 0:
      v5 = (float *)&unk_A77C20;
      v70 = 0x20;
      do
      {
        v6 = v5[0xFFFFFFFF];
        v54 = (v6 * v3[0xF]
             + v5[0xFFFFFFFE] * *v3
             + v3[0xE] * *v5
             + v5[1] * v3[0xD]
             + v5[2] * v3[0xC]
             + v5[3] * v3[0xB]
             + v5[4] * v3[0xA]
             + v5[5] * v3[9]
             + v5[6] * v3[8]
             + v5[7] * v3[7]
             + v5[8] * v3[6]
             + v5[9] * v3[5]
             + v5[0xA] * v3[4]
             + v5[0xB] * v3[3]
             + v5[0xC] * v3[2]
             + v5[0xD] * v3[1])
            * *(this + 0x423);
        *(_WORD *)(a2[1] + 2 * *a2) = sub_6B57E0(v54);
        result = (*a2 + 1) / 0x480;
        v5 += 0x10;
        v3 += 0x10;
        v8 = v70-- == 1;
        *a2 = (*a2 + 1) % 0x480;
      }
      while ( !v8 );
      break;
    case 1:
      v10 = (float *)&unk_A77C20;
      v71 = 0x20;
      do
      {
        v11 = v10[0xFFFFFFFE];
        v55 = (v11 * v3[1]
             + v10[0xFFFFFFFF] * *v3
             + v3[0xF] * *v10
             + v10[1] * v3[0xE]
             + v10[2] * v3[0xD]
             + v10[3] * v3[0xC]
             + v10[4] * v3[0xB]
             + v10[5] * v3[0xA]
             + v10[6] * v3[9]
             + v10[7] * v3[8]
             + v10[8] * v3[7]
             + v10[9] * v3[6]
             + v10[0xA] * v3[5]
             + v10[0xB] * v3[4]
             + v10[0xC] * v3[3]
             + v10[0xD] * v3[2])
            * *(this + 0x423);
        *(_WORD *)(a2[1] + 2 * *a2) = sub_6B57E0(v55);
        result = (*a2 + 1) / 0x480;
        v10 += 0x10;
        v3 += 0x10;
        v8 = v71-- == 1;
        *a2 = (*a2 + 1) % 0x480;
      }
      while ( !v8 );
      break;
    case 2:
      v13 = (float *)&unk_A77C20;
      v72 = 0x20;
      do
      {
        v14 = v13[0xFFFFFFFE];
        v56 = (v14 * v3[2]
             + v13[0xFFFFFFFF] * v3[1]
             + *v3 * *v13
             + v13[1] * v3[0xF]
             + v13[2] * v3[0xE]
             + v13[3] * v3[0xD]
             + v13[4] * v3[0xC]
             + v13[5] * v3[0xB]
             + v13[6] * v3[0xA]
             + v13[7] * v3[9]
             + v13[8] * v3[8]
             + v13[9] * v3[7]
             + v13[0xA] * v3[6]
             + v13[0xB] * v3[5]
             + v13[0xC] * v3[4]
             + v13[0xD] * v3[3])
            * *(this + 0x423);
        *(_WORD *)(a2[1] + 2 * *a2) = sub_6B57E0(v56);
        result = (*a2 + 1) / 0x480;
        v13 += 0x10;
        v3 += 0x10;
        v8 = v72-- == 1;
        *a2 = (*a2 + 1) % 0x480;
      }
      while ( !v8 );
      break;
    case 3:
      v16 = (float *)&unk_A77C20;
      v73 = 0x20;
      do
      {
        v17 = v16[0xFFFFFFFE];
        v57 = (v17 * v3[3]
             + v16[0xFFFFFFFF] * v3[2]
             + v3[1] * *v16
             + v16[1] * *v3
             + v16[2] * v3[0xF]
             + v16[3] * v3[0xE]
             + v16[4] * v3[0xD]
             + v16[5] * v3[0xC]
             + v16[6] * v3[0xB]
             + v16[7] * v3[0xA]
             + v16[8] * v3[9]
             + v16[9] * v3[8]
             + v16[0xA] * v3[7]
             + v16[0xB] * v3[6]
             + v16[0xC] * v3[5]
             + v16[0xD] * v3[4])
            * *(this + 0x423);
        *(_WORD *)(a2[1] + 2 * *a2) = sub_6B57E0(v57);
        result = (*a2 + 1) / 0x480;
        v16 += 0x10;
        v3 += 0x10;
        v8 = v73-- == 1;
        *a2 = (*a2 + 1) % 0x480;
      }
      while ( !v8 );
      break;
    case 4:
      v19 = (float *)&unk_A77C20;
      v74 = 0x20;
      do
      {
        v20 = v19[0xFFFFFFFE];
        v58 = (v20 * v3[4]
             + v19[0xFFFFFFFF] * v3[3]
             + v3[2] * *v19
             + v19[1] * v3[1]
             + v19[2] * *v3
             + v19[3] * v3[0xF]
             + v19[4] * v3[0xE]
             + v19[5] * v3[0xD]
             + v19[6] * v3[0xC]
             + v19[7] * v3[0xB]
             + v19[8] * v3[0xA]
             + v19[9] * v3[9]
             + v19[0xA] * v3[8]
             + v19[0xB] * v3[7]
             + v19[0xC] * v3[6]
             + v19[0xD] * v3[5])
            * *(this + 0x423);
        *(_WORD *)(a2[1] + 2 * *a2) = sub_6B57E0(v58);
        result = (*a2 + 1) / 0x480;
        v19 += 0x10;
        v3 += 0x10;
        v8 = v74-- == 1;
        *a2 = (*a2 + 1) % 0x480;
      }
      while ( !v8 );
      break;
    case 5:
      v22 = (float *)&unk_A77C20;
      v75 = 0x20;
      do
      {
        v23 = v22[0xFFFFFFFE];
        v59 = (v23 * v3[5]
             + v22[0xFFFFFFFF] * v3[4]
             + v3[3] * *v22
             + v22[1] * v3[2]
             + v22[2] * v3[1]
             + v22[3] * *v3
             + v22[4] * v3[0xF]
             + v22[5] * v3[0xE]
             + v22[6] * v3[0xD]
             + v22[7] * v3[0xC]
             + v22[8] * v3[0xB]
             + v22[9] * v3[0xA]
             + v22[0xA] * v3[9]
             + v22[0xB] * v3[8]
             + v22[0xC] * v3[7]
             + v22[0xD] * v3[6])
            * *(this + 0x423);
        *(_WORD *)(a2[1] + 2 * *a2) = sub_6B57E0(v59);
        result = (*a2 + 1) / 0x480;
        v22 += 0x10;
        v3 += 0x10;
        v8 = v75-- == 1;
        *a2 = (*a2 + 1) % 0x480;
      }
      while ( !v8 );
      break;
    case 6:
      v25 = (float *)&unk_A77C20;
      v76 = 0x20;
      do
      {
        v26 = v25[0xFFFFFFFE];
        v60 = (v26 * v3[6]
             + v25[0xFFFFFFFF] * v3[5]
             + v3[4] * *v25
             + v25[1] * v3[3]
             + v25[2] * v3[2]
             + v25[3] * v3[1]
             + v25[4] * *v3
             + v25[5] * v3[0xF]
             + v25[6] * v3[0xE]
             + v25[7] * v3[0xD]
             + v25[8] * v3[0xC]
             + v25[9] * v3[0xB]
             + v25[0xA] * v3[0xA]
             + v25[0xB] * v3[9]
             + v25[0xC] * v3[8]
             + v25[0xD] * v3[7])
            * *(this + 0x423);
        *(_WORD *)(a2[1] + 2 * *a2) = sub_6B57E0(v60);
        result = (*a2 + 1) / 0x480;
        v25 += 0x10;
        v3 += 0x10;
        v8 = v76-- == 1;
        *a2 = (*a2 + 1) % 0x480;
      }
      while ( !v8 );
      break;
    case 7:
      v28 = (float *)&unk_A77C20;
      v77 = 0x20;
      do
      {
        v29 = v28[0xFFFFFFFE];
        v61 = (v29 * v3[7]
             + v28[0xFFFFFFFF] * v3[6]
             + v3[5] * *v28
             + v28[1] * v3[4]
             + v28[2] * v3[3]
             + v28[3] * v3[2]
             + v28[4] * v3[1]
             + v28[5] * *v3
             + v28[6] * v3[0xF]
             + v28[7] * v3[0xE]
             + v28[8] * v3[0xD]
             + v28[9] * v3[0xC]
             + v28[0xA] * v3[0xB]
             + v28[0xB] * v3[0xA]
             + v28[0xC] * v3[9]
             + v28[0xD] * v3[8])
            * *(this + 0x423);
        *(_WORD *)(a2[1] + 2 * *a2) = sub_6B57E0(v61);
        result = (*a2 + 1) / 0x480;
        v28 += 0x10;
        v3 += 0x10;
        v8 = v77-- == 1;
        *a2 = (*a2 + 1) % 0x480;
      }
      while ( !v8 );
      break;
    case 8:
      v31 = (float *)&unk_A77C20;
      v78 = 0x20;
      do
      {
        v32 = v31[0xFFFFFFFE];
        v62 = (v32 * v3[8]
             + v31[0xFFFFFFFF] * v3[7]
             + v3[6] * *v31
             + v31[1] * v3[5]
             + v31[2] * v3[4]
             + v31[3] * v3[3]
             + v31[4] * v3[2]
             + v31[5] * v3[1]
             + v31[6] * *v3
             + v31[7] * v3[0xF]
             + v31[8] * v3[0xE]
             + v31[9] * v3[0xD]
             + v31[0xA] * v3[0xC]
             + v31[0xB] * v3[0xB]
             + v31[0xC] * v3[0xA]
             + v31[0xD] * v3[9])
            * *(this + 0x423);
        *(_WORD *)(a2[1] + 2 * *a2) = sub_6B57E0(v62);
        result = (*a2 + 1) / 0x480;
        v31 += 0x10;
        v3 += 0x10;
        v8 = v78-- == 1;
        *a2 = (*a2 + 1) % 0x480;
      }
      while ( !v8 );
      break;
    case 9:
      v34 = (float *)&unk_A77C20;
      v79 = 0x20;
      do
      {
        v35 = v34[0xFFFFFFFE];
        v63 = (v35 * v3[9]
             + v34[0xFFFFFFFF] * v3[8]
             + v3[7] * *v34
             + v34[1] * v3[6]
             + v34[2] * v3[5]
             + v34[3] * v3[4]
             + v34[4] * v3[3]
             + v34[5] * v3[2]
             + v34[6] * v3[1]
             + v34[7] * *v3
             + v34[8] * v3[0xF]
             + v34[9] * v3[0xE]
             + v34[0xA] * v3[0xD]
             + v34[0xB] * v3[0xC]
             + v34[0xC] * v3[0xB]
             + v34[0xD] * v3[0xA])
            * *(this + 0x423);
        *(_WORD *)(a2[1] + 2 * *a2) = sub_6B57E0(v63);
        result = (*a2 + 1) / 0x480;
        v34 += 0x10;
        v3 += 0x10;
        v8 = v79-- == 1;
        *a2 = (*a2 + 1) % 0x480;
      }
      while ( !v8 );
      break;
    case 0xA:
      v37 = (float *)&unk_A77C20;
      v80 = 0x20;
      do
      {
        v38 = v37[0xFFFFFFFE];
        v64 = (v38 * v3[0xA]
             + v37[0xFFFFFFFF] * v3[9]
             + v3[8] * *v37
             + v37[1] * v3[7]
             + v37[2] * v3[6]
             + v37[3] * v3[5]
             + v37[4] * v3[4]
             + v37[5] * v3[3]
             + v37[6] * v3[2]
             + v37[7] * v3[1]
             + v37[8] * *v3
             + v37[9] * v3[0xF]
             + v37[0xA] * v3[0xE]
             + v37[0xB] * v3[0xD]
             + v37[0xC] * v3[0xC]
             + v37[0xD] * v3[0xB])
            * *(this + 0x423);
        *(_WORD *)(a2[1] + 2 * *a2) = sub_6B57E0(v64);
        result = (*a2 + 1) / 0x480;
        v37 += 0x10;
        v3 += 0x10;
        v8 = v80-- == 1;
        *a2 = (*a2 + 1) % 0x480;
      }
      while ( !v8 );
      break;
    case 0xB:
      v40 = (float *)&unk_A77C20;
      v81 = 0x20;
      do
      {
        v41 = v40[0xFFFFFFFE];
        v65 = (v41 * v3[0xB]
             + v40[0xFFFFFFFF] * v3[0xA]
             + v3[9] * *v40
             + v40[1] * v3[8]
             + v40[2] * v3[7]
             + v40[3] * v3[6]
             + v40[4] * v3[5]
             + v40[5] * v3[4]
             + v40[6] * v3[3]
             + v40[7] * v3[2]
             + v40[8] * v3[1]
             + v40[9] * *v3
             + v40[0xA] * v3[0xF]
             + v40[0xB] * v3[0xE]
             + v40[0xC] * v3[0xD]
             + v40[0xD] * v3[0xC])
            * *(this + 0x423);
        *(_WORD *)(a2[1] + 2 * *a2) = sub_6B57E0(v65);
        result = (*a2 + 1) / 0x480;
        v40 += 0x10;
        v3 += 0x10;
        v8 = v81-- == 1;
        *a2 = (*a2 + 1) % 0x480;
      }
      while ( !v8 );
      break;
    case 0xC:
      v43 = (float *)&unk_A77C20;
      v82 = 0x20;
      do
      {
        v44 = v43[0xFFFFFFFE];
        v66 = (v44 * v3[0xC]
             + v43[0xFFFFFFFF] * v3[0xB]
             + v3[0xA] * *v43
             + v43[1] * v3[9]
             + v43[2] * v3[8]
             + v43[3] * v3[7]
             + v43[4] * v3[6]
             + v43[5] * v3[5]
             + v43[6] * v3[4]
             + v43[7] * v3[3]
             + v43[8] * v3[2]
             + v43[9] * v3[1]
             + v43[0xA] * *v3
             + v43[0xB] * v3[0xF]
             + v43[0xC] * v3[0xE]
             + v43[0xD] * v3[0xD])
            * *(this + 0x423);
        *(_WORD *)(a2[1] + 2 * *a2) = sub_6B57E0(v66);
        result = (*a2 + 1) / 0x480;
        v43 += 0x10;
        v3 += 0x10;
        v8 = v82-- == 1;
        *a2 = (*a2 + 1) % 0x480;
      }
      while ( !v8 );
      break;
    case 0xD:
      v46 = (float *)&unk_A77C20;
      v83 = 0x20;
      do
      {
        v47 = v46[0xFFFFFFFE];
        v67 = (v47 * v3[0xD]
             + v46[0xFFFFFFFF] * v3[0xC]
             + v3[0xB] * *v46
             + v46[1] * v3[0xA]
             + v46[2] * v3[9]
             + v46[3] * v3[8]
             + v46[4] * v3[7]
             + v46[5] * v3[6]
             + v46[6] * v3[5]
             + v46[7] * v3[4]
             + v46[8] * v3[3]
             + v46[9] * v3[2]
             + v46[0xA] * v3[1]
             + v46[0xB] * *v3
             + v46[0xC] * v3[0xF]
             + v46[0xD] * v3[0xE])
            * *(this + 0x423);
        *(_WORD *)(a2[1] + 2 * *a2) = sub_6B57E0(v67);
        result = (*a2 + 1) / 0x480;
        v46 += 0x10;
        v3 += 0x10;
        v8 = v83-- == 1;
        *a2 = (*a2 + 1) % 0x480;
      }
      while ( !v8 );
      break;
    case 0xE:
      v49 = (float *)&unk_A77C20;
      v84 = 0x20;
      do
      {
        v50 = v49[0xFFFFFFFE];
        v68 = (v50 * v3[0xE]
             + v49[0xFFFFFFFF] * v3[0xD]
             + v3[0xC] * *v49
             + v49[1] * v3[0xB]
             + v49[2] * v3[0xA]
             + v49[3] * v3[9]
             + v49[4] * v3[8]
             + v49[5] * v3[7]
             + v49[6] * v3[6]
             + v49[7] * v3[5]
             + v49[8] * v3[4]
             + v49[9] * v3[3]
             + v49[0xA] * v3[2]
             + v49[0xB] * v3[1]
             + v49[0xC] * *v3
             + v49[0xD] * v3[0xF])
            * *(this + 0x423);
        *(_WORD *)(a2[1] + 2 * *a2) = sub_6B57E0(v68);
        result = (*a2 + 1) / 0x480;
        v49 += 0x10;
        v3 += 0x10;
        v8 = v84-- == 1;
        *a2 = (*a2 + 1) % 0x480;
      }
      while ( !v8 );
      break;
    case 0xF:
      v52 = (float *)&unk_A77C20;
      v85 = 0x20;
      do
      {
        v53 = v52[0xFFFFFFFE];
        v69 = (v53 * v3[0xF]
             + v52[0xFFFFFFFF] * v3[0xE]
             + v3[0xD] * *v52
             + v52[1] * v3[0xC]
             + v52[2] * v3[0xB]
             + v52[3] * v3[0xA]
             + v52[4] * v3[9]
             + v52[5] * v3[8]
             + v52[6] * v3[7]
             + v52[7] * v3[6]
             + v52[8] * v3[5]
             + v52[9] * v3[4]
             + v52[0xA] * v3[3]
             + v52[0xB] * v3[2]
             + v52[0xC] * v3[1]
             + v52[0xD] * *v3)
            * *(this + 0x423);
        *(_WORD *)(a2[1] + 2 * *a2) = sub_6B57E0(v69);
        v52 += 0x10;
        v3 += 0x10;
        v8 = v85-- == 1;
        *a2 = (*a2 + 1) % 0x480;
      }
      while ( !v8 );
      result = def_6B585C(v85);
      break;
    default:
      JUMPOUT(0x6B6653);
  }
  return result;
}
