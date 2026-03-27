BSFogProperty *__thiscall sub_581390(float *this, char a2)
{
  int v3; // esi
  bool v4; // zf
  void (__thiscall ***v5)(_DWORD, int); // edi
  double v6; // st5
  double v7; // st7
  float *v8; // esi
  int v9; // eax
  int v10; // eax
  int *v11; // edi
  int v12; // esi
  int v13; // eax
  char v14; // al
  int v15; // esi
  int v16; // eax
  char v17; // al
  BSFogProperty *v18; // edi
  int v19; // eax
  int v20; // esi
  int v21; // eax
  _DWORD *v22; // ecx
  NiObject *v23; // eax
  NiObject *v24; // eax
  NiObjectVtbl *vftable; // ecx
  UInt32 m_uiRefCount; // esi
  NiObjectVtbl *v27; // edx
  UInt32 v28; // eax
  double v29; // st7
  BSFogProperty *v30; // esi
  int v32; // [esp-Ch] [ebp-94h]
  float v33; // [esp+10h] [ebp-78h]
  float v34; // [esp+10h] [ebp-78h]
  float v35; // [esp+10h] [ebp-78h]
  float v36; // [esp+10h] [ebp-78h]
  float v37; // [esp+14h] [ebp-74h]
  float v38; // [esp+14h] [ebp-74h]
  int v39; // [esp+14h] [ebp-74h]
  BSFogProperty *v40; // [esp+18h] [ebp-70h]
  float v41; // [esp+1Ch] [ebp-6Ch]
  int *v42; // [esp+20h] [ebp-68h]
  float v43[3]; // [esp+24h] [ebp-64h] BYREF
  float v44[3]; // [esp+30h] [ebp-58h] BYREF
  int v45; // [esp+3Ch] [ebp-4Ch]
  int v46; // [esp+40h] [ebp-48h]
  int v47; // [esp+44h] [ebp-44h]
  int v48; // [esp+48h] [ebp-40h]
  _DWORD v49[4]; // [esp+4Ch] [ebp-3Ch] BYREF
  int v50; // [esp+5Ch] [ebp-2Ch]
  int v51; // [esp+60h] [ebp-28h]
  int v52; // [esp+68h] [ebp-20h]
  unsigned __int16 v53; // [esp+6Eh] [ebp-1Ah]
  unsigned int v54; // [esp+84h] [ebp-4h]

  *(_WORD *)(*((_DWORD *)this + 0x16) + 0x18) |= 1u;
  v40 = 0;
  sub_959BC0(v49);
  v3 = *(_DWORD *)this;
  v4 = v51 == *(_DWORD *)this;
  v54 = 0;
  LOWORD(v50) = 0x100;
  if ( !v4 )
  {
    if ( v51 )
    {
      v5 = (void (__thiscall ***)(_DWORD, int))v51;
      if ( !InterlockedDecrement((volatile LONG *)(v51 + 4)) )
        (**v5)(v5, 1);
    }
    v51 = v3;
    if ( v3 )
      InterlockedIncrement((volatile LONG *)(v3 + 4));
  }
  if ( *(this + 0xB) >= 0.0 )
    v37 = *(this + 0xB);
  else
    v37 = 0.0;
  v33 = (float)nWidth;
  v6 = v33;
  if ( v33 > (double)v37 )
  {
    if ( *(this + 0xB) < 0.0 )
    {
      v38 = 0.0;
      goto LABEL_15;
    }
    v6 = *(this + 0xB);
  }
  v38 = v6;
LABEL_15:
  if ( *(this + 0xD) >= 0.0 )
    v34 = *(this + 0xD);
  else
    v34 = 0.0;
  v41 = (float)nHeight;
  if ( v41 <= (double)v34 )
  {
    v7 = v41;
  }
  else
  {
    v7 = 0.0;
    if ( *(this + 0xD) >= 0.0 )
      v7 = *(this + 0xD);
  }
  v35 = v7;
  v8 = *(float **)(*(_DWORD *)this + 0xDC);
  v32 = Double_To_SInt32(v35);
  v9 = Double_To_SInt32(v38);
  sub_70D300(v8, *(float *)&v9, *(float *)&v32, (int)v44, COERCE_FLOAT(v43));
  if ( !sub_959D60(v49, v44, v43, 0) )
    goto LABEL_77;
  v10 = 0;
  if ( !v53 )
    goto LABEL_77;
  while ( 1 )
  {
    v11 = *(int **)(v52 + 4 * v10);
    v12 = *v11;
    v42 = v11;
    v39 = v10 + 1;
    if ( !*v11 )
      goto LABEL_32;
    v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 4))(v12);
    if ( v13 )
    {
      while ( (char *)v13 != dword_B3FAB0 )
      {
        v13 = *(_DWORD *)(v13 + 4);
        if ( !v13 )
          goto LABEL_30;
      }
      v14 = 1;
    }
    else
    {
LABEL_30:
      v14 = 0;
    }
    v15 = v14 != 0 ? v12 : 0;
    if ( !v15 )
    {
LABEL_32:
      v15 = *(_DWORD *)(*v11 + 0x1C);
      if ( v15 )
      {
        v16 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v15 + 4))(*(_DWORD *)(*v11 + 0x1C));
        if ( v16 )
        {
          while ( (char *)v16 != dword_B3FAB0 )
          {
            v16 = *(_DWORD *)(v16 + 4);
            if ( !v16 )
              goto LABEL_38;
          }
          v17 = 1;
        }
        else
        {
LABEL_38:
          v17 = 0;
        }
        v15 &= -(v17 != 0);
      }
    }
    if ( v15 )
      break;
LABEL_71:
    if ( v39 >= v53 )
      goto LABEL_77;
    v10 = v39;
  }
  v18 = sub_588E60(v15);
  if ( !v18 )
  {
    while ( v15 )
    {
      v15 = *(_DWORD *)(v15 + 0x1C);
      v18 = sub_588E60(v15);
      if ( v18 )
        goto LABEL_47;
    }
    goto LABEL_71;
  }
LABEL_47:
  if ( !sub_57D240(this, v18) )
    goto LABEL_71;
  if ( Tile_GetFloat(v18, 0xFC8) == fConstant_2 )
  {
    v19 = *((_DWORD *)v18 + 9);
    if ( v19 )
    {
      v20 = v19 + 0xAC;
      sub_4784A0((_WORD *)(v19 + 0xAC));
      sub_477F90(v20);
      v21 = *((_DWORD *)v18 + 9);
      if ( *(_WORD *)(v21 + 0xB6) )
      {
        v22 = *(_DWORD **)(v21 + 0xB0);
        if ( *v22 )
        {
          v23 = *(_WORD *)(v21 + 0xB6) ? (NiObject *)*v22 : 0;
          v24 = NiRTTI_Cast((BSStringT *)&unk_B352A4, v23);
          if ( v24 )
          {
            vftable = v24[0x18].__vftable;
            m_uiRefCount = v24[0x18].members.m_uiRefCount;
            v27 = v24[0x19].__vftable;
            v28 = v24[0x19].members.m_uiRefCount;
            v45 = (int)vftable;
            v46 = m_uiRefCount;
            v47 = (int)v27;
            v48 = v28;
            if ( vftable || v27 || m_uiRefCount || v28 )
            {
              v36 = *(this + 0xD);
              v29 = *(this + 0xB);
              if ( (double)v45 > v29 || (double)v47 <= v29 || (double)v46 > v36 || (double)v48 <= v36 )
                goto LABEL_71;
            }
          }
        }
      }
    }
  }
  if ( Tile_GetFloat(v18, 0xFC9) != fConstant_2 )
    goto LABEL_71;
  if ( !a2 && !sub_588B50(v18, 0xFA8) )
  {
    v30 = *((BSFogProperty **)v18 + 4);
    if ( v30 )
    {
      while ( !sub_588B50(v30, 0xFA8) )
      {
        v30 = *((BSFogProperty **)v30 + 4);
        if ( !v30 )
          goto LABEL_74;
      }
      v18 = v30;
    }
  }
LABEL_74:
  v40 = v18;
  if ( (*(int (__thiscall **)(BSFogProperty *))(*(_DWORD *)v18 + 0xC))(v18) == 0x387 )
    *((_WORD *)this + 0x3F) = *((_WORD *)v42 + 0xC) >> 1;
  else
    *((_WORD *)this + 0x3F) = 0xFFFF;
LABEL_77:
  *(_WORD *)(*((_DWORD *)this + 0x16) + 0x18) &= ~1u;
  v54 = 0xFFFFFFFF;
  sub_959EC0(v49);
  return v40;
}
