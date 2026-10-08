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

  if ( *(_DWORD *)a2 ) /*0x55a3b7*/
  {
    v6 = a3; /*0x55a3c1*/
    if ( a3 ) /*0x55a3c7*/
    {
      v7 = a5; /*0x55a3d7*/
      if ( a5 > 0.0 && v7 <= 1.0 ) /*0x55a3eb*/
      {
        if ( *(this + 1) ) /*0x55a3f1*/
        {
          if ( a3 >= *(this + 2) ) /*0x55a400*/
          {
            v80 = *(this + 2); /*0x55a408*/
            v6 = v80; /*0x55a40c*/
          }
          else
          {
            v80 = a3; /*0x55a402*/
          }
          v8 = *(float **)a2; /*0x55a40e*/
          v9 = *(_DWORD *)(a2 + 4); /*0x55a411*/
          v10 = 0; /*0x55a41b*/
          if ( v6 >= 4 ) /*0x55a421*/
          {
            v11 = 0; /*0x55a42f*/
            v12 = ((unsigned int)(v6 - 4) >> 2) + 1; /*0x55a431*/
            v81 = 4 * v12; /*0x55a43b*/
            do /*0x55a60b*/
            {
              v55 = v8[2]; /*0x55a450*/
              v13 = *(this + 1); /*0x55a454*/
              v14 = *(float *)(v13 + v11); /*0x55a457*/
              v15 = v11 + v13; /*0x55a45a*/
              v16 = v11 + 0x24; /*0x55a45e*/
              v65 = v14 * v7; /*0x55a461*/
              v70 = *(float *)(v15 + 4) * v7; /*0x55a46a*/
              v75 = *(float *)(v15 + 8) * v7; /*0x55a473*/
              v41 = v65 + *v8; /*0x55a47f*/
              v17 = v8[1]; /*0x55a487*/
              *v8 = v41; /*0x55a48b*/
              v49 = v17 + v70; /*0x55a491*/
              v8[1] = v49; /*0x55a49d*/
              v56 = v55 + v75; /*0x55a4a4*/
              v8[2] = v56; /*0x55a4ac*/
              v42 = *(float *)((char *)v8 + v9); /*0x55a4b2*/
              v18 = *(float *)((char *)v8 + v9 + 4); /*0x55a4b6*/
              v19 = (float *)((char *)v8 + v9); /*0x55a4ba*/
              v50 = v18; /*0x55a4bc*/
              v57 = v19[2]; /*0x55a4c3*/
              v20 = *(this + 1); /*0x55a4c7*/
              v21 = *(float *)(v11 + v20 + 0xC); /*0x55a4ca*/
              v22 = v11 + v20 + 0xC; /*0x55a4ce*/
              v66 = v21 * v7; /*0x55a4d4*/
              v71 = *(float *)(v22 + 4) * v7; /*0x55a4dd*/
              v76 = *(float *)(v22 + 8) * v7; /*0x55a4e6*/
              v43 = v66 + v42; /*0x55a4f2*/
              *v19 = v43; /*0x55a4fe*/
              v51 = v50 + v71; /*0x55a504*/
              v19[1] = v51; /*0x55a510*/
              v58 = v57 + v76; /*0x55a517*/
              v19[2] = v58; /*0x55a51f*/
              v23 = *(float *)((char *)v19 + v9); /*0x55a522*/
              v24 = (float *)((char *)v19 + v9); /*0x55a525*/
              v44 = v23; /*0x55a527*/
              v59 = v24[2]; /*0x55a535*/
              v25 = *(this + 1); /*0x55a539*/
              v26 = *(float *)(v11 + 0x24 + v25 - 0xC); /*0x55a53c*/
              v27 = v11 + 0x24 + v25 - 0xC; /*0x55a540*/
              v67 = v26 * v7; /*0x55a546*/
              v72 = *(float *)(v27 + 4) * v7; /*0x55a54f*/
              v11 += 0x30; /*0x55a556*/
              v77 = *(float *)(v27 + 8) * v7; /*0x55a55b*/
              v45 = v67 + v44; /*0x55a567*/
              v28 = v24[1]; /*0x55a56f*/
              *v24 = v45; /*0x55a573*/
              v52 = v28 + v72; /*0x55a579*/
              v24[1] = v52; /*0x55a585*/
              v60 = v59 + v77; /*0x55a58c*/
              v24[2] = v60; /*0x55a594*/
              v29 = *(float *)((char *)v24 + v9); /*0x55a597*/
              v30 = (float *)((char *)v24 + v9); /*0x55a59a*/
              v46 = v29; /*0x55a59c*/
              v61 = v30[2]; /*0x55a5aa*/
              v31 = *(this + 1); /*0x55a5ae*/
              v32 = *(float *)(v31 + v16); /*0x55a5b1*/
              v33 = v16 + v31; /*0x55a5b4*/
              v68 = v32 * v7; /*0x55a5b8*/
              v73 = *(float *)(v33 + 4) * v7; /*0x55a5c1*/
              v78 = *(float *)(v33 + 8) * v7; /*0x55a5ca*/
              v47 = v68 + v46; /*0x55a5d6*/
              v34 = v30[1]; /*0x55a5de*/
              *v30 = v47; /*0x55a5e2*/
              v53 = v34 + v73; /*0x55a5e8*/
              v30[1] = v53; /*0x55a5f4*/
              v62 = v61 + v78; /*0x55a5fb*/
              v30[2] = v62; /*0x55a603*/
              v8 = (float *)((char *)v30 + v9); /*0x55a606*/
              --v12; /*0x55a608*/
            }
            while ( v12 ); /*0x55a60b*/
            v10 = v81; /*0x55a611*/
            v6 = v80; /*0x55a617*/
          }
          if ( v10 < v6 ) /*0x55a61e*/
          {
            v35 = 0xC * v10; /*0x55a625*/
            v36 = v6 - v10; /*0x55a627*/
            do /*0x55a69d*/
            {
              v63 = v8[2]; /*0x55a639*/
              v37 = *(this + 1); /*0x55a63d*/
              v38 = *(float *)(v37 + v35); /*0x55a640*/
              v39 = v35 + v37; /*0x55a643*/
              v35 += 0xC; /*0x55a647*/
              v69 = v38 * v7; /*0x55a64a*/
              v74 = *(float *)(v39 + 4) * v7; /*0x55a653*/
              v79 = *(float *)(v39 + 8) * v7; /*0x55a65c*/
              v48 = v69 + *v8; /*0x55a668*/
              v40 = v8[1]; /*0x55a670*/
              *v8 = v48; /*0x55a674*/
              v54 = v40 + v74; /*0x55a67a*/
              v8[1] = v54; /*0x55a686*/
              v64 = v63 + v79; /*0x55a68d*/
              v8[2] = v64; /*0x55a695*/
              v8 = (float *)((char *)v8 + v9); /*0x55a698*/
              --v36; /*0x55a69a*/
            }
            while ( v36 ); /*0x55a69d*/
          }
        }
      }
    }
  }
}
