NiTPointerList__BSImageSpaceShader *__thiscall sub_882AE0(_DWORD *this, NiGeometry *a2, int a3, _WORD *a4, int a5)
{
  int v6; // eax
  int v8; // edi
  int v9; // ebx
  _DWORD *v10; // ebp
  int v11; // eax
  int v12; // eax
  float v13; // ebx
  float *v14; // eax
  float v15; // ecx
  float v16; // edx
  float v17; // eax
  float y; // edx
  float z; // ecx
  float Radius; // edx
  float *v21; // edi
  double v22; // st7
  double v23; // st7
  bool v24; // c0
  bool v25; // c3
  double v26; // st7
  double v27; // st7
  float v28; // edx
  float v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  NiProperty *NiPropertyByID; // edi
  bool v36; // zf
  float v37; // [esp+14h] [ebp-38h]
  float v38; // [esp+14h] [ebp-38h]
  float v39; // [esp+18h] [ebp-34h]
  float v40; // [esp+18h] [ebp-34h]
  float v41; // [esp+1Ch] [ebp-30h]
  float v42; // [esp+1Ch] [ebp-30h]
  float v43; // [esp+1Ch] [ebp-30h]
  float v44; // [esp+20h] [ebp-2Ch]
  float v45; // [esp+24h] [ebp-28h] BYREF
  float v46; // [esp+28h] [ebp-24h]
  float v47; // [esp+2Ch] [ebp-20h]
  float x; // [esp+30h] [ebp-1Ch]
  float v49; // [esp+34h] [ebp-18h]
  float v50; // [esp+38h] [ebp-14h]
  float v51; // [esp+3Ch] [ebp-10h]
  int v52; // [esp+48h] [ebp-4h]

  if ( ImageSpaceEffectEnabled )
  {
    v6 = *(this + 7);
    if ( (v6 & 0x8000) != 0 || (v6 & 0x10000) != 0 )
      return sub_7D85D0((NiTPointerList__BSImageSpaceShader *)this, a2, a3, a4, a5);
  }
  v8 = a3 | (LOWORD(dword_B42EAC) << 8);
  if ( LOWORD(dword_B42EAC) == 5 )
    return (NiTPointerList__BSImageSpaceShader *)(this + 0xE);
  if ( LOWORD(dword_B42EAC) == 6 )
  {
    sub_85ABD0((BSTextureManager *)this, (int)a2, a2->member.skinData != 0, 0);
    return (NiTPointerList__BSImageSpaceShader *)(this + 0x12);
  }
  v9 = a5;
  if ( *(this + 9) != v8 || !(_BYTE)a5 )
  {
    if ( (_BYTE)a5 == 1 )
    {
      sub_7E24C0((BSShaderProperty *)this);
      *(this + 9) = v8;
    }
    else
    {
      *a4 = 0;
    }
    v10 = *(_DWORD **)(GetShadowSceneNode(*(this + 7) >> 0x1C) + 0x118);
    if ( (unsigned __int16)sub_7ED600(this) )
    {
      v13 = COERCE_FLOAT(sub_7ED2A0(this));
      v14 = (float *)*sub_405AD0(v10, &a3);
      v15 = v14[0x3B];
      v16 = v14[0x3C];
      v17 = v14[0x3D];
      v45 = v15;
      v46 = v16;
      v47 = v17;
      sub_7016A0((NiD3DVertexShader *)&a3);
      v44 = sub_8823C0(&v45);
      y = a2->member.super.m_kWorldBound.Center.y;
      x = a2->member.super.m_kWorldBound.Center.x;
      z = a2->member.super.m_kWorldBound.Center.z;
      v49 = y;
      Radius = a2->member.super.m_kWorldBound.Radius;
      v50 = z;
      v51 = Radius;
      v21 = (float *)*sub_405AD0((_DWORD *)LODWORD(v13), &a3);
      sub_7016A0((NiD3DVertexShader *)&a3);
      v37 = v21[0x22] - x;
      v39 = v21[0x23] - v49;
      v41 = v21[0x24] - v50;
      v45 = v37;
      v46 = v39;
      v47 = v41;
      v22 = sub_404C90(&v45);
      v23 = v22 - v51;
      v24 = v23 > 0.0;
      v25 = 0.0 == v23;
      v26 = 0.0;
      if ( v24 || v25 )
      {
        v42 = v21[0x22] - x;
        v40 = v21[0x23] - v49;
        v38 = v21[0x24] - v50;
        v45 = v42;
        v46 = v40;
        v47 = v38;
        v27 = sub_404C90(&v45);
        v26 = v27 - v51;
      }
      v43 = v26;
      v28 = v21[0x3C];
      v29 = v21[0x3D];
      v45 = v21[0x3B];
      v46 = v28;
      v47 = v29;
      *(float *)&a3 = sub_8823C0(&v45) * (v43 * (1.0 / v43));
      if ( *(float *)&a3 >= (double)v44 )
      {
        *(this + 7) |= 0x400u;
        v45 = v13;
        *(this + 9) = 0;
        if ( v44 <= 0.0 )
        {
          if ( sub_7ED4B0((int **)this) )
          {
            v32 = sub_7ED4B0((int **)this);
            *(this + 7) |= 0x800u;
            *(this + 9) = 0;
            sub_434980(this, 0x1000, v32 != 0);
          }
          else
          {
            *(this + 7) &= 0xFFFFE7FF;
            *(this + 9) = 0;
          }
        }
        else
        {
          v31 = sub_7ED4B0((int **)this);
          *(this + 9) = 0;
          if ( v31 )
            *(this + 7) |= 0x1800u;
          else
            *(this + 7) = *(this + 7) & 0xFFFFE7FF | 0x800;
        }
      }
      else
      {
        *(this + 7) &= 0xFFFFE3FF;
        v30 = *(this + 7);
        v45 = *(float *)&v10;
        *(this + 9) = 0;
        if ( v13 != 0.0 )
        {
          *(this + 7) = v30 | 0x800;
          *(this + 9) = 0;
        }
        if ( sub_7ED4B0((int **)this) )
        {
          *(this + 7) |= 0x1000u;
          *(this + 9) = 0;
        }
      }
      if ( (_BYTE)a5 == 1 )
      {
        *(float *)&v33 = COERCE_FLOAT(FormHeapAlloc(0x10u));
        a3 = v33;
        v52 = 1;
        if ( *(float *)&v33 == 0.0 )
          *(float *)&v34 = 0.0;
        else
          *(float *)&v34 = COERCE_FLOAT(sub_7E2370(v33, (int)a2, 0xE1, 1, 3u, SLODWORD(v45)));
        a3 = v34;
        v52 = 0xFFFFFFFF;
        sub_5B1E20((BSTextureManager *)(this + 0xA), (void **)&a3);
        v9 = a5;
        goto LABEL_41;
      }
      v9 = a5;
    }
    else if ( (_BYTE)v9 == 1 )
    {
      v11 = FormHeapAlloc(0x10u);
      a5 = v11;
      v52 = 0;
      if ( v11 )
        *(float *)&v12 = COERCE_FLOAT(sub_7E2370(v11, (int)a2, 0xE0, 1, 1u, (int)v10));
      else
        *(float *)&v12 = 0.0;
      v52 = 0xFFFFFFFF;
      a3 = v12;
      sub_5B1E20((BSTextureManager *)(this + 0xA), (void **)&a3);
      *(this + 7) &= 0xFFFFE3FF;
      *(this + 9) = 0;
      goto LABEL_41;
    }
    ++*a4;
LABEL_41:
    if ( ShaderPackage >= 3 && (dword_B42F40 & 0x10) != 0 )
    {
      if ( (_BYTE)v9 )
      {
        NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)a2, 0);
        if ( !NiPropertyByID
          && (NiPropertyByID = *((NiProperty **)*sub_405760(a2, (volatile LONG **)&a3) + 2),
              sub_7016A0((NiD3DVertexShader *)&a3),
              !NiPropertyByID)
          || (v36 = ((int)NiPropertyByID[1].vtbl & 0x200) == 0, LOBYTE(a5) = 1, v36) )
        {
          LOBYTE(a5) = 0;
        }
        sub_85AAC0(this, (int)a2, a2->member.skinData != 0, a5);
      }
    }
  }
  if ( *(this + 0x38) )
  {
    LOBYTE(a5) = 1;
    sub_854B70(this, (int)a2, a4, v9, (char *)&a5, 0);
  }
  return (NiTPointerList__BSImageSpaceShader *)(this + 0xA);
}
