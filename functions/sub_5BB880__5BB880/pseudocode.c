void __userpurge WorldMapMenu_OnTileActionMaybeFastTravelPrompt(
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
  Tile *v51; // ecx
  _DWORD *v52; // edi
  _DWORD *v53; // ebx
  Tile *v54; // esi
  int v55; // eax
  int v56; // ebx
  _DWORD *v57; // [esp+4h] [ebp-54h]
  const char *value; // [esp+8h] [ebp-50h]
  _DWORD *v59; // [esp+8h] [ebp-50h]
  float a2; // [esp+10h] [ebp-48h]
  float v61; // [esp+1Ch] [ebp-3Ch]
  BSStringT v62; // [esp+20h] [ebp-38h] BYREF
  _DWORD *v63; // [esp+28h] [ebp-30h] BYREF
  _DWORD *v64; // [esp+2Ch] [ebp-2Ch]
  double a3; // [esp+30h] [ebp-28h] BYREF
  char *v66[5]; // [esp+38h] [ebp-20h] BYREF
  int v67; // [esp+4Ch] [ebp-Ch]
  int v68; // [esp+54h] [ebp-4h]
  int savedregs; // [esp+58h] [ebp+0h] BYREF

  if ( a5 == 0x15 ) /*0x5bb8b4*/
  {
    v7 = *(_DWORD **)(a1 + 0xF4); /*0x5bb8b6*/
    if ( !v7 ) /*0x5bb8be*/
      return; /*0x5bb8be*/
    goto LABEL_6; /*0x5bb8be*/
  }
  if ( a5 == 0x2B ) /*0x5bb8c9*/
  {
    v7 = a6; /*0x5bb8cf*/
LABEL_6:
    if ( v7 ) /*0x5bb8d4*/
    {                                           // World-map tile action gates the fast-travel prompt through PlayerCharacter_CanStartFastTravel before showing the confirmation box. This is pre-travel validation, not the travel execution/roll site.
      if ( v7[4] == *(_DWORD *)(a1 + 0x58) /*0x5bb909*/
        && Tile_GetFloat(v7, 0xFB4) == fConstant_2
        && PlayerCharacter_CanStartFastTravel((TESObjectREFR *)reference) )
      {
        (*(void (__usercall **)(int@<ecx>, int, _DWORD *, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)a1 + 0x14))( /*0x5bb920*/
          a1,
          0x2B,
          v7,
          a4,
          st6_0,
          st5_0);
        v8 = sub_588C10(v7, 0xFB2); /*0x5bb92f*/
        sub_488810((BSStringT *)(a1 + 0xB0), v8); /*0x5bb937*/
        *(float *)(a1 + 0xB8) = *(float *)(sub_588B50(v7, 0xFAF) + 4); /*0x5bb95a*/
        v61 = *(float *)(sub_588B50(v7, 0xFB0) + 4); /*0x5bb96a*/
        v62.m_data = 0; /*0x5bb96e*/
        a4 = v61; /*0x5bb972*/
        v62.m_dataLen = 0; /*0x5bb976*/
        *(float *)(a1 + 0xBC) = v61; /*0x5bb97b*/
        v62.m_bufLen = 0; /*0x5bb981*/
        v9 = *(const char **)(a1 + 0xB0); /*0x5bb986*/
        v67 = 0; /*0x5bb988*/
        BSStringT_Static_Format(&v62, "%s %s?", stru_B38C60.value, v9); /*0x5bb99d*/
        ShowUIMessageBox( /*0x5bb9bd*/
          v62.m_data,
          st5_0,
          st6_0,
          v61,
          v62.m_data,
          (int)WorldMapMenu_ConfirmFastTravelSelection,
          1,
          (char *)MEMORY[0xB38CF8].value,
          (char)MEMORY[0xB38D00].value);        // Shows the fast-travel confirmation message box and registers WorldMapMenu_ConfirmFastTravelSelection as the OK callback.
        v67 = 0xFFFFFFFF; /*0x5bb9c9*/
        BSStringT_Clear((unsigned int *)&v62); /*0x5bb9d1*/
      }
      if ( v7[4] == *(_DWORD *)(a1 + 0x58) && Tile_GetFloat(v7, 0xFB4) == fConstant_1 ) /*0x5bb9f9*/
      {
        v62.m_data = 0; /*0x5bba01*/
        *(_DWORD *)&v62.m_dataLen = 0; /*0x5bba05*/
        value = stru_B38C90.value; /*0x5bba15*/
        v67 = 1; /*0x5bba20*/
        BSStringT_Static_Format(&v62, "%s", value); /*0x5bba28*/
        m_data = v62.m_data; /*0x5bba38*/
        QueueUIMessage((char)&savedregs, a4, st6_0, v62.m_data, kTerrainLODQuadRayDirectionZ, 0, 0); /*0x5bba41*/
        FormHeapFree((unsigned int)m_data); /*0x5bba47*/
      }
    }
    return; /*0x5bba61*/
  }
  if ( a5 >= 1 && a5 <= 5 ) /*0x5bba6c*/
  {
    (*(void (__usercall **)(int@<ecx>, signed int, _DWORD *, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)a1 + 0x14))( /*0x5bba78*/
      a1,
      a5,
      a6,
      a4,
      st6_0,
      st5_0);
    sub_5BB210((_DWORD *)a1, st6_0, a4, (_DWORD *)a5, a6); /*0x5bba7c*/
    return; /*0x5bba7c*/
  }
  switch ( a5 ) /*0x5bba8d*/
  {
    case 7: /*0x5bba8d*/
    case 8: /*0x5bba8d*/
      Tile_GetFloat(*(_DWORD **)(a1 + 0x28), 0xFAE); /*0x5bc102*/
      v55 = Double_To_SInt32(a4); /*0x5bc107*/
      if ( a5 == 7 ) /*0x5bc111*/
        v56 = v55 - 1; /*0x5bc113*/
      else
        v56 = v55 + 1; /*0x5bc118*/
      *(_DWORD *)&v62.m_dataLen = v56; /*0x5bc11e*/
      if ( v56 >= 1 ) /*0x5bc122*/
      {
        if ( v56 <= 5 ) /*0x5bc12e*/
        {
LABEL_76:
          a2 = (float)*(int *)&v62.m_dataLen; /*0x5bc139*/
          Tile_SetFloat(*(Tile **)(a1 + 0x28), 0xFAEu, a2); /*0x5bc149*/
          (*(void (__usercall **)(int@<ecx>, signed int, _DWORD *, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)a1 + 0x14))( /*0x5bc15a*/
            a1,
            a5,
            a6,
            a4,
            st6_0,
            st5_0);
          v59 = 0; /*0x5bc15c*/
          v57 = (_DWORD *)v56; /*0x5bc15e*/
LABEL_77:
          sub_5BB210((_DWORD *)a1, st6_0, a4, v57, v59); /*0x5bc15f*/
          return; /*0x5bc161*/
        }
        v56 = 1; /*0x5bc130*/
      }
      else
      {
        v56 = 5; /*0x5bc124*/
      }
      *(_DWORD *)&v62.m_dataLen = v56; /*0x5bc135*/
      goto LABEL_76; /*0x5bc135*/
    case 0x33: /*0x5bba8d*/
      Tile_GetFloat(a6, 0xFAA); /*0x5bbaa4*/
      v11 = Double_To_SInt32(a4); /*0x5bbabf*/
      *(float *)&v63 = 0.0; /*0x5bbac1*/
      v64 = 0; /*0x5bbac5*/
      sub_52A8A0(&v63, 0, 0, 1); /*0x5bbac9*/
      v12 = (int *)&v63; /*0x5bbad1*/
      v13 = 1; /*0x5bbad5*/
      do /*0x5bbae0*/
      {
        v14 = *v12; /*0x5bbae0*/
        if ( !*v12 ) /*0x5bbae0*/
          break; /*0x5bbae0*/
        v12 = (int *)v12[1]; /*0x5bbae8*/
        if ( v11 == v13 ) /*0x5bbaeb*/
        {
          a4 = sub_660450(reference, a4, (char *)*(_DWORD *)(v14 + 0x68)); /*0x5bbb00*/
          sub_5BACB0(st5_0, st6_0, a4, 0); /*0x5bbb06*/
          break; /*0x5bbb06*/
        }
        ++v13; /*0x5bbaed*/
      }
      while ( v12 ); /*0x5bbae0*/
      BSSimpleList_Clear(&v63); /*0x5bbb0e*/
      sub_57DE50(0xB); /*0x5bbb19*/
      goto LABEL_77; /*0x5bbb27*/
    case 0x34: /*0x5bba8d*/
      Tile_GetFloat(a6, 0xFAA); /*0x5bbb3d*/
      v15 = 0; /*0x5bbb4f*/
      v16 = Double_To_SInt32(a4); /*0x5bbb59*/
      *(float *)&v63 = 0.0; /*0x5bbb5b*/
      v64 = 0; /*0x5bbb5f*/
      sub_52A8A0(&v63, 0, 1, 1); /*0x5bbb63*/
      v17 = (int *)&v63; /*0x5bbb6b*/
      v18 = 1; /*0x5bbb6f*/
      do /*0x5bbb74*/
      {
        v19 = *v17; /*0x5bbb74*/
        if ( !*v17 ) /*0x5bbb74*/
          break; /*0x5bbb74*/
        v17 = (int *)v17[1]; /*0x5bbb7c*/
        v15 = v19; /*0x5bbb7f*/
        if ( v16 == v18 ) /*0x5bbb81*/
        {
          sub_5BACB0(st5_0, st6_0, a4, *(TESForm **)(v19 + 0x68)); /*0x5bbb90*/
          break; /*0x5bbb90*/
        }
        ++v18; /*0x5bbb83*/
      }
      while ( v17 ); /*0x5bbb74*/
      Tile_SetFloat(*(Tile **)(a1 + 0x54), 0xFA1u, fConstant_2); /*0x5bbb98*/
      v20 = *(char **)(*(_DWORD *)(v15 + 0x68) + 0x34); /*0x5bbbb5*/
      if ( !v20 ) /*0x5bbbba*/
        v20 = EmptyString; /*0x5bbbbc*/
      Tile_SetString(*(_DWORD **)(a1 + 4), (_DWORD *)0xFB1, v20); /*0x5bbbca*/
      sub_57DE50(1); /*0x5bbbd1*/
      return; /*0x5bbbeb*/
    case 0x29: /*0x5bba8d*/
      v21 = *(float *)(a1 + 0xE4); /*0x5bbbf7*/
      v22 = *(_DWORD **)(a1 + 0x58); /*0x5bbbfd*/
      *(double *)v66 = v21; /*0x5bbc05*/
      if ( Tile_GetFloat(v22, 0xFDA) != v21 ) /*0x5bbc17*/
        return; /*0x5bbc17*/
      v23 = *(_DWORD **)(a1 + 0x58); /*0x5bbc23*/
      *(double *)v66 = *(float *)(a1 + 0xE8); /*0x5bbc2b*/
      if ( Tile_GetFloat(v23, 0xFD9) != *(double *)v66 || (InterfaceManager_GetSingleton(0, 1)->unk0C0[0x16] & 4) == 0 ) /*0x5bbc5a*/
        return; /*0x5bbc5a*/
      (*(void (__usercall **)(int@<ecx>, int, _DWORD *, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)a1 + 0x14))( /*0x5bbc6c*/
        a1,
        0x29,
        a6,
        a4,
        st6_0,
        st5_0);
      *(_BYTE *)(a1 + 0xDC) = 0; /*0x5bbc72*/
      Singleton = (float *)InterfaceManager_GetSingleton(0, 1); /*0x5bbc79*/
      sub_5952D0(Singleton); /*0x5bbc83*/
      v25 = *(_DWORD **)(a1 + 0x58); /*0x5bbc88*/
      a3 = (double)v26; /*0x5bbc93*/
      v27 = sub_588C50(v25); /*0x5bbc97*/
      v28 = *(_DWORD **)(a1 + 0x58); /*0x5bbca0*/
      a3 = a3 - v27; /*0x5bbca8*/
      *(float *)(a1 + 0xD4) = Tile_GetFloat(v28, 0xFDA) + a3; /*0x5bbcb9*/
      v29 = (float *)InterfaceManager_GetSingleton(0, 1); /*0x5bbcbf*/
      sub_593020(v29); /*0x5bbcc9*/
      v30 = *(_DWORD **)(a1 + 0x58); /*0x5bbcce*/
      a3 = (double)v31; /*0x5bbcd9*/
      v32 = sub_588CF0(v30); /*0x5bbcdd*/
      v33 = *(_DWORD **)(a1 + 0x58); /*0x5bbce6*/
      a3 = a3 - v32; /*0x5bbcee*/
      v34 = Tile_GetFloat(v33, 0xFD9) + a3; /*0x5bbcf7*/
LABEL_42:
      *(float *)(a1 + 0xD8) = v34; /*0x5bbcfb*/
      v35 = (float *)sub_5A5790(reference, &a3); /*0x5bbd11*/
      if ( sub_8AA350(v35, &g_zeroNiPoint3.x) ) /*0x5bbd18*/
        ShowUIMessageBox( /*0x5bbd42*/
          (char *)MEMORY[0xB38D00].value,
          st5_0,
          st6_0,
          v34,
          (char *)stru_B38C68.value,
          (int)sub_5BB350,
          1,
          (char *)MEMORY[0xB38CF8].value,
          (char)MEMORY[0xB38D00].value);
      else
        ShowUIMessageBox( /*0x5bbe48*/
          (char *)stru_B38C70.value,
          st5_0,
          st6_0,
          v34,
          (char *)stru_B38C70.value,
          (int)sub_5BB350,
          1,
          (char *)stru_B38C78.value,
          (char)stru_B38C80.value);
      return; /*0x5bbd5c*/
    case 0x2D: /*0x5bba8d*/
      if ( (InterfaceManager_GetSingleton(0, 1)->unk0C0[0x16] & 4) == 0 ) /*0x5bbd80*/
        return; /*0x5bbd80*/
      (*(void (__usercall **)(int@<ecx>, int, _DWORD *, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)a1 + 0x14))( /*0x5bbd92*/
        a1,
        0x2D,
        a6,
        a4,
        st6_0,
        st5_0);
      *(_BYTE *)(a1 + 0xDC) = 1; /*0x5bbd98*/
      v36 = (float *)InterfaceManager_GetSingleton(0, 1); /*0x5bbd9f*/
      sub_5952D0(v36); /*0x5bbda9*/
      v37 = *(_DWORD **)(a1 + 0x64); /*0x5bbdae*/
      a3 = (double)v38; /*0x5bbdb9*/
      v39 = sub_588C50(v37); /*0x5bbdbd*/
      v40 = *(_DWORD **)(a1 + 0x64); /*0x5bbdc6*/
      a3 = a3 - v39; /*0x5bbdce*/
      *(float *)(a1 + 0xD4) = Tile_GetFloat(v40, 0xFDA) + a3; /*0x5bbddf*/
      v41 = (float *)InterfaceManager_GetSingleton(0, 1); /*0x5bbde5*/
      sub_593020(v41); /*0x5bbdef*/
      v42 = *(_DWORD **)(a1 + 0x64); /*0x5bbdf4*/
      a3 = (double)v43; /*0x5bbdff*/
      v44 = sub_588CF0(v42); /*0x5bbe03*/
      v45 = *(_DWORD **)(a1 + 0x64); /*0x5bbe0c*/
      a3 = a3 - v44; /*0x5bbe14*/
      v34 = Tile_GetFloat(v45, 0xFD9) + a3; /*0x5bbe1d*/
      goto LABEL_42; /*0x5bbe21*/
    case 0x20: /*0x5bba8d*/
      sub_5BACB0(st5_0, st6_0, a4, 0); /*0x5bbe6c*/
      Tile_SetFloat(*(Tile **)(a1 + 0x54), 0xFA1u, 1.0); /*0x5bbe7e*/
      Tile_SetFloat(*(Tile **)(a1 + 0x50), 0xFA1u, 1.0); /*0x5bbe91*/
      sub_57DE50(2); /*0x5bbe98*/
      break;
    case 0x1F: /*0x5bba8d*/
      sub_57DE50(5); /*0x5bbec0*/
      v46 = *(_DWORD *)(*(_DWORD *)(a1 + 0x48) + 0x34); /*0x5bbec8*/
      if ( v46 ) /*0x5bbed2*/
      {
        v47 = sub_588C10(*(_DWORD **)(v46 + 8), 0xFAF); /*0x5bbee0*/
        BSStringT_constr_str((BSStringT *)v66, v47); /*0x5bbeea*/
        v68 = 2; /*0x5bbef8*/
        a3 = 0.0; /*0x5bbf00*/
        sub_52A8A0(&a3, 0, 0, 1); /*0x5bbf08*/
        p_a3 = &a3; /*0x5bbf10*/
        do /*0x5bbf14*/
        {
          v49 = *(_DWORD *)p_a3; /*0x5bbf14*/
          if ( !*(_DWORD *)p_a3 ) /*0x5bbf14*/
            break; /*0x5bbf14*/
          v50 = *(char **)(*(_DWORD *)(v49 + 0x68) + 0x34); /*0x5bbf21*/
          p_a3 = *((double **)p_a3 + 1); /*0x5bbf26*/
          if ( !v50 ) /*0x5bbf29*/
            v50 = EmptyString; /*0x5bbf2b*/
          if ( sub_5755D0(v66, v50) ) /*0x5bbf35*/
          {
            sub_660450(reference, a4, *(char **)(v49 + 0x68)); /*0x5bbf51*/
            Tile_SetFloat(*(Tile **)(a1 + 0x4C), 0xFA1u, 1.0); /*0x5bbf64*/
            Tile_SetFloat(*(Tile **)(a1 + 0x28), 0xFAEu, fConstant_2); /*0x5bbf7b*/
            BYTE1(InterfaceManager_GetSingleton(0, 1)->unk008[1]) = 2; /*0x5bbf91*/
            Tile_SetFloat(*(Tile **)(a1 + 0x5C), 0xFA1u, 1.0); /*0x5bbf9d*/
            Tile_SetString(*(_DWORD **)(a1 + 0x5C), (_DWORD *)0xFDE, word_A36430); /*0x5bbfaf*/
            v51 = *(Tile **)(a1 + 0xF4); /*0x5bbfb4*/
            if ( v51 ) /*0x5bbfbc*/
              Tile_SetFloat(v51, 0xFB5u, 0.0); /*0x5bbfc9*/
            *(_DWORD *)(a1 + 0xF4) = 0; /*0x5bbfce*/
            sub_5B91E0(st5_0); /*0x5bbfd8*/
            Tile_SetFloat(*(Tile **)(a1 + 0x44), 0xFB7u, flt_A6B618); /*0x5bbfef*/
            Tile_SetFloat(*(Tile **)(a1 + 0x44), 0xFB7u, 0.0); /*0x5bc002*/
            Tile_SetFloat(*(Tile **)(a1 + 0x54), 0xFA1u, 1.0); /*0x5bc015*/
            Tile_SetFloat(*(Tile **)(a1 + 0x50), 0xFA1u, 1.0); /*0x5bc028*/
            v52 = *(_DWORD **)(*(_DWORD *)(a1 + 0x58) + 0x34); /*0x5bc030*/
            if ( v52 ) /*0x5bc035*/
            {
              while ( 1 ) /*0x5bc040*/
              {
                v53 = (_DWORD *)v52[2]; /*0x5bc040*/
                v52 = (_DWORD *)*v52; /*0x5bc046*/
                if ( Tile_GetFloat(v53, 0xFB3) == flt_A6BF7C && Tile_GetFloat(v53, 0xFB4) == fConstant_2 ) /*0x5bc078*/
                  break; /*0x5bc078*/
                if ( !v52 ) /*0x5bc07c*/
                  goto LABEL_67; /*0x5bc07c*/
              }
              *(float *)&v62.m_dataLen = Tile_GetFloat(v53, 0xFAF); /*0x5bc08c*/
              *(float *)&v63 = Tile_GetFloat(v53, 0xFB0); /*0x5bc09c*/
              v54 = *(Tile **)(a1 + 0x58); /*0x5bc0a0*/
              Tile_SetFloat(v54, 0xFB8u, *(float *)&v62.m_dataLen); /*0x5bc0b2*/
              Tile_SetFloat(v54, 0xFB9u, *(float *)&v63); /*0x5bc0c6*/
            }
            break; /*0x5bc0c6*/
          }
        }
        while ( p_a3 ); /*0x5bbf14*/
LABEL_67:
        BSSimpleList_Clear(&a3); /*0x5bc0cb*/
        v68 = 0xFFFFFFFF; /*0x5bc0d8*/
        BSStringT_Clear((unsigned int *)v66); /*0x5bc0e0*/
      }
      break;
  }
}
