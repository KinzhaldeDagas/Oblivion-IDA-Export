// Per-cell canopy shadow mask updater; ensures global canopy shadow texture via 0x55FDF0 then paints mask pixels across current/neighbor cells.
void __thiscall sub_4CE610(TESObjectCELL *this, float a2, int a3, int a4, unsigned int a5, int a6)
{
  unsigned int v7; // edi
  TESObjectCELL **v8; // eax
  double v9; // rt0
  NiRenderedTexture *v10; // ecx
  int v11; // edi
  int v12; // eax
  NiRenderedTextureVtbl *vftable; // edx
  int v14; // ebp
  double v15; // st7
  double v16; // st7
  double v17; // st6
  int v18; // edi
  double v19; // st5
  double v20; // st4
  double v21; // st2
  int v22; // eax
  double v23; // st3
  double v24; // st6
  float v25; // edx
  int v26; // ebx
  int v27; // ecx
  double v28; // rtt
  int v29; // edi
  double v30; // st7
  int v31; // ebp
  double v32; // st7
  int YCoordinate; // eax
  TESObjectCELL *v34; // ecx
  TESObjectCELL *v35; // ecx
  signed int v36; // eax
  int v37; // ecx
  TESObjectCELL *v38; // ecx
  signed int v39; // eax
  int v40; // ecx
  TESObjectCELL *v41; // ecx
  signed int v42; // eax
  int v43; // ecx
  TESObjectCELL *v44; // ecx
  signed int XCoordinate; // eax
  int v46; // ecx
  TESObjectCELL *v47; // ecx
  signed int v48; // eax
  int v49; // ecx
  signed int v50; // eax
  int v51; // ecx
  double v52; // st5
  double v53; // st3
  signed int v54; // [esp+8h] [ebp-E0h]
  signed int v55; // [esp+8h] [ebp-E0h]
  signed int v56; // [esp+8h] [ebp-E0h]
  signed int v57; // [esp+8h] [ebp-E0h]
  signed int v58; // [esp+8h] [ebp-E0h]
  signed int v59; // [esp+8h] [ebp-E0h]
  TESForm **v60; // [esp+Ch] [ebp-DCh]
  int v61; // [esp+10h] [ebp-D8h]
  int v62; // [esp+10h] [ebp-D8h]
  int v63; // [esp+10h] [ebp-D8h]
  int v64; // [esp+10h] [ebp-D8h]
  int v65; // [esp+10h] [ebp-D8h]
  char v66; // [esp+14h] [ebp-D4h]
  char v67; // [esp+14h] [ebp-D4h]
  char v68; // [esp+14h] [ebp-D4h]
  char v69; // [esp+14h] [ebp-D4h]
  char v70; // [esp+14h] [ebp-D4h]
  char v71; // [esp+14h] [ebp-D4h]
  float v72; // [esp+28h] [ebp-C0h]
  float v73; // [esp+28h] [ebp-C0h]
  float v74; // [esp+28h] [ebp-C0h]
  float v75; // [esp+28h] [ebp-C0h]
  NiRenderedTexture *v76; // [esp+2Ch] [ebp-BCh] BYREF
  float v77; // [esp+30h] [ebp-B8h]
  int v78; // [esp+34h] [ebp-B4h]
  int v79; // [esp+38h] [ebp-B0h] BYREF
  int v80; // [esp+3Ch] [ebp-ACh]
  int v81; // [esp+40h] [ebp-A8h]
  float v82; // [esp+44h] [ebp-A4h]
  float v83; // [esp+48h] [ebp-A0h]
  float v84; // [esp+4Ch] [ebp-9Ch]
  unsigned int v85; // [esp+50h] [ebp-98h]
  TESForm *v86; // [esp+54h] [ebp-94h] BYREF
  TESForm *v87; // [esp+58h] [ebp-90h] BYREF
  int v88; // [esp+5Ch] [ebp-8Ch] BYREF
  int v89; // [esp+60h] [ebp-88h]
  int v90; // [esp+64h] [ebp-84h]
  TESForm *v91; // [esp+68h] [ebp-80h] BYREF
  int v92; // [esp+6Ch] [ebp-7Ch]
  TESForm *v93; // [esp+70h] [ebp-78h] BYREF
  double v94; // [esp+74h] [ebp-74h] BYREF
  int v95; // [esp+7Ch] [ebp-6Ch] BYREF
  double v96; // [esp+80h] [ebp-68h]
  double v97; // [esp+88h] [ebp-60h]
  double v98; // [esp+90h] [ebp-58h]
  float v99[20]; // [esp+98h] [ebp-50h] BYREF

  if ( (this->members.flags0 & 1) == 0 ) /*0x4ce61d*/
  {
    BSTreeManager_GetCanopyShadow(); /*0x4ce625*/
    v76 = 0; /*0x4ce639*/
    v79 = 0; /*0x4ce63d*/
    v94 = 0.0; /*0x4ce641*/
    v93 = 0; /*0x4ce645*/
    v87 = 0; /*0x4ce649*/
    v88 = 0; /*0x4ce64d*/
    v86 = 0; /*0x4ce651*/
    v95 = 0; /*0x4ce655*/
    v91 = 0; /*0x4ce659*/
    sub_41F9F0(&this->members.extraData, &v76, &v79); /*0x4ce661*/
    v7 = a5; /*0x4ce666*/
    if ( !a5 || a5 > 0x400 ) /*0x4ce677*/
      v7 = 0x12C; /*0x4ce679*/
    if ( !v76 ) /*0x4ce682*/
      TESObjectCELL::CreateCanopyShadowMaskForCell((ExtraDataList *)this, &v76, &v79); /*0x4ce68f*/
    if ( sub_4CE3C0(this) ) /*0x4ce699*/
    {
      v8 = (TESObjectCELL **)sub_4CE3C0(this); /*0x4ce6b9*/
      if ( sub_4C3030(v8, (int)v99, &a2, 0) ) /*0x4ce6c0*/
      {
        v9 = dbl_A40358; /*0x4ce6e8*/
        v10 = v76; /*0x4ce6ee*/
        v82 = v99[0] * v9; /*0x4ce6f2*/
        v11 = v7 >> 6; /*0x4ce6f6*/
        v83 = v9 * v99[1]; /*0x4ce6ff*/
        if ( v76 ) /*0x4ce703*/
        {
          if ( !*(_DWORD *)(v79 + 4) ) /*0x4ce70d*/
          {
            Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x4ce714*/
            v12 = (*((int (__thiscall **)(NiDX9TextureData *))v76->member.super.rendererData->_vtbl + 5))(v76->member.super.rendererData); /*0x4ce728*/
            (*(void (__stdcall **)(int, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)v12 + 0x4C))(v12, 0, v79, 0, 0); /*0x4ce738*/
            Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x4ce73c*/
            v10 = v76; /*0x4ce741*/
          }
          vftable = v10->__vftable; /*0x4ce74f*/
          v92 = *(_DWORD *)(v79 + 4); /*0x4ce751*/
          v14 = vftable->super.GetHeight((NiTexture *)v10); /*0x4ce75d*/
          v81 = v11; /*0x4ce75f*/
          v15 = (double)v11; /*0x4ce763*/
          v90 = v14; /*0x4ce767*/
          if ( v11 < 0 ) /*0x4ce76b*/
            v15 = v15 + flt_A2FC78; /*0x4ce76d*/
          v84 = v15; /*0x4ce773*/
          v16 = v83; /*0x4ce777*/
          v17 = v84; /*0x4ce785*/
          v18 = Double_To_SInt32(v83); /*0x4ce78c*/
          v78 = v18; /*0x4ce78e*/
          v19 = (double)v18; /*0x4ce792*/
          v20 = v16; /*0x4ce796*/
          v97 = v17 + v16; /*0x4ce79c*/
          if ( v97 > v19 ) /*0x4ce7a7*/
          {
            v21 = v82; /*0x4ce7ad*/
            v22 = Double_To_SInt32(v16); /*0x4ce7b5*/
            v23 = v17 + v21; /*0x4ce7be*/
            v24 = v17 + v16; /*0x4ce7be*/
            v98 = v23; /*0x4ce7c6*/
            LODWORD(v25) = v14 * (v18 + 0x40) - 0x40; /*0x4ce7d3*/
            v26 = v14 * v18 + 0x40; /*0x4ce7d6*/
            v27 = v14 * (v18 - 0x40) - 0x40; /*0x4ce7d9*/
            v89 = v22; /*0x4ce7dc*/
            v77 = v25; /*0x4ce7e0*/
            v80 = v27; /*0x4ce7e4*/
            while ( 1 ) /*0x4ce7ec*/
            {
              v29 = v89; /*0x4ce7ec*/
              v72 = (float)v89; /*0x4ce7f8*/
              if ( v72 < v23 ) /*0x4ce807*/
                break; /*0x4ce807*/
              v52 = v23; /*0x4ceaa7*/
LABEL_46:
              ++v78; /*0x4cea66*/
              v27 += v14; /*0x4cea6f*/
              LODWORD(v25) += v14; /*0x4cea73*/
              v53 = (double)v78; /*0x4cea75*/
              v20 = v16; /*0x4cea75*/
              v26 += v14; /*0x4cea77*/
              v80 = v27; /*0x4cea7b*/
              v77 = v25; /*0x4cea7f*/
              if ( v53 >= v24 ) /*0x4cea88*/
                return; /*0x4cea88*/
              v28 = v53; /*0x4ce7ea*/
              v23 = v52; /*0x4ce7ea*/
              v19 = v28; /*0x4ce7ea*/
            }
            v85 = v89; /*0x4ce80f*/
            v30 = v72; /*0x4ce813*/
            v96 = (v20 - v19) * (v20 - v19); /*0x4ce81b*/
            while ( 1 ) /*0x4ce82d*/
            {
              v73 = (v82 - v30) * (v82 - v30) + v96; /*0x4ce82d*/
              v74 = sqrt(v73); /*0x4ce83a*/
              if ( v84 >= (double)v74 ) /*0x4ce855*/
              {
                v31 = v26 + v29 - 0x40; /*0x4ce865*/
                v32 = Rand5(flt_A468E8); /*0x4ce869*/
                v81 = (int)(dbl_A3DDD8 - v32 - v74 / v84 * dbl_A2FCC8); /*0x4ce8a4*/
                if ( v78 >= 0x40 ) /*0x4ce8b0*/
                {
                  if ( v29 < 0 ) /*0x4ce8da*/
                  {
                    v66 = v81; /*0x4ce8e3*/
                    v61 = v80 + v29 + 0x80; /*0x4ce8eb*/
                    v60 = (TESForm **)&v95; /*0x4ce8f0*/
                    YCoordinate = TESObjectCELL_GetYCoordinate(this) + 1; /*0x4ce8f8*/
LABEL_43:
                    v59 = YCoordinate; /*0x4cea14*/
                    v50 = TESObjectCELL_GetXCoordinate(v34) - 1; /*0x4cea1a*/
                    sub_4CE540(v51, v50, v59, v60, v61, v66); /*0x4cea1e*/
                    goto LABEL_44; /*0x4cea1e*/
                  }
                  if ( v29 >= 0x40 ) /*0x4ce903*/
                  {
                    v67 = v81; /*0x4ce90c*/
                    v62 = v29 + v80; /*0x4ce90f*/
                    v54 = TESObjectCELL_GetYCoordinate(this) + 1; /*0x4ce91f*/
                    v36 = TESObjectCELL_GetXCoordinate(v35) + 1; /*0x4ce925*/
                    sub_4CE540(v37, v36, v54, &v86, v62, v67); /*0x4ce928*/
                    goto LABEL_44; /*0x4ce928*/
                  }
                }
                else if ( v78 < 0 ) /*0x4ce8b4*/
                {
                  if ( v29 < 0 ) /*0x4ce933*/
                  {
                    v66 = v81; /*0x4ce93c*/
                    v61 = LODWORD(v77) + v29 + 0x80; /*0x4ce944*/
                    v60 = (TESForm **)&v94 + 1; /*0x4ce949*/
                    YCoordinate = TESObjectCELL_GetYCoordinate(this) - 1; /*0x4ce951*/
                    goto LABEL_43; /*0x4ce954*/
                  }
                  if ( v29 >= 0x40 ) /*0x4ce95c*/
                  {
                    v68 = v81; /*0x4ce965*/
                    v63 = v29 + LODWORD(v77); /*0x4ce968*/
                    v55 = TESObjectCELL_GetYCoordinate(this) - 1; /*0x4ce978*/
                    v39 = TESObjectCELL_GetXCoordinate(v38) + 1; /*0x4ce97e*/
                    sub_4CE540(v40, v39, v55, &v91, v63, v68); /*0x4ce981*/
                    goto LABEL_44; /*0x4ce981*/
                  }
                }
                else if ( v85 <= 0x3F ) /*0x4ce8bb*/
                {
                  if ( *(_BYTE *)(v92 + v31) ) /*0x4ce8c1*/
                    *(_BYTE *)(v92 + v31) = 0xFF; /*0x4ce8c7*/
                  else
                    *(_BYTE *)(v92 + v31) = v81; /*0x4ce8d0*/
                  goto LABEL_44; /*0x4ce8cb*/
                }
                if ( v78 < 0x40 ) /*0x4ce989*/
                {
                  if ( v78 >= 0 ) /*0x4ce9b1*/
                  {
                    if ( v29 < 0x40 ) /*0x4ce9da*/
                    {
                      if ( v29 < 0 ) /*0x4ce9fe*/
                      {
                        v66 = v81; /*0x4cea03*/
                        v61 = v26 + v29; /*0x4cea07*/
                        v60 = (TESForm **)&v88; /*0x4cea0c*/
                        YCoordinate = TESObjectCELL_GetYCoordinate(this); /*0x4cea0f*/
                        goto LABEL_43; /*0x4cea0f*/
                      }
                    }
                    else
                    {
                      v71 = v81; /*0x4ce9df*/
                      v58 = TESObjectCELL_GetYCoordinate(this); /*0x4ce9f1*/
                      v48 = TESObjectCELL_GetXCoordinate(v47) + 1; /*0x4ce9f7*/
                      sub_4CE540(v49, v48, v58, &v87, v26 + v29 - 0x80, v71); /*0x4ce9fa*/
                    }
                  }
                  else
                  {
                    v70 = v81; /*0x4ce9ba*/
                    v65 = LODWORD(v77) + v29 + 0x40; /*0x4ce9bf*/
                    v57 = TESObjectCELL_GetYCoordinate(this) - 1; /*0x4ce9cf*/
                    XCoordinate = TESObjectCELL_GetXCoordinate(v44); /*0x4ce9d0*/
                    sub_4CE540(v46, XCoordinate, v57, &v93, v65, v70); /*0x4ce9d5*/
                  }
                }
                else
                {
                  v69 = v81; /*0x4ce992*/
                  v64 = v80 + v29 + 0x40; /*0x4ce997*/
                  v56 = TESObjectCELL_GetYCoordinate(this) + 1; /*0x4ce9a7*/
                  v42 = TESObjectCELL_GetXCoordinate(v41); /*0x4ce9a8*/
                  sub_4CE540(v43, v42, v56, (TESForm **)&v94, v64, v69); /*0x4ce9ad*/
                }
              }
LABEL_44:
              ++v85; /*0x4cea23*/
              v75 = (float)++v29; /*0x4cea33*/
              v30 = v75; /*0x4cea37*/
              if ( v98 <= v75 ) /*0x4cea46*/
              {
                v25 = v77; /*0x4cea4c*/
                v27 = v80; /*0x4cea56*/
                v14 = v90; /*0x4cea5e*/
                v24 = v97; /*0x4cea62*/
                v52 = v98; /*0x4cea64*/
                v16 = v83; /*0x4cea64*/
                goto LABEL_46; /*0x4cea64*/
              }
            }
          }
        }
      }
    }
  }
}
