void __cdecl DrawGrass(
        TESObjectCELL *a1,
        int a2,
        int a3,
        int a4,
        float a5,
        float a6,
        float a7,
        int a8,
        float a9,
        float a10,
        float a11)
{
  int v11; // ebx
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
  int v25; // eax
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
  int v47; // eax
  unsigned int v48; // eax
  int v49; // edi
  int v50; // [esp+1Ch] [ebp-C8h]
  int v51; // [esp+20h] [ebp-C4h]
  int v52; // [esp+24h] [ebp-C0h]
  int v53; // [esp+28h] [ebp-BCh]
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
  int v70; // [esp+4Ch] [ebp-98h]
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
  int v85; // [esp+88h] [ebp-5Ch]
  int v86; // [esp+8Ch] [ebp-58h]
  int v87; // [esp+90h] [ebp-54h]
  int XCoordinate; // [esp+94h] [ebp-50h]
  int v89; // [esp+98h] [ebp-4Ch]
  int v90; // [esp+9Ch] [ebp-48h]
  int v91; // [esp+A0h] [ebp-44h]
  int v92; // [esp+A4h] [ebp-40h]
  int v93; // [esp+A8h] [ebp-3Ch]
  int v94; // [esp+ACh] [ebp-38h]
  int v95; // [esp+B0h] [ebp-34h]
  int v96; // [esp+B4h] [ebp-30h]
  int v97; // [esp+B8h] [ebp-2Ch]
  int v98; // [esp+BCh] [ebp-28h]
  int v99[3]; // [esp+C0h] [ebp-24h] BYREF
  float v100[3]; // [esp+CCh] [ebp-18h] BYREF
  float v101[3]; // [esp+D8h] [ebp-Ch] BYREF
  float v102; // [esp+114h] [ebp+30h]

  if ( byte_B360A4 )
    return;
  v11 = dword_B35BF0;
  v12 = a1;
  v13 = 0;
  v14 = dword_B35BF0 << 7;
  v86 = 0;
  *(_DWORD *)v81 = 0;
  v80[0] = 0;
  v83[0] = 0;
  v73 = *(float *)&v11;
  v89 = v14;
  v82 = 8;
  if ( !a1 || !TESObjectCELL_GetWorldSpace(a1) || !sub_4CE3C0(a1) )
    return;
  *(float *)&v90 = TESObjectCELL_GetWaterHeight((ExtraDataList *)a1);
  v74 = (int)sub_4CE3C0(a1);
  XCoordinate = TESObjectCELL_GetXCoordinate(a1);
  v75 = a6;
  YCoordinate = TESObjectCELL_GetYCoordinate(a1);
  v76 = a7;
  sub_499020(&v75);
  v72 = 0;
  v102 = a11 + a11;
  while ( 2 )
  {
    v15 = sub_441800(v12, v13, 0);
    if ( !v15 )
      goto LABEL_41;
    sub_4C0530((TESObjectCELL **)v74, (float *)v99, 0, 0, 0, 0);
    v16 = *(float *)(v15 + 0x24);
    v17 = *(_DWORD *)(v15 + 0x28);
    v95 = *(int *)(v15 + 0x20);
    v18 = *(float *)(v15 + 0x2C);
    v96 = LODWORD(v16);
    *(float *)&v91 = *(float *)&a3 - *(float *)&v95;
    v97 = v17;
    v98 = LODWORD(v18);
    *(float *)&v92 = *(float *)&a4 - v16;
    *(float *)&v69 = *(float *)&v92 * *(float *)&v92 + *(float *)&v91 * *(float *)&v91;
    *(float *)&v69 = sqrt(*(float *)&v69);
    v70 = v11;
    *(float *)&v69 = *(float *)&v69 - v18;
    if ( a10 <= (double)*(float *)&v69 )
    {
      if ( v11 < 0x10 )
      {
        v40 = 0x22 * v11;
        v41 = 0x11 * v11;
        for ( i = 0x11 * v11; ; v41 = i )
        {
          v42 = v11;
          v43 = v41 + v70;
          do
          {
            v44 = sub_4C0530((TESObjectCELL **)v74, v100, v72, v43, 0, 0);
            v45 = v44[1];
            v64 = *(int *)v44;
            v46 = dbl_A3B1B8;
            *(float *)&v64 = *(float *)&v64 - v46;
            *(float *)&v65 = v45 - v46;
            v47 = sub_7C2990(*(float *)&v64, *(float *)&v65);
            sub_7C3980(v47);
            v42 += 2 * LODWORD(v73);
            v43 += v40;
          }
          while ( v42 < 0x10 );
          *(float *)&v11 = v73;
          v70 += 2 * LODWORD(v73);
          if ( v70 >= 0x10 )
            break;
        }
        v13 = v72;
      }
      goto LABEL_41;
    }
    if ( v11 >= 0x10 )
      goto LABEL_41;
    v87 = 0x22 * v11;
    v19 = 0x11 * v11;
    i = 0x11 * v11;
    while ( 2 )
    {
      v69 = v11;
      v77 = v70 + v19;
      do
      {
        v20 = sub_4C0530((TESObjectCELL **)v74, v101, v13, v77, 0, 0);
        v21 = v20[1];
        v64 = *(int *)v20;
        v22 = v20[2];
        *(float *)&v65 = v21;
        v23 = *(float *)&v64;
        v66 = v22;
        v71 = *(float *)&a3 - *(float *)&v64;
        v54 = *(float *)&a4 - v21;
        if ( v54 * v54 + v71 * v71 <= dbl_A47B18 )
        {
          v26 = v21;
        }
        else
        {
          v78 = (float)v89;
          *(float *)&v93 = v78 - *(float *)&a3;
          *(float *)&v94 = v78 - *(float *)&a4;
          v71 = v23 + *(float *)&v93;
          v67 = v71;
          v61 = v21 + *(float *)&v94;
          v68 = v61;
          sub_499020(&v67);
          v55 = v68 * v76 + v67 * v75;
          v56 = acos(v55);
          if ( v102 < (double)v56 )
          {
            v57 = *(float *)&v64 - v78 - *(float *)&a3;
            v67 = v57;
            v68 = v61;
            sub_499020(&v67);
            v62 = v68 * v76 + v67 * v75;
            v61 = acos(v62);
            if ( v102 < (double)v61 )
            {
              v67 = v71;
              v71 = *(float *)&v65 - v78 - *(float *)&a4;
              v68 = v71;
              sub_499020(&v67);
              v63 = v68 * v76 + v67 * v75;
              v61 = acos(v63);
              if ( v102 < (double)v61 )
              {
                v67 = v57;
                v68 = v71;
                sub_499020(&v67);
                v58 = v68 * v76 + v67 * v75;
                v59 = acos(v58);
                if ( v102 < (double)v59 )
                {
                  v24 = dbl_A3B1B8;
                  *(float *)&v64 = *(float *)&v64 - v24;
                  *(float *)&v65 = *(float *)&v65 - v24;
                  v66 = a5;
                  v25 = sub_7C2990(*(float *)&v64, *(float *)&v65);
                  sub_7C3980(v25);
                  goto LABEL_31;
                }
              }
            }
          }
          v26 = *(float *)&v65;
          v23 = *(float *)&v64;
        }
        v27 = v23 - dbl_A3B1B8;
        v28 = dbl_A3B1B8;
        *(float *)&v64 = v27;
        *(float *)&v65 = v26 - v28;
        v60 = sub_7C2990(*(float *)&v64, *(float *)&v65);
        v29 = sub_4C1030((_DWORD *)v74, v13, v77);
        v30 = 0;
        if ( v29 )
        {
          while ( v30 < 0x10 )
          {
            v31 = *(_DWORD **)(v29 + 4 * v30);
            if ( !v31 || !*v31 )
              break;
            if ( !sub_7C2EC0(v31[1], v60) )
            {
              v32 = TESDataHandler_LookupFormByID(*(TESForm **)(*(_DWORD *)(v29 + 4 * v30) + 4));
              v33 = v32;
              if ( v32 )
              {
                v34 = ((unsigned __int16 (__thiscall *)(TESForm *))v32->vtbl[1].Unk_19)(v32);
                DoPostFixup = v33->vtbl[1].DoPostFixup;
                *(_DWORD *)v81 = v34;
                v36 = ((int (__thiscall *)(TESForm *))DoPostFixup)(v33);
                vtbl = v33->vtbl;
                v82 = v36;
                v38 = ((int (__thiscall *)(TESForm *))vtbl[1].LoadGame)(v33);
                v39 = v33->vtbl;
                v83[0] = v38;
                v80[0] = ((int (__thiscall *)(TESForm *))v39[1].GetSaveSize)(v33);
              }
              sub_4EA8A0(
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
                v90,
                *(int *)v80,
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
                v75,
                SLODWORD(v76),
                v77,
                SLODWORD(v78),
                i,
                *(int *)v80,
                *(int *)v81,
                v82,
                *(int *)v83,
                YCoordinate,
                v85,
                v86,
                v87,
                XCoordinate,
                v89,
                v90,
                v91,
                v92,
                v93,
                v94,
                v95,
                v96,
                v97,
                v98,
                v99[0],
                v99[1]);
            }
            ++v30;
          }
        }
        v13 = v72;
        *(float *)&v11 = v73;
LABEL_31:
        v77 += v87;
        v69 += 2 * v11;
      }
      while ( v69 < 0x10 );
      v70 += 2 * v11;
      if ( v70 < 0x10 )
      {
        v19 = i;
        continue;
      }
      break;
    }
LABEL_41:
    v48 = v86;
    if ( v86 )
    {
      while ( 1 )
      {
        v49 = *(_DWORD *)(v48 + 4);
        FormHeapFree(v48);
        v86 = v49;
        if ( !v49 )
          break;
        v48 = v86;
      }
    }
    v72 = ++v13;
    if ( v13 < 4 )
    {
      v12 = a1;
      continue;
    }
    break;
  }
}
