int __userpurge sub_6AE860@<eax>(
        int a1@<ecx>,
        int a2@<edi>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
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
  float v24; // ebx
  _DWORD *v25; // ebp
  int v26; // edx
  _DWORD *v27; // ecx
  unsigned int v28; // eax
  unsigned int v29; // ecx
  double v30; // st7
  double v31; // st6
  int v32; // eax
  _DWORD *v33; // ecx
  unsigned int v34; // eax
  unsigned int v35; // ecx
  double v36; // st7
  double v37; // st6
  int v38; // eax
  IDirect3DBaseTexture9 *Texture; // eax
  IDirect3DBaseTexture9 *v40; // ebx
  IDirect3DBaseTexture9Vtbl *lpVtbl; // edx
  char v42; // cl
  int *SafeFloatPointer; // eax
  TESObjectREFR *v44; // ecx
  float v45; // ebx
  TESObjectCELL *ParentCell; // eax
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
  TESObjectCELL *v81; // edi
  __int64 v82; // rax
  char v83; // dl
  UInt32 *p_unk6EC; // eax
  TESFormVtbl *vtbl; // ebx
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
  TESObjectCELL *v103; // [esp+68h] [ebp-38h] BYREF
  TESObjectCELL *v104; // [esp+6Ch] [ebp-34h] BYREF
  float v105; // [esp+70h] [ebp-30h] BYREF
  char ArgList[4]; // [esp+74h] [ebp-2Ch] BYREF
  float v107; // [esp+78h] [ebp-28h]
  double v108[2]; // [esp+7Ch] [ebp-24h] BYREF
  float v109; // [esp+8Ch] [ebp-14h]
  float v110; // [esp+90h] [ebp-10h]
  float v111; // [esp+94h] [ebp-Ch]
  float v112; // [esp+98h] [ebp-8h]
  float v113; // [esp+9Ch] [ebp-4h]
  float retaddr; // [esp+A0h] [ebp+0h]

  v9 = *(_DWORD *)(a1 + 8) == 0;
  v103 = 0;
  if ( v9 || !bSoundEnabled_Audio )
    return 0;
  if ( ObjectPtr && (v10 = *(_DWORD *)(ObjectPtr + 0x20)) != 0 && v10 != 2 || sub_578FE0() == 0x3EF )
    v11 = 1;
  else
    v11 = a6;
  if ( *(_BYTE *)(a1 + 0xA6) )
  {
    if ( v11 )
      sub_6AD030(a1, a2);
    else
      sub_6A9C00(a1);
  }
  else if ( v11 )
  {
    sub_6A9B40(a1);
  }
  *(_BYTE *)(a1 + 0xA6) = v11;
  if ( !v11 )
  {
    if ( !LOBYTE(a7) )
    {
      v18 = (double)(int)Seed;
      if ( (int)Seed < 0 )
        v18 = v18 + flt_A2FC78;
      a7 = v18;
      v19 = a7;
      if ( (unsigned int)(Double_To_SInt32(a5) - 1) <= 0x1C )
        return 0;
      a6 = LOWORD(a7) | 0xC00;
      *(_QWORD *)((char *)v108 + 4) = (__int64)v19;
      *(_DWORD *)(a1 + 0xCC) = (__int64)v19;
    }
    goto LABEL_36;
  }
  if ( LOBYTE(a7) )
  {
LABEL_36:
    v20 = *(int **)(a1 + 0x78);
    v21 = *v20;
    v22 = dbl_A77238;
    a7 = *(float *)(a1 + 0x84) / v22;
    v99 = a7;
    a7 = *(float *)(a1 + 0x88) / v22;
    v98 = a7;
    a7 = *(float *)(a1 + 0x80) / v22;
    (*(void (__userpurge **)(int *, _DWORD, _DWORD, _DWORD, int, int, double@<st0>, double@<st1>, double@<st2>))(v21 + 0x38))(
      v20,
      LODWORD(a7),
      LODWORD(v98),
      LODWORD(v99),
      1,
      a2,
      a5,
      a4,
      a3);
    (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))(**(_DWORD **)(a1 + 0x78) + 0x34))(
      *(_DWORD *)(a1 + 0x78),
      *(float *)(a1 + 0x8C),
      *(float *)(a1 + 0x94),
      *(float *)(a1 + 0x90),
      *(float *)(a1 + 0x98),
      *(float *)(a1 + 0xA0),
      *(float *)(a1 + 0x9C),
      1);
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 0x78) + 0x44))(*(_DWORD *)(a1 + 0x78));
    sub_6AA730((float *)a1);
    v23 = *(_DWORD *)(a1 + 0x308);
    if ( *(_DWORD *)(v23 + 0xC) )
    {
      v105 = *(float *)(v23 + 4);
      v24 = v105;
      if ( v105 != 0.0 )
      {
        while ( 1 )
        {
          v25 = *(_DWORD **)(LODWORD(v24) + 8);
          a7 = *(float *)(LODWORD(v24) + 4);
          if ( *v25 == 3 )
          {
            v38 = v25[2];
            if ( v38 >= 0 )
            {
              if ( Seed >= v38 - 0x14 )
              {
                a2 = (int)sub_6AB130((_DWORD *)a1, v25[1]);
                if ( a2 )
                {
                  *(_DWORD *)ArgList = v25[2] - Seed;
                  if ( *(int *)ArgList > 0x2D || *(int *)ArgList < (int)0xFFFFFF83 )
                  {
                    sub_40FEC0("Voice was off by %i milliseconds, attempting to correct", *(_DWORD *)ArgList);
                    Texture = NiDX9TextureData::GetTexture((NiDX9TextureData *)a2);
                    v40 = Texture;
                    if ( Texture )
                    {
                      lpVtbl = Texture->lpVtbl;
                      v104 = 0;
                      v42 = *(_BYTE *)(a2 + 0x11);
                      v107 = *(float *)(a2 + 0x40);
                      LOBYTE(a8) = v42;
                      if ( ((int (__stdcall *)(IDirect3DBaseTexture9 *, TESObjectCELL **, _DWORD))lpVtbl->SetPrivateData)(
                             Texture,
                             &v104,
                             0) >= 0 )
                        ((void (__stdcall *)(IDirect3DBaseTexture9 *, char *))v40->lpVtbl->GetLevelCount)(
                          v40,
                          (char *)v104 - *(_DWORD *)ArgList * (unsigned __int8)a8 * (LODWORD(v107) / 0x3E8));
                    }
                  }
                  if ( *(_BYTE *)(a1 + 0xA5) )
                  {
                    if ( (*(_DWORD *)a2 & 0x1000) != 0 )
                      sub_6B6F20((float *)a2, 0.0);
                    v108[1] = sub_6B6B90((_DWORD *)a2);
                    SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&flt_B161B8);
                    *(float *)&a8 = v108[1] - *(float *)SafeFloatPointer;
                    sub_6B6B20(a2, *(float *)&a8);
                  }
                  *(_DWORD *)a2 &= ~0x200u;
                  if ( (*(_BYTE *)a2 & 0x10) != 0 )
                  {
                    sub_6B6E60((_DWORD *)a2, 1);
                  }
                  else
                  {
                    sub_6B6E60((_DWORD *)a2, 0);
                    if ( (*(_DWORD *)a2 & 4) != 0 )
                      *(_DWORD *)a2 |= 0x100u;
                  }
                }
                sub_7AA860(*(BSTextureManager **)(a1 + 0x308), (NiTPointerList_Node_void **)&v105);
                sub_6AA6F0(v25, 1);
                if ( a7 == 0.0 )
                  v24 = *(float *)(*(_DWORD *)(a1 + 0x308) + 4);
                else
                  v24 = *(float *)LODWORD(a7);
              }
            }
            else
            {
              v25[2] = Seed - v38;
            }
            goto LABEL_88;
          }
          if ( *v25 != 7 )
            break;
          v100 = v25[1];
          v33 = *(_DWORD **)(a1 + 0x300);
          *(float *)&a8 = 0.0;
          NiTMap_GetAt(v33, v100, &a8);
          a2 = a8;
          if ( *(float *)&a8 != 0.0 )
          {
            v34 = v25[3];
            v35 = Seed;
            if ( Seed >= v34 || *(_WORD *)(a8 + 0x46) >= 0x2710u )
            {
              sub_6B6AC0((_DWORD *)a8);
              *(_WORD *)(a2 + 0x46) = 0x2710;
LABEL_54:
              sub_6B6F20((float *)a2, *(float *)(a2 + 0x3C));
              *(_BYTE *)(a2 + 0x4B) = 0;
              sub_7AA860(*(BSTextureManager **)(a1 + 0x308), (NiTPointerList_Node_void **)&v105);
              sub_6AA6F0(v25, 1);
              if ( a7 == 0.0 )
                v24 = *(float *)(*(_DWORD *)(a1 + 0x308) + 4);
              else
                v24 = *(float *)LODWORD(a7);
              goto LABEL_88;
            }
            a8 = v34 - v35;
            v36 = (double)(int)(v34 - v35);
            if ( (int)(v34 - v35) < 0 )
              v36 = v36 + flt_A2FC78;
            a8 = v34 - v25[2];
            v37 = (double)a8;
            if ( a8 < 0 )
              v37 = v37 + flt_A2FC78;
            *(float *)&a8 = v36 / v37;
            *(float *)&a8 = log10(*(float *)&a8);
            v32 = Double_To_SInt32(*(float *)&a8 * dbl_A77230);
            if ( v32 >= 0x2710 )
              LOWORD(v32) = 0x2710;
            goto LABEL_52;
          }
LABEL_88:
          v104 = 0;
          if ( v24 != 0.0 )
          {
            v24 = *(float *)LODWORD(v24);
            v105 = v24;
            if ( v24 != 0.0 )
              continue;
          }
          goto LABEL_90;
        }
        if ( *v25 != 8 )
          goto LABEL_88;
        v26 = v25[1];
        v27 = *(_DWORD **)(a1 + 0x300);
        *(float *)&a8 = 0.0;
        NiTMap_GetAt(v27, v26, &a8);
        a2 = a8;
        if ( *(float *)&a8 == 0.0 )
          goto LABEL_88;
        if ( !sub_6B6AF0(a8) )
        {
          v102 = *(float *)(a2 + 0x3C);
          *(_WORD *)(a2 + 0x46) = 0x2710;
          sub_6B6F20((float *)a2, v102);
          sub_6B6E60((_DWORD *)a2, (*(_DWORD *)a2 & 0x10) != 0);
        }
        v28 = v25[3];
        v29 = Seed;
        if ( Seed >= v28 || !*(_WORD *)(a2 + 0x46) )
        {
          *(_WORD *)(a2 + 0x46) = 0;
          goto LABEL_54;
        }
        a8 = v28 - v29;
        v30 = (double)(int)(v28 - v29);
        if ( (int)(v28 - v29) < 0 )
          v30 = v30 + flt_A2FC78;
        a8 = v28 - v25[2];
        v31 = (double)a8;
        if ( a8 < 0 )
          v31 = v31 + flt_A2FC78;
        *(float *)&a8 = v30 / v31;
        *(float *)&a8 = 1.0 - *(float *)&a8;
        *(float *)&a8 = log10(*(float *)&a8);
        v32 = Double_To_SInt32(*(float *)&a8 * dbl_A77230);
        if ( v32 >= 0x2710 )
          LOWORD(v32) = 0x2710;
LABEL_52:
        sub_6A90C0(a2, v32);
        goto LABEL_88;
      }
    }
LABEL_90:
    v44 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
    LODWORD(v45) = &TESDataHandler_g_PlayerRef->unk6EC;
    LOBYTE(a8) = 0;
    a7 = v45;
    if ( !TESObjectREFR_GetParentCell(v44)
      || (ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef),
          !TESObjectCELL_IsInterior(ParentCell)) )
    {
      v47 = (int)(Seed - *(_DWORD *)(a1 + 0xC8));
      if ( (int)((HIDWORD(v47) ^ v47) - HIDWORD(v47)) > 0x1F4
        && (TESDataHandler_g_PlayerRef->unk6F0 || TESDataHandler_g_PlayerRef->unk6EC) )
      {
        sky = TES->sky;
        unk0D0 = sky->unk0D0;
        LOBYTE(a8) = 1;
        v105 = unk0D0;
        *(_DWORD *)ArgList = 0;
        LODWORD(v108[1]) = sky;
        if ( v45 != 0.0 )
        {
          v50 = dbl_A771C8;
          v51 = v105;
          do
          {
            v52 = *(_DWORD **)LODWORD(v45);
            if ( !*(_DWORD *)LODWORD(v45) )
              break;
            a2 = *v52;
            LODWORD(v53) = *(unsigned __int8 *)(*v52 + 0x42);
            LODWORD(v107) = *(unsigned __int8 *)(*v52 + 0x43);
            v54 = (double)SLODWORD(v107);
            v107 = v53;
            v55 = v52[1];
            *(float *)v108 = v54 * v50;
            v107 = (double)SLODWORD(v107) * v50;
            if ( (_WORD)v55
              && (firstWeather = sky->firstWeather) != 0
              && ((unsigned __int8)v55 & *((_BYTE *)firstWeather + 0x53)) == 0 )
            {
              v45 = *(float *)(LODWORD(v45) + 4);
              a7 = v45;
            }
            else
            {
              v57 = v107;
              v58 = *(float *)v108;
              *(float *)v108 = v107 - *(float *)v108;
              *(float *)v108 = fabs(*(float *)v108);
              if ( *(float *)v108 < (double)flt_A771F0 )
                goto LABEL_113;
              if ( v58 < v57 )
              {
                if ( v58 > v51 )
                {
                  v45 = *(float *)(LODWORD(v45) + 4);
                  a7 = v45;
                  continue;
                }
                if ( v107 < v51 )
                {
                  v45 = *(float *)(LODWORD(v45) + 4);
                  a7 = v45;
                  continue;
                }
                v57 = v107;
              }
              if ( v58 <= v57 || v58 <= v51 || v57 >= v51 )
              {
LABEL_113:
                v59 = *(_DWORD *)(a2 + 0x3C);
                v60 = *(float *)(a2 + 0x38);
                v61 = *(float *)(a2 + 0x40);
                v112 = v60;
                retaddr = v61;
                if ( (v59 & 0x40) != 0
                  && (v112 = v60, retaddr = v61, (*(_DWORD *)(a2 + 0x3C) & 0x10) != 0)
                  && !sub_6ACA40((_DWORD *)a1, *(_DWORD *)(a2 + 0xC)) )
                {
                  v62 = OSGLobals_PlaySound((int *)a1, *(void **)(a2 + 0xC), 0x1011, 0);
                  if ( NiTMap_GetAt(*(_DWORD **)(a1 + 0x300), *(_DWORD *)(a2 + 0xC), ArgList) )
                  {
                    v63 = *((unsigned __int16 *)v52 + 2);
                    v64 = *(_DWORD *)ArgList;
                    v65 = *(_DWORD *)ArgList;
                    *(_DWORD *)(*(_DWORD *)ArgList + 0x34) = v63;
                    if ( sub_6B7050(v65) )
                    {
                      *(_BYTE *)(v64 + 0x4B) = 1;
                      sub_6AB8D0((_DWORD *)a1, *(_DWORD *)(a2 + 0xC), 0, 0x1388);
                    }
                    else
                    {
                      sub_6A90C0(v64, 0x2710);
                      sub_6B6E60((_DWORD *)v64, 1);
                    }
                  }
                  if ( v62 )
                  {
                    sub_6B73E0(v62);
                    FormHeapFree((unsigned int)v62);
                  }
                }
                else
                {
                  v66 = *(_DWORD *)(a2 + 0x3C);
                  v67 = *(float *)(a2 + 0x40);
                  v112 = *(float *)(a2 + 0x38);
                  retaddr = v67;
                  if ( (v66 & 0x10) == 0 )
                  {
                    v68 = (double)(int)v52[2];
                    if ( (int)v52[2] < 0 )
                      v68 = v68 + flt_A2FC78;
                    v107 = v68 / dbl_A771E8 * dbl_A2FAA0;
                    LODWORD(v108[0]) = GetRandomLargeInteger_(0);
                    if ( v107 > (double)SLODWORD(v108[0]) / dbl_A3D5A8 )
                    {
                      v69 = *(float *)(a2 + 0x40);
                      v112 = *(float *)(a2 + 0x38);
                      retaddr = v69;
                      v70 = *(void **)(a2 + 0xC);
                      if ( (*(_DWORD *)(a2 + 0x3C) & 0x40) != 0 )
                        v71 = OSGLobals_PlaySound((int *)a1, v70, 0x1101, 0);
                      else
                        v71 = OSGLobals_PlaySound((int *)a1, v70, 0x1102, 0);
                      v72 = v71;
                      if ( v71 )
                      {
                        v73 = *(_DWORD *)(a2 + 0x3C);
                        v74 = *(float *)(a2 + 0x40);
                        v112 = *(float *)(a2 + 0x38);
                        retaddr = v74;
                        if ( (v73 & 0x40) == 0 )
                        {
                          v75 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos(TESDataHandler_g_PlayerRef);
                          v76 = *v75;
                          v77 = v75[1];
                          v78 = v75[2];
                          v109 = v76;
                          v110 = v77;
                          v111 = v78;
                          a2 = GetRandomLargeInteger_(0) % 2;
                          LODWORD(v108[0]) = GetRandomLargeInteger_(0);
                          v108[0] = (double)SLODWORD(v108[0]) / dbl_A3D5A8 * dbl_A3F470;
                          v79 = sub_507010(flt_A30634, a2);
                          v109 = v79 * dbl_A771E0 + v108[0] + v109;
                          v80 = GetRandomLargeInteger_(0) % 2;
                          v107 = sub_507010(flt_A30634, v80);
                          LODWORD(v108[0]) = GetRandomLargeInteger_(0);
                          v110 = (double)SLODWORD(v108[0]) / dbl_A3D5A8 * dbl_A3F470 + v107 * dbl_A771E0 + v110;
                          v111 = v111 + dbl_A3B1B8;
                          sub_6B7360(v72, v109, v110, v111);
                        }
                        sub_6B7190(v72, 0);
                        sub_6B73E0(v72);
                        FormHeapFree((unsigned int)v72);
                      }
                    }
                  }
                }
                v50 = dbl_A771C8;
                v51 = v105;
                a7 = *(float *)(LODWORD(a7) + 4);
                sky = (Sky *)LODWORD(v108[1]);
                v45 = a7;
                continue;
              }
              v45 = *(float *)(LODWORD(v45) + 4);
              a7 = v45;
            }
          }
          while ( v45 != 0.0 );
        }
      }
    }
    sub_6AD030(a1, a2);
    a7 = COERCE_FLOAT(sub_6A9030(*(unsigned int **)(a1 + 0x300)));
    if ( a7 == 0.0 )
    {
LABEL_181:
      (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(a1 + 0x78) + 0x44))(*(_DWORD *)(a1 + 0x78));
      while ( *(_DWORD *)(*(_DWORD *)(a1 + 0x320) + 0xC) )
      {
        v93 = *(_DWORD **)(a1 + 0x320);
        v94 = (int *)v93[1];
        v95 = *v94;
        v9 = *v94 == 0;
        v93[1] = *v94;
        if ( v9 )
          v93[2] = 0;
        else
          *(_DWORD *)(v95 + 4) = 0;
        v96 = v94[2];
        (*(void (__thiscall **)(_DWORD *, int *))(*v93 + 8))(v93, v94);
        --v93[3];
        v97 = *(_DWORD **)(a1 + 0x300);
        a6 = 0;
        NiTMap_GetAt(v97, v96, &a6);
        if ( a6 )
          sub_6AA9C0((_DWORD *)a1, (int)&a6);
      }
      if ( LOBYTE(a7) )
        *(_DWORD *)(a1 + 0xC8) = Seed;
      return 0;
    }
    while ( 1 )
    {
      sub_452600(*(NiTMap_TESCELL **)(a1 + 0x300), (NiTMap_Entry_TESCELL **)&a7, (void **)ArgList, &v104);
      v81 = v104;
      if ( ((int)v104->vtbl & 0x1000) != 0 && ((int)v104->vtbl & 0x10) != 0 )
      {
        v82 = (int)(Seed - *(_DWORD *)(a1 + 0xC8));
        if ( (int)((HIDWORD(v82) ^ v82) - HIDWORD(v82)) > 0x1F4 )
        {
          v83 = 0;
          v9 = &TESDataHandler_g_PlayerRef->unk6EC == 0;
          p_unk6EC = &TESDataHandler_g_PlayerRef->unk6EC;
          LOBYTE(a8) = 1;
          if ( v9 )
            goto LABEL_193;
          do
          {
            if ( !*p_unk6EC )
              break;
            if ( *(_DWORD *)(*(_DWORD *)*p_unk6EC + 0xC) == v104->members.super.refID )
              v83 = 1;
            p_unk6EC = (UInt32 *)p_unk6EC[1];
          }
          while ( p_unk6EC );
          if ( !v83 )
          {
LABEL_193:
            if ( !HIBYTE(v104->members.objectList.refr) )
            {
              HIBYTE(v104->members.objectList.refr) = 1;
              sub_6AB8D0((_DWORD *)a1, v81->members.super.refID, 1, 0x1388);
              v81->vtbl = (TESFormVtbl *)((int)v81->vtbl | 0x100);
            }
          }
        }
      }
      vtbl = v81->vtbl;
      if ( ((int)v81->vtbl & 2) != 0 )
      {
        v86 = *(float *)&v81->members.flags0;
        v87 = *(float *)&v81->members.extraData.vtbl;
        v109 = *(float *)&v81->members.fullName.name.m_dataLen;
        v88 = v109 - *(float *)(a1 + 0x80);
        v110 = v86;
        v111 = v87;
        v112 = v88;
        v113 = v86 - *(float *)(a1 + 0x84);
        retaddr = v87 - *(float *)(a1 + 0x88);
        *(float *)&v108[1] = v113 * v113 + v112 * v112 + retaddr * retaddr;
        *(float *)&v108[1] = sqrt(*(float *)&v108[1]);
        v89 = (double)*(int *)&v81->members.extraData.members.m_presenceBitfield[8];
        if ( *(int *)&v81->members.extraData.members.m_presenceBitfield[8] < 0 )
          v89 = v89 + flt_A2FC78;
        v9 = byte_B333B8 == 0;
        v105 = v89;
        if ( !v9 && ((unsigned __int8)vtbl & 4) == 0 )
          v105 = v105 * dbl_A3C770;
        v90 = v105 < (double)*(float *)&v108[1];
        LOBYTE(v107) = v90;
        sub_6B7130((int)v81, v90);
        if ( v90 )
        {
          if ( ((int)v81->vtbl & 0x100) != 0 )
            sub_6B6AC0(v81);
        }
      }
      if ( sub_6B6AF0((int)v81) && !sub_6B7050((int)v81) && !HIBYTE(v81->members.objectList.refr) )
        break;
      if ( sub_6B7050((int)v81)
        && ((int)v81->vtbl & 0x10) != 0
        && !HIBYTE(v81->members.objectList.refr)
        && HIWORD(v81->members.pathGrid)
        && ((int)v81->vtbl & 0x100) == 0 )
      {
        if ( byte_B333B8 )
          goto LABEL_174;
        sub_6B6E60(v81, 1);
        HIBYTE(v81->members.objectList.refr) = 1;
        v101 = 0;
        if ( ((int)v81->vtbl & 0x1000) != 0 )
        {
          sub_6AB8D0((_DWORD *)a1, v81->members.super.refID, 0, 0x1388);
          goto LABEL_173;
        }
        v91 = (_DWORD *)a1;
        goto LABEL_172;
      }
LABEL_173:
      if ( byte_B333B8 )
      {
LABEL_174:
        if ( ((int)v81->vtbl & 0x1000) != 0 )
        {
          v81->vtbl = (TESFormVtbl *)((int)v81->vtbl | 0x100);
          sub_6B6AC0(v81);
        }
      }
      if ( ((int)v81->vtbl & 0x100) != 0 && !sub_6B6AF0((int)v81) && ((int)v81->vtbl & 0x200) == 0 )
      {
        v92 = *(_DWORD **)(a1 + 0x320);
        LODWORD(v108[1]) = *(_DWORD *)ArgList;
        sub_6AA320(v92, &v108[1]);
      }
      if ( a7 == 0.0 )
        goto LABEL_181;
    }
    HIBYTE(v81->members.objectList.refr) = 1;
    if ( ((int)v81->vtbl & 0x20) == 0 )
      v81->vtbl = (TESFormVtbl *)((int)v81->vtbl | 0x100);
    v91 = (_DWORD *)a1;
    v101 = 1;
    if ( ((int)v81->vtbl & 0x1000) == 0 )
    {
      sub_6AB8D0((_DWORD *)a1, v81->members.super.refID, 1, 0x1388);
      goto LABEL_173;
    }
LABEL_172:
    sub_6AB8D0(v91, v81->members.super.refID, v101, 0x1388);
    goto LABEL_173;
  }
  a6 = sub_6A9030(*(unsigned int **)(a1 + 0x300));
  while ( a6 )
  {
    sub_452600(*(NiTMap_TESCELL **)(a1 + 0x300), (NiTMap_Entry_TESCELL **)&a6, (void **)&v105, &v103);
    if ( ((int)v103->vtbl & 0x100) != 0 && ((int)v103->vtbl & 0x21) != 0 && !sub_6B6AF0((int)v103) )
    {
      v12 = *(_DWORD **)(a1 + 0x320);
      a7 = v105;
      sub_6AA320(v12, &a7);
    }
  }
  if ( !*(_DWORD *)(*(_DWORD *)(a1 + 0x320) + 0xC) )
    return 0;
  do
  {
    v13 = *(_DWORD **)(a1 + 0x320);
    v14 = (int *)v13[1];
    v15 = *v14;
    v9 = *v14 == 0;
    v13[1] = *v14;
    if ( v9 )
      v13[2] = 0;
    else
      *(_DWORD *)(v15 + 4) = 0;
    v16 = v14[2];
    (*(void (__usercall **)(_DWORD *@<ecx>, int *, double@<st0>, double@<st1>, double@<st2>))(*v13 + 8))(
      v13,
      v14,
      a5,
      a4,
      a3);
    --v13[3];
    sub_6AC9F0((_DWORD *)a1, v16);
  }
  while ( *(_DWORD *)(*(_DWORD *)(a1 + 0x320) + 0xC) );
  return 0;
}
