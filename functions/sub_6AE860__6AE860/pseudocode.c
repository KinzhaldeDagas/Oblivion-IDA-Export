int __userpurge sub_6AE860@<eax>(
        int a1@<ecx>,
        int a2@<edi>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        MEF_U32PointerMapEntry32 *position,
        float a7,
        int a8)
{
  bool v9; // zf
  int v10; // eax
  char v11; // bl
  _DWORD *v12; // ecx
  _DWORD *v13; // edi
  int *v14; // eax
  int v15; // ecx
  int v16; // ebp
  double v18; // st4
  double v19; // st4
  int *v20; // eax
  int v21; // edx
  double v22; // rt0
  int v23; // eax
  unsigned int v24; // ebx
  _DWORD *v25; // ebp
  int v26; // edx
  _DWORD *v27; // ecx
  unsigned int v28; // eax
  int v29; // ecx
  double v30; // st7
  double v31; // st6
  int v32; // eax
  _DWORD *v33; // ecx
  unsigned int v34; // eax
  int v35; // ecx
  double v36; // st7
  double v37; // st6
  int v38; // eax
  IDirect3DBaseTexture9 *Texture; // eax
  IDirect3DBaseTexture9 *v40; // ebx
  IDirect3DBaseTexture9Vtbl *lpVtbl; // edx
  char v42; // cl
  float *SafeFloatPointer; // eax
  PlayerCharacter *v44; // ecx
  float v45; // ebx
  TESObjectCELL *DwordAtOffset40; // eax
  __int64 v47; // rax
  Sky *sky; // edx
  double unk0D0; // st7
  double v50; // st7
  double v51; // st6
  _DWORD *v52; // ebp
  float v53; // ecx
  double v54; // st5
  int v55; // ecx
  TESWeather *firstWeather; // eax
  double v57; // st5
  double v58; // st4
  int v59; // eax
  float v60; // ecx
  float v61; // edx
  _DWORD *v62; // ebx
  int v63; // eax
  int v64; // ebp
  int v65; // ecx
  int v66; // eax
  float v67; // ecx
  double v68; // st7
  float v69; // ecx
  void *v70; // eax
  int *v71; // eax
  int *v72; // ebp
  int v73; // eax
  float v74; // ecx
  float *v75; // eax
  float v76; // ecx
  float v77; // edx
  float v78; // eax
  double v79; // st7
  int v80; // eax
  float *v81; // edi
  __int64 v82; // rax
  char v83; // dl
  UInt32 *p_unk6EC; // eax
  float v85; // ebx
  float v86; // ecx
  float v87; // edx
  double v88; // st7
  double v89; // st7
  char v90; // bl
  _DWORD *v91; // ecx
  _DWORD *v92; // ecx
  _DWORD *v93; // edi
  int *v94; // eax
  int v95; // ecx
  int v96; // ebp
  _DWORD *v97; // ecx
  float v98; // [esp+4Ch] [ebp-54h]
  float v99; // [esp+50h] [ebp-50h]
  int v100; // [esp+54h] [ebp-4Ch]
  char v101; // [esp+54h] [ebp-4Ch]
  float v102; // [esp+58h] [ebp-48h]
  void *valueOut; // [esp+68h] [ebp-38h] BYREF
  void *v104; // [esp+6Ch] [ebp-34h] BYREF
  unsigned int keyOut; // [esp+70h] [ebp-30h] BYREF
  char ArgList[4]; // [esp+74h] [ebp-2Ch] BYREF
  float v107; // [esp+78h] [ebp-28h]
  double v108[2]; // [esp+7Ch] [ebp-24h] BYREF
  float v109; // [esp+8Ch] [ebp-14h]
  float v110; // [esp+90h] [ebp-10h]
  float v111; // [esp+94h] [ebp-Ch]
  float v112; // [esp+98h] [ebp-8h]
  float v113; // [esp+9Ch] [ebp-4h]
  float retaddr; // [esp+A0h] [ebp+0h]

  v9 = *(_DWORD *)(a1 + 8) == 0; /*0x6ae869*/
  valueOut = 0; /*0x6ae86c*/
  if ( v9 || !bSoundEnabled_Audio ) /*0x6ae876*/
    return 0; /*0x6ae87d*/
  if ( MEMORY[0xB33428] && (v10 = *(_DWORD *)(MEMORY[0xB33428] + 0x20)) != 0 && v10 != 2 || sub_578FE0() == 0x3EF ) /*0x6ae8a8*/
    v11 = 1; /*0x6ae8aa*/
  else
    v11 = (char)position; /*0x6ae8ae*/
  if ( *(_BYTE *)(a1 + 0xA6) ) /*0x6ae8b2*/
  {
    if ( v11 ) /*0x6ae8cf*/
      sub_6AD030(a1, a2); /*0x6ae8ea*/
    else
      sub_6A9C00(a1); /*0x6ae8d3*/
  }
  else if ( v11 ) /*0x6ae8be*/
  {
    sub_6A9B40(a1); /*0x6ae8c2*/
  }
  *(_BYTE *)(a1 + 0xA6) = v11; /*0x6ae8f2*/
  if ( !v11 ) /*0x6ae8f8*/
  {
    if ( !LOBYTE(a7) ) /*0x6ae9e1*/
    {
      v18 = (double)*(int *)&MEMORY[0xB33E90][0x10]; /*0x6ae9e9*/
      if ( *(int *)&MEMORY[0xB33E90][0x10] < 0 ) /*0x6ae9f1*/
        v18 = v18 + flt_A2FC78; /*0x6ae9f3*/
      a7 = v18; /*0x6ae9ff*/
      v19 = a7; /*0x6aea05*/
      if ( (unsigned int)(Double_To_SInt32(a5) - 1) <= 0x1C ) /*0x6aea26*/
        return 0; /*0x6aea33*/
      position = (MEF_U32PointerMapEntry32 *)(LOWORD(a7) | 0xC00); /*0x6aea44*/
      *(_QWORD *)((char *)v108 + 4) = (__int64)v19; /*0x6aea4c*/
      *(_DWORD *)(a1 + 0xCC) = (__int64)v19; /*0x6aea54*/
    }
    goto LABEL_36; /*0x6aea54*/
  }
  if ( LOBYTE(a7) ) /*0x6ae903*/
  {
LABEL_36:
    v20 = *(int **)(a1 + 0x78); /*0x6aea5e*/
    v21 = *v20; /*0x6aea74*/
    v22 = dbl_A77238; /*0x6aea76*/
    a7 = *(float *)(a1 + 0x84) / v22; /*0x6aea78*/
    v99 = a7; /*0x6aea80*/
    a7 = *(float *)(a1 + 0x88) / v22; /*0x6aea8c*/
    v98 = a7; /*0x6aea94*/
    a7 = *(float *)(a1 + 0x80) / v22; /*0x6aea9e*/
    (*(void (__userpurge **)(int *, _DWORD, _DWORD, _DWORD, int, int, double@<st0>, double@<st1>, double@<st2>))(v21 + 0x38))( /*0x6aeaad*/
      v20,
      LODWORD(a7),
      LODWORD(v98),
      LODWORD(v99),
      1,
      a2,
      a5,
      a4,
      a3);
    (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))(**(_DWORD **)(a1 + 0x78) + 0x34))( /*0x6aeaf8*/
      *(_DWORD *)(a1 + 0x78),
      *(float *)(a1 + 0x8C),
      *(float *)(a1 + 0x94),
      *(float *)(a1 + 0x90),
      *(float *)(a1 + 0x98),
      *(float *)(a1 + 0xA0),
      *(float *)(a1 + 0x9C),
      1);
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 0x78) + 0x44))(*(_DWORD *)(a1 + 0x78)); /*0x6aeb03*/
    sub_6AA730((float *)a1); /*0x6aeb07*/
    v23 = *(_DWORD *)(a1 + 0x308); /*0x6aeb0c*/
    if ( *(_DWORD *)(v23 + 0xC) ) /*0x6aeb12*/
    {
      keyOut = *(unsigned int *)(v23 + 4); /*0x6aeb20*/
      v24 = keyOut; /*0x6aeb1b*/
      if ( *(float *)&keyOut != 0.0 ) /*0x6aeb24*/
      {
        while ( 1 ) /*0x6aeb33*/
        {
          v25 = *(_DWORD **)(v24 + 8); /*0x6aeb33*/
          a7 = *(float *)(v24 + 4); /*0x6aeb36*/
          if ( *v25 == 3 ) /*0x6aeb40*/
          {
            v38 = v25[2]; /*0x6aed41*/
            if ( v38 >= 0 ) /*0x6aed46*/
            {
              if ( *(_DWORD *)&MEMORY[0xB33E90][0x10] >= (unsigned int)(v38 - 0x14) ) /*0x6aed61*/
              {
                a2 = (int)sub_6AB130((_DWORD *)a1, v25[1]); /*0x6aed72*/
                if ( a2 ) /*0x6aed76*/
                {
                  *(_DWORD *)ArgList = v25[2] - *(_DWORD *)&MEMORY[0xB33E90][0x10]; /*0x6aed88*/
                  if ( *(int *)ArgList > 0x2D || *(int *)ArgList < (int)0xFFFFFF83 ) /*0x6aed91*/
                  {
                    sub_40FEC0("Voice was off by %i milliseconds, attempting to correct", *(_DWORD *)ArgList); /*0x6aed9d*/
                    Texture = NiDX9TextureData::GetTexture((NiDX9TextureData *)a2); /*0x6aeda7*/
                    v40 = Texture; /*0x6aedac*/
                    if ( Texture ) /*0x6aedb0*/
                    {
                      lpVtbl = Texture->lpVtbl; /*0x6aedb2*/
                      v104 = 0; /*0x6aedb4*/
                      v42 = *(_BYTE *)(a2 + 0x11); /*0x6aedbf*/
                      v107 = *(float *)(a2 + 0x40); /*0x6aedc2*/
                      LOBYTE(a8) = v42; /*0x6aedcd*/
                      if ( ((int (__stdcall *)(IDirect3DBaseTexture9 *, void **, _DWORD))lpVtbl->SetPrivateData)( /*0x6aedd9*/
                             Texture,
                             &v104,
                             0) >= 0 )
                        ((void (__stdcall *)(IDirect3DBaseTexture9 *, char *))v40->lpVtbl->GetLevelCount)( /*0x6aee01*/
                          v40,
                          (char *)v104 - *(_DWORD *)ArgList * (unsigned __int8)a8 * (LODWORD(v107) / 0x3E8));
                    }
                  }
                  if ( *(_BYTE *)(a1 + 0xA5) ) /*0x6aee03*/
                  {
                    if ( (*(_DWORD *)a2 & 0x1000) != 0 ) /*0x6aee12*/
                      sub_6B6F20((float *)a2, 0.0); /*0x6aee1c*/
                    v108[1] = sub_6B6B90((_DWORD *)a2); /*0x6aee28*/
                    SafeFloatPointer = GameSetting_GetSafeFloatPointer(&flt_B161B8); /*0x6aee31*/
                    *(float *)&a8 = v108[1] - *SafeFloatPointer; /*0x6aee3f*/
                    sub_6B6B20(a2, *(float *)&a8); /*0x6aee4a*/
                  }
                  *(_DWORD *)a2 &= ~0x200u; /*0x6aee4f*/
                  if ( (*(_BYTE *)a2 & 0x10) != 0 ) /*0x6aee5a*/
                  {
                    sub_6B6E60((int *)a2, 1); /*0x6aee5e*/
                  }
                  else
                  {
                    sub_6B6E60((int *)a2, 0); /*0x6aee67*/
                    if ( (*(_DWORD *)a2 & 4) != 0 ) /*0x6aee70*/
                      *(_DWORD *)a2 |= 0x100u; /*0x6aee77*/
                  }
                }
                NiTPointerList_RemoveNode(*(void **)(a1 + 0x308), (void **)&keyOut); /*0x6aee84*/
                sub_6AA6F0(v25, 1); /*0x6aee8d*/
                if ( a7 == 0.0 ) /*0x6aee97*/
                  v24 = *(unsigned int *)(*(_DWORD *)(a1 + 0x308) + 4); /*0x6aeea7*/
                else
                  v24 = *(unsigned int *)LODWORD(a7); /*0x6aee9d*/
              }
            }
            else
            {
              v25[2] = *(_DWORD *)&MEMORY[0xB33E90][0x10] - v38; /*0x6aed50*/
            }
            goto LABEL_88; /*0x6aed53*/
          }
          if ( *v25 != 7 ) /*0x6aeb49*/
            break; /*0x6aeb49*/
          v100 = v25[1]; /*0x6aec86*/
          v33 = *(_DWORD **)(a1 + 0x300); /*0x6aec87*/
          *(float *)&a8 = 0.0; /*0x6aec8d*/
          NiTMap_GetAt(v33, v100, &a8); /*0x6aec95*/
          a2 = a8; /*0x6aec9a*/
          if ( *(float *)&a8 != 0.0 ) /*0x6aeca0*/
          {
            v34 = v25[3]; /*0x6aeca6*/
            v35 = *(_DWORD *)&MEMORY[0xB33E90][0x10]; /*0x6aeca9*/
            if ( *(_DWORD *)&MEMORY[0xB33E90][0x10] >= v34 || *(_WORD *)(a8 + 0x46) >= 0x2710u ) /*0x6aecb9*/
            {
              sub_6B6AC0((_DWORD *)a8); /*0x6aed23*/
              *(_WORD *)(a2 + 0x46) = 0x2710; /*0x6aed28*/
LABEL_54:
              sub_6B6F20((float *)a2, *(float *)(a2 + 0x3C)); /*0x6aec3d*/
              *(_BYTE *)(a2 + 0x4B) = 0; /*0x6aec4f*/
              NiTPointerList_RemoveNode(*(void **)(a1 + 0x308), (void **)&keyOut); /*0x6aec5a*/
              sub_6AA6F0(v25, 1); /*0x6aec63*/
              if ( a7 == 0.0 ) /*0x6aec6d*/
                v24 = *(unsigned int *)(*(_DWORD *)(a1 + 0x308) + 4); /*0x6aed39*/
              else
                v24 = *(unsigned int *)LODWORD(a7); /*0x6aec77*/
              goto LABEL_88; /*0x6aec79*/
            }
            a8 = v34 - v35; /*0x6aecc1*/
            v36 = (double)(int)(v34 - v35); /*0x6aecc5*/
            if ( (int)(v34 - v35) < 0 ) /*0x6aecc9*/
              v36 = v36 + flt_A2FC78; /*0x6aeccb*/
            a8 = v34 - v25[2]; /*0x6aecd6*/
            v37 = (double)a8; /*0x6aecda*/
            if ( a8 < 0 ) /*0x6aecde*/
              v37 = v37 + flt_A2FC78; /*0x6aece0*/
            *(float *)&a8 = v36 / v37; /*0x6aece8*/
            *(float *)&a8 = log10(*(float *)&a8); /*0x6aecf5*/
            v32 = Double_To_SInt32(*(float *)&a8 * dbl_A77230); /*0x6aed03*/
            if ( v32 >= 0x2710 ) /*0x6aed0d*/
              LOWORD(v32) = 0x2710; /*0x6aed0f*/
            goto LABEL_52; /*0x6aed0f*/
          }
LABEL_88:
          v104 = 0; /*0x6aeeaa*/
          if ( *(float *)&v24 != 0.0 ) /*0x6aeeb4*/
          {
            v24 = *(unsigned int *)v24; /*0x6aeeb6*/
            keyOut = v24; /*0x6aeeba*/
            if ( *(float *)&v24 != 0.0 ) /*0x6aeebe*/
              continue; /*0x6aeebe*/
          }
          goto LABEL_90; /*0x6aeebe*/
        }
        if ( *v25 != 8 ) /*0x6aeb52*/
          goto LABEL_88; /*0x6aeb52*/
        v26 = v25[1]; /*0x6aeb58*/
        v27 = *(_DWORD **)(a1 + 0x300); /*0x6aeb60*/
        *(float *)&a8 = 0.0; /*0x6aeb67*/
        NiTMap_GetAt(v27, v26, &a8); /*0x6aeb6f*/
        a2 = a8; /*0x6aeb74*/
        if ( *(float *)&a8 == 0.0 ) /*0x6aeb7a*/
          goto LABEL_88; /*0x6aeb7a*/
        if ( !sub_6B6AF0(a8) ) /*0x6aeb82*/
        {
          v102 = *(float *)(a2 + 0x3C); /*0x6aeb91*/
          *(_WORD *)(a2 + 0x46) = 0x2710; /*0x6aeb94*/
          sub_6B6F20((float *)a2, v102); /*0x6aeb9a*/
          sub_6B6E60((int *)a2, (*(_DWORD *)a2 & 0x10) != 0); /*0x6aebac*/
        }
        v28 = v25[3]; /*0x6aebb1*/
        v29 = *(_DWORD *)&MEMORY[0xB33E90][0x10]; /*0x6aebb4*/
        if ( *(_DWORD *)&MEMORY[0xB33E90][0x10] >= v28 || !*(_WORD *)(a2 + 0x46) ) /*0x6aebbe*/
        {
          *(_WORD *)(a2 + 0x46) = 0; /*0x6aec37*/
          goto LABEL_54; /*0x6aec37*/
        }
        a8 = v28 - v29; /*0x6aebcb*/
        v30 = (double)(int)(v28 - v29); /*0x6aebcf*/
        if ( (int)(v28 - v29) < 0 ) /*0x6aebd3*/
          v30 = v30 + flt_A2FC78; /*0x6aebd5*/
        a8 = v28 - v25[2]; /*0x6aebe0*/
        v31 = (double)a8; /*0x6aebe4*/
        if ( a8 < 0 ) /*0x6aebe8*/
          v31 = v31 + flt_A2FC78; /*0x6aebea*/
        *(float *)&a8 = v30 / v31; /*0x6aebf2*/
        *(float *)&a8 = 1.0 - *(float *)&a8; /*0x6aebfe*/
        *(float *)&a8 = log10(*(float *)&a8); /*0x6aec0b*/
        v32 = Double_To_SInt32(*(float *)&a8 * dbl_A77230); /*0x6aec19*/
        if ( v32 >= 0x2710 ) /*0x6aec23*/
          LOWORD(v32) = 0x2710; /*0x6aec25*/
LABEL_52:
        sub_6A90C0(a2, v32); /*0x6aec2a*/
        goto LABEL_88; /*0x6aec32*/
      }
    }
LABEL_90:
    v44 = reference; /*0x6aeec4*/
    LODWORD(v45) = &reference->unk6EC; /*0x6aeeca*/
    LOBYTE(a8) = 0; /*0x6aeed0*/
    a7 = v45; /*0x6aeed5*/
    if ( !Shared_GetDwordAtOffset40(v44) /*0x6aeeef*/
      || (DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(reference),
          !TESObjectCELL_IsInterior(DwordAtOffset40)) )
    {
      v47 = *(_DWORD *)&MEMORY[0xB33E90][0x10] - *(_DWORD *)(a1 + 0xC8); /*0x6aef07*/
      if ( (int)((HIDWORD(v47) ^ v47) - HIDWORD(v47)) > 0x1F4 && (reference->unk6F0 || reference->unk6EC) ) /*0x6aef25*/
      {
        sky = MEMORY[0xB333A0]->sky; /*0x6aef3a*/
        unk0D0 = sky->unk0D0; /*0x6aef3d*/
        LOBYTE(a8) = 1; /*0x6aef43*/
        *(float *)&keyOut = unk0D0; /*0x6aef48*/
        *(_DWORD *)ArgList = 0; /*0x6aef4c*/
        LODWORD(v108[1]) = sky; /*0x6aef54*/
        if ( v45 != 0.0 ) /*0x6aef58*/
        {
          v50 = dbl_A771C8; /*0x6aef5e*/
          v51 = *(float *)&keyOut; /*0x6aef64*/
          do /*0x6aef68*/
          {
            v52 = *(_DWORD **)LODWORD(v45); /*0x6aef68*/
            if ( !*(_DWORD *)LODWORD(v45) ) /*0x6aef6c*/
              break; /*0x6aef6c*/
            a2 = *v52; /*0x6aef72*/
            LODWORD(v53) = *(unsigned __int8 *)(*v52 + 0x42); /*0x6aef79*/
            LODWORD(v107) = *(unsigned __int8 *)(*v52 + 0x43); /*0x6aef7d*/
            v54 = (double)SLODWORD(v107); /*0x6aef81*/
            v107 = v53; /*0x6aef85*/
            v55 = v52[1]; /*0x6aef89*/
            *(float *)v108 = v54 * v50; /*0x6aef93*/
            v107 = (double)SLODWORD(v107) * v50; /*0x6aef9d*/
            if ( (_WORD)v55 /*0x6aefad*/
              && (firstWeather = sky->firstWeather) != 0
              && ((unsigned __int8)v55 & *((_BYTE *)firstWeather + 0x53)) == 0 )
            {
              v45 = *(float *)(LODWORD(v45) + 4); /*0x6aefaf*/
              a7 = v45; /*0x6aefb2*/
            }
            else
            {
              v57 = v107; /*0x6aefbb*/
              v58 = *(float *)v108; /*0x6aefc9*/
              *(float *)v108 = v107 - *(float *)v108; /*0x6aefcb*/
              *(float *)v108 = fabs(*(float *)v108); /*0x6aefd5*/
              if ( *(float *)v108 < (double)flt_A771F0 ) /*0x6aefe8*/
                goto LABEL_113; /*0x6aefe8*/
              if ( v58 < v57 ) /*0x6aeff1*/
              {
                if ( v58 > v51 ) /*0x6aeffa*/
                {
                  v45 = *(float *)(LODWORD(v45) + 4); /*0x6af030*/
                  a7 = v45; /*0x6af037*/
                  continue; /*0x6af03b*/
                }
                if ( v107 < v51 ) /*0x6af005*/
                {
                  v45 = *(float *)(LODWORD(v45) + 4); /*0x6af040*/
                  a7 = v45; /*0x6af047*/
                  continue; /*0x6af04b*/
                }
                v57 = v107; /*0x6af007*/
              }
              if ( v58 <= v57 || v58 <= v51 || v57 >= v51 ) /*0x6af022*/
              {
LABEL_113:
                v59 = *(_DWORD *)(a2 + 0x3C); /*0x6af054*/
                v60 = *(float *)(a2 + 0x38); /*0x6af05d*/
                v61 = *(float *)(a2 + 0x40); /*0x6af060*/
                v112 = v60; /*0x6af063*/
                retaddr = v61; /*0x6af067*/
                if ( (v59 & 0x40) != 0 /*0x6af08e*/
                  && (v112 = v60, retaddr = v61, (*(_DWORD *)(a2 + 0x3C) & 0x10) != 0)
                  && !sub_6ACA40((_DWORD *)a1, *(_DWORD *)(a2 + 0xC)) )
                {
                  v62 = OSGLobals_PlaySound((int *)a1, *(void **)(a2 + 0xC), 0x1011, 0); /*0x6af0b7*/
                  if ( NiTMap_GetAt(*(_DWORD **)(a1 + 0x300), *(_DWORD *)(a2 + 0xC), ArgList) ) /*0x6af0be*/
                  {
                    v63 = *((unsigned __int16 *)v52 + 2); /*0x6af0c7*/
                    v64 = *(_DWORD *)ArgList; /*0x6af0cb*/
                    v65 = *(_DWORD *)ArgList; /*0x6af0cf*/
                    *(_DWORD *)(*(_DWORD *)ArgList + 0x34) = v63; /*0x6af0d1*/
                    if ( sub_6B7050(v65) ) /*0x6af0d4*/
                    {
                      *(_BYTE *)(v64 + 0x4B) = 1; /*0x6af0f9*/
                      sub_6AB8D0((_DWORD *)a1, *(_DWORD *)(a2 + 0xC), 0, 0x1388); /*0x6af105*/
                    }
                    else
                    {
                      sub_6A90C0(v64, 0x2710); /*0x6af0e4*/
                      sub_6B6E60((int *)v64, 1); /*0x6af0ed*/
                    }
                  }
                  if ( v62 ) /*0x6af10c*/
                  {
                    sub_6B73E0(v62); /*0x6af114*/
                    FormHeapFree((unsigned int)v62); /*0x6af11a*/
                  }
                }
                else
                {
                  v66 = *(_DWORD *)(a2 + 0x3C); /*0x6af11f*/
                  v67 = *(float *)(a2 + 0x40); /*0x6af127*/
                  v112 = *(float *)(a2 + 0x38); /*0x6af12a*/
                  retaddr = v67; /*0x6af12e*/
                  if ( (v66 & 0x10) == 0 ) /*0x6af132*/
                  {
                    v68 = (double)(int)v52[2]; /*0x6af13b*/
                    if ( (int)v52[2] < 0 ) /*0x6af140*/
                      v68 = v68 + flt_A2FC78; /*0x6af142*/
                    v107 = v68 / dbl_A771E8 * dbl_A2FAA0; /*0x6af156*/
                    LODWORD(v108[0]) = Game_RandomLargeInteger(0); /*0x6af15f*/
                    if ( v107 > (double)SLODWORD(v108[0]) / dbl_A3D5A8 ) /*0x6af17b*/
                    {
                      v69 = *(float *)(a2 + 0x40); /*0x6af184*/
                      v112 = *(float *)(a2 + 0x38); /*0x6af187*/
                      retaddr = v69; /*0x6af18e*/
                      v70 = *(void **)(a2 + 0xC); /*0x6af194*/
                      if ( (*(_DWORD *)(a2 + 0x3C) & 0x40) != 0 ) /*0x6af19b*/
                        v71 = OSGLobals_PlaySound((int *)a1, v70, 0x1101, 0); /*0x6af1a2*/
                      else
                        v71 = OSGLobals_PlaySound((int *)a1, v70, 0x1102, 0); /*0x6af1aa*/
                      v72 = v71; /*0x6af1af*/
                      if ( v71 ) /*0x6af1b3*/
                      {
                        v73 = *(_DWORD *)(a2 + 0x3C); /*0x6af1b9*/
                        v74 = *(float *)(a2 + 0x40); /*0x6af1c1*/
                        v112 = *(float *)(a2 + 0x38); /*0x6af1c4*/
                        retaddr = v74; /*0x6af1c8*/
                        if ( (v73 & 0x40) == 0 ) /*0x6af1cc*/
                        {
                          v75 = reference->vtbl->super.super.super.GetPos(reference); /*0x6af1e0*/
                          v76 = *v75; /*0x6af1e2*/
                          v77 = v75[1]; /*0x6af1e4*/
                          v78 = v75[2]; /*0x6af1e7*/
                          v109 = v76; /*0x6af1ec*/
                          v110 = v77; /*0x6af1f0*/
                          v111 = v78; /*0x6af1f4*/
                          a2 = Game_RandomLargeInteger(0) % 2; /*0x6af20b*/
                          LODWORD(v108[0]) = Game_RandomLargeInteger(0); /*0x6af213*/
                          v108[0] = (double)SLODWORD(v108[0]) / dbl_A3D5A8 * dbl_A3F470; /*0x6af22c*/
                          v79 = sub_507010(kTerrainLODQuadRayDirectionZ, a2); /*0x6af239*/
                          v109 = v79 * dbl_A771E0 + v108[0] + v109; /*0x6af24e*/
                          v80 = Game_RandomLargeInteger(0) % 2; /*0x6af265*/
                          v107 = sub_507010(kTerrainLODQuadRayDirectionZ, v80); /*0x6af278*/
                          LODWORD(v108[0]) = Game_RandomLargeInteger(0); /*0x6af281*/
                          v110 = (double)SLODWORD(v108[0]) / dbl_A3D5A8 * dbl_A3F470 + v107 * dbl_A771E0 + v110; /*0x6af2a7*/
                          v111 = v111 + dbl_A3B1B8; /*0x6af2b5*/
                          sub_6B7360(v72, v109, v110, v111); /*0x6af2d0*/
                        }
                        sub_6B7190(v72, 0); /*0x6af2d9*/
                        sub_6B73E0(v72); /*0x6af2e0*/
                        FormHeapFree((unsigned int)v72); /*0x6af2e6*/
                      }
                    }
                  }
                }
                v50 = dbl_A771C8; /*0x6af2f2*/
                v51 = *(float *)&keyOut; /*0x6af2fb*/
                a7 = *(float *)(LODWORD(a7) + 4); /*0x6af2ff*/
                sky = (Sky *)LODWORD(v108[1]); /*0x6af303*/
                v45 = a7; /*0x6af307*/
                continue; /*0x6af307*/
              }
              v45 = *(float *)(LODWORD(v45) + 4); /*0x6af024*/
              a7 = v45; /*0x6af027*/
            }
          }
          while ( v45 != 0.0 ); /*0x6aef68*/
        }
      }
    }
    sub_6AD030(a1, a2); /*0x6af317*/
    a7 = COERCE_FLOAT(NiTMapBase_GetFirstNode(*(unsigned int **)(a1 + 0x300))); /*0x6af32b*/
    if ( a7 == 0.0 ) /*0x6af32f*/
    {
LABEL_181:
      (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(a1 + 0x78) + 0x44))(*(_DWORD *)(a1 + 0x78)); /*0x6af5b6*/
      while ( *(_DWORD *)(*(_DWORD *)(a1 + 0x320) + 0xC) ) /*0x6af5c7*/
      {
        v93 = *(_DWORD **)(a1 + 0x320); /*0x6af5d0*/
        v94 = (int *)v93[1]; /*0x6af5d6*/
        v95 = *v94; /*0x6af5d9*/
        v9 = *v94 == 0; /*0x6af5dd*/
        v93[1] = *v94; /*0x6af5df*/
        if ( v9 ) /*0x6af5e2*/
          v93[2] = 0; /*0x6af5e9*/
        else
          *(_DWORD *)(v95 + 4) = 0; /*0x6af5e4*/
        v96 = v94[2]; /*0x6af5ee*/
        (*(void (__thiscall **)(_DWORD *, int *))(*v93 + 8))(v93, v94); /*0x6af5f7*/
        --v93[3]; /*0x6af5f9*/
        v97 = *(_DWORD **)(a1 + 0x300); /*0x6af601*/
        position = 0; /*0x6af608*/
        NiTMap_GetAt(v97, v96, &position); /*0x6af610*/
        if ( position ) /*0x6af61f*/
          sub_6AA9C0((_DWORD *)a1, (unsigned int **)&position); /*0x6af628*/
      }
      if ( LOBYTE(a7) ) /*0x6af63e*/
        *(_DWORD *)(a1 + 0xC8) = *(_DWORD *)&MEMORY[0xB33E90][0x10]; /*0x6af646*/
      return 0; /*0x6af646*/
    }
    while ( 1 ) /*0x6af34a*/
    {
      NiTMap_U32Pointer_GetNextEntry( /*0x6af34a*/
        *(MEF_U32PointerMapLayout32 **)(a1 + 0x300),
        (MEF_U32PointerMapEntry32 **)&a7,
        (unsigned int *)ArgList,
        &v104);
      v81 = (float *)v104; /*0x6af34f*/
      if ( (*(_DWORD *)v104 & 0x1000) != 0 && (*(_DWORD *)v104 & 0x10) != 0 ) /*0x6af35e*/
      {
        v82 = *(_DWORD *)&MEMORY[0xB33E90][0x10] - *(_DWORD *)(a1 + 0xC8); /*0x6af36b*/
        if ( (int)((HIDWORD(v82) ^ v82) - HIDWORD(v82)) > 0x1F4 ) /*0x6af375*/
        {
          v83 = 0; /*0x6af37c*/
          v9 = &reference->unk6EC == 0; /*0x6af37e*/
          p_unk6EC = &reference->unk6EC; /*0x6af37e*/
          LOBYTE(a8) = 1; /*0x6af383*/
          if ( v9 ) /*0x6af388*/
            goto LABEL_193; /*0x6af388*/
          do /*0x6af3a7*/
          {
            if ( !*p_unk6EC ) /*0x6af390*/
              break; /*0x6af394*/
            if ( *(_DWORD *)(*(_DWORD *)*p_unk6EC + 0xC) == *((_DWORD *)v104 + 3) ) /*0x6af39e*/
              v83 = 1; /*0x6af3a0*/
            p_unk6EC = (UInt32 *)p_unk6EC[1]; /*0x6af3a2*/
          }
          while ( p_unk6EC ); /*0x6af3a7*/
          if ( !v83 ) /*0x6af3ab*/
          {
LABEL_193:
            if ( !*((_BYTE *)v104 + 0x4B) ) /*0x6af3ad*/
            {
              *((_BYTE *)v104 + 0x4B) = 1; /*0x6af3b8*/
              sub_6AB8D0((_DWORD *)a1, *((_DWORD *)v81 + 3), 1, 0x1388); /*0x6af3c4*/
              *(_DWORD *)v81 |= 0x100u; /*0x6af3c9*/
            }
          }
        }
      }
      v85 = *v81; /*0x6af3cf*/
      if ( (*(_DWORD *)v81 & 2) != 0 ) /*0x6af3d4*/
      {
        v86 = v81[9]; /*0x6af3dd*/
        v87 = v81[0xA]; /*0x6af3e0*/
        v109 = v81[8]; /*0x6af3e3*/
        v88 = v109 - *(float *)(a1 + 0x80); /*0x6af3eb*/
        v110 = v86; /*0x6af3f1*/
        v111 = v87; /*0x6af3f5*/
        v112 = v88; /*0x6af3f9*/
        v113 = v86 - *(float *)(a1 + 0x84); /*0x6af407*/
        retaddr = v87 - *(float *)(a1 + 0x88); /*0x6af415*/
        *(float *)&v108[1] = v113 * v113 + v112 * v112 + retaddr * retaddr; /*0x6af435*/
        *(float *)&v108[1] = sqrt(*(float *)&v108[1]); /*0x6af442*/
        v89 = (double)*((int *)v81 + 0xE); /*0x6af453*/
        if ( *((int *)v81 + 0xE) < 0 ) /*0x6af456*/
          v89 = v89 + flt_A2FC78; /*0x6af458*/
        v9 = unk_B333B8 == 0; /*0x6af45e*/
        *(float *)&keyOut = v89; /*0x6af465*/
        if ( !v9 && (LOBYTE(v85) & 4) == 0 ) /*0x6af46e*/
          *(float *)&keyOut = *(float *)&keyOut * dbl_A3C770; /*0x6af47a*/
        v90 = *(float *)&keyOut < (double)*(float *)&v108[1]; /*0x6af48d*/
        LOBYTE(v107) = v90; /*0x6af495*/
        sub_6B7130((int)v81, v90); /*0x6af4a0*/
        if ( v90 ) /*0x6af4a7*/
        {
          if ( (*(_DWORD *)v81 & 0x100) != 0 ) /*0x6af4af*/
            sub_6B6AC0(v81); /*0x6af4b3*/
        }
      }
      if ( sub_6B6AF0((int)v81) && !sub_6B7050((int)v81) && !*((_BYTE *)v81 + 0x4B) ) /*0x6af4ce*/
        break; /*0x6af4ce*/
      if ( sub_6B7050((int)v81) /*0x6af51e*/
        && (*(_DWORD *)v81 & 0x10) != 0
        && !*((_BYTE *)v81 + 0x4B)
        && *((_WORD *)v81 + 0x23)
        && (*(_DWORD *)v81 & 0x100) == 0 )
      {
        if ( unk_B333B8 ) /*0x6af520*/
          goto LABEL_174; /*0x6af527*/
        sub_6B6E60((int *)v81, 1); /*0x6af52d*/
        *((_BYTE *)v81 + 0x4B) = 1; /*0x6af532*/
        v101 = 0; /*0x6af541*/
        if ( (*(_DWORD *)v81 & 0x1000) != 0 ) /*0x6af543*/
        {
          sub_6AB8D0((_DWORD *)a1, *((_DWORD *)v81 + 3), 0, 0x1388); /*0x6af54b*/
          goto LABEL_173; /*0x6af54b*/
        }
        v91 = (_DWORD *)a1; /*0x6af54d*/
        goto LABEL_172; /*0x6af54d*/
      }
LABEL_173:
      if ( unk_B333B8 ) /*0x6af558*/
      {
LABEL_174:
        if ( (*(_DWORD *)v81 & 0x1000) != 0 ) /*0x6af568*/
        {
          *(_DWORD *)v81 |= 0x100u; /*0x6af571*/
          sub_6B6AC0(v81); /*0x6af573*/
        }
      }
      if ( (*(_DWORD *)v81 & 0x100) != 0 && !sub_6B6AF0((int)v81) && (*(_DWORD *)v81 & 0x200) == 0 ) /*0x6af591*/
      {
        v92 = *(_DWORD **)(a1 + 0x320); /*0x6af59c*/
        LODWORD(v108[1]) = *(_DWORD *)ArgList; /*0x6af5a2*/
        NiTList_AddHead(v92, &v108[1]); /*0x6af5a6*/
      }
      if ( a7 == 0.0 ) /*0x6af5b0*/
        goto LABEL_181; /*0x6af5b0*/
    }
    *((_BYTE *)v81 + 0x4B) = 1; /*0x6af4d3*/
    if ( (*(_DWORD *)v81 & 0x20) == 0 ) /*0x6af4db*/
      *(_DWORD *)v81 |= 0x100u; /*0x6af4e2*/
    v91 = (_DWORD *)a1; /*0x6af4ef*/
    v101 = 1; /*0x6af4f1*/
    if ( (*(_DWORD *)v81 & 0x1000) == 0 ) /*0x6af4f3*/
    {
      sub_6AB8D0((_DWORD *)a1, *((_DWORD *)v81 + 3), 1, 0x1388); /*0x6af4f9*/
      goto LABEL_173; /*0x6af4f9*/
    }
LABEL_172:
    sub_6AB8D0(v91, *((_DWORD *)v81 + 3), v101, 0x1388); /*0x6af54f*/
    goto LABEL_173; /*0x6af553*/
  }
  position = (MEF_U32PointerMapEntry32 *)NiTMapBase_GetFirstNode(*(unsigned int **)(a1 + 0x300)); /*0x6ae916*/
  while ( position ) /*0x6ae91a*/
  {
    NiTMap_U32Pointer_GetNextEntry(*(MEF_U32PointerMapLayout32 **)(a1 + 0x300), &position, &keyOut, &valueOut); /*0x6ae935*/
    if ( (*(_DWORD *)valueOut & 0x100) != 0 && (*(_DWORD *)valueOut & 0x21) != 0 && !sub_6B6AF0((int)valueOut) ) /*0x6ae94b*/
    {
      v12 = *(_DWORD **)(a1 + 0x320); /*0x6ae95d*/
      a7 = *(float *)&keyOut; /*0x6ae963*/
      NiTList_AddHead(v12, &a7); /*0x6ae967*/
    }
  }
  if ( !*(_DWORD *)(*(_DWORD *)(a1 + 0x320) + 0xC) ) /*0x6ae97b*/
    return 0; /*0x6af64f*/
  do /*0x6ae9ca*/
  {
    v13 = *(_DWORD **)(a1 + 0x320); /*0x6ae992*/
    v14 = (int *)v13[1]; /*0x6ae998*/
    v15 = *v14; /*0x6ae99b*/
    v9 = *v14 == 0; /*0x6ae99d*/
    v13[1] = *v14; /*0x6ae99f*/
    if ( v9 ) /*0x6ae9a2*/
      v13[2] = 0; /*0x6ae9a9*/
    else
      *(_DWORD *)(v15 + 4) = 0; /*0x6ae9a4*/
    v16 = v14[2]; /*0x6ae9ae*/
    (*(void (__usercall **)(_DWORD *@<ecx>, int *, double@<st0>, double@<st1>, double@<st2>))(*v13 + 8))( /*0x6ae9b7*/
      v13,
      v14,
      a5,
      a4,
      a3);
    --v13[3]; /*0x6ae9b9*/
    sub_6AC9F0((_DWORD *)a1, v16); /*0x6ae9bf*/
  }
  while ( *(_DWORD *)(*(_DWORD *)(a1 + 0x320) + 0xC) ); /*0x6ae9ca*/
  return 0; /*0x6ae9d2*/
}
