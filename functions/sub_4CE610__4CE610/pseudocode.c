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

  if ( (this->members.flags0 & 1) == 0 )
  {
    sub_55FDF0();
    v76 = 0;
    v79 = 0;
    v94 = 0.0;
    v93 = 0;
    v87 = 0;
    v88 = 0;
    v86 = 0;
    v95 = 0;
    v91 = 0;
    sub_41F9F0(&this->members.extraData, &v76, &v79);
    v7 = a5;
    if ( !a5 || a5 > 0x400 )
      v7 = 0x12C;
    if ( !v76 )
      TESObjectCELL::CreateCanopyShadowMaskForCell((ExtraDataList *)this, &v76, &v79);
    if ( sub_4CE3C0(this) )
    {
      v8 = (TESObjectCELL **)sub_4CE3C0(this);
      if ( sub_4C3030(v8, (int)v99, &a2, 0) )
      {
        v9 = dbl_A40358;
        v10 = v76;
        v82 = v99[0] * v9;
        v11 = v7 >> 6;
        v83 = v9 * v99[1];
        if ( v76 )
        {
          if ( !*(_DWORD *)(v79 + 4) )
          {
            nullsub_returnTrue_0arg();
            v12 = (*((int (__thiscall **)(NiDX9TextureData *))v76->member.super.rendererData->_vtbl + 5))(v76->member.super.rendererData);
            (*(void (__stdcall **)(int, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)v12 + 0x4C))(v12, 0, v79, 0, 0);
            nullsub_returnTrue_0arg();
            v10 = v76;
          }
          vftable = v10->__vftable;
          v92 = *(_DWORD *)(v79 + 4);
          v14 = vftable->super.GetHeight((NiTexture *)v10);
          v81 = v11;
          v15 = (double)v11;
          v90 = v14;
          if ( v11 < 0 )
            v15 = v15 + flt_A2FC78;
          v84 = v15;
          v16 = v83;
          v17 = v84;
          v18 = Double_To_SInt32(v83);
          v78 = v18;
          v19 = (double)v18;
          v20 = v16;
          v97 = v17 + v16;
          if ( v97 > v19 )
          {
            v21 = v82;
            v22 = Double_To_SInt32(v16);
            v23 = v17 + v21;
            v24 = v17 + v16;
            v98 = v23;
            LODWORD(v25) = v14 * (v18 + 0x40) - 0x40;
            v26 = v14 * v18 + 0x40;
            v27 = v14 * (v18 - 0x40) - 0x40;
            v89 = v22;
            v77 = v25;
            v80 = v27;
            while ( 1 )
            {
              v29 = v89;
              v72 = (float)v89;
              if ( v72 < v23 )
                break;
              v52 = v23;
LABEL_46:
              ++v78;
              v27 += v14;
              LODWORD(v25) += v14;
              v53 = (double)v78;
              v20 = v16;
              v26 += v14;
              v80 = v27;
              v77 = v25;
              if ( v53 >= v24 )
                return;
              v28 = v53;
              v23 = v52;
              v19 = v28;
            }
            v85 = v89;
            v30 = v72;
            v96 = (v20 - v19) * (v20 - v19);
            while ( 1 )
            {
              v73 = (v82 - v30) * (v82 - v30) + v96;
              v74 = sqrt(v73);
              if ( v84 >= (double)v74 )
              {
                v31 = v26 + v29 - 0x40;
                v32 = Rand5(flt_A468E8);
                v81 = (int)(dbl_A3DDD8 - v32 - v74 / v84 * dbl_A2FCC8);
                if ( v78 >= 0x40 )
                {
                  if ( v29 < 0 )
                  {
                    v66 = v81;
                    v61 = v80 + v29 + 0x80;
                    v60 = (TESForm **)&v95;
                    YCoordinate = TESObjectCELL_GetYCoordinate(this) + 1;
LABEL_43:
                    v59 = YCoordinate;
                    v50 = TESObjectCELL_GetXCoordinate(v34) - 1;
                    sub_4CE540(v51, v50, v59, v60, v61, v66);
                    goto LABEL_44;
                  }
                  if ( v29 >= 0x40 )
                  {
                    v67 = v81;
                    v62 = v29 + v80;
                    v54 = TESObjectCELL_GetYCoordinate(this) + 1;
                    v36 = TESObjectCELL_GetXCoordinate(v35) + 1;
                    sub_4CE540(v37, v36, v54, &v86, v62, v67);
                    goto LABEL_44;
                  }
                }
                else if ( v78 < 0 )
                {
                  if ( v29 < 0 )
                  {
                    v66 = v81;
                    v61 = LODWORD(v77) + v29 + 0x80;
                    v60 = (TESForm **)&v94 + 1;
                    YCoordinate = TESObjectCELL_GetYCoordinate(this) - 1;
                    goto LABEL_43;
                  }
                  if ( v29 >= 0x40 )
                  {
                    v68 = v81;
                    v63 = v29 + LODWORD(v77);
                    v55 = TESObjectCELL_GetYCoordinate(this) - 1;
                    v39 = TESObjectCELL_GetXCoordinate(v38) + 1;
                    sub_4CE540(v40, v39, v55, &v91, v63, v68);
                    goto LABEL_44;
                  }
                }
                else if ( v85 <= 0x3F )
                {
                  if ( *(_BYTE *)(v92 + v31) )
                    *(_BYTE *)(v92 + v31) = 0xFF;
                  else
                    *(_BYTE *)(v92 + v31) = v81;
                  goto LABEL_44;
                }
                if ( v78 < 0x40 )
                {
                  if ( v78 >= 0 )
                  {
                    if ( v29 < 0x40 )
                    {
                      if ( v29 < 0 )
                      {
                        v66 = v81;
                        v61 = v26 + v29;
                        v60 = (TESForm **)&v88;
                        YCoordinate = TESObjectCELL_GetYCoordinate(this);
                        goto LABEL_43;
                      }
                    }
                    else
                    {
                      v71 = v81;
                      v58 = TESObjectCELL_GetYCoordinate(this);
                      v48 = TESObjectCELL_GetXCoordinate(v47) + 1;
                      sub_4CE540(v49, v48, v58, &v87, v26 + v29 - 0x80, v71);
                    }
                  }
                  else
                  {
                    v70 = v81;
                    v65 = LODWORD(v77) + v29 + 0x40;
                    v57 = TESObjectCELL_GetYCoordinate(this) - 1;
                    XCoordinate = TESObjectCELL_GetXCoordinate(v44);
                    sub_4CE540(v46, XCoordinate, v57, &v93, v65, v70);
                  }
                }
                else
                {
                  v69 = v81;
                  v64 = v80 + v29 + 0x40;
                  v56 = TESObjectCELL_GetYCoordinate(this) + 1;
                  v42 = TESObjectCELL_GetXCoordinate(v41);
                  sub_4CE540(v43, v42, v56, (TESForm **)&v94, v64, v69);
                }
              }
LABEL_44:
              ++v85;
              v75 = (float)++v29;
              v30 = v75;
              if ( v98 <= v75 )
              {
                v25 = v77;
                v27 = v80;
                v14 = v90;
                v24 = v97;
                v52 = v98;
                v16 = v83;
                goto LABEL_46;
              }
            }
          }
        }
      }
    }
  }
}
