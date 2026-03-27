NiTList_NiProperty *__thiscall sub_8637D0(_DWORD *this, NiGeometry *a2, int a3, _WORD *a4, int a5)
{
  int v5; // edi
  volatile LONG *v6; // ebp
  volatile LONG *v7; // esi
  _DWORD *v8; // esi
  int v9; // eax
  bool v10; // bl
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  unsigned int v18; // esi
  bool v19; // bl
  BSShaderProperty *v20; // esi
  int v21; // eax
  NiGeometry *v22; // edx
  volatile LONG *v23; // esi
  int v24; // ecx
  double v25; // st7
  float x; // ecx
  float y; // eax
  double v28; // st7
  float z; // ecx
  float Radius; // edx
  double v31; // st7
  double v32; // st7
  double v33; // st6
  double v34; // st7
  double v35; // st6
  double v36; // st6
  double v37; // st7
  double v38; // st6
  double v39; // st7
  double v40; // st6
  double v41; // st6
  double v42; // st7
  double v43; // rtt
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // edi
  int v49; // eax
  int v50; // esi
  _DWORD *i; // eax
  _DWORD *v52; // eax
  volatile LONG *v53; // ecx
  __int16 v54; // bx
  BSShaderAccumulator *inited; // eax
  int v56; // eax
  float v57; // eax
  bool v58; // bl
  int v59; // eax
  float v60; // eax
  __int16 v61; // cx
  __int16 v62; // si
  int v63; // eax
  volatile LONG *v64; // eax
  _DWORD *v65; // esi
  float v66; // eax
  int v67; // edi
  char v68; // bl
  int v69; // eax
  volatile LONG *v70; // eax
  int v71; // eax
  bool v72; // [esp+15h] [ebp-47h]
  bool v73; // [esp+16h] [ebp-46h]
  bool v74; // [esp+17h] [ebp-45h]
  bool v75; // [esp+18h] [ebp-44h]
  char v76; // [esp+19h] [ebp-43h]
  bool v77; // [esp+1Ah] [ebp-42h]
  bool v78; // [esp+1Bh] [ebp-41h]
  bool v79; // [esp+1Ch] [ebp-40h]
  bool v80; // [esp+1Dh] [ebp-3Fh]
  bool v81; // [esp+1Eh] [ebp-3Eh]
  bool v82; // [esp+1Fh] [ebp-3Dh]
  volatile LONG *vtlb; // [esp+24h] [ebp-38h] BYREF
  volatile LONG *j; // [esp+28h] [ebp-34h] BYREF
  float v86; // [esp+2Ch] [ebp-30h] BYREF
  int v87; // [esp+30h] [ebp-2Ch]
  float v88; // [esp+34h] [ebp-28h] BYREF
  float v89; // [esp+38h] [ebp-24h]
  volatile LONG *v90; // [esp+3Ch] [ebp-20h]
  float v91; // [esp+40h] [ebp-1Ch]
  float v92; // [esp+44h] [ebp-18h]
  float v93; // [esp+48h] [ebp-14h]
  float v94; // [esp+4Ch] [ebp-10h]
  int v95; // [esp+58h] [ebp-4h]

  v5 = a3 | (LOWORD(dword_B42EAC) << 8);
  v6 = *sub_405760(a2, &j);
  if ( *(float *)&j != 0.0 )
  {
    v7 = j;
    if ( !InterlockedDecrement(j + 1) )
      (**(void (__thiscall ***)(volatile LONG *, int))v7)(v7, 1);
  }
  v8 = this;
  v9 = *(this + 7);
  v10 = (v9 & 2) != 0;
  v73 = v10;
  if ( (v9 & 0x100000) == 0 || (v76 = 0, byte_B42E86) )
    v76 = 1;
  if ( (unsigned __int16)dword_B42EAC == 5 )
  {
    sub_7ED1A0(this);
    if ( *(this + 0x11) )
    {
      v11 = *(_DWORD *)(*(this + 0xF) + 8);
      if ( *(_BYTE *)(v11 + 8) )
        **(_DWORD **)(v11 + 0xC) = dword_B42EB0;
      if ( *(this + 0x11) )
        return (NiTList_NiProperty *)(v8 + 0xE);
    }
    NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)this + 2);
    v12 = FormHeapAlloc(0x10u);
    a5 = v12;
    if ( v10 )
    {
      v95 = 1;
      if ( v12 )
      {
        v13 = sub_7E2370(v12, (int)a2, 0x155, 1, 1u, dword_B42EB0);
        goto LABEL_18;
      }
    }
    else
    {
      v95 = 0;
      if ( v12 )
      {
        v13 = sub_7E2370(v12, (int)a2, 0x154, 1, 1u, dword_B42EB0);
LABEL_18:
        a5 = v13;
        v95 = 0xFFFFFFFF;
        sub_5B1E20((BSTextureManager *)(this + 0xE), (void **)&a5);
        v8 = this;
        return (NiTList_NiProperty *)(v8 + 0xE);
      }
    }
    v13 = 0;
    goto LABEL_18;
  }
  if ( (unsigned __int16)dword_B42EAC == 6 )
  {
    if ( *(this + 0x15) )
      return (NiTList_NiProperty *)(this + 0x12);
    if ( (v9 & 0x100000) != 0 )
    {
      v15 = FormHeapAlloc(0x10u);
      a5 = v15;
      v95 = 2;
      if ( v15 )
      {
        v16 = sub_7E2370(v15, (int)a2, 0x15D, 1, 0, 0);
LABEL_31:
        v95 = 0xFFFFFFFF;
        a5 = v16;
        sub_5B1E20((BSTextureManager *)this + 1, (void **)&a5);
        return (NiTList_NiProperty *)(this + 0x12);
      }
    }
    else
    {
      v17 = FormHeapAlloc(0x10u);
      a5 = v17;
      if ( v10 )
      {
        v95 = 4;
        if ( v17 )
        {
          v16 = sub_7E2370(v17, (int)a2, 0x15C, 1, 0, 0);
          goto LABEL_31;
        }
      }
      else
      {
        v95 = 3;
        if ( v17 )
        {
          v16 = sub_7E2370(v17, (int)a2, 0x15B, 1, 0, 0);
          goto LABEL_31;
        }
      }
    }
    v16 = 0;
    goto LABEL_31;
  }
  v80 = (*(this + 7) & 0x8000) != 0;
  v81 = (v9 & 0x10000) != 0;
  v77 = (*(this + 7) & 0x800) != 0;
  v78 = (*(this + 7) & 0x400) != 0;
  v79 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 0x90))(this, 0) != 0;
  v19 = 0;
  if ( !byte_B43074 )
  {
    if ( dword_B43108 )
    {
      if ( (dword_B42F40 & 0x20) != 0 && ShaderPackage >= 2 )
      {
        v18 = *(this + 7);
        if ( (v18 & 0x2000) == 0 && sub_7E5D00() && v18 >> 0x1C != 1 )
          v19 = 1;
      }
    }
  }
  v20 = (BSShaderProperty *)this;
  v21 = *(this + 7);
  v22 = a2;
  v74 = (v21 & 0x80) != 0;
  v75 = (v21 & 0x20000) != 0;
  v82 = (v21 & 0x200000) != 0;
  v72 = a2->member.geomData->member.m_pkColor != 0;
  if ( *(this + 0x38) )
    v19 = 0;
  if ( (v21 & 0x80000) != 0 )
  {
    v86 = *(float *)(*((_DWORD *)*sub_405760(a2, &vtlb) + 4) + 0x50);
    if ( *(float *)&vtlb != 0.0 )
    {
      v23 = vtlb;
      if ( !InterlockedDecrement(vtlb + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))v23)(v23, 1);
    }
    v24 = *((_DWORD *)v6 + 2);
    v25 = v86;
    if ( v86 == 1.0 )
    {
      if ( v24 )
      {
        if ( (*(_BYTE *)(v24 + 0x18) & 1) != 0 )
        {
          *(_WORD *)(v24 + 0x18) &= ~1u;
          *(this + 9) = 0;
        }
      }
    }
    else if ( v25 > 0.0 )
    {
      if ( v24 )
      {
        if ( (*(_BYTE *)(v24 + 0x18) & 1) == 0 )
        {
          *(_WORD *)(v24 + 0x18) |= 1u;
          *(this + 9) = 0;
        }
      }
    }
    v22 = a2;
    *((float *)this + 8) = v25;
    v20 = (BSShaderProperty *)this;
  }
  vtlb = (volatile LONG *)v20[1].member.unk38.vtlb;
  if ( v74 && flt_B430A0 > 0.0 )
  {
    x = v22->member.super.m_kWorldBound.Center.x;
    y = v22->member.super.m_kWorldBound.Center.y;
    v88 = *(float *)&dword_B46658;
    v28 = *(float *)&dword_B4665C;
    v91 = x;
    z = v22->member.super.m_kWorldBound.Center.z;
    v89 = v28;
    Radius = v22->member.super.m_kWorldBound.Radius;
    v90 = (volatile LONG *)dword_B46660;
    v92 = y;
    v93 = z;
    v94 = Radius;
    v86 = v91 - v88;
    *(float *)&j = y - v89;
    *(float *)&vtlb = z - *(float *)&v90;
    v88 = v86;
    v89 = *(float *)&j;
    v90 = vtlb;
    v31 = sub_404C90(&v88);
    *(float *)&j = v31 - v94;
    v32 = *(float *)&j;
    if ( v75 )
    {
      v33 = flt_B4309C;
      if ( v33 <= v32 )
      {
        v34 = v32 - v33;
        v35 = flt_B430A0 - v33;
LABEL_65:
        v37 = v34 / v35;
        v38 = 1.0;
        if ( v37 <= 1.0 )
          v38 = v37;
        *(float *)&vtlb = 1.0 - v38;
        goto LABEL_68;
      }
    }
    else
    {
      v36 = flt_B43094;
      if ( v36 <= v32 && flt_B43098 != 0.0 )
      {
        v34 = v32 - v36;
        v35 = flt_B43098 - v36;
        goto LABEL_65;
      }
    }
    *(float *)&vtlb = 1.0;
    v42 = (float)1.0;
LABEL_73:
    v41 = 0.0;
    if ( 0.0 != *(float *)&v20[1].member.unk38.vtlb )
      goto LABEL_77;
    goto LABEL_74;
  }
LABEL_68:
  v39 = 0.0;
  v40 = *(float *)&vtlb;
  if ( *(float *)&vtlb == 0.0 )
  {
    v41 = 0.0;
    v42 = *(float *)&vtlb;
    if ( *(float *)&v20[1].member.unk38.vtlb > 0.0 )
    {
LABEL_74:
      v20->member.lastRenderPassState = 0;
      goto LABEL_77;
    }
    v40 = *(float *)&vtlb;
    v39 = 0.0;
  }
  if ( v40 > v39 )
  {
    v42 = v40;
    goto LABEL_73;
  }
  v43 = v40;
  v41 = v39;
  v42 = v43;
LABEL_77:
  *(float *)&v20[1].member.unk38.vtlb = v42;
  if ( v42 == v41 )
    v74 = 0;
  if ( v20->member.lastRenderPassState == v5 )
    return &v20->member.passes;
  sub_7E24C0(v20);
  if ( 0.0 == v20->member.alpha || !v76 )
    return &v20->member.passes;
  if ( v80 )
  {
    v44 = FormHeapAlloc(0x10u);
    a5 = v44;
    v95 = 5;
    if ( v44 )
      v45 = sub_7E2370(v44, (int)a2, 0, 1, 0, 0);
    else
      v45 = 0;
    a5 = v45;
    v95 = 0xFFFFFFFF;
    *(_WORD *)(v45 + 4) = v73 + 0x156;
    sub_6AA320(&v20->member.passes.vtlb, &a5);
    goto LABEL_184;
  }
  if ( v81 )
  {
    v46 = FormHeapAlloc(0x10u);
    a5 = v46;
    v95 = 6;
    if ( v46 )
      v47 = sub_7E2370(v46, (int)a2, 0, 1, 0, 0);
    else
      v47 = 0;
    v95 = 0xFFFFFFFF;
    a5 = v47;
    *(_WORD *)(v47 + 4) = 0x158;
    sub_6AA320(&v20->member.passes.vtlb, &a5);
    goto LABEL_184;
  }
  v48 = *(_DWORD *)(GetShadowSceneNode(v20->member.passInfo >> 0x1C) + 0x118);
  v87 = v48;
  *(float *)&v49 = COERCE_FLOAT(FormHeapAlloc(0x10u));
  v86 = *(float *)&v49;
  v95 = 7;
  if ( *(float *)&v49 == 0.0 )
    *(float *)&v50 = 0.0;
  else
    *(float *)&v50 = COERCE_FLOAT(sub_7E2370(v49, (int)a2, 0, 1, 0, 0));
  v95 = 0xFFFFFFFF;
  vtlb = (volatile LONG *)v50;
  *(_BYTE *)(v50 + 8) = 1;
  for ( i = sub_7ED1A0(this); i; i = (_DWORD *)sub_7ED3B0((int **)this) )
  {
    if ( !*((_BYTE *)i + 0xF4) )
      ++*(_BYTE *)(v50 + 8);
  }
  if ( *(_BYTE *)(v50 + 8) )
  {
    *(_DWORD *)(v50 + 0xC) = FormHeapAlloc(4 * *(unsigned __int8 *)(v50 + 8));
    v52 = sub_7ED1A0(this);
    **(_DWORD **)(v50 + 0xC) = v48;
    for ( j = (volatile LONG *)1; v52; v52 = (_DWORD *)sub_7ED3B0((int **)this) )
    {
      if ( !*((_BYTE *)v52 + 0xF4) )
      {
        v53 = j;
        *(_DWORD *)(*(_DWORD *)(v50 + 0xC) + 4 * (_DWORD)j) = v52;
        j = (volatile LONG *)((char *)v53 + 1);
      }
    }
    *(_BYTE *)(v50 + 8) = (_BYTE)j;
  }
  else
  {
    *(_DWORD *)(v50 + 0xC) = 0;
  }
  sub_434980(this, 0x1000000, 0);
  if ( (*(this + 7) & 0x40000) != 0 )
  {
    v54 = v19 ? 0x13C : 0x12F;
LABEL_134:
    *(_WORD *)(v50 + 4) = v54;
    goto LABEL_135;
  }
  if ( !v73 )
  {
    if ( v77 )
    {
      if ( v72 )
        v54 = v19 ? 0x144 : 0x137;
      else
        v54 = v19 ? 0x13D : 0x130;
    }
    else if ( v78 )
    {
      v54 = v19 ? 0x13E : 0x131;
    }
    else if ( v79 )
    {
      if ( v72 )
        v54 = v19 ? 0x145 : 0x138;
      else
        v54 = v19 ? 0x140 : 0x133;
    }
    else if ( v72 )
    {
      v54 = v19 ? 0x142 : 0x135;
    }
    else
    {
      v54 = v19 ? 0x13A : 0x12D;
    }
    goto LABEL_134;
  }
  if ( !v77 )
  {
    if ( v78 )
    {
      v54 = v19 ? 0x13F : 0x132;
    }
    else if ( v79 )
    {
      if ( v72 )
        v54 = v19 ? 0x146 : 0x139;
      else
        v54 = v19 ? 0x141 : 0x134;
    }
    else if ( v72 )
    {
      v54 = v19 ? 0x143 : 0x136;
    }
    else
    {
      v54 = v19 ? 0x13B : 0x12E;
    }
    goto LABEL_134;
  }
  if ( dword_B42E8C )
    dword_B42E8C("SHADER ERROR : no shader to handle BSSM_3x_SPx ( skinned & parallax )", 0);
LABEL_135:
  sub_6AA320(this + 0xA, &vtlb);
  if ( *((float *)this + 8) < 1.0 && (inited = InitBSShaderAccumulator(), sub_7AA380(inited)) )
  {
    *(float *)&v56 = COERCE_FLOAT(FormHeapAlloc(0x10u));
    v86 = *(float *)&v56;
    v95 = 8;
    if ( *(float *)&v56 == 0.0 )
      v57 = 0.0;
    else
      v57 = COERCE_FLOAT(sub_7E2370(v56, (int)a2, 0, 1, 0, 0));
    v58 = v73;
    v95 = 0xFFFFFFFF;
    v86 = v57;
    *(_WORD *)(LODWORD(v57) + 4) = v73 + 4;
    sub_6AA320(this + 0xA, &v86);
  }
  else
  {
    v58 = v73;
  }
  if ( *(this + 0x38) )
  {
    *(float *)&v59 = COERCE_FLOAT(FormHeapAlloc(0x10u));
    v86 = *(float *)&v59;
    v95 = 9;
    if ( *(float *)&v59 == 0.0 )
      v60 = 0.0;
    else
      v60 = COERCE_FLOAT(sub_7E2370(v59, (int)a2, 0, 1, 0, 0));
    v86 = v60;
    v95 = 0xFFFFFFFF;
    *(_WORD *)(LODWORD(v60) + 4) = v58 + 0x15E;
    sub_5B1E20((BSTextureManager *)(this + 0xA), (void **)&v86);
  }
  if ( v74 )
  {
    if ( byte_B43074 )
    {
      if ( !v75 )
      {
        if ( !v82 )
        {
          if ( v58 )
          {
            v62 = v72 + 0x14B;
            goto LABEL_154;
          }
          v61 = 2 * v72 + 0x148;
LABEL_153:
          v62 = v61;
LABEL_154:
          v63 = FormHeapAlloc(0x10u);
          v87 = v63;
          v95 = 0xC;
          if ( v63 )
            *(float *)&v64 = COERCE_FLOAT(sub_7E2370(v63, (int)a2, 0, 0, 0, 0));
          else
            *(float *)&v64 = 0.0;
          *((_WORD *)v64 + 2) = v62;
          goto LABEL_170;
        }
LABEL_158:
        if ( v58 )
        {
          v62 = v72 + 0x14B;
          goto LABEL_154;
        }
        v61 = 2 * v72 + 0x147;
        goto LABEL_153;
      }
    }
    else if ( !v75 )
    {
      goto LABEL_158;
    }
    v65 = sub_7ED1A0(this);
    v66 = COERCE_FLOAT(FormHeapAlloc(0x10u));
    if ( v65 )
    {
      v87 = LODWORD(v66);
      v95 = 0xA;
      if ( v66 != 0.0 )
      {
        *(float *)&v64 = COERCE_FLOAT(sub_7E2370(SLODWORD(v66), (int)a2, 0, 0, 1u, (int)v65));
LABEL_166:
        *((_WORD *)v64 + 2) = 0x14D;
LABEL_170:
        j = v64;
        v95 = 0xFFFFFFFF;
        sub_5B1E20((BSTextureManager *)(this + 0xA), (void **)&j);
        goto LABEL_171;
      }
    }
    else
    {
      v86 = v66;
      v95 = 0xB;
      if ( v66 != 0.0 )
      {
        *(float *)&v64 = COERCE_FLOAT(sub_7E2370(SLODWORD(v66), (int)a2, 0, 0, 1u, v87));
        goto LABEL_166;
      }
    }
    *(float *)&v64 = 0.0;
    *(_WORD *)4 = 0x14D;
    goto LABEL_170;
  }
LABEL_171:
  v67 = *(this + 0x23);
  if ( v67 > 0 )
  {
    v68 = a5;
    do
    {
      if ( (*(this + 7) & 0x100) != 0 )
      {
        if ( v68 != 1 )
        {
LABEL_182:
          ++*a4;
          goto LABEL_183;
        }
        v71 = FormHeapAlloc(0x10u);
        a5 = v71;
        v95 = 0xE;
        if ( !v71 )
        {
LABEL_180:
          *(float *)&v70 = 0.0;
          goto LABEL_181;
        }
        *(float *)&v70 = COERCE_FLOAT(sub_7E2370(v71, (int)a2, 0x153, 0, 0, 0));
      }
      else
      {
        if ( v68 != 1 )
          goto LABEL_182;
        v69 = FormHeapAlloc(0x10u);
        a5 = v69;
        v95 = 0xD;
        if ( !v69 )
          goto LABEL_180;
        *(float *)&v70 = COERCE_FLOAT(sub_7E2370(v69, (int)a2, 0x152, 0, 0, 0));
      }
LABEL_181:
      v95 = 0xFFFFFFFF;
      vtlb = v70;
      sub_5B1E20((BSTextureManager *)(this + 0xA), (void **)&vtlb);
LABEL_183:
      v67 -= Value;
    }
    while ( v67 > 0 );
  }
LABEL_184:
  v20 = (BSShaderProperty *)this;
  *(this + 9) = a3 | (LOWORD(dword_B42EAC) << 8);
  return &v20->member.passes;
}
