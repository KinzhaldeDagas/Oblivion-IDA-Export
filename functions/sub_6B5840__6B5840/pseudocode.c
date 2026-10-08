void __thiscall sub_6B5840(float *this, int *a2)
{
  float *v3; // esi
  float *v5; // ebx
  double v6; // st7
  bool v7; // zf
  float *v9; // ebx
  double v10; // st7
  float *v12; // ebx
  double v13; // st7
  float *v15; // ebx
  double v16; // st7
  float *v18; // ebx
  double v19; // st7
  float *v21; // ebx
  double v22; // st7
  float *v24; // ebx
  double v25; // st7
  float *v27; // ebx
  double v28; // st7
  float *v30; // ebx
  double v31; // st7
  float *v33; // ebx
  double v34; // st7
  float *v36; // ebx
  double v37; // st7
  float *v39; // ebx
  double v40; // st7
  float *v42; // ebx
  double v43; // st7
  float *v45; // ebx
  double v46; // st7
  float *v48; // ebx
  double v49; // st7
  float *v51; // ebx
  double v52; // st7
  float v53; // [esp+14h] [ebp-4h]
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
  int v69; // [esp+1Ch] [ebp+4h]
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

  v3 = *((float **)this + 0x400); /*0x6b584e*/
  switch ( *((_DWORD *)this + 0x401) ) /*0x6b585c*/
  {
    case 0: /*0x6b585c*/
      v5 = (float *)&unk_A77C20; /*0x6b5867*/
      v69 = 0x20; /*0x6b586c*/
      do /*0x6b592f*/
      {
        v6 = v5[0xFFFFFFFF]; /*0x6b5874*/
        v53 = (v6 * v3[0xF] /*0x6b58f9*/
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
        *(_WORD *)(a2[1] + 2 * *a2) = sub_6B57E0(v53); /*0x6b590f*/
        v5 += 0x10; /*0x6b5921*/
        v3 += 0x10; /*0x6b5924*/
        v7 = v69-- == 1; /*0x6b5927*/
        *a2 = (*a2 + 1) % 0x480; /*0x6b592c*/
      }
      while ( !v7 ); /*0x6b592f*/
      break; /*0x6b592f*/
    case 1: /*0x6b585c*/
      v9 = (float *)&unk_A77C20; /*0x6b5941*/
      v70 = 0x20; /*0x6b5946*/
      do /*0x6b5a0b*/
      {
        v10 = v9[0xFFFFFFFE]; /*0x6b5950*/
        v54 = (v10 * v3[1] /*0x6b59d5*/
             + v9[0xFFFFFFFF] * *v3
             + v3[0xF] * *v9
             + v9[1] * v3[0xE]
             + v9[2] * v3[0xD]
             + v9[3] * v3[0xC]
             + v9[4] * v3[0xB]
             + v9[5] * v3[0xA]
             + v9[6] * v3[9]
             + v9[7] * v3[8]
             + v9[8] * v3[7]
             + v9[9] * v3[6]
             + v9[0xA] * v3[5]
             + v9[0xB] * v3[4]
             + v9[0xC] * v3[3]
             + v9[0xD] * v3[2])
            * *(this + 0x423);
        *(_WORD *)(a2[1] + 2 * *a2) = sub_6B57E0(v54); /*0x6b59eb*/
        v9 += 0x10; /*0x6b59fd*/
        v3 += 0x10; /*0x6b5a00*/
        v7 = v70-- == 1; /*0x6b5a03*/
        *a2 = (*a2 + 1) % 0x480; /*0x6b5a08*/
      }
      while ( !v7 ); /*0x6b5a0b*/
      break; /*0x6b5a0b*/
    case 2: /*0x6b585c*/
      v12 = (float *)&unk_A77C20; /*0x6b5a1d*/
      v71 = 0x20; /*0x6b5a22*/
      do /*0x6b5aeb*/
      {
        v13 = v12[0xFFFFFFFE]; /*0x6b5a30*/
        v55 = (v13 * v3[2] /*0x6b5ab5*/
             + v12[0xFFFFFFFF] * v3[1]
             + *v3 * *v12
             + v12[1] * v3[0xF]
             + v12[2] * v3[0xE]
             + v12[3] * v3[0xD]
             + v12[4] * v3[0xC]
             + v12[5] * v3[0xB]
             + v12[6] * v3[0xA]
             + v12[7] * v3[9]
             + v12[8] * v3[8]
             + v12[9] * v3[7]
             + v12[0xA] * v3[6]
             + v12[0xB] * v3[5]
             + v12[0xC] * v3[4]
             + v12[0xD] * v3[3])
            * *(this + 0x423);
        *(_WORD *)(a2[1] + 2 * *a2) = sub_6B57E0(v55); /*0x6b5acb*/
        v12 += 0x10; /*0x6b5add*/
        v3 += 0x10; /*0x6b5ae0*/
        v7 = v71-- == 1; /*0x6b5ae3*/
        *a2 = (*a2 + 1) % 0x480; /*0x6b5ae8*/
      }
      while ( !v7 ); /*0x6b5aeb*/
      break; /*0x6b5aeb*/
    case 3: /*0x6b585c*/
      v15 = (float *)&unk_A77C20; /*0x6b5afd*/
      v72 = 0x20; /*0x6b5b02*/
      do /*0x6b5bcb*/
      {
        v16 = v15[0xFFFFFFFE]; /*0x6b5b10*/
        v56 = (v16 * v3[3] /*0x6b5b95*/
             + v15[0xFFFFFFFF] * v3[2]
             + v3[1] * *v15
             + v15[1] * *v3
             + v15[2] * v3[0xF]
             + v15[3] * v3[0xE]
             + v15[4] * v3[0xD]
             + v15[5] * v3[0xC]
             + v15[6] * v3[0xB]
             + v15[7] * v3[0xA]
             + v15[8] * v3[9]
             + v15[9] * v3[8]
             + v15[0xA] * v3[7]
             + v15[0xB] * v3[6]
             + v15[0xC] * v3[5]
             + v15[0xD] * v3[4])
            * *(this + 0x423);
        *(_WORD *)(a2[1] + 2 * *a2) = sub_6B57E0(v56); /*0x6b5bab*/
        v15 += 0x10; /*0x6b5bbd*/
        v3 += 0x10; /*0x6b5bc0*/
        v7 = v72-- == 1; /*0x6b5bc3*/
        *a2 = (*a2 + 1) % 0x480; /*0x6b5bc8*/
      }
      while ( !v7 ); /*0x6b5bcb*/
      break; /*0x6b5bcb*/
    case 4: /*0x6b585c*/
      v18 = (float *)&unk_A77C20; /*0x6b5bdd*/
      v73 = 0x20; /*0x6b5be2*/
      do /*0x6b5cab*/
      {
        v19 = v18[0xFFFFFFFE]; /*0x6b5bf0*/
        v57 = (v19 * v3[4] /*0x6b5c75*/
             + v18[0xFFFFFFFF] * v3[3]
             + v3[2] * *v18
             + v18[1] * v3[1]
             + v18[2] * *v3
             + v18[3] * v3[0xF]
             + v18[4] * v3[0xE]
             + v18[5] * v3[0xD]
             + v18[6] * v3[0xC]
             + v18[7] * v3[0xB]
             + v18[8] * v3[0xA]
             + v18[9] * v3[9]
             + v18[0xA] * v3[8]
             + v18[0xB] * v3[7]
             + v18[0xC] * v3[6]
             + v18[0xD] * v3[5])
            * *(this + 0x423);
        *(_WORD *)(a2[1] + 2 * *a2) = sub_6B57E0(v57); /*0x6b5c8b*/
        v18 += 0x10; /*0x6b5c9d*/
        v3 += 0x10; /*0x6b5ca0*/
        v7 = v73-- == 1; /*0x6b5ca3*/
        *a2 = (*a2 + 1) % 0x480; /*0x6b5ca8*/
      }
      while ( !v7 ); /*0x6b5cab*/
      break; /*0x6b5cab*/
    case 5: /*0x6b585c*/
      v21 = (float *)&unk_A77C20; /*0x6b5cbd*/
      v74 = 0x20; /*0x6b5cc2*/
      do /*0x6b5d8b*/
      {
        v22 = v21[0xFFFFFFFE]; /*0x6b5cd0*/
        v58 = (v22 * v3[5] /*0x6b5d55*/
             + v21[0xFFFFFFFF] * v3[4]
             + v3[3] * *v21
             + v21[1] * v3[2]
             + v21[2] * v3[1]
             + v21[3] * *v3
             + v21[4] * v3[0xF]
             + v21[5] * v3[0xE]
             + v21[6] * v3[0xD]
             + v21[7] * v3[0xC]
             + v21[8] * v3[0xB]
             + v21[9] * v3[0xA]
             + v21[0xA] * v3[9]
             + v21[0xB] * v3[8]
             + v21[0xC] * v3[7]
             + v21[0xD] * v3[6])
            * *(this + 0x423);
        *(_WORD *)(a2[1] + 2 * *a2) = sub_6B57E0(v58); /*0x6b5d6b*/
        v21 += 0x10; /*0x6b5d7d*/
        v3 += 0x10; /*0x6b5d80*/
        v7 = v74-- == 1; /*0x6b5d83*/
        *a2 = (*a2 + 1) % 0x480; /*0x6b5d88*/
      }
      while ( !v7 ); /*0x6b5d8b*/
      break; /*0x6b5d8b*/
    case 6: /*0x6b585c*/
      v24 = (float *)&unk_A77C20; /*0x6b5d9d*/
      v75 = 0x20; /*0x6b5da2*/
      do /*0x6b5e6b*/
      {
        v25 = v24[0xFFFFFFFE]; /*0x6b5db0*/
        v59 = (v25 * v3[6] /*0x6b5e35*/
             + v24[0xFFFFFFFF] * v3[5]
             + v3[4] * *v24
             + v24[1] * v3[3]
             + v24[2] * v3[2]
             + v24[3] * v3[1]
             + v24[4] * *v3
             + v24[5] * v3[0xF]
             + v24[6] * v3[0xE]
             + v24[7] * v3[0xD]
             + v24[8] * v3[0xC]
             + v24[9] * v3[0xB]
             + v24[0xA] * v3[0xA]
             + v24[0xB] * v3[9]
             + v24[0xC] * v3[8]
             + v24[0xD] * v3[7])
            * *(this + 0x423);
        *(_WORD *)(a2[1] + 2 * *a2) = sub_6B57E0(v59); /*0x6b5e4b*/
        v24 += 0x10; /*0x6b5e5d*/
        v3 += 0x10; /*0x6b5e60*/
        v7 = v75-- == 1; /*0x6b5e63*/
        *a2 = (*a2 + 1) % 0x480; /*0x6b5e68*/
      }
      while ( !v7 ); /*0x6b5e6b*/
      break; /*0x6b5e6b*/
    case 7: /*0x6b585c*/
      v27 = (float *)&unk_A77C20; /*0x6b5e7d*/
      v76 = 0x20; /*0x6b5e82*/
      do /*0x6b5f4b*/
      {
        v28 = v27[0xFFFFFFFE]; /*0x6b5e90*/
        v60 = (v28 * v3[7] /*0x6b5f15*/
             + v27[0xFFFFFFFF] * v3[6]
             + v3[5] * *v27
             + v27[1] * v3[4]
             + v27[2] * v3[3]
             + v27[3] * v3[2]
             + v27[4] * v3[1]
             + v27[5] * *v3
             + v27[6] * v3[0xF]
             + v27[7] * v3[0xE]
             + v27[8] * v3[0xD]
             + v27[9] * v3[0xC]
             + v27[0xA] * v3[0xB]
             + v27[0xB] * v3[0xA]
             + v27[0xC] * v3[9]
             + v27[0xD] * v3[8])
            * *(this + 0x423);
        *(_WORD *)(a2[1] + 2 * *a2) = sub_6B57E0(v60); /*0x6b5f2b*/
        v27 += 0x10; /*0x6b5f3d*/
        v3 += 0x10; /*0x6b5f40*/
        v7 = v76-- == 1; /*0x6b5f43*/
        *a2 = (*a2 + 1) % 0x480; /*0x6b5f48*/
      }
      while ( !v7 ); /*0x6b5f4b*/
      break; /*0x6b5f4b*/
    case 8: /*0x6b585c*/
      v30 = (float *)&unk_A77C20; /*0x6b5f5d*/
      v77 = 0x20; /*0x6b5f62*/
      do /*0x6b602b*/
      {
        v31 = v30[0xFFFFFFFE]; /*0x6b5f70*/
        v61 = (v31 * v3[8] /*0x6b5ff5*/
             + v30[0xFFFFFFFF] * v3[7]
             + v3[6] * *v30
             + v30[1] * v3[5]
             + v30[2] * v3[4]
             + v30[3] * v3[3]
             + v30[4] * v3[2]
             + v30[5] * v3[1]
             + v30[6] * *v3
             + v30[7] * v3[0xF]
             + v30[8] * v3[0xE]
             + v30[9] * v3[0xD]
             + v30[0xA] * v3[0xC]
             + v30[0xB] * v3[0xB]
             + v30[0xC] * v3[0xA]
             + v30[0xD] * v3[9])
            * *(this + 0x423);
        *(_WORD *)(a2[1] + 2 * *a2) = sub_6B57E0(v61); /*0x6b600b*/
        v30 += 0x10; /*0x6b601d*/
        v3 += 0x10; /*0x6b6020*/
        v7 = v77-- == 1; /*0x6b6023*/
        *a2 = (*a2 + 1) % 0x480; /*0x6b6028*/
      }
      while ( !v7 ); /*0x6b602b*/
      break; /*0x6b602b*/
    case 9: /*0x6b585c*/
      v33 = (float *)&unk_A77C20; /*0x6b603d*/
      v78 = 0x20; /*0x6b6042*/
      do /*0x6b610b*/
      {
        v34 = v33[0xFFFFFFFE]; /*0x6b6050*/
        v62 = (v34 * v3[9] /*0x6b60d5*/
             + v33[0xFFFFFFFF] * v3[8]
             + v3[7] * *v33
             + v33[1] * v3[6]
             + v33[2] * v3[5]
             + v33[3] * v3[4]
             + v33[4] * v3[3]
             + v33[5] * v3[2]
             + v33[6] * v3[1]
             + v33[7] * *v3
             + v33[8] * v3[0xF]
             + v33[9] * v3[0xE]
             + v33[0xA] * v3[0xD]
             + v33[0xB] * v3[0xC]
             + v33[0xC] * v3[0xB]
             + v33[0xD] * v3[0xA])
            * *(this + 0x423);
        *(_WORD *)(a2[1] + 2 * *a2) = sub_6B57E0(v62); /*0x6b60eb*/
        v33 += 0x10; /*0x6b60fd*/
        v3 += 0x10; /*0x6b6100*/
        v7 = v78-- == 1; /*0x6b6103*/
        *a2 = (*a2 + 1) % 0x480; /*0x6b6108*/
      }
      while ( !v7 ); /*0x6b610b*/
      break; /*0x6b610b*/
    case 0xA: /*0x6b585c*/
      v36 = (float *)&unk_A77C20; /*0x6b611d*/
      v79 = 0x20; /*0x6b6122*/
      do /*0x6b61eb*/
      {
        v37 = v36[0xFFFFFFFE]; /*0x6b6130*/
        v63 = (v37 * v3[0xA] /*0x6b61b5*/
             + v36[0xFFFFFFFF] * v3[9]
             + v3[8] * *v36
             + v36[1] * v3[7]
             + v36[2] * v3[6]
             + v36[3] * v3[5]
             + v36[4] * v3[4]
             + v36[5] * v3[3]
             + v36[6] * v3[2]
             + v36[7] * v3[1]
             + v36[8] * *v3
             + v36[9] * v3[0xF]
             + v36[0xA] * v3[0xE]
             + v36[0xB] * v3[0xD]
             + v36[0xC] * v3[0xC]
             + v36[0xD] * v3[0xB])
            * *(this + 0x423);
        *(_WORD *)(a2[1] + 2 * *a2) = sub_6B57E0(v63); /*0x6b61cb*/
        v36 += 0x10; /*0x6b61dd*/
        v3 += 0x10; /*0x6b61e0*/
        v7 = v79-- == 1; /*0x6b61e3*/
        *a2 = (*a2 + 1) % 0x480; /*0x6b61e8*/
      }
      while ( !v7 ); /*0x6b61eb*/
      break; /*0x6b61eb*/
    case 0xB: /*0x6b585c*/
      v39 = (float *)&unk_A77C20; /*0x6b61fd*/
      v80 = 0x20; /*0x6b6202*/
      do /*0x6b62cb*/
      {
        v40 = v39[0xFFFFFFFE]; /*0x6b6210*/
        v64 = (v40 * v3[0xB] /*0x6b6295*/
             + v39[0xFFFFFFFF] * v3[0xA]
             + v3[9] * *v39
             + v39[1] * v3[8]
             + v39[2] * v3[7]
             + v39[3] * v3[6]
             + v39[4] * v3[5]
             + v39[5] * v3[4]
             + v39[6] * v3[3]
             + v39[7] * v3[2]
             + v39[8] * v3[1]
             + v39[9] * *v3
             + v39[0xA] * v3[0xF]
             + v39[0xB] * v3[0xE]
             + v39[0xC] * v3[0xD]
             + v39[0xD] * v3[0xC])
            * *(this + 0x423);
        *(_WORD *)(a2[1] + 2 * *a2) = sub_6B57E0(v64); /*0x6b62ab*/
        v39 += 0x10; /*0x6b62bd*/
        v3 += 0x10; /*0x6b62c0*/
        v7 = v80-- == 1; /*0x6b62c3*/
        *a2 = (*a2 + 1) % 0x480; /*0x6b62c8*/
      }
      while ( !v7 ); /*0x6b62cb*/
      break; /*0x6b62cb*/
    case 0xC: /*0x6b585c*/
      v42 = (float *)&unk_A77C20; /*0x6b62dd*/
      v81 = 0x20; /*0x6b62e2*/
      do /*0x6b63ab*/
      {
        v43 = v42[0xFFFFFFFE]; /*0x6b62f0*/
        v65 = (v43 * v3[0xC] /*0x6b6375*/
             + v42[0xFFFFFFFF] * v3[0xB]
             + v3[0xA] * *v42
             + v42[1] * v3[9]
             + v42[2] * v3[8]
             + v42[3] * v3[7]
             + v42[4] * v3[6]
             + v42[5] * v3[5]
             + v42[6] * v3[4]
             + v42[7] * v3[3]
             + v42[8] * v3[2]
             + v42[9] * v3[1]
             + v42[0xA] * *v3
             + v42[0xB] * v3[0xF]
             + v42[0xC] * v3[0xE]
             + v42[0xD] * v3[0xD])
            * *(this + 0x423);
        *(_WORD *)(a2[1] + 2 * *a2) = sub_6B57E0(v65); /*0x6b638b*/
        v42 += 0x10; /*0x6b639d*/
        v3 += 0x10; /*0x6b63a0*/
        v7 = v81-- == 1; /*0x6b63a3*/
        *a2 = (*a2 + 1) % 0x480; /*0x6b63a8*/
      }
      while ( !v7 ); /*0x6b63ab*/
      break; /*0x6b63ab*/
    case 0xD: /*0x6b585c*/
      v45 = (float *)&unk_A77C20; /*0x6b63bd*/
      v82 = 0x20; /*0x6b63c2*/
      do /*0x6b648b*/
      {
        v46 = v45[0xFFFFFFFE]; /*0x6b63d0*/
        v66 = (v46 * v3[0xD] /*0x6b6455*/
             + v45[0xFFFFFFFF] * v3[0xC]
             + v3[0xB] * *v45
             + v45[1] * v3[0xA]
             + v45[2] * v3[9]
             + v45[3] * v3[8]
             + v45[4] * v3[7]
             + v45[5] * v3[6]
             + v45[6] * v3[5]
             + v45[7] * v3[4]
             + v45[8] * v3[3]
             + v45[9] * v3[2]
             + v45[0xA] * v3[1]
             + v45[0xB] * *v3
             + v45[0xC] * v3[0xF]
             + v45[0xD] * v3[0xE])
            * *(this + 0x423);
        *(_WORD *)(a2[1] + 2 * *a2) = sub_6B57E0(v66); /*0x6b646b*/
        v45 += 0x10; /*0x6b647d*/
        v3 += 0x10; /*0x6b6480*/
        v7 = v82-- == 1; /*0x6b6483*/
        *a2 = (*a2 + 1) % 0x480; /*0x6b6488*/
      }
      while ( !v7 ); /*0x6b648b*/
      break; /*0x6b648b*/
    case 0xE: /*0x6b585c*/
      v48 = (float *)&unk_A77C20; /*0x6b649d*/
      v83 = 0x20; /*0x6b64a2*/
      do /*0x6b656b*/
      {
        v49 = v48[0xFFFFFFFE]; /*0x6b64b0*/
        v67 = (v49 * v3[0xE] /*0x6b6535*/
             + v48[0xFFFFFFFF] * v3[0xD]
             + v3[0xC] * *v48
             + v48[1] * v3[0xB]
             + v48[2] * v3[0xA]
             + v48[3] * v3[9]
             + v48[4] * v3[8]
             + v48[5] * v3[7]
             + v48[6] * v3[6]
             + v48[7] * v3[5]
             + v48[8] * v3[4]
             + v48[9] * v3[3]
             + v48[0xA] * v3[2]
             + v48[0xB] * v3[1]
             + v48[0xC] * *v3
             + v48[0xD] * v3[0xF])
            * *(this + 0x423);
        *(_WORD *)(a2[1] + 2 * *a2) = sub_6B57E0(v67); /*0x6b654b*/
        v48 += 0x10; /*0x6b655d*/
        v3 += 0x10; /*0x6b6560*/
        v7 = v83-- == 1; /*0x6b6563*/
        *a2 = (*a2 + 1) % 0x480; /*0x6b6568*/
      }
      while ( !v7 ); /*0x6b656b*/
      break; /*0x6b656b*/
    case 0xF: /*0x6b585c*/
      v51 = (float *)&unk_A77C20; /*0x6b657d*/
      v84 = 0x20; /*0x6b6582*/
      do /*0x6b664b*/
      {
        v52 = v51[0xFFFFFFFE]; /*0x6b6590*/
        v68 = (v52 * v3[0xF] /*0x6b6615*/
             + v51[0xFFFFFFFF] * v3[0xE]
             + v3[0xD] * *v51
             + v51[1] * v3[0xC]
             + v51[2] * v3[0xB]
             + v51[3] * v3[0xA]
             + v51[4] * v3[9]
             + v51[5] * v3[8]
             + v51[6] * v3[7]
             + v51[7] * v3[6]
             + v51[8] * v3[5]
             + v51[9] * v3[4]
             + v51[0xA] * v3[3]
             + v51[0xB] * v3[2]
             + v51[0xC] * v3[1]
             + v51[0xD] * *v3)
            * *(this + 0x423);
        *(_WORD *)(a2[1] + 2 * *a2) = sub_6B57E0(v68); /*0x6b662b*/
        v51 += 0x10; /*0x6b663d*/
        v3 += 0x10; /*0x6b6640*/
        v7 = v84-- == 1; /*0x6b6643*/
        *a2 = (*a2 + 1) % 0x480; /*0x6b6648*/
      }
      while ( !v7 ); /*0x6b664b*/
      def_6B585C(v84); /*0x6b6652*/
      break; /*0x6b6652*/
    default:
      JUMPOUT(0x6B6653); /*0x6b6653*/
  }
}
