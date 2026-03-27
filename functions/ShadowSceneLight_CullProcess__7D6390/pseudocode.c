void __thiscall ShadowSceneLight_CullProcess(void *this, int arg0)
{
  float *v6; // eax
  float v7; // ecx
  char v8; // bl
  float v9; // edx
  float v10; // ecx
  unsigned int v11; // esi
  NiFrustumPlanes *p_a2_28; // edi
  float x; // edx
  float z; // ecx
  float Constant; // edx
  int Radius_low; // edi
  int v17; // esi
  char v18; // bl
  double v19; // st7
  float *v20; // eax
  float v21; // ecx
  float v22; // edx
  float v23; // eax
  double v24; // st7
  double v25; // st6
  double v26; // st3
  double v27; // st6
  double v28; // st7
  double v29; // st5
  double v30; // st6
  double v31; // st7
  double v32; // rt0
  NiNode *v33; // ecx
  NiProperty *v34; // eax
  double v35; // st6
  double v36; // st4
  double v37; // st3
  double v38; // rtt
  double v39; // rt0
  double v40; // st5
  double v41; // st5
  double v42; // rt2
  double v43; // st6
  double v44; // st6
  double v45; // st7
  bool v46; // c3
  _DWORD *v47; // esi
  NiNode *v48; // eax
  NiProperty *NiPropertyByID; // eax
  int v50; // esi
  float v51; // [esp+10h] [ebp-A4h]
  float v52; // [esp+10h] [ebp-A4h]
  float v53; // [esp+10h] [ebp-A4h]
  float v54; // [esp+10h] [ebp-A4h]
  float v55; // [esp+10h] [ebp-A4h]
  float v56; // [esp+10h] [ebp-A4h]
  float v57; // [esp+14h] [ebp-A0h]
  char v58; // [esp+1Bh] [ebp-99h]
  int v59; // [esp+1Ch] [ebp-98h]
  float v60; // [esp+20h] [ebp-94h]
  NiBound v61; // [esp+24h] [ebp-90h] BYREF
  float a2; // [esp+34h] [ebp-80h] BYREF
  float a2_4; // [esp+38h] [ebp-7Ch]
  float a2_8; // [esp+3Ch] [ebp-78h]
  float a2_12; // [esp+40h] [ebp-74h]
  float a2_16; // [esp+44h] [ebp-70h]
  float a2_20; // [esp+48h] [ebp-6Ch]
  float a2_24; // [esp+4Ch] [ebp-68h]
  NiFrustumPlanes a2_28; // [esp+50h] [ebp-64h] BYREF

  InitBSShaderAccumulator();
  if ( !byte_B42CDB )
  {
    v6 = *((float **)this + 0x40);
    v7 = v6[0x22];
    v8 = *((_BYTE *)this + 0xF4);
    v61.Radius = v6[0x3E];
    v9 = v6[0x23];
    v61.Center.x = v7;
    v10 = v6[0x24];
    v59 = 0;
    v58 = 1;
    v61.Center.y = v9;
    v61.Center.z = v10;
    if ( v8 && *((_DWORD *)this + 0x53) )
    {
      v59 = sub_7D34C0(*(NiCamera **)(arg0 + 0xC), *((NiCamera **)this + 0x53)) != 0 ? 0 : 0xFF;
    }
    else
    {
      qmemcpy(&a2_28, (const void *)(arg0 + 0x2C), sizeof(a2_28));
      v11 = 0;
      p_a2_28 = &a2_28;
      do
      {
        if ( ((1 << v11) & a2_28.ActivePlanes) != 0 )
        {
          x = p_a2_28->CullingPlanes[0].Normal.x;
          z = p_a2_28->CullingPlanes[0].Normal.z;
          a2_4 = p_a2_28->CullingPlanes[0].Normal.y;
          a2 = x;
          Constant = p_a2_28->CullingPlanes[0].Constant;
          a2_8 = z;
          a2_12 = Constant;
          if ( sub_47DA70(&v61, (NiFrustumPlanes *)&a2) == 2 )
          {
            LOWORD(v59) = 0xFF;
            goto LABEL_20;
          }
          if ( sub_7415E0(&a2, &v61.Center.x) == 2 )
            v58 = 0;
        }
        ++v11;
        p_a2_28 = (NiFrustumPlanes *)((char *)p_a2_28 + 0x10);
      }
      while ( v11 < 6 );
      if ( !v58 )
      {
        if ( v8 )
        {
          if ( ShaderPackage >= 3 && (dword_B42F40 & 0x10) != 0 )
          {
            if ( *((_BYTE *)this + 0xF5) )
            {
              Radius_low = LODWORD(v61.Radius);
              v17 = 0;
              v18 = 0;
              do
              {
                if ( !(unsigned __int8)sub_7D5B20(
                                         SLODWORD(v61.Center.x),
                                         SLODWORD(v61.Center.y),
                                         SLODWORD(v61.Center.z),
                                         Radius_low,
                                         arg0,
                                         v17) )
                  v59 |= 1 << v18;
                ++v17;
                ++v18;
              }
              while ( (unsigned __int16)v17 < 6u );
            }
          }
        }
      }
    }
LABEL_20:
    v60 = *((float *)this + 0x35);
    v57 = *((float *)this + 0x36);
    v19 = 0.0;
    if ( (_WORD)v59 == 0xFF )
    {
LABEL_53:
      if ( *((_WORD *)this + 0x8C) == 0xFF )
      {
        if ( (_WORD)v59 != 0xFF )
          goto LABEL_68;
      }
      else if ( (_WORD)v59 == 0xFF )
      {
        goto LABEL_68;
      }
      if ( v19 != *((float *)this + 0x35) || v60 <= 1.0 )
      {
        v44 = v19;
        v45 = v57;
        if ( v44 < *((float *)this + 0x35) && v44 == v60 || v44 == *((float *)this + 0x36) && v44 < v45 )
        {
          v19 = v44;
        }
        else
        {
          if ( v44 >= *((float *)this + 0x36) )
            goto LABEL_79;
          v46 = v44 == v45;
          v19 = v44;
          if ( !v46 )
            goto LABEL_79;
        }
      }
LABEL_68:
      v47 = *((_DWORD **)this + 0x3A);
      if ( v47 )
      {
        do
        {
          v48 = (NiNode *)v47[2];
          v47 = (_DWORD *)*v47;
          NiPropertyByID = NiNode_GetNiPropertyByID(v48, 4);
          if ( NiPropertyByID )
            NiPropertyByID[1].members.m_controller = 0;
        }
        while ( v47 );
        v19 = 0.0;
      }
      if ( v19 == *((float *)this + 0x36) )
      {
        if ( *((_DWORD *)this + 0x45) )
        {
          BSTextureManager_DiscardShadowMap(g_textureManager, *((_DWORD *)this + 0x45));
          v50 = *((_DWORD *)this + 0x45);
          if ( v50 )
          {
            if ( !InterlockedDecrement((volatile LONG *)(v50 + 4)) )
              (**(void (__thiscall ***)(int, int))v50)(v50, 1);
            *((_DWORD *)this + 0x45) = 0;
          }
        }
      }
LABEL_79:
      *((float *)this + 0x35) = v60;
      *((_WORD *)this + 0x8C) = v59;
      *((float *)this + 0x36) = v57;
      return;
    }
    v20 = *(float **)(arg0 + 0xC);
    v21 = v20[0x22];
    v22 = v20[0x23];
    v23 = v20[0x24];
    a2_16 = v21;
    a2_20 = v22;
    a2_24 = v23;
    a2 = v61.Center.x - v21;
    a2_4 = v61.Center.y - v22;
    a2_8 = v61.Center.z - v23;
    v51 = a2_4 * a2_4 + a2 * a2 + a2_8 * a2_8;
    v52 = sqrt(v51);
    v53 = v52 - v61.Radius;
    v24 = v53;
    v25 = flt_B4307C;
    if ( v25 > v53 )
    {
      v35 = 0.0;
    }
    else
    {
      v26 = flt_B43080;
      if ( v26 != 0.0 )
      {
        if ( v26 < v24 )
        {
          LOWORD(v59) = 0xFF;
          v27 = 0.0;
          v28 = 1.0;
          v60 = 0.0;
          v57 = 0.0;
LABEL_29:
          v33 = *((NiNode **)this + 0x4C);
          if ( v33 )
          {
            v34 = NiNode_GetNiPropertyByID(v33, 2);
            if ( v34 )
              v57 = *(float *)&v34[3].members.m_pcName * v57;
            v28 = 1.0;
            v27 = 0.0;
          }
          if ( dword_B42D78 )
          {
            v54 = ((double (__cdecl *)(int, int))dword_B42D78)(1, 1);
            v28 = 1.0;
            v27 = 0.0;
          }
          else
          {
            v54 = v27;
          }
          v55 = *((float *)this + 0x38) + v54;
          *((float *)this + 0x38) = v55;
          if ( v55 / flt_B2C680 <= v28 )
            v41 = v55 / flt_B2C680;
          else
            v41 = v28;
          v56 = v41;
          if ( v27 == *((float *)this + 0x37) )
          {
            v42 = v27;
            v43 = (v28 - v56) * v57;
            v19 = v42;
          }
          else
          {
            v19 = v27;
            v43 = v56 * v57;
          }
          v57 = v43;
          goto LABEL_53;
        }
        v60 = 1.0 - (v24 - v25) / (v26 - v25);
        v29 = 0.0;
        v30 = 1.0;
        if ( v60 <= 0.0 )
          goto LABEL_27;
        goto LABEL_37;
      }
      v35 = 0.0;
    }
    v60 = 1.0;
    v29 = v35;
    v30 = 1.0;
LABEL_37:
    if ( *((_BYTE *)this + 0xF4) )
    {
      v36 = flt_B43084;
      if ( v36 > v24 || (v37 = flt_B43088, v37 == v29) )
      {
        v31 = v29;
        v57 = 1.0;
      }
      else
      {
        if ( v37 < v24 )
        {
          v38 = v30;
          v27 = v29;
          v28 = v38;
          v57 = v29;
          goto LABEL_29;
        }
        v39 = v29;
        v40 = v30 - (v24 - v36) / (v37 - v36);
        v31 = v39;
        v57 = v40;
      }
      goto LABEL_28;
    }
LABEL_27:
    v31 = v29;
LABEL_28:
    v32 = v30;
    v27 = v31;
    v28 = v32;
    goto LABEL_29;
  }
}
