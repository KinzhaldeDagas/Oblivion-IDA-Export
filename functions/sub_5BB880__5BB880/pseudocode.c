void __userpurge sub_5BB880(
        int a1@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double a4@<st0>,
        signed int a5,
        _DWORD *a6)
{
  _DWORD *v7; // edi
  char *v8; // eax
  const char *v9; // ebx
  char *m_data; // esi
  int v11; // edi
  int *v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // edi
  int v16; // ebx
  int *v17; // eax
  int v18; // edx
  int v19; // ecx
  char *v20; // eax
  double v21; // st4
  _DWORD *v22; // ecx
  _DWORD *v23; // ecx
  float *Singleton; // eax
  _DWORD *v25; // ecx
  int v26; // eax
  double v27; // st7
  _DWORD *v28; // ecx
  float *v29; // eax
  _DWORD *v30; // ecx
  int v31; // eax
  double v32; // st7
  _DWORD *v33; // ecx
  double v34; // st7
  float *v35; // eax
  float *v36; // eax
  _DWORD *v37; // ecx
  int v38; // eax
  double v39; // st7
  _DWORD *v40; // ecx
  float *v41; // eax
  _DWORD *v42; // ecx
  int v43; // eax
  double v44; // st7
  _DWORD *v45; // ecx
  int v46; // eax
  char *v47; // eax
  double *p_a3; // edi
  int v49; // ebx
  char *v50; // eax
  int v51; // edx
  Tile *v52; // ecx
  _DWORD *v53; // edi
  _DWORD *v54; // ebx
  Tile *v55; // esi
  int v56; // eax
  int v57; // ebx
  _DWORD *v58; // [esp+4h] [ebp-54h]
  const char *v59; // [esp+8h] [ebp-50h]
  _DWORD *v60; // [esp+8h] [ebp-50h]
  float a2; // [esp+10h] [ebp-48h]
  float v62; // [esp+1Ch] [ebp-3Ch]
  BSStringT v63; // [esp+20h] [ebp-38h] BYREF
  _DWORD *v64; // [esp+28h] [ebp-30h] BYREF
  _DWORD *v65; // [esp+2Ch] [ebp-2Ch]
  double a3; // [esp+30h] [ebp-28h] BYREF
  char *v67[5]; // [esp+38h] [ebp-20h] BYREF
  int v68; // [esp+4Ch] [ebp-Ch]
  int v69; // [esp+54h] [ebp-4h]
  int savedregs; // [esp+58h] [ebp+0h] BYREF

  if ( a5 == 0x15 )
  {
    v7 = *(_DWORD **)(a1 + 0xF4);
    if ( !v7 )
      return;
    goto LABEL_6;
  }
  if ( a5 == 0x2B )
  {
    v7 = a6;
LABEL_6:
    if ( v7 )
    {
      if ( v7[4] == *(_DWORD *)(a1 + 0x58)
        && Tile_GetFloat(v7, 0xFB4) == fConstant_2
        && sub_6640D0((TESObjectREFR *)TESDataHandler_g_PlayerRef, (char)&savedregs, st5_0) )
      {
        (*(void (__usercall **)(int@<ecx>, int, _DWORD *, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)a1 + 0x14))(
          a1,
          0x2B,
          v7,
          a4,
          st6_0,
          st5_0);
        v8 = sub_588C10(v7, 0xFB2);
        sub_488810((BSStringT *)(a1 + 0xB0), v8);
        *(float *)(a1 + 0xB8) = *(float *)(sub_588B50(v7, 0xFAF) + 4);
        v62 = *(float *)(sub_588B50(v7, 0xFB0) + 4);
        v63.m_data = 0;
        a4 = v62;
        v63.m_dataLen = 0;
        *(float *)(a1 + 0xBC) = v62;
        v63.m_bufLen = 0;
        v9 = *(const char **)(a1 + 0xB0);
        v68 = 0;
        BSStringT_Static_Format(&v63, "%s %s?", *(const char **)dword_B38C60, v9);
        ShowUIMessageBox(
          v63.m_data,
          (char)&savedregs,
          st5_0,
          st6_0,
          v62,
          v63.m_data,
          (int)sub_5B8DC0,
          1,
          (const char *)MessageButtonTextYes,
          MessageButtonTextNo);
        v68 = 0xFFFFFFFF;
        BSStringT_Clear((unsigned int *)&v63);
      }
      if ( v7[4] == *(_DWORD *)(a1 + 0x58) && Tile_GetFloat(v7, 0xFB4) == fConstant_1 )
      {
        v63.m_data = 0;
        *(_DWORD *)&v63.m_dataLen = 0;
        v59 = *(const char **)dword_B38C90;
        v68 = 1;
        BSStringT_Static_Format(&v63, "%s", v59);
        m_data = v63.m_data;
        QueueUIMessage((char)&savedregs, a4, st6_0, v63.m_data, flt_A30634, 0, 0);
        FormHeapFree((unsigned int)m_data);
      }
    }
    return;
  }
  if ( a5 >= 1 && a5 <= 5 )
  {
    (*(void (__usercall **)(int@<ecx>, signed int, _DWORD *, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)a1 + 0x14))(
      a1,
      a5,
      a6,
      a4,
      st6_0,
      st5_0);
    sub_5BB210((_DWORD *)a1, st6_0, a4, (_DWORD *)a5, a6);
    return;
  }
  switch ( a5 )
  {
    case 7:
    case 8:
      Tile_GetFloat(*(_DWORD **)(a1 + 0x28), 0xFAE);
      v56 = Double_To_SInt32(a4);
      if ( a5 == 7 )
        v57 = v56 - 1;
      else
        v57 = v56 + 1;
      *(_DWORD *)&v63.m_dataLen = v57;
      if ( v57 >= 1 )
      {
        if ( v57 <= 5 )
        {
LABEL_76:
          a2 = (float)*(int *)&v63.m_dataLen;
          Tile_SetFloat(*(Tile **)(a1 + 0x28), (_DWORD *)0xFAE, a2);
          (*(void (__usercall **)(int@<ecx>, signed int, _DWORD *, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)a1 + 0x14))(
            a1,
            a5,
            a6,
            a4,
            st6_0,
            st5_0);
          v60 = 0;
          v58 = (_DWORD *)v57;
LABEL_77:
          sub_5BB210((_DWORD *)a1, st6_0, a4, v58, v60);
          return;
        }
        v57 = 1;
      }
      else
      {
        v57 = 5;
      }
      *(_DWORD *)&v63.m_dataLen = v57;
      goto LABEL_76;
    case 0x33:
      Tile_GetFloat(a6, 0xFAA);
      v11 = Double_To_SInt32(a4);
      *(float *)&v64 = 0.0;
      v65 = 0;
      sub_52A8A0(&v64, 0, 0, 1);
      v12 = (int *)&v64;
      v13 = 1;
      do
      {
        v14 = *v12;
        if ( !*v12 )
          break;
        v12 = (int *)v12[1];
        if ( v11 == v13 )
        {
          sub_660450(TESDataHandler_g_PlayerRef, a4, *(_DWORD *)(v14 + 0x68), *(char **)(v14 + 0x68));
          sub_5BACB0(st5_0, st6_0, a4, 0);
          break;
        }
        ++v13;
      }
      while ( v12 );
      BSSimpleList_Clear(&v64);
      sub_57DE50(0xB);
      goto LABEL_77;
    case 0x34:
      Tile_GetFloat(a6, 0xFAA);
      v15 = 0;
      v16 = Double_To_SInt32(a4);
      *(float *)&v64 = 0.0;
      v65 = 0;
      sub_52A8A0(&v64, 0, 1, 1);
      v17 = (int *)&v64;
      v18 = 1;
      do
      {
        v19 = *v17;
        if ( !*v17 )
          break;
        v17 = (int *)v17[1];
        v15 = v19;
        if ( v16 == v18 )
        {
          sub_5BACB0(st5_0, st6_0, a4, *(TESForm **)(v19 + 0x68));
          break;
        }
        ++v18;
      }
      while ( v17 );
      Tile_SetFloat(*(Tile **)(a1 + 0x54), (_DWORD *)0xFA1, fConstant_2);
      v20 = *(char **)(*(_DWORD *)(v15 + 0x68) + 0x34);
      if ( !v20 )
        v20 = EmptyString;
      Tile_SetString(*(_DWORD **)(a1 + 4), (_DWORD *)0xFB1, v20);
      sub_57DE50(1);
      return;
    case 0x29:
      v21 = *(float *)(a1 + 0xE4);
      v22 = *(_DWORD **)(a1 + 0x58);
      *(double *)v67 = v21;
      if ( Tile_GetFloat(v22, 0xFDA) != v21 )
        return;
      v23 = *(_DWORD **)(a1 + 0x58);
      *(double *)v67 = *(float *)(a1 + 0xE8);
      if ( Tile_GetFloat(v23, 0xFD9) != *(double *)v67 || (InterfaceManager_GetSingleton(0, 1)->unk0C0[0x16] & 4) == 0 )
        return;
      (*(void (__usercall **)(int@<ecx>, int, _DWORD *, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)a1 + 0x14))(
        a1,
        0x29,
        a6,
        a4,
        st6_0,
        st5_0);
      *(_BYTE *)(a1 + 0xDC) = 0;
      Singleton = (float *)InterfaceManager_GetSingleton(0, 1);
      sub_5952D0(Singleton);
      v25 = *(_DWORD **)(a1 + 0x58);
      a3 = (double)v26;
      v27 = sub_588C50(v25);
      v28 = *(_DWORD **)(a1 + 0x58);
      a3 = a3 - v27;
      *(float *)(a1 + 0xD4) = Tile_GetFloat(v28, 0xFDA) + a3;
      v29 = (float *)InterfaceManager_GetSingleton(0, 1);
      sub_593020(v29);
      v30 = *(_DWORD **)(a1 + 0x58);
      a3 = (double)v31;
      v32 = sub_588CF0(v30);
      v33 = *(_DWORD **)(a1 + 0x58);
      a3 = a3 - v32;
      v34 = Tile_GetFloat(v33, 0xFD9) + a3;
LABEL_42:
      *(float *)(a1 + 0xD8) = v34;
      v35 = (float *)sub_5A5790(TESDataHandler_g_PlayerRef, &a3);
      if ( sub_8AA350(v35, &Vector3_InitValue_) )
        ShowUIMessageBox(
          (char *)MessageButtonTextNo,
          (char)&savedregs,
          st5_0,
          st6_0,
          v34,
          (const char *)dword_B38C68,
          (int)sub_5BB350,
          1,
          (const char *)MessageButtonTextYes,
          MessageButtonTextNo);
      else
        ShowUIMessageBox(
          (char *)dword_B38C70,
          (char)&savedregs,
          st5_0,
          st6_0,
          v34,
          (const char *)dword_B38C70,
          (int)sub_5BB350,
          1,
          (const char *)dword_B38C78,
          dword_B38C80);
      return;
    case 0x2D:
      if ( (InterfaceManager_GetSingleton(0, 1)->unk0C0[0x16] & 4) == 0 )
        return;
      (*(void (__usercall **)(int@<ecx>, int, _DWORD *, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)a1 + 0x14))(
        a1,
        0x2D,
        a6,
        a4,
        st6_0,
        st5_0);
      *(_BYTE *)(a1 + 0xDC) = 1;
      v36 = (float *)InterfaceManager_GetSingleton(0, 1);
      sub_5952D0(v36);
      v37 = *(_DWORD **)(a1 + 0x64);
      a3 = (double)v38;
      v39 = sub_588C50(v37);
      v40 = *(_DWORD **)(a1 + 0x64);
      a3 = a3 - v39;
      *(float *)(a1 + 0xD4) = Tile_GetFloat(v40, 0xFDA) + a3;
      v41 = (float *)InterfaceManager_GetSingleton(0, 1);
      sub_593020(v41);
      v42 = *(_DWORD **)(a1 + 0x64);
      a3 = (double)v43;
      v44 = sub_588CF0(v42);
      v45 = *(_DWORD **)(a1 + 0x64);
      a3 = a3 - v44;
      v34 = Tile_GetFloat(v45, 0xFD9) + a3;
      goto LABEL_42;
    case 0x20:
      sub_5BACB0(st5_0, st6_0, a4, 0);
      Tile_SetFloat(*(Tile **)(a1 + 0x54), (_DWORD *)0xFA1, 1.0);
      Tile_SetFloat(*(Tile **)(a1 + 0x50), (_DWORD *)0xFA1, 1.0);
      sub_57DE50(2);
      break;
    case 0x1F:
      sub_57DE50(5);
      v46 = *(_DWORD *)(*(_DWORD *)(a1 + 0x48) + 0x34);
      if ( v46 )
      {
        v47 = sub_588C10(*(_DWORD **)(v46 + 8), 0xFAF);
        BSStringT_constr_str((BSStringT *)v67, v47);
        v69 = 2;
        a3 = 0.0;
        sub_52A8A0(&a3, 0, 0, 1);
        p_a3 = &a3;
        do
        {
          v49 = *(_DWORD *)p_a3;
          if ( !*(_DWORD *)p_a3 )
            break;
          v50 = *(char **)(*(_DWORD *)(v49 + 0x68) + 0x34);
          p_a3 = *((double **)p_a3 + 1);
          if ( !v50 )
            v50 = EmptyString;
          if ( sub_5755D0(v67, v50) )
          {
            sub_660450(TESDataHandler_g_PlayerRef, a4, v51, *(char **)(v49 + 0x68));
            Tile_SetFloat(*(Tile **)(a1 + 0x4C), (_DWORD *)0xFA1, 1.0);
            Tile_SetFloat(*(Tile **)(a1 + 0x28), (_DWORD *)0xFAE, fConstant_2);
            BYTE1(InterfaceManager_GetSingleton(0, 1)->unk008[1]) = 2;
            Tile_SetFloat(*(Tile **)(a1 + 0x5C), (_DWORD *)0xFA1, 1.0);
            Tile_SetString(*(_DWORD **)(a1 + 0x5C), (_DWORD *)0xFDE, word_A36430);
            v52 = *(Tile **)(a1 + 0xF4);
            if ( v52 )
              Tile_SetFloat(v52, (_DWORD *)0xFB5, 0.0);
            *(_DWORD *)(a1 + 0xF4) = 0;
            sub_5B91E0(st5_0, st6_0);
            Tile_SetFloat(*(Tile **)(a1 + 0x44), (_DWORD *)0xFB7, flt_A6B618);
            Tile_SetFloat(*(Tile **)(a1 + 0x44), (_DWORD *)0xFB7, 0.0);
            Tile_SetFloat(*(Tile **)(a1 + 0x54), (_DWORD *)0xFA1, 1.0);
            Tile_SetFloat(*(Tile **)(a1 + 0x50), (_DWORD *)0xFA1, 1.0);
            v53 = *(_DWORD **)(*(_DWORD *)(a1 + 0x58) + 0x34);
            if ( v53 )
            {
              while ( 1 )
              {
                v54 = (_DWORD *)v53[2];
                v53 = (_DWORD *)*v53;
                if ( Tile_GetFloat(v54, 0xFB3) == flt_A6BF7C && Tile_GetFloat(v54, 0xFB4) == fConstant_2 )
                  break;
                if ( !v53 )
                  goto LABEL_67;
              }
              *(float *)&v63.m_dataLen = Tile_GetFloat(v54, 0xFAF);
              *(float *)&v64 = Tile_GetFloat(v54, 0xFB0);
              v55 = *(Tile **)(a1 + 0x58);
              Tile_SetFloat(v55, (_DWORD *)0xFB8, *(float *)&v63.m_dataLen);
              Tile_SetFloat(v55, (_DWORD *)0xFB9, *(float *)&v64);
            }
            break;
          }
        }
        while ( p_a3 );
LABEL_67:
        BSSimpleList_Clear(&a3);
        v69 = 0xFFFFFFFF;
        BSStringT_Clear((unsigned int *)v67);
      }
      break;
  }
}
