// Shared PP-lighting geometry/material setup. Oblivion parses NiProperty ID 2 name tokens here: exact 'Refract' sets passInfo 0x8000; exact 'RefractF' sets 0x10000, invalidates the cached pass key, enables refraction state, and clears conflicting alpha flag 1. Shared wrapper ownership proves Lighting30 and Hair inherit this parser.
bool __thiscall BSShaderPPLightingProperty_SetupGeometry(BSShaderProperty *this, NiAVObject *geometry)
{
  volatile LONG *v3; // ebx
  volatile LONG *v4; // edi
  volatile LONG *v5; // edi
  const char *m_pcName; // eax
  int v7; // ecx
  NiRTTI *v8; // eax
  BSShaderPPLightingProperty::TangentSpaceData *v9; // eax
  char v11; // bl
  int v12; // ecx
  int v13; // edi
  int v14; // edx
  double v15; // st7
  int v16; // edx
  float *v17; // eax
  int v18; // edi
  int v19; // edx
  double v20; // st7
  int v21; // edx
  float *v22; // eax
  NiNode *m_parent; // eax
  NiProperty *NiPropertyByID; // eax
  NiProperty *v25; // edi
  unsigned __int8 *v26; // ebp
  int v27; // eax
  const char *v28; // ecx
  char *v29; // ebp
  _BYTE *v30; // edx
  char v31; // al
  unsigned __int8 *v32; // eax
  unsigned __int8 *v33; // edi
  bool v34; // bl
  bool v35; // al
  NiProperty *v36; // eax
  NiObject *v37; // eax
  int v38; // edi
  volatile LONG *v39; // eax
  BSShaderProperty *v40; // eax
  BSShaderProperty *v41; // ebp
  Ni2DBuffer **v42; // ecx
  NiProperty *v43; // eax
  UInt32 passInfo; // eax
  int v45; // edi
  int v46; // edx
  int v47; // eax
  UInt32 v48; // eax
  int v49; // ecx
  int v50; // eax
  UInt32 v51; // eax
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
  UInt32 v75; // eax
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

  v3 = *NiGeometry_GetPropertyState((NiGeometry *)geometry, &v86); /*0x7da274*/
  v80 = v3; /*0x7da27c*/
  if ( v86 ) /*0x7da280*/
  {
    v4 = v86; /*0x7da282*/
    if ( !InterlockedDecrement(v86 + 1) ) /*0x7da288*/
      (**(void (__thiscall ***)(volatile LONG *, int))v4)(v4, 1); /*0x7da29e*/
  }
  if ( !v3 ) /*0x7da2a2*/
  {
    NiAVObject_InitializePropertyState(geometry); /*0x7da2a6*/
    v80 = *NiGeometry_GetPropertyState((NiGeometry *)geometry, &v85); /*0x7da2bf*/
    if ( v85 ) /*0x7da2c3*/
    {
      v5 = v85; /*0x7da2c5*/
      if ( !InterlockedDecrement(v85 + 1) ) /*0x7da2cb*/
        (**(void (__thiscall ***)(volatile LONG *, int))v5)(v5, 1); /*0x7da2e1*/
    }
  }
  if ( *((_DWORD *)this + 0x35) ) /*0x7da2e3*/
    goto LABEL_18; /*0x7da2e3*/
  if ( (this->member.passInfo & 0x1000) == 0 ) /*0x7da2f3*/
  {
    m_pcName = geometry[1].members.super.m_pcName; /*0x7da2f5*/
    if ( m_pcName /*0x7da30f*/
      && (v7 = *((_DWORD *)m_pcName + 0xD)) != 0
      && (v8 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 4))(v7)) != 0 )
    {
      while ( v8 != &stru_B3FD98 ) /*0x7da316*/
      {
        v8 = v8->parent; /*0x7da318*/
        if ( !v8 ) /*0x7da31d*/
          goto LABEL_15; /*0x7da31d*/
      }
    }
    else
    {
LABEL_15:
      v9 = sub_7B7710((NiObjectNET *)geometry); /*0x7da31f*/
      NiSmartPointer_Set__((Ni2DBuffer **)this + 0x35, (Ni2DBuffer *)v9); /*0x7da331*/
      if ( !*((_DWORD *)this + 0x35) ) /*0x7da336*/
      {
        sub_708560((int **)geometry, &v85, 6); /*0x7da344*/
        NiPointerSlot_Release((NiD3DVertexShader *)&v85); /*0x7da34d*/
        return 0; /*0x7da354*/
      }
    }
  }
  if ( *((_DWORD *)this + 0x35) )
  {
LABEL_18:
    v11 = 0; /*0x7da373*/
    if ( *((_WORD *)geometry[1].members.super.m_pcName + 4) )
    {
      v12 = 0; /*0x7da37d*/
      v83 = *((unsigned __int16 *)geometry[1].members.super.m_pcName + 4); /*0x7da37f*/
      do /*0x7da44f*/
      {
        v13 = *((_DWORD *)this + 0x35); /*0x7da383*/
        v14 = *(_DWORD *)(v13 + 0x10); /*0x7da389*/
        v15 = *(float *)(v14 + v12); /*0x7da38c*/
        v16 = v12 + v14; /*0x7da38f*/
        if ( g_zeroNiPoint3.x == v15 /*0x7da3c2*/
          && g_zeroNiPoint3.y == *(float *)(v16 + 4)
          && g_zeroNiPoint3.z == *(float *)(v16 + 8) )
        {
          v17 = (float *)(v12 + *(_DWORD *)(v13 + 0x10)); /*0x7da3cd*/
          *v17 = stru_B258D0.x; /*0x7da3cf*/
          v17[1] = stru_B258D0.y; /*0x7da3d7*/
          v17[2] = stru_B258D0.z; /*0x7da3e0*/
          v11 = 1; /*0x7da3e3*/
        }
        v18 = *((_DWORD *)this + 0x35); /*0x7da3e5*/
        v19 = *(_DWORD *)(v18 + 0xC); /*0x7da3eb*/
        v20 = *(float *)(v19 + v12); /*0x7da3ee*/
        v21 = v12 + v19; /*0x7da3f1*/
        if ( g_zeroNiPoint3.x == v20 /*0x7da424*/
          && g_zeroNiPoint3.y == *(float *)(v21 + 4)
          && g_zeroNiPoint3.z == *(float *)(v21 + 8) )
        {
          v22 = (float *)(v12 + *(_DWORD *)(v18 + 0xC)); /*0x7da42f*/
          *v22 = stru_B258DC.x; /*0x7da431*/
          v22[1] = stru_B258DC.y; /*0x7da439*/
          v22[2] = stru_B258DC.z; /*0x7da442*/
          v11 = 1; /*0x7da445*/
        }
        v12 += 0xC; /*0x7da447*/
        --v83; /*0x7da44a*/
      }
      while ( v83 ); /*0x7da44f*/
      if ( v11 )
      {
        if ( OB_RendererGlobalState_010201A0[0xD] )
        {
          m_parent = geometry->members.m_parent; /*0x7da462*/
          if ( m_parent )
            _sprintf(
              v87,
              "Invalid tangent space data in %s : %s",
              m_parent->members.super.super.m_pcName,
              geometry->members.super.m_pcName);
          else
            _sprintf(v87, "Invalid tangent space data in NULL : %s", geometry->members.super.m_pcName);
          if ( unk_B42E8C ) /*0x7da49b*/
            unk_B42E8C(v87, 0); /*0x7da4ab*/
        }
      }
    }
  }
  v84 = *((_DWORD *)v80 + 8); /*0x7da4b7*/
  NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)geometry, 2); /*0x7da4bf*/
  v25 = NiPropertyByID; /*0x7da4c4*/
  if ( !NiPropertyByID ) /*0x7da4c8*/
    goto LABEL_69; /*0x7da4c8*/
  v26 = (unsigned __int8 *)NiPropertyByID->members.m_pcName; /*0x7da4ce*/
  if ( !v26 ) /*0x7da4d5*/
    goto LABEL_69; /*0x7da4d5*/
  if ( !CRT_StricmpLocaleDispatch(v26, "right eye") || !CRT_StricmpLocaleDispatch(v26, "left eye") ) /*0x7da4f3*/
  {
    this->member.passInfo = this->member.passInfo & 0xFFFDFFFE | 0x20000; /*0x7da50b*/
    this->member.lastRenderPassState = 0; /*0x7da50e*/
    goto LABEL_69; /*0x7da511*/
  }
  if ( !CRT_StricmpLocaleDispatch(v26, "envmap2") ) /*0x7da51c*/
  {
    this->member.passInfo |= 0x200000u; /*0x7da528*/
    this->member.lastRenderPassState = 0; /*0x7da52f*/
    goto LABEL_69; /*0x7da532*/
  }
  LODWORD(v76) = 7; /*0x7da537*/
  if ( !_strnicmp((const char *)v26, "refract", v76) )// Enter Oblivion's native Refract/RefractF material-name token parser. /*0x7da53f*/
  {
    v27 = FormHeapAlloc(strlen(v25->members.m_pcName) + 1); /*0x7da564*/
    v28 = v25->members.m_pcName; /*0x7da569*/
    v29 = (char *)v27; /*0x7da56c*/
    v30 = (_BYTE *)v27; /*0x7da571*/
    do /*0x7da57f*/
    {
      v31 = *v28; /*0x7da573*/
      *v30++ = *v28++; /*0x7da575*/
    }
    while ( v31 ); /*0x7da57f*/
    v32 = (unsigned __int8 *)strtok(v29, word_A36430); /*0x7da587*/
    v33 = v32; /*0x7da58c*/
    if ( !v32 ) /*0x7da593*/
      goto LABEL_55; /*0x7da593*/
    v34 = CRT_StricmpLocaleDispatch(v32, "Refract") == 0; /*0x7da5a8*/
    v35 = CRT_StricmpLocaleDispatch(v33, "RefractF") == 0; /*0x7da5b5*/
    if ( v34 ) /*0x7da5ba*/
    {
      if ( v35 ) /*0x7da5cb*/
        this->member.passInfo |= 0x10000u;      // Set BSShaderProperty passInfo bit 0x10000 = RefractF. /*0x7da5cd*/
      else
        this->member.passInfo |= 0x8000u;       // Set BSShaderProperty passInfo bit 0x8000 = Refract. /*0x7da5d6*/
    }
    else
    {
      if ( !v35 ) /*0x7da5be*/
      {
LABEL_55:
        FormHeapFree((unsigned int)v29); /*0x7da600*/
        goto LABEL_69; /*0x7da609*/
      }
      this->member.passInfo |= 0x10000u;        // Exact 'RefractF' token selects the periodic/fire refraction flag path. /*0x7da5c0*/
    }
    this->member.lastRenderPassState = 0; /*0x7da5e3*/
    *((_BYTE *)this + 0xE4) = 1; /*0x7da5ea*/
    v36 = NiNode_GetNiPropertyByID((NiNode *)geometry, 0); /*0x7da5f1*/
    if ( v36 ) /*0x7da5f8*/
      LOWORD(v36[1].vtbl) &= ~1u; /*0x7da5fa*/
    goto LABEL_55; /*0x7da5fa*/
  }
  LODWORD(v77) = 8; /*0x7da60e*/
  if ( !_strnicmp((const char *)v26, "dynalpha", v77) ) /*0x7da616*/
  {
    this->member.passInfo |= 0x80000u; /*0x7da62a*/
    this->member.lastRenderPassState = 0; /*0x7da636*/
    v37 = (NiObject *)NiNode_GetNiPropertyByID((NiNode *)geometry, 0); /*0x7da639*/
    v38 = (int)v37; /*0x7da63e*/
    if ( v37 ) /*0x7da642*/
    {
      v41 = (BSShaderProperty *)NiObject_CloneWithPointerMap(v37); /*0x7da6ac*/
      sub_4A1220((int ***)geometry, v38); /*0x7da6ae*/
      sub_405680((NiNode *)geometry, v41); /*0x7da6b8*/
    }
    else
    {
      v39 = (volatile LONG *)FormHeapAlloc(0x1Cu); /*0x7da646*/
      v85 = v39; /*0x7da64e*/
      v89 = 0; /*0x7da654*/
      if ( v39 ) /*0x7da65b*/
      {
        v40 = (BSShaderProperty *)NiAlphaProperty_ctor((NiAlphaProperty *)v39); /*0x7da65f*/
        v40->member.super.flags &= ~1u; /*0x7da664*/
        v89 = 0xFFFFFFFF; /*0x7da66d*/
        sub_405680((NiNode *)geometry, v40); /*0x7da678*/
      }
      else
      {
        *(_WORD *)0x18 &= ~1u; /*0x7da684*/
        v89 = 0xFFFFFFFF; /*0x7da68d*/
        sub_405680((NiNode *)geometry, 0); /*0x7da698*/
      }
    }
    goto LABEL_69; /*0x7da67d*/
  }
  LODWORD(v78) = 0xA; /*0x7da6c2*/
  if ( _strnicmp((const char *)v26, "HideSecret", v78) )
  {
    LODWORD(v79) = 5; /*0x7da701*/
    if ( !_strnicmp((const char *)v26, "hair", v79) && !geometry[1].members.super.m_controller ) /*0x7da719*/
    {
      this->member.passInfo |= 0x40001u; /*0x7da721*/
      this->member.lastRenderPassState = 0; /*0x7da729*/
      v43 = NiNode_GetNiPropertyByID((NiNode *)geometry, 0); /*0x7da72c*/
      if ( v43 ) /*0x7da733*/
      {
        if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] < 5 ) /*0x7da73c*/
        {
          LOWORD(v43[1].vtbl) &= ~1u; /*0x7da73e*/
          BYTE2(v43[1].vtbl) = 0x80; /*0x7da744*/
        }
      }
    }
LABEL_69:
    if ( v84 )
    {
      if ( (*(_BYTE *)(v84 + 0x18) & 0xE) == 6 || (passInfo = this->member.passInfo, (passInfo & 0x80) != 0) ) /*0x7da76a*/
        this->member.passInfo |= 0x80u; /*0x7da76c*/
      else
        this->member.passInfo = passInfo & 0xFFFFFF7F; /*0x7da77a*/
      v45 = 0; /*0x7da77d*/
      this->member.lastRenderPassState = 0; /*0x7da77f*/
      v46 = *(_DWORD *)(v84 + 0x20); /*0x7da782*/
      if ( *(_DWORD *)v46 ) /*0x7da785*/
        v47 = (*(unsigned __int16 *)(*(_DWORD *)v46 + 4) >> 0xC) & 3; /*0x7da792*/
      else
        v47 = 3; /*0x7da797*/
      (*((void (__thiscall **)(BSShaderProperty *, int))this->vtbl + 0x1F))(this, v47); /*0x7da7a4*/
      if ( (*(_BYTE *)(v84 + 0x18) & 0xE) == 8 ) /*0x7da7af*/
        this->member.passInfo |= 0x800u; /*0x7da7b1*/
      else
        this->member.passInfo &= ~0x800u; /*0x7da7ba*/
      this->member.lastRenderPassState = 0; /*0x7da7c1*/
      if ( (*(_BYTE *)(v84 + 0x18) & 1) != 0 )
      {
        this->member.passInfo |= 8u; /*0x7da7ce*/
        v48 = this->member.passInfo; /*0x7da7d6*/
        this->member.lastRenderPassState = 0; /*0x7da7db*/
        if ( (unsigned __int8)(*(unsigned __int16 *)(v84 + 0x18) >> 4) )
        {
          v49 = 0; /*0x7da7ed*/
          v50 = 0x18; /*0x7da7ef*/
          while ( v49 < (unsigned __int8)(*(unsigned __int16 *)(v84 + 0x18) >> 4) )
          {
            v45 = *(_DWORD *)(v50 + *(_DWORD *)(v84 + 0x20)); /*0x7da7fb*/
            ++v49; /*0x7da7fe*/
            v50 += 4; /*0x7da801*/
            if ( v45 )
            {
              v52 = *((_DWORD *)this + 0x2F); /*0x7da836*/
              v53 = *(_DWORD *)(v52 + 4); /*0x7da83f*/
              v54 = (_DWORD *)(v52 + 4); /*0x7da842*/
              v81 = *(_DWORD *)(v45 + 8); /*0x7da847*/
              if ( v53 != v81 ) /*0x7da84b*/
              {
                if ( v53 ) /*0x7da84f*/
                {
                  if ( !InterlockedDecrement((volatile LONG *)(v53 + 4)) ) /*0x7da855*/
                    (**(void (__thiscall ***)(int, int))v53)(v53, 1); /*0x7da86b*/
                }
                *v54 = v81; /*0x7da873*/
                if ( v81 ) /*0x7da876*/
                  InterlockedIncrement((volatile LONG *)(v81 + 4)); /*0x7da87c*/
              }
              v55 = *((_DWORD *)this + 0x2F); /*0x7da882*/
              if ( *(_DWORD *)(v55 + 4) )
              {
                v56 = NiRTTI_Cast((BSStringT *)&stru_B3F95C, *(NiObject **)(v55 + 4)); /*0x7da8a4*/
                v57 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 0x2F) + 4) + 0x24);// Checks referenced texture runtime GetLevelCount() and clears the slot if <=1. This validation belongs to the 0x7DA220 branch/PPLighting method, not the leaf property override. /*0x7da8a9*/
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
                    v58 = *((_DWORD *)this + 0x2F); /*0x7da8ed*/
                    v59 = *(_DWORD *)(v58 + 4); /*0x7da8f3*/
                    v60 = (_DWORD *)(v58 + 4); /*0x7da8f6*/
                    if ( v59 ) /*0x7da8fb*/
                    {
                      if ( !InterlockedDecrement((volatile LONG *)(v59 + 4)) ) /*0x7da901*/
                        (**(void (__thiscall ***)(int, int))v59)(v59, 1); /*0x7da918*/
                      *v60 = 0;                 // Clears the offending texture reference after the <=1-level validation failure. /*0x7da91a*/
                    }
                  }
                }
              }
              break; /*0x7da91a*/
            }
          }
        }
        else
        {
          if ( (v48 & 8) != 0 ) /*0x7da80c*/
            v51 = v48 | 8; /*0x7da80e*/
          else
            v51 = v48 & 0xFFFFFFF7; /*0x7da81e*/
          this->member.passInfo = v51; /*0x7da811*/
          this->member.lastRenderPassState = 0; /*0x7da814*/
          v45 = 0; /*0x7da817*/
        }
      }
      v61 = **(_DWORD **)(v84 + 0x20); /*0x7da920*/
      if ( v61 ) /*0x7da92b*/
        v62 = *(_DWORD *)(v61 + 8); /*0x7da92d*/
      else
        v62 = 0; /*0x7da932*/
      v82 = 0; /*0x7da936*/
      if ( v45 ) /*0x7da93e*/
        v82 = NiRTTI_Cast((BSStringT *)&stru_B3F95C, *(NiObject **)(v45 + 8)); /*0x7da951*/
      if ( v62 )
      {
        v63 = *((int **)this + 0x2F); /*0x7da95d*/
        v64 = *v63; /*0x7da963*/
        if ( *v63 != v62 ) /*0x7da968*/
        {
          if ( v64 ) /*0x7da96c*/
          {
            if ( !InterlockedDecrement((volatile LONG *)(v64 + 4)) ) /*0x7da972*/
              (**(void (__thiscall ***)(int, int))v64)(v64, 1); /*0x7da988*/
          }
          *v63 = v62; /*0x7da98a*/
          InterlockedIncrement((volatile LONG *)(v62 + 4)); /*0x7da991*/
        }
        v65 = NiRTTI_Cast((BSStringT *)&stru_B3F95C, **((NiObject ***)this + 0x2F)); /*0x7da9b0*/
        v66 = *(_DWORD *)(**((_DWORD **)this + 0x2F) + 0x24); /*0x7da9b4*/
        if ( v65 ) /*0x7da9bc*/
        {
          vftable = v65[7].__vftable; /*0x7da9c2*/
          v68 = 0; /*0x7da9c5*/
          if ( v82 ) /*0x7da9c9*/
            v68 = v82[7].__vftable; /*0x7da9cb*/
          if ( vftable ) /*0x7da9d0*/
            (*((void (__thiscall **)(BSShaderProperty *, NiObjectVtbl *, int, NiObjectVtbl *))this->vtbl + 0x1B))( /*0x7da9dd*/
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
            v69 = *((int **)this + 0x2F); /*0x7daa25*/
            v70 = *v69; /*0x7daa2b*/
            if ( *v69 ) /*0x7daa2b*/
            {
              if ( !InterlockedDecrement((volatile LONG *)(v70 + 4)) ) /*0x7daa35*/
              {
                if ( v70 ) /*0x7daa41*/
                  (**(void (__thiscall ***)(int, int))v70)(v70, 1); /*0x7daa4b*/
              }
              *v69 = 0; /*0x7daa4d*/
            }
          }
        }
      }
    }
    goto LABEL_133; /*0x7daa4d*/
  }
  this->member.passInfo |= 0x100000u; /*0x7da6d6*/
  v42 = *((Ni2DBuffer ***)this + 0x2F); /*0x7da6dd*/
  this->member.lastRenderPassState = 0; /*0x7da6e3*/
  NiSmartPointer_Set__(v42, (Ni2DBuffer *)unk_B4311C); /*0x7da6ec*/
  (*((void (__thiscall **)(BSShaderProperty *, int))this->vtbl + 0x1F))(this, 3); /*0x7da6fa*/
LABEL_133:
  v71 = NiNode_GetNiPropertyByID((NiNode *)geometry, 0); /*0x7daa53*/
  if ( v71 ) /*0x7daa63*/
  {
    if ( ((int)v71[1].vtbl & 1) != 0 ) /*0x7daa69*/
    {
      this->member.passInfo |= 0x40u; /*0x7daa6b*/
      this->member.lastRenderPassState = 0; /*0x7daa6f*/
    }
  }
  v72 = geometry[1].members.super.m_pcName; /*0x7daa72*/
  if ( !v72 || !*((_DWORD *)v72 + 0xD) ) /*0x7daa7c*/
  {
    v73 = (*((int (__thiscall **)(BSShaderProperty *, NiAVObject *))this->vtbl + 0x1A))(this, geometry); /*0x7daa89*/
    sub_6C61E0((_DWORD *)geometry[1].members.super.m_pcName, v73); /*0x7daa92*/
  }
  v74 = NiNode_GetNiPropertyByID((NiNode *)geometry, 6); /*0x7daa9b*/
  if ( v74 ) /*0x7daaa2*/
    sub_4A1220((int ***)geometry, (int)v74); /*0x7daaa7*/
  if ( geometry[1].members.super.m_controller || (v75 = this->member.passInfo, (v75 & 2) != 0) )// Verified (Oblivion): SetupGeometry sets BSShaderProperty::passInfo bit 0x02 when the NiAVObject has a non-null m_controller (or the bit was already set), otherwise clears it. ShadowLight pass construction forwards this bit to choose selector 0x18C versus 0x18D. Probable: BSSM_TEXEFFECT_S is the controller/animated-geometry variant; the suffix's exact expansion remains Unknown. /*0x7daab9*/
    this->member.passInfo |= 2u; /*0x7daabb*/
  else
    this->member.passInfo = v75 & 0xFFFFFFFD; /*0x7daac4*/
  this->member.lastRenderPassState = 0; /*0x7daac7*/
  return 1; /*0x7daacc*/
}
