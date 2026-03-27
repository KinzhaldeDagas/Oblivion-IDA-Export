char __thiscall sub_7DA220(_DWORD *this, NiAVObject *a2)
{
  volatile LONG *v3; // ebx
  volatile LONG *v4; // edi
  volatile LONG *v5; // edi
  const char *m_pcName; // eax
  int v7; // ecx
  int v8; // eax
  BSShaderPPLightingProperty::TangentSpaceData *v9; // eax
  char v11; // bl
  int v12; // ecx
  int v13; // edi
  int v14; // edx
  double v15; // st7
  int v16; // edx
  _DWORD *v17; // eax
  int v18; // edi
  int v19; // edx
  double v20; // st7
  int v21; // edx
  _DWORD *v22; // eax
  NiNode *m_parent; // eax
  NiProperty *NiPropertyByID; // eax
  NiProperty *v25; // edi
  char *v26; // ebp
  int v27; // eax
  const char *v28; // ecx
  char *v29; // ebp
  _BYTE *v30; // edx
  char v31; // al
  char *v32; // eax
  char *v33; // edi
  bool v34; // bl
  bool v35; // al
  NiProperty *v36; // eax
  NiProperty *v37; // eax
  int v38; // edi
  volatile LONG *v39; // eax
  BSShaderProperty *v40; // eax
  BSShaderProperty *v41; // ebp
  Ni2DBuffer **v42; // ecx
  NiProperty *v43; // eax
  int v44; // eax
  int v45; // edi
  int v46; // edx
  int v47; // eax
  int v48; // eax
  int v49; // ecx
  int v50; // eax
  unsigned int v51; // eax
  int v52; // ebp
  int v53; // ebx
  _DWORD *v54; // ebp
  int v55; // ecx
  NiObject *v56; // ebx
  int v57; // ecx
  int v58; // ebx
  int v59; // ebp
  _DWORD *v60; // ebx
  int v61; // eax
  int v62; // ebx
  int *v63; // ebp
  int v64; // edi
  NiObject *v65; // edi
  int v66; // ebx
  NiObjectVtbl *vftable; // ecx
  NiObjectVtbl *v68; // eax
  int *v69; // ebx
  int v70; // edi
  NiProperty *v71; // eax
  const char *v72; // eax
  int v73; // eax
  NiProperty *v74; // eax
  int v75; // eax
  size_t v76; // [esp+8h] [ebp-424h]
  size_t v77; // [esp+8h] [ebp-424h]
  size_t v78; // [esp+8h] [ebp-424h]
  size_t v79; // [esp+8h] [ebp-424h]
  volatile LONG *v80; // [esp+20h] [ebp-40Ch]
  int v81; // [esp+20h] [ebp-40Ch]
  NiObject *v82; // [esp+20h] [ebp-40Ch]
  int v83; // [esp+24h] [ebp-408h]
  int v84; // [esp+24h] [ebp-408h]
  volatile LONG *v85; // [esp+2Ch] [ebp-400h] BYREF
  volatile LONG *v86; // [esp+30h] [ebp-3FCh] BYREF
  char v87[500]; // [esp+34h] [ebp-3F8h] BYREF
  char v88[500]; // [esp+228h] [ebp-204h] BYREF
  unsigned int v89; // [esp+428h] [ebp-4h]

  v3 = *sub_405760((NiGeometry *)a2, &v86);
  v80 = v3;
  if ( v86 )
  {
    v4 = v86;
    if ( !InterlockedDecrement(v86 + 1) )
      (**(void (__thiscall ***)(volatile LONG *, int))v4)(v4, 1);
  }
  if ( !v3 )
  {
    NiAVObject_InitializePropertyState(a2);
    v80 = *sub_405760((NiGeometry *)a2, &v85);
    if ( v85 )
    {
      v5 = v85;
      if ( !InterlockedDecrement(v85 + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))v5)(v5, 1);
    }
  }
  if ( *(this + 0x35) )
    goto LABEL_18;
  if ( (*(this + 7) & 0x1000) == 0 )
  {
    m_pcName = a2[1].members.super.m_pcName;
    if ( m_pcName
      && (v7 = *((_DWORD *)m_pcName + 0xD)) != 0
      && (v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 4))(v7)) != 0 )
    {
      while ( (char *)v8 != dword_B3FD98 )
      {
        v8 = *(_DWORD *)(v8 + 4);
        if ( !v8 )
          goto LABEL_15;
      }
    }
    else
    {
LABEL_15:
      v9 = sub_7B7710((NiObjectNET *)a2);
      NiSmartPointer_Set__((Ni2DBuffer **)this + 0x35, (Ni2DBuffer *)v9);
      if ( !*(this + 0x35) )
      {
        sub_708560((int **)a2, &v85, 6);
        sub_7016A0((NiD3DVertexShader *)&v85);
        return 0;
      }
    }
  }
  if ( *(this + 0x35) )
  {
LABEL_18:
    v11 = 0;
    if ( *((_WORD *)a2[1].members.super.m_pcName + 4) )
    {
      v12 = 0;
      v83 = *((unsigned __int16 *)a2[1].members.super.m_pcName + 4);
      do
      {
        v13 = *(this + 0x35);
        v14 = *(_DWORD *)(v13 + 0x10);
        v15 = *(float *)(v14 + v12);
        v16 = v12 + v14;
        if ( Vector3_InitValue_ == v15
          && *(&Vector3_InitValue_ + 1) == *(float *)(v16 + 4)
          && dword_B3F9B0 == *(float *)(v16 + 8) )
        {
          v17 = (_DWORD *)(v12 + *(_DWORD *)(v13 + 0x10));
          *v17 = dword_B258D0;
          v17[1] = dword_B258D4;
          v17[2] = dword_B258D8;
          v11 = 1;
        }
        v18 = *(this + 0x35);
        v19 = *(_DWORD *)(v18 + 0xC);
        v20 = *(float *)(v19 + v12);
        v21 = v12 + v19;
        if ( Vector3_InitValue_ == v20
          && *(&Vector3_InitValue_ + 1) == *(float *)(v21 + 4)
          && dword_B3F9B0 == *(float *)(v21 + 8) )
        {
          v22 = (_DWORD *)(v12 + *(_DWORD *)(v18 + 0xC));
          *v22 = dword_B258DC;
          v22[1] = qword_B258E0;
          v22[2] = HIDWORD(qword_B258E0);
          v11 = 1;
        }
        v12 += 0xC;
        --v83;
      }
      while ( v83 );
      if ( v11 )
      {
        if ( byte_B42EA6 )
        {
          m_parent = a2->members.m_parent;
          if ( m_parent )
            _sprintf(
              v87,
              "Invalid tangent space data in %s : %s",
              m_parent->members.super.super.m_pcName,
              a2->members.super.m_pcName);
          else
            _sprintf(v87, "Invalid tangent space data in NULL : %s", a2->members.super.m_pcName);
          if ( dword_B42E8C )
            dword_B42E8C(v87, 0);
        }
      }
    }
  }
  v84 = *((_DWORD *)v80 + 8);
  NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)a2, 2);
  v25 = NiPropertyByID;
  if ( !NiPropertyByID )
    goto LABEL_69;
  v26 = (char *)NiPropertyByID->members.m_pcName;
  if ( !v26 )
    goto LABEL_69;
  if ( !_strcmp(v26, "right eye") || !_strcmp(v26, "left eye") )
  {
    *(this + 7) = *(this + 7) & 0xFFFDFFFE | 0x20000;
    *(this + 9) = 0;
    goto LABEL_69;
  }
  if ( !_strcmp(v26, "envmap2") )
  {
    *(this + 7) |= 0x200000u;
    *(this + 9) = 0;
    goto LABEL_69;
  }
  LODWORD(v76) = 7;
  if ( !_strnicmp(v26, "refract", v76) )
  {
    v27 = FormHeapAlloc(strlen(v25->members.m_pcName) + 1);
    v28 = v25->members.m_pcName;
    v29 = (char *)v27;
    v30 = (_BYTE *)v27;
    do
    {
      v31 = *v28;
      *v30++ = *v28++;
    }
    while ( v31 );
    v32 = strtok(v29, word_A36430);
    v33 = v32;
    if ( !v32 )
      goto LABEL_55;
    v34 = _strcmp(v32, "Refract") == 0;
    v35 = _strcmp(v33, "RefractF") == 0;
    if ( v34 )
    {
      if ( v35 )
        *(this + 7) |= 0x10000u;
      else
        *(this + 7) |= 0x8000u;
    }
    else
    {
      if ( !v35 )
      {
LABEL_55:
        FormHeapFree((unsigned int)v29);
        goto LABEL_69;
      }
      *(this + 7) |= 0x10000u;
    }
    *(this + 9) = 0;
    *((_BYTE *)this + 0xE4) = 1;
    v36 = NiNode_GetNiPropertyByID((NiNode *)a2, 0);
    if ( v36 )
      LOWORD(v36[1].vtbl) &= ~1u;
    goto LABEL_55;
  }
  LODWORD(v77) = 8;
  if ( !_strnicmp(v26, "dynalpha", v77) )
  {
    *(this + 7) |= 0x80000u;
    *(this + 9) = 0;
    v37 = NiNode_GetNiPropertyByID((NiNode *)a2, 0);
    v38 = (int)v37;
    if ( v37 )
    {
      v41 = (BSShaderProperty *)sub_700900(v37);
      sub_4A1220((int **)a2, v38);
      sub_405680((NiNode *)a2, v41);
    }
    else
    {
      v39 = (volatile LONG *)FormHeapAlloc(0x1Cu);
      v85 = v39;
      v89 = 0;
      if ( v39 )
      {
        v40 = (BSShaderProperty *)sub_47F920((NiObjectNET *)v39);
        v40->member.super.flags &= ~1u;
        v89 = 0xFFFFFFFF;
        sub_405680((NiNode *)a2, v40);
      }
      else
      {
        *(_WORD *)0x18 &= ~1u;
        v89 = 0xFFFFFFFF;
        sub_405680((NiNode *)a2, 0);
      }
    }
    goto LABEL_69;
  }
  LODWORD(v78) = 0xA;
  if ( _strnicmp(v26, "HideSecret", v78) )
  {
    LODWORD(v79) = 5;
    if ( !_strnicmp(v26, "hair", v79) && !a2[1].members.super.m_controller )
    {
      *(this + 7) |= 0x40001u;
      *(this + 9) = 0;
      v43 = NiNode_GetNiPropertyByID((NiNode *)a2, 0);
      if ( v43 )
      {
        if ( ShaderPackage < 5 )
        {
          LOWORD(v43[1].vtbl) &= ~1u;
          BYTE2(v43[1].vtbl) = 0x80;
        }
      }
    }
LABEL_69:
    if ( v84 )
    {
      if ( (*(_BYTE *)(v84 + 0x18) & 0xE) == 6 || (v44 = *(this + 7), (v44 & 0x80) != 0) )
        *(this + 7) |= 0x80u;
      else
        *(this + 7) = v44 & 0xFFFFFF7F;
      v45 = 0;
      *(this + 9) = 0;
      v46 = *(_DWORD *)(v84 + 0x20);
      if ( *(_DWORD *)v46 )
        v47 = (*(unsigned __int16 *)(*(_DWORD *)v46 + 4) >> 0xC) & 3;
      else
        v47 = 3;
      (*(void (__thiscall **)(_DWORD *, int))(*this + 0x7C))(this, v47);
      if ( (*(_BYTE *)(v84 + 0x18) & 0xE) == 8 )
        *(this + 7) |= 0x800u;
      else
        *(this + 7) &= ~0x800u;
      *(this + 9) = 0;
      if ( (*(_BYTE *)(v84 + 0x18) & 1) != 0 )
      {
        *(this + 7) |= 8u;
        v48 = *(this + 7);
        *(this + 9) = 0;
        if ( (unsigned __int8)(*(unsigned __int16 *)(v84 + 0x18) >> 4) )
        {
          v49 = 0;
          v50 = 0x18;
          while ( v49 < (unsigned __int8)(*(unsigned __int16 *)(v84 + 0x18) >> 4) )
          {
            v45 = *(_DWORD *)(v50 + *(_DWORD *)(v84 + 0x20));
            ++v49;
            v50 += 4;
            if ( v45 )
            {
              v52 = *(this + 0x2F);
              v53 = *(_DWORD *)(v52 + 4);
              v54 = (_DWORD *)(v52 + 4);
              v81 = *(_DWORD *)(v45 + 8);
              if ( v53 != v81 )
              {
                if ( v53 )
                {
                  if ( !InterlockedDecrement((volatile LONG *)(v53 + 4)) )
                    (**(void (__thiscall ***)(int, int))v53)(v53, 1);
                }
                *v54 = v81;
                if ( v81 )
                  InterlockedIncrement((volatile LONG *)(v81 + 4));
              }
              v55 = *(this + 0x2F);
              if ( *(_DWORD *)(v55 + 4) )
              {
                v56 = NiRTTI_Cast((BSStringT *)dword_B3F95C, *(NiObject **)(v55 + 4));
                v57 = *(_DWORD *)(*(_DWORD *)(*(this + 0x2F) + 4) + 0x24);
                if ( v57 )
                {
                  if ( (unsigned int)(*(int (__thiscall **)(int))(*(_DWORD *)v57 + 0x10))(v57) <= 1 )
                  {
                    if ( v56 )
                      _sprintf(
                        v87,
                        "TEXTURE ERROR : texture does not contain mipmaps & will not be used : %s",
                        (const char *)v56[7].__vftable);
                    else
                      _sprintf(
                        v87,
                        "TEXTURE ERROR : texture does not contain mipmaps & will not be used : NOTASOURCETEXTURE");
                    v58 = *(this + 0x2F);
                    v59 = *(_DWORD *)(v58 + 4);
                    v60 = (_DWORD *)(v58 + 4);
                    if ( v59 )
                    {
                      if ( !InterlockedDecrement((volatile LONG *)(v59 + 4)) )
                        (**(void (__thiscall ***)(int, int))v59)(v59, 1);
                      *v60 = 0;
                    }
                  }
                }
              }
              break;
            }
          }
        }
        else
        {
          if ( (v48 & 8) != 0 )
            v51 = v48 | 8;
          else
            v51 = v48 & 0xFFFFFFF7;
          *(this + 7) = v51;
          *(this + 9) = 0;
          v45 = 0;
        }
      }
      v61 = **(_DWORD **)(v84 + 0x20);
      if ( v61 )
        v62 = *(_DWORD *)(v61 + 8);
      else
        v62 = 0;
      v82 = 0;
      if ( v45 )
        v82 = NiRTTI_Cast((BSStringT *)dword_B3F95C, *(NiObject **)(v45 + 8));
      if ( v62 )
      {
        v63 = (int *)*(this + 0x2F);
        v64 = *v63;
        if ( *v63 != v62 )
        {
          if ( v64 )
          {
            if ( !InterlockedDecrement((volatile LONG *)(v64 + 4)) )
              (**(void (__thiscall ***)(int, int))v64)(v64, 1);
          }
          *v63 = v62;
          InterlockedIncrement((volatile LONG *)(v62 + 4));
        }
        v65 = NiRTTI_Cast((BSStringT *)dword_B3F95C, *(NiObject **)*(this + 0x2F));
        v66 = *(_DWORD *)(*(_DWORD *)*(this + 0x2F) + 0x24);
        if ( v65 )
        {
          vftable = v65[7].__vftable;
          v68 = 0;
          if ( v82 )
            v68 = v82[7].__vftable;
          if ( vftable )
            (*(void (__thiscall **)(_DWORD *, NiObjectVtbl *, int, NiObjectVtbl *))(*this + 0x6C))(
              this,
              vftable,
              1,
              v68);
        }
        if ( v66 )
        {
          if ( (unsigned int)(*(int (__thiscall **)(int))(*(_DWORD *)v66 + 0x10))(v66) <= 1 )
          {
            if ( v65 )
              _sprintf(
                v88,
                "TEXTURE ERROR : texture does not contain mipmaps & will not be used : %s",
                (const char *)v65[7].__vftable);
            else
              _sprintf(v88, "TEXTURE ERROR : texture does not contain mipmaps & will not be used : NOTASOURCETEXTURE");
            v69 = (int *)*(this + 0x2F);
            v70 = *v69;
            if ( *v69 )
            {
              if ( !InterlockedDecrement((volatile LONG *)(v70 + 4)) )
              {
                if ( v70 )
                  (**(void (__thiscall ***)(int, int))v70)(v70, 1);
              }
              *v69 = 0;
            }
          }
        }
      }
    }
    goto LABEL_133;
  }
  *(this + 7) |= 0x100000u;
  v42 = (Ni2DBuffer **)*(this + 0x2F);
  *(this + 9) = 0;
  NiSmartPointer_Set__(v42, (Ni2DBuffer *)dword_B4311C);
  (*(void (__thiscall **)(_DWORD *, int))(*this + 0x7C))(this, 3);
LABEL_133:
  v71 = NiNode_GetNiPropertyByID((NiNode *)a2, 0);
  if ( v71 )
  {
    if ( ((int)v71[1].vtbl & 1) != 0 )
    {
      *(this + 7) |= 0x40u;
      *(this + 9) = 0;
    }
  }
  v72 = a2[1].members.super.m_pcName;
  if ( !v72 || !*((_DWORD *)v72 + 0xD) )
  {
    v73 = (*(int (__thiscall **)(_DWORD *, NiAVObject *))(*this + 0x68))(this, a2);
    sub_6C61E0((_DWORD *)a2[1].members.super.m_pcName, v73);
  }
  v74 = NiNode_GetNiPropertyByID((NiNode *)a2, 6);
  if ( v74 )
    sub_4A1220((int **)a2, (int)v74);
  if ( a2[1].members.super.m_controller || (v75 = *(this + 7), (v75 & 2) != 0) )
    *(this + 7) |= 2u;
  else
    *(this + 7) = v75 & 0xFFFFFFFD;
  *(this + 9) = 0;
  return 1;
}
