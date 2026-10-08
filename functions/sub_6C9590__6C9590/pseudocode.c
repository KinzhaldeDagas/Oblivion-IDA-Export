char __userpurge sub_6C9590@<al>(_DWORD *this@<ecx>, int a2@<ebp>, Ni2DBuffer **a3)
{
  int v4; // edi
  int v5; // eax
  char v6; // al
  bool v7; // zf
  int v8; // ecx
  unsigned __int16 *v9; // ebx
  unsigned __int16 v10; // ax
  const char *v11; // edi
  unsigned __int16 v12; // ax
  const char *v13; // esi
  unsigned __int16 v14; // ax
  const char *v15; // edx
  unsigned __int16 v16; // ax
  const char *v17; // ecx
  unsigned __int16 v18; // ax
  const char *v19; // eax
  unsigned __int16 v20; // ax
  int v21; // eax
  int v22; // ebp
  unsigned __int16 v23; // ax
  _DWORD *v24; // edi
  int v25; // ebp
  const char **v26; // esi
  unsigned __int16 v27; // ax
  const char *v28; // esi
  const char *v29; // eax
  int v30; // esi
  const char **v31; // edi
  const char *v32; // edi
  int v33; // eax
  unsigned __int16 v34; // ax
  int v35; // eax
  unsigned __int16 v36; // ax
  const char *v37; // esi
  unsigned __int16 v38; // ax
  const char *v39; // edx
  unsigned __int16 v40; // ax
  const char *v41; // ecx
  unsigned __int16 v42; // ax
  const char *v43; // eax
  unsigned __int16 v44; // ax
  int v45; // ebp
  NiObject *v46; // eax
  NiObject *v47; // eax
  int v48; // edi
  unsigned __int16 v49; // ax
  const char *v50; // edi
  unsigned __int16 v51; // ax
  const char *v52; // esi
  unsigned __int16 v53; // ax
  const char *v54; // edx
  unsigned __int16 v55; // ax
  const char *v56; // ecx
  unsigned __int16 v57; // ax
  const char *v58; // eax
  int v60; // esi
  int v61; // eax
  _DWORD *v62; // eax
  size_t v64; // [esp+1Ch] [ebp-40h]
  const char *v65; // [esp+1Ch] [ebp-40h]
  char v66; // [esp+32h] [ebp-2Ah] BYREF
  char v67; // [esp+33h] [ebp-29h] BYREF
  _DWORD *v68; // [esp+34h] [ebp-28h]
  int v69; // [esp+38h] [ebp-24h]
  int v70; // [esp+3Ch] [ebp-20h]
  int v71; // [esp+40h] [ebp-1Ch]
  int v72; // [esp+44h] [ebp-18h]
  int v73; // [esp+48h] [ebp-14h]
  int v74; // [esp+4Ch] [ebp-10h] BYREF
  int v75; // [esp+50h] [ebp-Ch] BYREF
  int v76; // [esp+54h] [ebp-8h] BYREF
  int v77; // [esp+58h] [ebp-4h] BYREF
  char v78; // [esp+60h] [ebp+4h]

  v4 = *(_DWORD *)(*(this + 0x10) + 0x7C); /*0x6c959a*/
  v5 = *(this + 0x17); /*0x6c959d*/
  v68 = this; /*0x6c95a2*/
  v69 = v4; /*0x6c95a6*/
  if ( v5 ) /*0x6c95aa*/
    *(this + 0x18) = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x4C))(v4, v5); /*0x6c95b6*/
  v6 = sub_6C8220(this, a3, v4); /*0x6c95c1*/
  v7 = *(this + 3) == 0; /*0x6c95c6*/
  v66 = v6; /*0x6c95ca*/
  v78 = 0; /*0x6c95ce*/
  v72 = 0; /*0x6c95d3*/
  if ( !v7 ) /*0x6c95db*/
  {
    HIDWORD(v64) = a2; /*0x6c95e2*/
    do /*0x6c95f1*/
    {
      v8 = *(_DWORD *)(0x10 * v72 + v68[5]); /*0x6c95f1*/
      v71 = 0x10 * v72; /*0x6c95f6*/
      if ( v8 ) /*0x6c95fa*/
      {
        v9 = (unsigned __int16 *)(0x10 * v72 + v68[6]); /*0x6c9614*/
        if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v8 + 0x8C))(v8, v69) ) /*0x6c9616*/
        {
          if ( !*(_DWORD *)(0x10 * v72 + v68[5] + 8) ) /*0x6c96b3*/
          {
            v20 = v9[2]; /*0x6c96be*/
            if ( v20 == 0xFFFF ) /*0x6c96c6*/
              v21 = 0; /*0x6c96d2*/
            else
              v21 = *(_DWORD *)(*(_DWORD *)v9 + 8) + v20; /*0x6c96cd*/
            v22 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v69 + 0x4C))(v69, v21); /*0x6c96e0*/
            v70 = v22; /*0x6c96e4*/
            if ( v22 ) /*0x6c96e8*/
            {
              v23 = v9[3]; /*0x6c96ee*/
              if ( v23 != 0xFFFF ) /*0x6c96f6*/
              {
                if ( *(_DWORD *)(*(_DWORD *)v9 + 8) + v23 ) /*0x6c96fd*/
                {
                  v24 = *(_DWORD **)(v22 + 0x9C); /*0x6c9702*/
                  if ( v24 ) /*0x6c970a*/
                  {
                    while ( 1 ) /*0x6c9710*/
                    {
                      v25 = v24[2]; /*0x6c9710*/
                      v24 = (_DWORD *)*v24; /*0x6c971c*/
                      v26 = (const char **)(*(int (__thiscall **)(int))(*(_DWORD *)v25 + 4))(v25); /*0x6c9724*/
                      if ( !strcmp(*v26, (const char *)sub_6C63A0(v9)) ) /*0x6c9734*/
                        break; /*0x6c9734*/
                      if ( !v24 ) /*0x6c975b*/
                        goto LABEL_35; /*0x6c975b*/
                    }
                    v70 = v25; /*0x6c975f*/
LABEL_35:
                    v22 = v70; /*0x6c9763*/
                  }
                }
              }
              if ( v22 ) /*0x6c9769*/
              {
                v30 = *(_DWORD *)(v22 + 0xC); /*0x6c9852*/
                if ( !v30 ) /*0x6c9857*/
                {
LABEL_56:
                  v30 = *(_DWORD *)(v71 + v68[5] + 4); /*0x6c98f7*/
                  if ( v30 ) /*0x6c9908*/
                  {
                    (*(void (__thiscall **)(int, int))(*(_DWORD *)v30 + 0x58))(v30, v22); /*0x6c9912*/
                    v7 = v22 == *(_DWORD *)(v68[0x10] + 0x30); /*0x6c9917*/
                    v66 = 1; /*0x6c991a*/
                    if ( v7 ) /*0x6c991f*/
                    {
                      NiObjectNET_RemoveController((Ni2DBuffer **)v22, (Ni2DBuffer *)v30); /*0x6c9924*/
                      sub_6C61E0((_DWORD *)v30, *(_DWORD *)(v68[0x10] + 0x34)); /*0x6c9932*/
                      sub_6C61E0((_DWORD *)v68[0x10], v30); /*0x6c993b*/
                    }
LABEL_59:
                    v34 = v9[6]; /*0x6c9940*/
                    if ( v34 == 0xFFFF ) /*0x6c9948*/
                      v35 = 0; /*0x6c99d1*/
                    else
                      v35 = *(_DWORD *)(*(_DWORD *)v9 + 8) + v34; /*0x6c9953*/
                    v44 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v30 + 0x7C))(v30, v35); /*0x6c99db*/
                    v45 = v44; /*0x6c99dd*/
                    if ( v44 == word_A7A160 ) /*0x6c99e7*/
                      goto LABEL_80; /*0x6c99e7*/
                    v46 = (NiObject *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v30 + 0x80))(v30, v44); /*0x6c99f4*/
                    v47 = NiRTTI_Cast((BSStringT *)&stru_B3CC5C, v46); /*0x6c99fc*/
                    v7 = v68[0x18] == v70; /*0x6c9a0c*/
                    v48 = (int)v47; /*0x6c9a0f*/
                    LOBYTE(v73) = 0; /*0x6c9a11*/
                    if ( v7 ) /*0x6c9a16*/
                      LOBYTE(v73) = *(_BYTE *)(v68[0x10] + 0x6C) != 0; /*0x6c9a23*/
                    if ( v47 /*0x6c9a5e*/
                      || (v48 = (*(int (__thiscall **)(int, int, int, int, _DWORD, int))(*(_DWORD *)v30 + 0x98))(
                                  v30,
                                  v45,
                                  1,
                                  v73,
                                  0.0,
                                  2),
                          (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v30 + 0x84))(v30, v48, v45),
                          v48) )
                    {
                      *(_WORD *)(v30 + 8) |= 0x20u; /*0x6c9af5*/
                      NiSmartPointer_Set__((Ni2DBuffer **)(v71 + v68[5] + 4), (Ni2DBuffer *)v30); /*0x6c9b0a*/
                      *(_DWORD *)(v71 + v68[5] + 8) = v48; /*0x6c9b12*/
                    }
                    else
                    {
LABEL_80:
                      v49 = v9[6]; /*0x6c9a64*/
                      if ( v49 == 0xFFFF ) /*0x6c9a6c*/
                        v50 = 0; /*0x6c9a78*/
                      else
                        v50 = (const char *)(*(_DWORD *)(*(_DWORD *)v9 + 8) + v49); /*0x6c9a73*/
                      v51 = v9[5]; /*0x6c9a7a*/
                      if ( v51 == 0xFFFF ) /*0x6c9a82*/
                        v52 = 0; /*0x6c9a8e*/
                      else
                        v52 = (const char *)(*(_DWORD *)(*(_DWORD *)v9 + 8) + v51); /*0x6c9a89*/
                      v53 = v9[4]; /*0x6c9a90*/
                      if ( v53 == 0xFFFF ) /*0x6c9a98*/
                        v54 = 0; /*0x6c9aa4*/
                      else
                        v54 = (const char *)(*(_DWORD *)(*(_DWORD *)v9 + 8) + v53); /*0x6c9a9f*/
                      v55 = v9[3]; /*0x6c9aa6*/
                      if ( v55 == 0xFFFF ) /*0x6c9aae*/
                        v56 = 0; /*0x6c9aba*/
                      else
                        v56 = (const char *)(*(_DWORD *)(*(_DWORD *)v9 + 8) + v55); /*0x6c9ab5*/
                      v57 = v9[2]; /*0x6c9abc*/
                      if ( v57 == 0xFFFF ) /*0x6c9ac4*/
                        v58 = 0; /*0x6c9ad0*/
                      else
                        v58 = (const char *)(*(_DWORD *)(*(_DWORD *)v9 + 8) + v57); /*0x6c9acb*/
                      sub_748530( /*0x6c9aeb*/
                        (unsigned int *)&v77,
                        0,
                        "NiControllerSequence::StoreTargets '%s'failed to find target with the following identifiers:\n"
                        "\tm_pcAVObjectName\t%s\n"
                        "\tm_pcPropertyType\t%s\n"
                        "\tm_pcCtlrType\t\t%s\n"
                        "\tm_pcCtlrID\t\t\t%s\n"
                        "\tm_pcInterpolatorID\t%s\n",
                        (const char *)v68[2],
                        v58,
                        v56,
                        v54,
                        v52,
                        v50);
                    }
                  }
                  else
                  {
                    v36 = v9[5]; /*0x6c9958*/
                    if ( v36 == 0xFFFF ) /*0x6c9960*/
                      v37 = 0; /*0x6c996c*/
                    else
                      v37 = (const char *)(*(_DWORD *)(*(_DWORD *)v9 + 8) + v36); /*0x6c9967*/
                    v38 = v9[4]; /*0x6c996e*/
                    if ( v38 == 0xFFFF ) /*0x6c9976*/
                      v39 = 0; /*0x6c9982*/
                    else
                      v39 = (const char *)(*(_DWORD *)(*(_DWORD *)v9 + 8) + v38); /*0x6c997d*/
                    v40 = v9[3]; /*0x6c9984*/
                    if ( v40 == 0xFFFF ) /*0x6c998c*/
                      v41 = 0; /*0x6c9998*/
                    else
                      v41 = (const char *)(*(_DWORD *)(*(_DWORD *)v9 + 8) + v40); /*0x6c9993*/
                    v42 = v9[2]; /*0x6c999a*/
                    if ( v42 == 0xFFFF ) /*0x6c99a2*/
                      v43 = 0; /*0x6c99ae*/
                    else
                      v43 = (const char *)(*(_DWORD *)(*(_DWORD *)v9 + 8) + v42); /*0x6c99a9*/
                    sub_748530( /*0x6c99c4*/
                      (unsigned int *)&v76,
                      0,
                      "NiControllerSequence::StoreTargets '%s'failed to find target with the following identifiers:\n"
                      "\tm_pcAVObjectName\t%s\n"
                      "\tm_pcPropertyType\t%s\n"
                      "\tm_pcCtlrType\t\t%s\n"
                      "\tm_pcCtlrID\t\t\t%s\n",
                      (const char *)v68[2],
                      v43,
                      v41,
                      v39,
                      v37);
                  }
                  continue; /*0x6c9af3*/
                }
                while ( 2 ) /*0x6c9874*/
                {
                  v31 = (const char **)(*(int (__thiscall **)(int))(*(_DWORD *)v30 + 4))(v30); /*0x6c9874*/
                  if ( !strcmp(*v31, (const char *)sub_6C63C0(v9)) ) /*0x6c9878*/
                  {
                    v32 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v30 + 0x8C))(v30); /*0x6c98ab*/
                    v33 = sub_6C63E0(v9); /*0x6c98ad*/
                    if ( v32 ) /*0x6c98b4*/
                    {
                      if ( v33 ) /*0x6c98b8*/
                      {
                        v33 = strcmp(v32, (const char *)sub_6C63E0(v9)); /*0x6c98c7*/
                        goto LABEL_54; /*0x6c98c7*/
                      }
                    }
                    else
                    {
LABEL_54:
                      if ( !v33 ) /*0x6c98ea*/
                        goto LABEL_59; /*0x6c98ea*/
                    }
                  }
                  v30 = *(_DWORD *)(v30 + 0x34); /*0x6c98ec*/
                  if ( !v30 ) /*0x6c98f1*/
                    goto LABEL_56; /*0x6c98f1*/
                  continue; /*0x6c98f1*/
                }
              }
            }
            v27 = v9[2]; /*0x6c976f*/
            if ( v27 == 0xFFFF ) /*0x6c9777*/
              v28 = 0; /*0x6c9783*/
            else
              v28 = (const char *)(*(_DWORD *)(*(_DWORD *)v9 + 8) + v27); /*0x6c977e*/
            if ( !v78 ) /*0x6c978a*/
            {
              if ( CRT_StricmpLocaleDispatch(v28, "Bip01") /*0x6c97b0*/
                || !(*(int (__thiscall **)(int, const char *))(*(_DWORD *)v69 + 0x4C))(v69, "Bip02") )
              {
                LODWORD(v64) = 3; /*0x6c97c0*/
                if ( _strnicmp(aBow, v28, v64) ) /*0x6c97c8*/
                {
                  LODWORD(v64) = 5; /*0x6c97d8*/
                  if ( _strnicmp("Arrow", v28, v64) ) /*0x6c97e0*/
                  {
                    LODWORD(v64) = 0xA; /*0x6c97f0*/
                    if ( _strnicmp("Bip01 Tail", v28, v64) ) /*0x6c97f8*/
                    {
                      LODWORD(v64) = 6; /*0x6c9808*/
                      if ( _strnicmp("Bridle", v28, v64) ) /*0x6c9810*/
                      {
                        v65 = (const char *)sub_6C63A0(v9); /*0x6c9827*/
                        v29 = (const char *)sub_6C63C0(v9); /*0x6c982a*/
                        sub_748530( /*0x6c9845*/
                          (unsigned int *)&v75,
                          0,
                          "NiControllerSequence::StoreTargets '%s'failed to find target with the following identifiers:\n"
                          "\tm_pcAVObjectName\t%s\n"
                          "\tm_pcCtlrType\t\t%s\n"
                          "\tm_pcPropertyType\t%s\n",
                          (const char *)v68[2],
                          v28,
                          v29,
                          v65);
                      }
                    }
                  }
                }
              }
              else
              {
                v78 = 1; /*0x6c97b6*/
              }
            }
          }
        }
        else
        {
          v10 = v9[6]; /*0x6c9620*/
          if ( v10 == 0xFFFF ) /*0x6c9628*/
            v11 = 0; /*0x6c9634*/
          else
            v11 = (const char *)(*(_DWORD *)(*(_DWORD *)v9 + 8) + v10); /*0x6c962f*/
          v12 = v9[5]; /*0x6c9636*/
          if ( v12 == 0xFFFF ) /*0x6c963e*/
            v13 = 0; /*0x6c964a*/
          else
            v13 = (const char *)(*(_DWORD *)(*(_DWORD *)v9 + 8) + v12); /*0x6c9645*/
          v14 = v9[4]; /*0x6c964c*/
          if ( v14 == 0xFFFF ) /*0x6c9654*/
            v15 = 0; /*0x6c9660*/
          else
            v15 = (const char *)(*(_DWORD *)(*(_DWORD *)v9 + 8) + v14); /*0x6c965b*/
          v16 = v9[3]; /*0x6c9662*/
          if ( v16 == 0xFFFF ) /*0x6c966a*/
            v17 = 0; /*0x6c9676*/
          else
            v17 = (const char *)(*(_DWORD *)(*(_DWORD *)v9 + 8) + v16); /*0x6c9671*/
          v18 = v9[2]; /*0x6c9678*/
          if ( v18 == 0xFFFF ) /*0x6c9680*/
            v19 = 0; /*0x6c968c*/
          else
            v19 = (const char *)(*(_DWORD *)(*(_DWORD *)v9 + 8) + v18); /*0x6c9687*/
          sub_748530( /*0x6c96a3*/
            (unsigned int *)&v74,
            0,
            "NiControllerSequence::StoreTargets '%s'failed to resolve dependencies for the interpolator with thefollowing"
            " identifiers:\n"
            "\tm_pcAVObjectName\t%s\n"
            "\tm_pcPropertyType\t%s\n"
            "m_pcCtlrType\t\t%s\n"
            "m_pcCtlrID\t\t\t%s\n"
            "m_pcInterpolatorID\t%s\n",
            (const char *)v68[2],
            v19,
            v17,
            v15,
            v13,
            v11);
        }
      }
    }
    while ( (unsigned int)++v72 < v68[3] ); /*0x6c95f1*/
  }
  if ( v66 ) /*0x6c9b35*/
    (*(void (__thiscall **)(_DWORD, char *, int, char *))(**(_DWORD **)(v68[0x10] + 0x30) + 0x5C))( /*0x6c9b52*/
      *(_DWORD *)(v68[0x10] + 0x30),
      &v67,
      1,
      &v66);
  v60 = v69; /*0x6c9b59*/
  if ( v78 || (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v69 + 0x4C))(v69, "Bip02") ) /*0x6c9b6b*/
  {
    v61 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v60 + 0x4C))(v60, "Bip01"); /*0x6c9b7d*/
    if ( v61 ) /*0x6c9b81*/
    {
      v62 = *(_DWORD **)(v61 + 0x1C); /*0x6c9b83*/
      if ( v62 ) /*0x6c9b88*/
        sub_6C6910(v68, v62); /*0x6c9b8f*/
    }
  }
  return 1; /*0x6c9b94*/
}
