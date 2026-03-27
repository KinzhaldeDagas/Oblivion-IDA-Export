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
  char *v28; // esi
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

  v4 = *(_DWORD *)(*(this + 0x10) + 0x7C);
  v5 = *(this + 0x17);
  v68 = this;
  v69 = v4;
  if ( v5 )
    *(this + 0x18) = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x4C))(v4, v5);
  v6 = sub_6C8220(this, a3, v4);
  v7 = *(this + 3) == 0;
  v66 = v6;
  v78 = 0;
  v72 = 0;
  if ( !v7 )
  {
    HIDWORD(v64) = a2;
    do
    {
      v8 = *(_DWORD *)(0x10 * v72 + v68[5]);
      v71 = 0x10 * v72;
      if ( v8 )
      {
        v9 = (unsigned __int16 *)(0x10 * v72 + v68[6]);
        if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v8 + 0x8C))(v8, v69) )
        {
          if ( !*(_DWORD *)(0x10 * v72 + v68[5] + 8) )
          {
            v20 = v9[2];
            if ( v20 == 0xFFFF )
              v21 = 0;
            else
              v21 = *(_DWORD *)(*(_DWORD *)v9 + 8) + v20;
            v22 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v69 + 0x4C))(v69, v21);
            v70 = v22;
            if ( v22 )
            {
              v23 = v9[3];
              if ( v23 != 0xFFFF )
              {
                if ( *(_DWORD *)(*(_DWORD *)v9 + 8) + v23 )
                {
                  v24 = *(_DWORD **)(v22 + 0x9C);
                  if ( v24 )
                  {
                    while ( 1 )
                    {
                      v25 = v24[2];
                      v24 = (_DWORD *)*v24;
                      v26 = (const char **)(*(int (__thiscall **)(int))(*(_DWORD *)v25 + 4))(v25);
                      if ( !strcmp(*v26, (const char *)sub_6C63A0(v9)) )
                        break;
                      if ( !v24 )
                        goto LABEL_35;
                    }
                    v70 = v25;
LABEL_35:
                    v22 = v70;
                  }
                }
              }
              if ( v22 )
              {
                v30 = *(_DWORD *)(v22 + 0xC);
                if ( !v30 )
                {
LABEL_56:
                  v30 = *(_DWORD *)(v71 + v68[5] + 4);
                  if ( v30 )
                  {
                    (*(void (__thiscall **)(int, int))(*(_DWORD *)v30 + 0x58))(v30, v22);
                    v7 = v22 == *(_DWORD *)(v68[0x10] + 0x30);
                    v66 = 1;
                    if ( v7 )
                    {
                      sub_6FFE90((Ni2DBuffer **)v22, (Ni2DBuffer *)v30);
                      sub_6C61E0((_DWORD *)v30, *(_DWORD *)(v68[0x10] + 0x34));
                      sub_6C61E0((_DWORD *)v68[0x10], v30);
                    }
LABEL_59:
                    v34 = v9[6];
                    if ( v34 == 0xFFFF )
                      v35 = 0;
                    else
                      v35 = *(_DWORD *)(*(_DWORD *)v9 + 8) + v34;
                    v44 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v30 + 0x7C))(v30, v35);
                    v45 = v44;
                    if ( v44 == word_A7A160 )
                      goto LABEL_80;
                    v46 = (NiObject *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v30 + 0x80))(v30, v44);
                    v47 = NiRTTI_Cast((BSStringT *)dword_B3CC5C, v46);
                    v7 = v68[0x18] == v70;
                    v48 = (int)v47;
                    LOBYTE(v73) = 0;
                    if ( v7 )
                      LOBYTE(v73) = *(_BYTE *)(v68[0x10] + 0x6C) != 0;
                    if ( v47
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
                      *(_WORD *)(v30 + 8) |= 0x20u;
                      NiSmartPointer_Set__((Ni2DBuffer **)(v71 + v68[5] + 4), (Ni2DBuffer *)v30);
                      *(_DWORD *)(v71 + v68[5] + 8) = v48;
                    }
                    else
                    {
LABEL_80:
                      v49 = v9[6];
                      if ( v49 == 0xFFFF )
                        v50 = 0;
                      else
                        v50 = (const char *)(*(_DWORD *)(*(_DWORD *)v9 + 8) + v49);
                      v51 = v9[5];
                      if ( v51 == 0xFFFF )
                        v52 = 0;
                      else
                        v52 = (const char *)(*(_DWORD *)(*(_DWORD *)v9 + 8) + v51);
                      v53 = v9[4];
                      if ( v53 == 0xFFFF )
                        v54 = 0;
                      else
                        v54 = (const char *)(*(_DWORD *)(*(_DWORD *)v9 + 8) + v53);
                      v55 = v9[3];
                      if ( v55 == 0xFFFF )
                        v56 = 0;
                      else
                        v56 = (const char *)(*(_DWORD *)(*(_DWORD *)v9 + 8) + v55);
                      v57 = v9[2];
                      if ( v57 == 0xFFFF )
                        v58 = 0;
                      else
                        v58 = (const char *)(*(_DWORD *)(*(_DWORD *)v9 + 8) + v57);
                      sub_748530(
                        (int)&v77,
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
                    v36 = v9[5];
                    if ( v36 == 0xFFFF )
                      v37 = 0;
                    else
                      v37 = (const char *)(*(_DWORD *)(*(_DWORD *)v9 + 8) + v36);
                    v38 = v9[4];
                    if ( v38 == 0xFFFF )
                      v39 = 0;
                    else
                      v39 = (const char *)(*(_DWORD *)(*(_DWORD *)v9 + 8) + v38);
                    v40 = v9[3];
                    if ( v40 == 0xFFFF )
                      v41 = 0;
                    else
                      v41 = (const char *)(*(_DWORD *)(*(_DWORD *)v9 + 8) + v40);
                    v42 = v9[2];
                    if ( v42 == 0xFFFF )
                      v43 = 0;
                    else
                      v43 = (const char *)(*(_DWORD *)(*(_DWORD *)v9 + 8) + v42);
                    sub_748530(
                      (int)&v76,
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
                  continue;
                }
                while ( 2 )
                {
                  v31 = (const char **)(*(int (__thiscall **)(int))(*(_DWORD *)v30 + 4))(v30);
                  if ( !strcmp(*v31, (const char *)sub_6C63C0(v9)) )
                  {
                    v32 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v30 + 0x8C))(v30);
                    v33 = sub_6C63E0(v9);
                    if ( v32 )
                    {
                      if ( v33 )
                      {
                        v33 = strcmp(v32, (const char *)sub_6C63E0(v9));
                        goto LABEL_54;
                      }
                    }
                    else
                    {
LABEL_54:
                      if ( !v33 )
                        goto LABEL_59;
                    }
                  }
                  v30 = *(_DWORD *)(v30 + 0x34);
                  if ( !v30 )
                    goto LABEL_56;
                  continue;
                }
              }
            }
            v27 = v9[2];
            if ( v27 == 0xFFFF )
              v28 = 0;
            else
              v28 = (char *)(*(_DWORD *)(*(_DWORD *)v9 + 8) + v27);
            if ( !v78 )
            {
              if ( !_strcmp(v28, "Bip01")
                && (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v69 + 0x4C))(v69, "Bip02") )
              {
                v78 = 1;
              }
              else
              {
                LODWORD(v64) = 3;
                if ( _strnicmp(aBow, v28, v64) )
                {
                  LODWORD(v64) = 5;
                  if ( _strnicmp("Arrow", v28, v64) )
                  {
                    LODWORD(v64) = 0xA;
                    if ( _strnicmp("Bip01 Tail", v28, v64) )
                    {
                      LODWORD(v64) = 6;
                      if ( _strnicmp("Bridle", v28, v64) )
                      {
                        v65 = (const char *)sub_6C63A0(v9);
                        v29 = (const char *)sub_6C63C0(v9);
                        sub_748530(
                          (int)&v75,
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
            }
          }
        }
        else
        {
          v10 = v9[6];
          if ( v10 == 0xFFFF )
            v11 = 0;
          else
            v11 = (const char *)(*(_DWORD *)(*(_DWORD *)v9 + 8) + v10);
          v12 = v9[5];
          if ( v12 == 0xFFFF )
            v13 = 0;
          else
            v13 = (const char *)(*(_DWORD *)(*(_DWORD *)v9 + 8) + v12);
          v14 = v9[4];
          if ( v14 == 0xFFFF )
            v15 = 0;
          else
            v15 = (const char *)(*(_DWORD *)(*(_DWORD *)v9 + 8) + v14);
          v16 = v9[3];
          if ( v16 == 0xFFFF )
            v17 = 0;
          else
            v17 = (const char *)(*(_DWORD *)(*(_DWORD *)v9 + 8) + v16);
          v18 = v9[2];
          if ( v18 == 0xFFFF )
            v19 = 0;
          else
            v19 = (const char *)(*(_DWORD *)(*(_DWORD *)v9 + 8) + v18);
          sub_748530(
            (int)&v74,
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
    while ( (unsigned int)++v72 < v68[3] );
  }
  if ( v66 )
    (*(void (__thiscall **)(_DWORD, char *, int, char *))(**(_DWORD **)(v68[0x10] + 0x30) + 0x5C))(
      *(_DWORD *)(v68[0x10] + 0x30),
      &v67,
      1,
      &v66);
  v60 = v69;
  if ( v78 || (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v69 + 0x4C))(v69, "Bip02") )
  {
    v61 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v60 + 0x4C))(v60, "Bip01");
    if ( v61 )
    {
      v62 = *(_DWORD **)(v61 + 0x1C);
      if ( v62 )
        sub_6C6910(v68, v62);
    }
  }
  return 1;
}
