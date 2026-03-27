int __thiscall sub_7FF4A0(NiTArray_NiD3DPass *this, float a2, int a3, int a4, float a5, int a6, int a7, int a8)
{
  int v9; // edi
  int v10; // esi
  BOOL v11; // eax
  signed int v12; // ebp
  int v13; // eax
  int v15; // esi
  float v16; // ecx
  float v17; // edx
  double v18; // st7
  double v19; // st6
  int v20; // edi
  bool v21; // zf
  float v22; // edx
  float v23; // eax
  int v24; // ecx
  double v25; // st7
  double v26; // st6
  int v27; // eax
  int v28; // edx
  double v29; // rt0
  int v30; // eax
  bool v31; // cl
  double v32; // st6
  double v33; // st6
  int v34; // edx
  int v35; // eax
  int v36; // ecx
  int v37; // eax
  unsigned __int16 v38; // ax
  int v39; // ecx
  int i; // eax
  int j; // ecx
  int v42; // ecx
  int v43; // edx
  float v44; // eax
  int v45; // edx
  int v46; // eax
  int v47; // ecx
  int v48; // ecx
  int v49; // eax
  bool v50; // cc
  int v51; // eax
  double v52; // rtt
  double v53; // st6
  double v54; // st7
  UInt32 v55; // eax
  int v56; // eax
  NiD3DPass *v57; // esi
  int v58; // edi
  int v59; // ebp
  float *v60; // ecx
  double v61; // st7
  double v62; // st6
  double v63; // st5
  int v64; // eax
  double v65; // st6
  double v66; // st7
  int v67; // ecx
  int v68; // edx
  int v69; // eax
  float v70; // edx
  float v71; // eax
  float v72; // ecx
  int v73; // eax
  double v74; // st6
  int v75; // edx
  int v76; // eax
  int v77; // ecx
  int v78; // edx
  double v79; // rt0
  int v80; // edx
  int v81; // ecx
  int v82; // eax
  double v83; // rt1
  double v84; // st6
  double v85; // st7
  double v86; // rt2
  UInt32 Stage; // ebx
  int v88; // eax
  int v89; // edi
  int v90; // ebp
  NiTexture *Texture; // ebx
  int v92; // ebp
  UInt32 m_uiRefCount; // edi
  int v94; // edx
  int v95; // eax
  int v96; // edi
  int v97; // ebp
  char v98; // al
  _DWORD *Unk08; // edi
  NiRenderedTexture *InnerTexture; // eax
  char v101; // al
  float v102; // eax
  NiD3DPass *v103; // [esp-4h] [ebp-5Ch]
  float *v104; // [esp+18h] [ebp-40h]
  int v105; // [esp+1Ch] [ebp-3Ch]
  int v106; // [esp+20h] [ebp-38h]
  int v107; // [esp+24h] [ebp-34h]
  float v108; // [esp+28h] [ebp-30h]
  float v109; // [esp+28h] [ebp-30h]
  float v111; // [esp+30h] [ebp-28h] BYREF
  float v112; // [esp+34h] [ebp-24h]
  float v113; // [esp+38h] [ebp-20h]
  int v114; // [esp+3Ch] [ebp-1Ch]
  int v115; // [esp+40h] [ebp-18h]
  int v116; // [esp+44h] [ebp-14h]
  int v117; // [esp+48h] [ebp-10h]
  unsigned int v118; // [esp+54h] [ebp-4h]

  (*((void (__thiscall **)(NiTArray_NiD3DPass *))this->_vtbl + 0x20))(this);
  v9 = LODWORD(a5);
  v10 = *(_DWORD *)(LODWORD(a5) + 0x18);
  if ( v10 )
    v11 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v10 + 0x54))(*(_DWORD *)(LODWORD(a5) + 0x18)) == 0xA;
  else
    v11 = 0;
  v12 = dword_B42E90;
  v13 = v11 ? v10 : 0;
  v104 = (float *)v13;
  v105 = dword_B42E90;
  if ( LOWORD(dword_B42EAC) == 5 )
    return sub_7FF080(this, *(float *)&v13, v12, v9);
  v15 = *(_DWORD *)(v9 + 0x10);
  v16 = *(float *)(v15 + 0x44);
  v17 = *(float *)(v15 + 0x48);
  v111 = *(float *)(v15 + 0x40);
  v112 = v16;
  v107 = v15;
  v113 = v17;
  sub_7FAB60(v13, v15, v12);
  v18 = 0.0;
  v19 = 1.0;
  if ( sub_8AA390(&v111, (float *)&dword_B3FA90) )
  {
    if ( UseHDR )
    {
      *(float *)&v106 = sub_507140();
      v111 = *(float *)&v106 * v111;
      v112 = *(float *)&v106 * v112;
      v113 = *(float *)&v106 * v113;
    }
    v20 = (int)v104;
    if ( (*(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)v104 + 0x90))(v104, 0) )
    {
      v25 = 1.0;
      if ( !UseHDR )
      {
        if ( v111 >= 1.0 )
          v111 = 1.0;
        if ( v112 >= 1.0 )
          v112 = 1.0;
        if ( v113 >= 1.0 )
          v113 = 1.0;
      }
      *(float *)&v114 = v111;
      v32 = v112;
      *(float *)&dword_B46FB8 = v111;
      *(float *)&v115 = v32;
      v33 = v113;
      dword_B46FBC = v115;
      *(float *)&v116 = v33;
      v26 = 0.0;
      dword_B46FC0 = v116;
      *(float *)&v117 = 0.0;
      *(float *)&dword_B46FC4 = 0.0;
    }
    else
    {
      v21 = UseHDR == 0;
      v22 = *(float *)&dword_B46F7C;
      v23 = *(float *)&dword_B46F80;
      v114 = dword_B46F78;
      v24 = dword_B46F84;
      *(float *)&v114 = v111 + *(float *)&v114;
      *(float *)&v115 = v112 + v22;
      *(float *)&v116 = v113 + v23;
      v25 = 1.0;
      if ( v21 )
      {
        if ( *(float *)&v114 >= 1.0 )
          *(float *)&v114 = 1.0;
        if ( *(float *)&v115 >= 1.0 )
          *(float *)&v115 = 1.0;
        if ( *(float *)&v116 >= 1.0 )
          *(float *)&v116 = 1.0;
      }
      v26 = 0.0;
      v27 = v115;
      dword_B46F78 = v114;
      v28 = v116;
      dword_B46F7C = v27;
      dword_B46F80 = v28;
      dword_B46F84 = v24;
    }
    v29 = v26;
    v19 = v25;
    v18 = v29;
  }
  else
  {
    v20 = (int)v104;
  }
  v30 = dword_B42F40;
  v31 = (dword_B42F40 & 8) != 0 && (*(_BYTE *)(v20 + 0x1C) & 1) != 0;
  LOBYTE(v106) = v31;
  if ( (v30 & 1) != 0 )
    flt_B46FC8 = v19;
  else
    flt_B46FC8 = v18;
  if ( (v30 & 2) != 0 )
    flt_B46FCC = v19;
  else
    flt_B46FCC = v18;
  if ( (v30 & 4) != 0 )
    flt_B46FD0 = v19;
  else
    flt_B46FD0 = v18;
  if ( v31 )
    flt_B46FD4 = v19;
  else
    flt_B46FD4 = v18;
  if ( v12 == 0x14E || v12 == 0x14F )
  {
    if ( (*(_DWORD *)(v20 + 0x1C) & 0x800) != 0 )
      flt_B46FD4 = v18;
    else
      flt_B46FD4 = v19;
  }
  v34 = dword_B25AD4;
  v35 = dword_B25AD8;
  dword_B46DE8 = dword_B25AD0;
  v36 = dword_B25ADC;
  dword_B46DEC = v34;
  dword_B46DF0 = v35;
  dword_B46DF4 = v36;
  if ( v12 >= 0x147 )
  {
    if ( (unsigned int)(v12 - 0x152) > 1 )
    {
      if ( v12 == 0x14D )
      {
        if ( !(unsigned __int16)sub_7ED5D0((_DWORD *)v20) )
        {
          if ( byte_B42CE3 )
          {
            *(float *)&v114 = flt_A3D65C;
            v115 = v114;
            v42 = v114;
            v116 = v114;
            v43 = v114;
            dword_B47008[0] = v114;
            *(float *)&v117 = 1.0;
            dword_B4700C = v42;
            v44 = *(float *)&v117;
            dword_B47010 = v43;
            flt_B47014 = v44;
          }
          else
          {
            v45 = dword_B46F7C;
            v46 = dword_B46F80;
            dword_B47008[0] = dword_B46F78;
            v47 = dword_B46F84;
            dword_B4700C = v45;
            dword_B47010 = v46;
            LODWORD(flt_B47014) = v47;
          }
        }
        *(_DWORD *)(*((_DWORD *)this + 0x27) + 0x20) = 0xA;
        v48 = dword_B2DCFC;
        v49 = 1;
        v50 = dword_B2DCFC <= 1;
        LOBYTE(dword_B46939) = 1;
        BYTE1(dword_B46939) = 0;
        if ( !v50 )
        {
          do
          {
            *(_BYTE *)(2 * v49 + 0xB4693A) = 0;
            *(_BYTE *)(2 * v49++ + 0xB46939) = 0;
          }
          while ( v49 < v48 );
        }
        *(_BYTE *)(dword_B46C18 + 8) = 0;
      }
      else
      {
        v51 = *((_DWORD *)this + 0x27);
        if ( (unsigned int)(v12 - 0x14E) > 3 )
        {
          *(_DWORD *)(v51 + 0x20) = 9;
          _memset(&dword_B46939, 0, 2 * dword_B2DCFC);
          v54 = 0.0;
          flt_B46FD8 = 0.0;
        }
        else
        {
          v52 = v19;
          v53 = v18;
          v54 = v52;
          *(_DWORD *)(v51 + 0x20) = 0xB;
          flt_B46FD8 = v53;
        }
        v55 = dword_B46C18;
        flt_B46FDC = v54;
        *(_BYTE *)(v55 + 8) = 0;
      }
    }
    else
    {
      *(_BYTE *)(dword_B46C18 + 8) = 1;
      *(_BYTE *)(dword_B46C14 + 8) = 1;
      dword_B46939 = 0x1010101;
      dword_B4693D = 0x1010101;
      *(_DWORD *)(*((_DWORD *)this + 0x27) + 0x20) = 0x11;
    }
  }
  else
  {
    LOBYTE(v37) = *(_BYTE *)(dword_B42EB8 + 8);
    if ( (_BYTE)v37 )
    {
      LOWORD(v37) = (unsigned __int8)v37;
      if ( dword_B2DCFC < (unsigned __int8)v37 )
        v37 = dword_B2DCFC;
      v38 = v37 - 1;
    }
    else
    {
      v38 = 0;
    }
    flt_B46FD8 = v19;
    flt_B46FDC = (float)v38;
    flt_B46FE0 = *(float *)(v15 + 0x4C);
    *(_DWORD *)(*((_DWORD *)this + 0x27) + 0x20) = 2 * v38 + 0xB;
    if ( *(_DWORD *)(*(_DWORD *)(LODWORD(a2) + 0xB4) + 0x24) )
      v18 = v19;
    v39 = v38 + 1;
    flt_B46FE4 = v18;
    for ( i = 0; i < v39; ++i )
    {
      *(_BYTE *)(2 * i + 0xB4693A) = 1;
      *(_BYTE *)(2 * i + 0xB46939) = 1;
    }
    for ( j = dword_B2DCFC; i < j; ++i )
    {
      *(_BYTE *)(2 * i + 0xB4693A) = 0;
      *(_BYTE *)(2 * i + 0xB46939) = 0;
    }
    *(_BYTE *)(dword_B46C18 + 8) = 0;
    *(_BYTE *)(dword_B46C14 + 8) = 0;
  }
  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 0xC) + 0x48))(*((_DWORD *)this + 0xC));
  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 0xB) + 0x48))(*((_DWORD *)this + 0xB));
  v56 = sub_862B40(v12, (_DWORD *)v20, v106);
  v57 = (NiD3DPass *)v56;
  if ( v56 )
  {
    if ( (unsigned int)(v12 - 0x15E) <= 1 )
      sub_7FEE40((NiGeometry *)LODWORD(a2), v20, v56);
    v21 = (*(_BYTE *)(v20 + 0x1C) & 2) == 0;
    v58 = *((_DWORD *)this + 9);
    if ( v21 )
      v59 = *((_DWORD *)this + 0x23);
    else
      v59 = *((_DWORD *)this + 0x24);
    if ( v58 != v59 )
    {
      if ( v58 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v58 + 4)) )
          (**(void (__thiscall ***)(int, int))v58)(v58, 1);
      }
      *((_DWORD *)this + 9) = v59;
      if ( v59 )
        InterlockedIncrement((volatile LONG *)(v59 + 4));
    }
    if ( HIBYTE(dword_B46970) )
    {
      v60 = *(float **)(LODWORD(a5) + 0xC);
      if ( !v60 )
      {
        *(float *)&v114 = flt_A93350;
        dword_B46DB8 = v114;
        *(float *)&v115 = 0.0;
        *(float *)&v116 = 1.0;
        *(float *)&dword_B46DBC = 0.0;
        v75 = dword_B25AD0;
        v65 = 0.0;
        v66 = 1.0;
        *(float *)&v117 = 0.0;
        dword_B46DC0 = v116;
        v76 = dword_B25AD4;
        dword_B46DC4 = v117;
        v77 = dword_B25AD8;
        dword_B46DC8 = v75;
        v78 = dword_B25ADC;
        dword_B46DCC = v76;
        dword_B46DD0 = v77;
        dword_B46DD4 = v78;
        goto LABEL_97;
      }
      v108 = v60[0xB];
      a5 = v60[0xC];
      v61 = 0.0;
      v62 = a5;
      v63 = v108;
      if ( a5 == 0.0 && 0.0 == v63 )
      {
        *(float *)&v114 = flt_A93350;
        dword_B46DB8 = v114;
        *(float *)&v115 = 0.0;
        *(float *)&dword_B46DBC = 0.0;
        v64 = dword_B25AD0;
        *(float *)&v116 = 1.0;
        v65 = 0.0;
        v66 = 1.0;
        *(float *)&v117 = 0.0;
        *(float *)&dword_B46DC0 = 1.0;
        v67 = dword_B25AD4;
        dword_B46DC4 = v117;
        v68 = dword_B25AD8;
        dword_B46DC8 = v64;
        v69 = dword_B25ADC;
        dword_B46DCC = v67;
        dword_B46DD0 = v68;
        dword_B46DD4 = v69;
        goto LABEL_97;
      }
      v70 = v60[8];
      v71 = v60[9];
      v72 = v60[0xA];
      a5 = v62 - v63;
      v111 = v70;
      v112 = v71;
      *(float *)&v114 = v62;
      v113 = v72;
      v73 = LODWORD(a5);
      dword_B46DB8 = v114;
      *(float *)&v116 = 1.0;
      dword_B46DBC = v73;
      *(float *)&v117 = 0.0;
      dword_B46DC0 = v116;
      *(float *)&v114 = v111;
      dword_B46DC4 = v117;
      *(float *)&v115 = v112;
      dword_B46DC8 = v114;
      *(float *)&v116 = v113;
      dword_B46DCC = v115;
      v74 = 1.0;
      *(float *)&v117 = 1.0;
      dword_B46DD0 = v116;
      dword_B46DD4 = v117;
    }
    else
    {
      v61 = 0.0;
      v74 = 1.0;
    }
    v79 = v74;
    v65 = v61;
    v66 = v79;
LABEL_97:
    v21 = byte_B42CE3 == 0;
    v80 = dword_B25AE8;
    v81 = dword_B25AE4;
    LODWORD(flt_B46FA8) = dword_B25AE0;
    v82 = dword_B25AEC;
    dword_B46FB0 = v80;
    dword_B46FAC = v81;
    dword_B46FB4 = v82;
    if ( v21 && (unsigned int)(v105 - 0x147) <= 6 )
    {
      a5 = *(float *)(v107 + 0x50);
      v83 = v65;
      v84 = v66;
      v85 = v83;
      if ( v84 <= a5 )
      {
        flt_B46FA8 = v104[0x29];
      }
      else
      {
        a5 = *(float *)(v107 + 0x50);
        flt_B46FA8 = v104[0x29] * a5;
      }
    }
    else
    {
      a5 = *(float *)(v107 + 0x50);
      v86 = v65;
      v84 = v66;
      v85 = v86;
      if ( v84 <= a5 )
        flt_B46FA8 = v84;
      else
        flt_B46FA8 = *(float *)(v107 + 0x50);
    }
    if ( (unsigned int)(v105 - 0x147) > 0x18 || (unsigned int)(v105 - 0x14E) <= 3 )
    {
      Stage = v57->Stages.data->Stage;
      v88 = (*(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)v104 + 0x88))(v104, 0);
      v89 = *(_DWORD *)(Stage + 4);
      v90 = v88;
      if ( v89 != v88 )
      {
        if ( v89 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v89 + 4)) )
            (**(void (__thiscall ***)(int, int))v89)(v89, 1);
        }
        *(_DWORD *)(Stage + 4) = v90;
        if ( v90 )
          InterlockedIncrement((volatile LONG *)(v90 + 4));
      }
      Texture = v57->Stages.data->Texture;
      if ( (*(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)v104 + 0x8C))(v104, 0) )
        v92 = (*(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)v104 + 0x8C))(v104, 0);
      else
        v92 = dword_B430DC;
      m_uiRefCount = Texture->members.super.super.m_uiRefCount;
      if ( m_uiRefCount != v92 )
      {
        if ( m_uiRefCount )
        {
          if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) )
            (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1);
        }
        Texture->members.super.super.m_uiRefCount = v92;
        if ( v92 )
          InterlockedIncrement((volatile LONG *)(v92 + 4));
      }
      v94 = dword_B25AD4;
      v95 = dword_B25AD8;
      dword_B46FE8 = dword_B25AD0;
      dword_B46FF4 = dword_B25ADC;
      dword_B46FEC = v94;
      dword_B46FF0 = v95;
      if ( sub_7ED5C0(v104)
        && (unsigned int)(dword_B42E90 - 0x14E) <= 3
        && ((v96 = dword_B42EB8, v97 = **(_DWORD **)(dword_B42EB8 + 0xC), (v98 = *(_BYTE *)(v97 + 0xF4)) != 0)
         && *(_DWORD *)(v97 + 0x114)
         || *(_BYTE *)(v97 + 0x120))
        && *(_BYTE *)(v96 + 8) )
      {
        if ( v98 )
        {
          if ( sub_405A80() )
          {
            *(float *)&dword_B46FEC = 1.0;
            Unk08 = (_DWORD *)v57->Stages.data->Unk08;
            InnerTexture = BSRenderedTexture::GetInnerTexture(*(BSRenderedTexture **)(v97 + 0x114));
            sub_76C910(Unk08, InnerTexture);
            sub_771640((_DWORD **)Unk08, 1);
            sub_7715E0((_DWORD **)Unk08, 0);
            v96 = dword_B42EB8;
          }
        }
        v101 = *(_BYTE *)(v97 + 0x120);
        a5 = *(float *)(**(_DWORD **)(v96 + 0xC) + 0x128);
        if ( v101 )
        {
          v85 = 0.0;
          *(float *)&dword_B46FF4 = 0.0;
          v84 = 1.0;
        }
        else
        {
          *(float *)&dword_B46FF4 = 1.0;
          v84 = 1.0;
          v85 = 0.0;
        }
        *(float *)&dword_B46FF0 = a5;
      }
      else
      {
        v85 = 0.0;
        v84 = 1.0;
      }
    }
    if ( v105 == 0x14D )
    {
      v102 = a2;
      a2 = *(float *)(LODWORD(a2) + 0x20) - CameraWorldTranslate;
      a5 = *(float *)(LODWORD(v102) + 0x24) - flt_B3F930;
      v109 = *(float *)(LODWORD(v102) + 0x28) - flt_B3F934;
      flt_B46E08 = a2;
      flt_B46E0C = a5;
      flt_B46E10 = v109;
    }
    if ( ((_DWORD)v104[7] & 0x80000) != 0 )
    {
      v21 = v57->RenderStateGroup == 0;
      a2 = v84;
      if ( v21 )
        v57->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
      sub_772CD0((_DWORD *)v57->RenderStateGroup, 0xAF, SLODWORD(a2), 0);
      v21 = v57->RenderStateGroup == 0;
      a2 = flt_A77830;
      if ( v21 )
        v57->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
    }
    else
    {
      a2 = v85;
      if ( (unsigned int)(v105 - 0x14E) > 3 )
      {
        if ( !v57->RenderStateGroup )
          v57->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
        sub_772CD0((_DWORD *)v57->RenderStateGroup, 0xAF, SLODWORD(a2), 0);
        v21 = v57->RenderStateGroup == 0;
        a2 = 0.0;
        if ( v21 )
          v57->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
      }
      else
      {
        if ( !v57->RenderStateGroup )
          v57->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
        sub_772CD0((_DWORD *)v57->RenderStateGroup, 0xAF, SLODWORD(a2), 0);
        v21 = v57->RenderStateGroup == 0;
        a2 = flt_A906F4;
        if ( v21 )
          v57->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
      }
    }
    sub_772CD0((_DWORD *)v57->RenderStateGroup, 0xC3, SLODWORD(a2), 0);
    ++v57->RefCount;
    a2 = *(float *)&v57;
    v103 = *((NiD3DPass **)this + 0xE);
    v118 = 0;
    sub_76CE40(this + 4, v103, (NiD3DPass **)&a2);
    v21 = v57->RefCount-- == 1;
    v118 = 0xFFFFFFFF;
    if ( v21 )
      sub_7604D0(v57);
    ++*((_DWORD *)this + 0xE);
  }
  return 0;
}
