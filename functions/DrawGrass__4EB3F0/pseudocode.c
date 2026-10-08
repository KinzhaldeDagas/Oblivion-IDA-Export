void __cdecl DrawGrass(
        TESObjectCELL *a1,
        int a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        int a8,
        float a9,
        int a10,
        float a11)
{
  float v11; // ebx
  TESObjectCELL *v12; // edi
  int v13; // esi
  int v14; // eax
  int v15; // edi
  float v16; // eax
  int v17; // ecx
  float v18; // edx
  int v19; // eax
  float *v20; // eax
  float v21; // edx
  float v22; // edi
  double v23; // st6
  double v24; // rt0
  TESObjectCELL *v25; // eax
  double v26; // st7
  double v27; // st5
  double v28; // st6
  signed int v29; // ebx
  int v30; // edi
  _DWORD *v31; // eax
  TESForm *v32; // eax
  TESForm *v33; // esi
  int v34; // ecx
  void (__thiscall *DoPostFixup)(TESForm *); // eax
  int v36; // eax
  TESFormVtbl *vtbl; // edx
  char v38; // al
  TESFormVtbl *v39; // edx
  __int16 v40; // si
  __int16 v41; // ax
  int v42; // edi
  unsigned __int16 v43; // bx
  float *v44; // eax
  float v45; // edx
  double v46; // rt2
  TESObjectCELL *v47; // eax
  unsigned int v48; // eax
  unsigned int v49; // edi
  int v50; // [esp+1Ch] [ebp-C8h]
  float v51; // [esp+20h] [ebp-C4h]
  float v52; // [esp+24h] [ebp-C0h]
  float v53; // [esp+28h] [ebp-BCh]
  float v54; // [esp+2Ch] [ebp-B8h]
  float v55; // [esp+2Ch] [ebp-B8h]
  float v56; // [esp+2Ch] [ebp-B8h]
  float v57; // [esp+2Ch] [ebp-B8h]
  float v58; // [esp+2Ch] [ebp-B8h]
  float v59; // [esp+2Ch] [ebp-B8h]
  int v60; // [esp+2Ch] [ebp-B8h]
  float v61; // [esp+30h] [ebp-B4h]
  float v62; // [esp+30h] [ebp-B4h]
  float v63; // [esp+30h] [ebp-B4h]
  int v64; // [esp+34h] [ebp-B0h] BYREF
  int v65; // [esp+38h] [ebp-ACh]
  float v66; // [esp+3Ch] [ebp-A8h]
  float v67; // [esp+40h] [ebp-A4h] BYREF
  float v68; // [esp+44h] [ebp-A0h]
  int v69; // [esp+48h] [ebp-9Ch]
  float v70; // [esp+4Ch] [ebp-98h]
  float v71; // [esp+50h] [ebp-94h]
  int v72; // [esp+54h] [ebp-90h]
  float v73; // [esp+58h] [ebp-8Ch]
  int v74; // [esp+5Ch] [ebp-88h]
  float v75; // [esp+60h] [ebp-84h] BYREF
  float v76; // [esp+64h] [ebp-80h]
  int v77; // [esp+68h] [ebp-7Ch]
  float v78; // [esp+6Ch] [ebp-78h]
  int i; // [esp+70h] [ebp-74h]
  char v80[4]; // [esp+74h] [ebp-70h]
  __int16 v81[2]; // [esp+78h] [ebp-6Ch]
  int v82; // [esp+7Ch] [ebp-68h]
  char v83[4]; // [esp+80h] [ebp-64h]
  int YCoordinate; // [esp+84h] [ebp-60h]
  unsigned int v85; // [esp+8Ch] [ebp-58h]
  int v86; // [esp+90h] [ebp-54h]
  int XCoordinate; // [esp+94h] [ebp-50h]
  int v88; // [esp+98h] [ebp-4Ch]
  int v89; // [esp+9Ch] [ebp-48h]
  float v90; // [esp+A0h] [ebp-44h]
  float v91; // [esp+A4h] [ebp-40h]
  float v92; // [esp+A8h] [ebp-3Ch]
  float v93; // [esp+ACh] [ebp-38h]
  float v94; // [esp+B0h] [ebp-34h]
  float v95; // [esp+B4h] [ebp-30h]
  int v96; // [esp+B8h] [ebp-2Ch]
  float v97; // [esp+BCh] [ebp-28h]
  float v98; // [esp+C0h] [ebp-24h] BYREF
  float v99[3]; // [esp+CCh] [ebp-18h] BYREF
  float v100[3]; // [esp+D8h] [ebp-Ch] BYREF
  float v101; // [esp+114h] [ebp+30h]

  if ( unk_B360A4 ) /*0x4eb3fc*/
    return; /*0x4eb3fc*/
  v11 = flt_B35BF0[0]; /*0x4eb40c*/
  v12 = a1; /*0x4eb412*/
  v13 = 0; /*0x4eb415*/
  v14 = LODWORD(flt_B35BF0[0]) << 7; /*0x4eb419*/
  v85 = 0; /*0x4eb41e*/
  *(_DWORD *)v81 = 0; /*0x4eb422*/
  v80[0] = 0; /*0x4eb426*/
  v83[0] = 0; /*0x4eb42b*/
  v73 = v11; /*0x4eb430*/
  v88 = v14; /*0x4eb434*/
  v82 = 8; /*0x4eb438*/
  if ( !a1 || !TESObjectCELL_GetWorldSpace(a1) || !sub_4CE3C0(a1) ) /*0x4eb457*/
    return; /*0x4eb45e*/
  *(float *)&v89 = TESObjectCELL_GetWaterHeight((ExtraDataList *)a1); /*0x4eb46b*/
  v74 = (int)sub_4CE3C0(a1); /*0x4eb47b*/
  XCoordinate = TESObjectCELL_GetXCoordinate(a1); /*0x4eb486*/
  v75 = a6; /*0x4eb492*/
  YCoordinate = TESObjectCELL_GetYCoordinate(a1); /*0x4eb49d*/
  v76 = a7; /*0x4eb4a1*/
  sub_499020(&v75); /*0x4eb4a5*/
  v72 = 0; /*0x4eb4ac*/
  v101 = a11 + a11; /*0x4eb4b5*/
  while ( 2 ) /*0x4eb4c3*/
  {
    v15 = sub_441800(v12, v13, 0); /*0x4eb4c3*/
    if ( !v15 ) /*0x4eb4d1*/
      goto LABEL_41; /*0x4eb4d1*/
    sub_4C0530((TESObjectCELL **)v74, &v98, 0, 0, 0, 0); /*0x4eb4eb*/
    v16 = *(float *)(v15 + 0x24); /*0x4eb4f6*/
    v17 = *(_DWORD *)(v15 + 0x28); /*0x4eb4f9*/
    v94 = *(float *)(v15 + 0x20); /*0x4eb4fc*/
    v18 = *(float *)(v15 + 0x2C); /*0x4eb50a*/
    v95 = v16; /*0x4eb50d*/
    v90 = a3 - v94; /*0x4eb514*/
    v96 = v17; /*0x4eb51b*/
    v97 = v18; /*0x4eb525*/
    v91 = a4 - v16; /*0x4eb533*/
    *(float *)&v69 = v91 * v91 + v90 * v90; /*0x4eb550*/
    *(float *)&v69 = sqrt(*(float *)&v69); /*0x4eb55d*/
    v70 = v11; /*0x4eb565*/
    *(float *)&v69 = *(float *)&v69 - v18; /*0x4eb570*/
    if ( *(float *)&a10 <= (double)*(float *)&v69 ) /*0x4eb582*/
    {
      if ( SLODWORD(v11) < 0x10 ) /*0x4eb9d7*/
      {
        v40 = 0x22 * LOWORD(v11); /*0x4eb9e5*/
        v41 = 0x11 * LOWORD(v11); /*0x4eb9ec*/
        for ( i = 0x11 * LODWORD(v11); ; v41 = i ) /*0x4eb9ee*/
        {
          v42 = LODWORD(v11); /*0x4eb9fc*/
          v43 = v41 + LOWORD(v70); /*0x4eb9fe*/
          do /*0x4eba76*/
          {
            v44 = sub_4C0530((TESObjectCELL **)v74, v99, v72, v43, 0, 0); /*0x4eba17*/
            v45 = v44[1]; /*0x4eba1e*/
            v64 = *(int *)v44; /*0x4eba24*/
            v46 = dbl_A3B1B8; /*0x4eba3b*/
            *(float *)&v64 = *(float *)&v64 - v46; /*0x4eba3f*/
            *(float *)&v65 = v45 - v46; /*0x4eba4d*/
            v47 = (TESObjectCELL *)sub_7C2990(*(float *)&v64, *(float *)&v65); /*0x4eba5b*/
            sub_7C3980(v47); /*0x4eba61*/
            v42 += 2 * LODWORD(v73); /*0x4eba6c*/
            v43 += v40; /*0x4eba71*/
          }
          while ( v42 < 0x10 ); /*0x4eba76*/
          v11 = v73; /*0x4eba80*/
          LODWORD(v70) += 2 * LODWORD(v73); /*0x4eba8b*/
          if ( SLODWORD(v70) >= 0x10 ) /*0x4eba8f*/
            break; /*0x4eba8f*/
        }
        v13 = v72; /*0x4eba95*/
      }
      goto LABEL_41; /*0x4eba95*/
    }
    if ( SLODWORD(v11) >= 0x10 ) /*0x4eb58b*/
      goto LABEL_41; /*0x4eb58b*/
    v86 = 0x22 * LODWORD(v11); /*0x4eb59b*/
    v19 = 0x11 * LODWORD(v11); /*0x4eb5a4*/
    i = 0x11 * LODWORD(v11); /*0x4eb5a6*/
    while ( 2 ) /*0x4eb5b4*/
    {
      *(float *)&v69 = v11; /*0x4eb5b4*/
      v77 = LODWORD(v70) + v19; /*0x4eb5be*/
      do /*0x4eb9b6*/
      {
        v20 = sub_4C0530((TESObjectCELL **)v74, v100, v13, v77, 0, 0); /*0x4eb5d8*/
        v21 = v20[1]; /*0x4eb5e4*/
        v64 = *(int *)v20; /*0x4eb5e7*/
        v22 = v20[2]; /*0x4eb5f1*/
        *(float *)&v65 = v21; /*0x4eb5f6*/
        v23 = *(float *)&v64; /*0x4eb5fa*/
        v66 = v22; /*0x4eb5fc*/
        v71 = a3 - *(float *)&v64; /*0x4eb600*/
        v54 = a4 - v21; /*0x4eb613*/
        if ( v54 * v54 + v71 * v71 <= dbl_A47B18 ) /*0x4eb632*/
        {
          v26 = v21; /*0x4eb82d*/
        }
        else
        {
          v78 = (float)v88; /*0x4eb640*/
          v92 = v78 - a3; /*0x4eb64e*/
          v93 = v78 - a4; /*0x4eb659*/
          v71 = v23 + v92; /*0x4eb667*/
          v67 = v71; /*0x4eb66f*/
          v61 = v21 + v93; /*0x4eb67a*/
          v68 = v61; /*0x4eb682*/
          sub_499020(&v67); /*0x4eb686*/
          v55 = v68 * v76 + v67 * v75; /*0x4eb69f*/
          v56 = acos(v55); /*0x4eb6ac*/
          if ( v101 < (double)v56 ) /*0x4eb6be*/
          {
            v57 = *(float *)&v64 - v78 - a3; /*0x4eb6d3*/
            v67 = v57; /*0x4eb6db*/
            v68 = v61; /*0x4eb6e3*/
            sub_499020(&v67); /*0x4eb6e7*/
            v62 = v68 * v76 + v67 * v75; /*0x4eb700*/
            v61 = acos(v62); /*0x4eb70d*/
            if ( v101 < (double)v61 ) /*0x4eb71f*/
            {
              v67 = v71; /*0x4eb72d*/
              v71 = *(float *)&v65 - v78 - a4; /*0x4eb73c*/
              v68 = v71; /*0x4eb744*/
              sub_499020(&v67); /*0x4eb748*/
              v63 = v68 * v76 + v67 * v75; /*0x4eb761*/
              v61 = acos(v63); /*0x4eb76e*/
              if ( v101 < (double)v61 ) /*0x4eb780*/
              {
                v67 = v57; /*0x4eb78e*/
                v68 = v71; /*0x4eb796*/
                sub_499020(&v67); /*0x4eb79a*/
                v58 = v68 * v76 + v67 * v75; /*0x4eb7b3*/
                v59 = acos(v58); /*0x4eb7c0*/
                if ( v101 < (double)v59 ) /*0x4eb7d2*/
                {
                  v24 = dbl_A3B1B8; /*0x4eb7e5*/
                  *(float *)&v64 = *(float *)&v64 - v24; /*0x4eb7e7*/
                  *(float *)&v65 = *(float *)&v65 - v24; /*0x4eb7f5*/
                  v66 = a5; /*0x4eb803*/
                  v25 = (TESObjectCELL *)sub_7C2990(*(float *)&v64, *(float *)&v65); /*0x4eb80e*/
                  sub_7C3980(v25); /*0x4eb814*/
                  goto LABEL_31; /*0x4eb81c*/
                }
              }
            }
          }
          v26 = *(float *)&v65; /*0x4eb821*/
          v23 = *(float *)&v64; /*0x4eb825*/
        }
        v27 = v23 - dbl_A3B1B8; /*0x4eb83c*/
        v28 = dbl_A3B1B8; /*0x4eb83c*/
        *(float *)&v64 = v27; /*0x4eb83e*/
        *(float *)&v65 = v26 - v28; /*0x4eb84a*/
        v60 = sub_7C2990(*(float *)&v64, *(float *)&v65); /*0x4eb86a*/
        v29 = sub_4C1030((_DWORD *)v74, v13, v77); /*0x4eb873*/
        v30 = 0; /*0x4eb875*/
        if ( v29 ) /*0x4eb879*/
        {
          while ( v30 < 0x10 ) /*0x4eb883*/
          {
            v31 = *(_DWORD **)(v29 + 4 * v30); /*0x4eb889*/
            if ( !v31 || !*v31 ) /*0x4eb894*/
              break; /*0x4eb894*/
            if ( !sub_7C2EC0(v31[1], v60) ) /*0x4eb8a6*/
            {
              v32 = TESDataHandler_LookupFormByID(*(TESForm **)(*(_DWORD *)(v29 + 4 * v30) + 4)); /*0x4eb8c3*/
              v33 = v32; /*0x4eb8c8*/
              if ( v32 ) /*0x4eb8cc*/
              {
                v34 = ((unsigned __int16 (__thiscall *)(TESForm *))v32->vtbl[1].Unk_19)(v32); /*0x4eb8dc*/
                DoPostFixup = v33->vtbl[1].DoPostFixup; /*0x4eb8df*/
                *(_DWORD *)v81 = v34; /*0x4eb8e5*/
                v36 = ((int (__thiscall *)(TESForm *))DoPostFixup)(v33); /*0x4eb8eb*/
                vtbl = v33->vtbl; /*0x4eb8ed*/
                v82 = v36; /*0x4eb8ef*/
                v38 = ((int (__thiscall *)(TESForm *))vtbl[1].LoadGame)(v33); /*0x4eb8fb*/
                v39 = v33->vtbl; /*0x4eb8fd*/
                v83[0] = v38; /*0x4eb8ff*/
                v80[0] = ((int (__thiscall *)(TESForm *))v39[1].GetSaveSize)(v33); /*0x4eb90d*/
              }
              sub_4EA8A0( /*0x4eb986*/
                XCoordinate,
                YCoordinate,
                v72,
                (TESObjectCELL **)v74,
                v60,
                (float *)&v64,
                a2,
                a3,
                a4,
                a5,
                *(_DWORD *)(v29 + 4 * v30),
                *(_DWORD *)(v29 + 4 * v30) + 0x20,
                a9,
                a10,
                *(int *)v81,
                v82,
                v89,
                *(int ****)v80,
                *(int *)v83,
                v50,
                v51,
                v52,
                v53,
                v60,
                SLODWORD(v61),
                v64,
                v65,
                v66,
                v67,
                v68,
                *(float *)&v69,
                v70,
                v71,
                *(float *)&v72,
                v73,
                *(float *)&v74,
                v75);
            }
            ++v30; /*0x4eb98e*/
          }
        }
        v13 = v72; /*0x4eb996*/
        v11 = v73; /*0x4eb99a*/
LABEL_31:
        v77 += v86; /*0x4eb99e*/
        v69 += 2 * LODWORD(v11); /*0x4eb9b2*/
      }
      while ( v69 < 0x10 ); /*0x4eb9b6*/
      LODWORD(v70) += 2 * LODWORD(v11); /*0x4eb9c5*/
      if ( SLODWORD(v70) < 0x10 ) /*0x4eb9c9*/
      {
        v19 = i; /*0x4eb5b0*/
        continue; /*0x4eb5b0*/
      }
      break;
    }
LABEL_41:
    v48 = v85; /*0x4eba99*/
    if ( v85 ) /*0x4eba9f*/
    {
      while ( 1 ) /*0x4ebaa7*/
      {
        v49 = *(_DWORD *)(v48 + 4); /*0x4ebaa7*/
        FormHeapFree(v48); /*0x4ebaab*/
        v85 = v49; /*0x4ebab5*/
        if ( !v49 ) /*0x4ebab9*/
          break; /*0x4ebab9*/
        v48 = v85; /*0x4ebaa3*/
      }
    }
    v72 = ++v13; /*0x4ebac1*/
    if ( v13 < 4 ) /*0x4ebac5*/
    {
      v12 = a1; /*0x4eb4c0*/
      continue; /*0x4eb4c0*/
    }
    break;
  }
}
