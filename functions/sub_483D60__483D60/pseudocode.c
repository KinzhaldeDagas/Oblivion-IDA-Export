void __thiscall sub_483D60(unsigned int *this, _DWORD *arg0)
{
  int v3; // eax
  bool v4; // zf
  int v5; // eax
  unsigned int v6; // eax
  unsigned int a2; // edi
  unsigned int v8; // ebx
  int v9; // esi
  unsigned int v10; // eax
  int v11; // eax
  int v12; // eax
  int *v13; // ebx
  bool v14; // al
  char v15; // dl
  int v16; // ebp
  int v17; // eax
  int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // eax
  unsigned int v21; // edx
  NiNode *v22; // eax
  NiNode *v23; // eax
  unsigned int v24; // ecx
  unsigned int v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // eax
  int v28; // edi
  NiObject *NiPropertyByID; // eax
  NiObject *v30; // eax
  double v31; // st7
  double v32; // st6
  Ni2DBuffer *v33; // [esp+Ch] [ebp-44h]
  unsigned int v34; // [esp+24h] [ebp-2Ch]
  int v35; // [esp+28h] [ebp-28h]
  int v36; // [esp+2Ch] [ebp-24h]
  unsigned int v38; // [esp+34h] [ebp-1Ch]
  unsigned int v39; // [esp+38h] [ebp-18h]
  int v40; // [esp+3Ch] [ebp-14h]
  float v41; // [esp+3Ch] [ebp-14h]
  float v42; // [esp+54h] [ebp+4h]

  if ( byte_B34420 )
  {
    v3 = dword_B06AA0;
    dword_B3441C = dword_B06AA8;
  }
  else
  {
    v3 = GridDistantCount;
    dword_B3441C = dword_B06A98;
  }
  v4 = byte_B43077 == 0;
  dword_B34418 = v3;
  if ( !v4 && v3 && (byte_B09AE8 || byte_B09AF0) && arg0 )
  {
    (*(void (__thiscall **)(unsigned int *, int, int))(*this + 0x10))(this, TES->extXCoord, TES->extYCoord);
    sub_483750(this);
    if ( !dword_B34424 )
    {
      v5 = sub_405790((int)TES->LandLOD->members.super.m_parent, 1u);
      if ( v5 )
      {
        v33 = (Ni2DBuffer *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
        NiSmartPointer_Set__((Ni2DBuffer **)&dword_B34424, v33);
      }
      else
      {
        NiSmartPointer_Set__((Ni2DBuffer **)&dword_B34424, 0);
      }
    }
    v38 = (unsigned int)uGridsToLoad >> 1;
    v6 = *(this + 3);
    a2 = 0;
    v40 = v38 + dword_B34418;
    v39 = 0;
    if ( v6 )
    {
      v36 = ((unsigned int)uGridsToLoad >> 1) + dword_B34418;
      while ( 1 )
      {
        v34 = 0;
        if ( v6 )
          break;
LABEL_90:
        v6 = *(this + 3);
        --v36;
        v39 = ++a2;
        if ( a2 >= v6 )
          goto LABEL_91;
      }
      v35 = v40;
      while ( 1 )
      {
        v8 = GridDistantCount;
        v9 = *(this + 4) + 0x10 * (v34 + a2 * v6);
        if ( a2 >= GridDistantCount )
        {
          v10 = v8 + uGridsToLoad;
          if ( a2 < v10 && v34 >= v8 && v34 < v10 && *(_BYTE *)v9 )
          {
            v11 = *(_DWORD *)(v9 + 4);
            if ( v11 )
              *(_WORD *)(v11 + 0x18) |= 1u;
LABEL_45:
            v17 = sub_4EF1D0(*(_WORD *)(v9 + 8), *(_WORD *)(v9 + 0xC));
            sub_7B3A40(v17);
            *(_BYTE *)(v9 + 1) = 0;
            goto LABEL_89;
          }
        }
        v12 = *(_DWORD *)(v9 + 4);
        v13 = (int *)(v9 + 4);
        if ( v12 )
          *(_WORD *)(v12 + 0x18) &= ~1u;
        v14 = sub_4837C0(this, a2, v34);
        if ( !*v13 )
          break;
        v15 = *(_BYTE *)(v9 + 1);
        if ( v15 )
        {
          if ( v14 )
            goto LABEL_89;
        }
        else if ( v14 )
        {
          goto LABEL_30;
        }
        if ( v15 )
          goto LABEL_45;
LABEL_89:
        v6 = *(this + 3);
        --v35;
        if ( ++v34 >= v6 )
          goto LABEL_90;
      }
      if ( v14 )
      {
LABEL_30:
        v16 = *v13 != 0 ? 1 : 4;
        *(_BYTE *)(v9 + 1) = 1;
      }
      else
      {
        if ( *(_BYTE *)(v9 + 1) )
        {
          v18 = sub_4EF1D0(*(_WORD *)(v9 + 8), *(_WORD *)(v9 + 0xC));
          sub_7B3A40(v18);
          *(_BYTE *)(v9 + 1) = 0;
        }
        v16 = 2;
      }
      if ( !sub_4EF2D0(arg0, 1) && !sub_4EF2D0(arg0, 2)
        || !sub_4EF2D0(arg0, 1) && v16 == 1
        || !sub_4EF2D0(arg0, 2) && v16 == 2 )
      {
        goto LABEL_89;
      }
      if ( !sub_4EF2D0(arg0, 1) && v16 == 4 )
        v16 = 2;
      if ( !sub_4EF2D0(arg0, 2) && v16 == 4 )
      {
        v16 = 1;
        goto LABEL_55;
      }
      if ( v16 == 2 )
      {
        if ( !sub_4F0DA0((int)arg0, *(_WORD *)(v9 + 8), *(_WORD *)(v9 + 0xC)) || !byte_B09AE8 )
          goto LABEL_89;
      }
      else
      {
        if ( v16 == 1 )
        {
LABEL_55:
          if ( !byte_B09AF0 )
            goto LABEL_89;
          goto LABEL_61;
        }
        if ( byte_B09AE8 )
        {
          if ( !byte_B09AF0 )
            v16 = 2;
        }
        else
        {
          v16 = 1;
        }
      }
LABEL_61:
      v19 = GridDistantCount;
      if ( a2 < GridDistantCount || (v20 = v19 + uGridsToLoad, a2 >= v20) )
      {
        v21 = v34;
      }
      else
      {
        v21 = v34;
        if ( v34 >= v19 && v34 < v20 && v16 == 1 )
          goto LABEL_89;
      }
      if ( *v13 )
      {
        *(_WORD *)(*v13 + 0x18) &= ~1u;
      }
      else
      {
        v22 = (NiNode *)FormHeapAlloc(0xDCu);
        if ( v22 )
          v23 = NiNode::NiNode(v22, 0);
        else
          v23 = 0;
        NiSmartPointer_Set__((Ni2DBuffer **)(v9 + 4), (Ni2DBuffer *)v23);
        v21 = v34;
      }
      v24 = GridDistantCount;
      if ( a2 >= GridDistantCount )
      {
        v25 = v24 + uGridsToLoad;
        if ( a2 < v25 && v21 >= v24 && v21 < v25 )
        {
          *(_WORD *)(*v13 + 0x18) |= 1u;
          v16 = 2;
        }
      }
      v26 = abs32(v36);
      v27 = abs32(v35);
      if ( v26 > v27 )
        v27 = v26;
      if ( v27 > v38 + 2 )
        v28 = (v38 + 4 < v27) + 1;
      else
        v28 = 0;
      if ( v16 == 2 || v16 == 4 && sub_4F0DA0((int)arg0, *(_WORD *)(v9 + 8), *(_WORD *)(v9 + 0xC)) )
        v28 = 0;
      sub_4BD430((void *)dword_B35B8C, arg0, *(_DWORD *)(v9 + 8), *(_DWORD *)(v9 + 0xC), dword_B34424, *v13, v28, v16);
      a2 = v39;
      *(_BYTE *)v9 = 1;
      goto LABEL_89;
    }
LABEL_91:
    NiAVObject_UpdateNiAVObject((NiAVObject *)dword_B34424, 0.0, 1);
    NiAVObject_InitializePropertyState((NiAVObject *)dword_B34424);
    NiPropertyByID = (NiObject *)NiNode_GetNiPropertyByID(*(NiNode **)(dword_B34424 + 0x1C), 1);
    v30 = NiRTTI_Cast((BSStringT *)dword_B43484, NiPropertyByID);
    if ( v30 )
    {
      v31 = *(float *)&v30[6].__vftable;
      v32 = *(float *)&v30[5].members.m_uiRefCount + (v31 - *(float *)&v30[5].members.m_uiRefCount) * dbl_A2FAA0;
      if ( flt_B34410 < v32 )
        v32 = flt_B34410;
      v41 = v32;
      if ( flt_B34414 < v31 )
        v31 = flt_B34414;
      v42 = v31;
      flt_B2C334 = v41;
      flt_B2C338 = v42 - v41;
    }
  }
}
