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

  *(_WORD *)(*((_DWORD *)this + 0x16) + 0x18) |= 1u; /*0x5813bb*/
  v40 = 0; /*0x5813c4*/
  NiPickContext_ctor(v49); /*0x5813cc*/
  v3 = *(_DWORD *)this; /*0x5813d1*/
  v4 = v51 == *(_DWORD *)this; /*0x5813d8*/
  v54 = 0; /*0x5813da*/
  LOWORD(v50) = 0x100; /*0x5813e5*/
  if ( !v4 ) /*0x5813ef*/
  {
    if ( v51 ) /*0x5813f3*/
    {
      v5 = (void (__thiscall ***)(_DWORD, int))v51; /*0x5813f5*/
      if ( !InterlockedDecrement((volatile LONG *)(v51 + 4)) ) /*0x5813fb*/
        (**v5)(v5, 1); /*0x581411*/
    }
    v51 = v3; /*0x581415*/
    if ( v3 ) /*0x581419*/
      InterlockedIncrement((volatile LONG *)(v3 + 4)); /*0x58141f*/
  }
  if ( *(this + 0xB) >= 0.0 ) /*0x581435*/
    v37 = *(this + 0xB); /*0x581440*/
  else
    v37 = 0.0; /*0x581437*/
  v33 = (float)nWidth; /*0x58144a*/
  v6 = v33; /*0x58145a*/
  if ( v33 > (double)v37 ) /*0x58145f*/
  {
    if ( *(this + 0xB) < 0.0 ) /*0x58146d*/
    {
      v38 = 0.0; /*0x58146f*/
      goto LABEL_15; /*0x581473*/
    }
    v6 = *(this + 0xB); /*0x581475*/
  }
  v38 = v6; /*0x581478*/
LABEL_15:
  if ( *(this + 0xD) >= 0.0 ) /*0x581486*/
    v34 = *(this + 0xD); /*0x581491*/
  else
    v34 = 0.0; /*0x581488*/
  v41 = (float)nHeight; /*0x58149b*/
  if ( v41 <= (double)v34 ) /*0x5814b0*/
  {
    v7 = v41; /*0x5814c9*/
  }
  else
  {
    v7 = 0.0; /*0x5814bb*/
    if ( *(this + 0xD) >= 0.0 ) /*0x5814c0*/
      v7 = *(this + 0xD); /*0x5814c4*/
  }
  v35 = v7; /*0x5814d0*/
  v8 = *(float **)(*(_DWORD *)this + 0xDC); /*0x5814d4*/
  v32 = Double_To_SInt32(v35); /*0x5814f1*/
  v9 = Double_To_SInt32(v38); /*0x5814f2*/
  sub_70D300(v8, v9, v32, v44, COERCE_FLOAT(v43)); /*0x5814fa*/
  if ( !NiPick_ExecuteAndSort(v49, v44, v43, 0) ) /*0x58150f*/
    goto LABEL_77; /*0x58150f*/
  v10 = 0; /*0x58151c*/
  if ( !v53 ) /*0x581523*/
    goto LABEL_77; /*0x581523*/
  while ( 1 )
  {
    v11 = *(int **)(v52 + 4 * v10); /*0x581538*/
    v12 = *v11; /*0x58153b*/
    v42 = v11; /*0x581542*/
    v39 = v10 + 1; /*0x581546*/
    if ( !*v11 ) /*0x58153b*/
      goto LABEL_32; /*0x58153b*/
    v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 4))(v12); /*0x581553*/
    if ( v13 ) /*0x581557*/
    {
      while ( (float *)v13 != &MEMORY[0xB3F9B0][0x40] ) /*0x581565*/
      {
        v13 = *(_DWORD *)(v13 + 4); /*0x581567*/
        if ( !v13 ) /*0x58156c*/
          goto LABEL_30; /*0x58156c*/
      }
      v14 = 1; /*0x581585*/
    }
    else
    {
LABEL_30:
      v14 = 0; /*0x58156e*/
    }
    v15 = v14 != 0 ? v12 : 0;
    if ( !v15 ) /*0x581578*/
    {
LABEL_32:
      v15 = *(_DWORD *)(*v11 + 0x1C); /*0x58157c*/
      if ( v15 ) /*0x581581*/
      {
        v16 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v15 + 4))(*(_DWORD *)(*v11 + 0x1C)); /*0x581590*/
        if ( v16 ) /*0x581594*/
        {
          while ( (float *)v16 != &MEMORY[0xB3F9B0][0x40] ) /*0x58159b*/
          {
            v16 = *(_DWORD *)(v16 + 4); /*0x58159d*/
            if ( !v16 ) /*0x5815a2*/
              goto LABEL_38; /*0x5815a2*/
          }
          v17 = 1; /*0x5815db*/
        }
        else
        {
LABEL_38:
          v17 = 0; /*0x5815a4*/
        }
        v15 &= -(v17 != 0); /*0x5815ac*/
      }
    }
    if ( v15 ) /*0x5815b2*/
      break; /*0x5815b2*/
LABEL_71:
    if ( v39 >= v53 ) /*0x581767*/
      goto LABEL_77; /*0x581767*/
    v10 = v39; /*0x581530*/
  }
  v18 = sub_588E60(v15); /*0x5815ba*/
  if ( !v18 ) /*0x5815c1*/
  {
    while ( v15 ) /*0x5815c5*/
    {
      v15 = *(_DWORD *)(v15 + 0x1C); /*0x5815c7*/
      v18 = sub_588E60(v15); /*0x5815d0*/
      if ( v18 ) /*0x5815d7*/
        goto LABEL_47; /*0x5815d7*/
    }
    goto LABEL_71; /*0x5815c5*/
  }
LABEL_47:
  if ( !sub_57D240(this, v18) ) /*0x5815ea*/
    goto LABEL_71; /*0x5815ea*/
  if ( Tile_GetFloat(v18, 0xFC8) == fConstant_2 )
  {
    v19 = *((_DWORD *)v18 + 9); /*0x581614*/
    if ( v19 )
    {
      v20 = v19 + 0xAC; /*0x58161f*/
      sub_4784A0((_WORD *)(v19 + 0xAC)); /*0x581627*/
      sub_477F90(v20); /*0x58162e*/
      v21 = *((_DWORD *)v18 + 9); /*0x581633*/
      if ( *(_WORD *)(v21 + 0xB6) )
      {
        v22 = *(_DWORD **)(v21 + 0xB0); /*0x581644*/
        if ( *v22 )
        {
          v23 = *(_WORD *)(v21 + 0xB6) ? (NiObject *)*v22 : 0;
          v24 = NiRTTI_Cast((BSStringT *)&MEMORY[0xB33E90][0x1414], v23); /*0x58166b*/
          if ( v24 ) /*0x581675*/
          {
            vftable = v24[0x18].__vftable; /*0x58167b*/
            m_uiRefCount = v24[0x18].members.m_uiRefCount; /*0x581683*/
            v27 = v24[0x19].__vftable; /*0x581689*/
            v28 = v24[0x19].members.m_uiRefCount; /*0x58168f*/
            v45 = (int)vftable; /*0x581695*/
            v46 = m_uiRefCount; /*0x581699*/
            v47 = (int)v27; /*0x58169d*/
            v48 = v28; /*0x5816a1*/
            if ( vftable || v27 || m_uiRefCount || v28 ) /*0x5816b1*/
            {
              v36 = *(this + 0xD); /*0x5816bd*/
              v29 = *(this + 0xB); /*0x5816c1*/
              if ( (double)v45 > v29 || (double)v47 <= v29 || (double)v46 > v36 || (double)v48 <= v36 ) /*0x581703*/
                goto LABEL_71; /*0x581703*/
            }
          }
        }
      }
    }
  }
  if ( Tile_GetFloat(v18, 0xFC9) != fConstant_2 ) /*0x581720*/
    goto LABEL_71; /*0x581720*/
  if ( !a2 && !sub_588B50(v18, 0xFA8) ) /*0x581733*/
  {
    v30 = *((BSFogProperty **)v18 + 4); /*0x58173c*/
    if ( v30 ) /*0x581741*/
    {
      while ( !sub_588B50(v30, 0xFA8) ) /*0x581751*/
      {
        v30 = *((BSFogProperty **)v30 + 4); /*0x581753*/
        if ( !v30 ) /*0x581758*/
          goto LABEL_74; /*0x581758*/
      }
      v18 = v30; /*0x581773*/
    }
  }
LABEL_74:
  v40 = v18; /*0x581775*/
  if ( (*(int (__thiscall **)(BSFogProperty *))(*(_DWORD *)v18 + 0xC))(v18) == 0x387 ) /*0x581787*/
    *((_WORD *)this + 0x3F) = *((_WORD *)v42 + 0xC) >> 1; /*0x581794*/
  else
    *((_WORD *)this + 0x3F) = 0xFFFF; /*0x58179a*/
LABEL_77:
  *(_WORD *)(*((_DWORD *)this + 0x16) + 0x18) &= ~1u; /*0x5817a0*/
  v54 = 0xFFFFFFFF; /*0x5817ad*/
  NiPickContext_dtor(v49); /*0x5817b8*/
  return v40; /*0x5817c1*/
}
