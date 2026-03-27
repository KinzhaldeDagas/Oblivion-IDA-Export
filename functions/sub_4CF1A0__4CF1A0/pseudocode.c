char __thiscall sub_4CF1A0(
        void *this,
        int a2,
        int a3,
        int a4,
        float a5,
        int a6,
        int a7,
        const char *a8,
        NiNode *a9,
        int *a10,
        UInt32 a11,
        float a12,
        int a13)
{
  bool v13; // c0
  int v14; // ecx
  char v15; // dl
  _WORD *v16; // edi
  char v17; // al
  unsigned int v18; // eax
  char *v19; // edi
  int *v21; // eax
  float v22; // esi
  const char *m_pcName; // esi
  int *v24; // edi
  NiProperty *NiPropertyByID; // esi
  int v26; // eax
  Ni2DBuffer *v27; // esi
  _DWORD *v28; // eax
  int v29; // ebx
  PlayerCharacter *v30; // eax
  UInt32 refID; // eax
  int v32; // eax
  float *v33; // esi
  float *v34; // eax
  bool v35; // zf
  NiNode *v36; // ebp
  int v37; // esi
  unsigned int i; // ebp
  const char *v39; // edi
  unsigned int v40; // edx
  NiProperty *v41; // esi
  int v42; // edi
  BOOL v43; // eax
  Ni2DBuffer *v44; // esi
  _DWORD *v45; // eax
  float *v46; // esi
  float *v47; // esi
  float *v48; // esi
  float *v49; // eax
  bool v50; // sf
  UInt32 end; // eax
  _DWORD *v53; // eax
  float v54; // [esp+4h] [ebp-184h]
  float v55; // [esp+4h] [ebp-184h]
  float v56; // [esp+4h] [ebp-184h]
  float v57; // [esp+4h] [ebp-184h]
  float v58; // [esp+1Ch] [ebp-16Ch]
  float v59; // [esp+20h] [ebp-168h]
  const char *v60; // [esp+24h] [ebp-164h]
  float v61; // [esp+28h] [ebp-160h]
  int v62; // [esp+28h] [ebp-160h]
  size_t v63; // [esp+2Ch] [ebp-15Ch]
  size_t v64; // [esp+2Ch] [ebp-15Ch]
  size_t v65; // [esp+2Ch] [ebp-15Ch]
  float v66; // [esp+44h] [ebp-144h] BYREF
  float v67; // [esp+48h] [ebp-140h]
  UInt32 v68; // [esp+4Ch] [ebp-13Ch] BYREF
  int v69; // [esp+50h] [ebp-138h] BYREF
  UInt32 v70; // [esp+54h] [ebp-134h] BYREF
  int v71; // [esp+58h] [ebp-130h]
  float v72; // [esp+5Ch] [ebp-12Ch]
  int *v73; // [esp+60h] [ebp-128h]
  float *v74; // [esp+64h] [ebp-124h]
  float v75; // [esp+68h] [ebp-120h]
  float v76; // [esp+6Ch] [ebp-11Ch]
  float v77; // [esp+70h] [ebp-118h] BYREF
  char ArgList[4]; // [esp+74h] [ebp-114h] BYREF
  int v79; // [esp+78h] [ebp-110h]
  char v80; // [esp+7Ch] [ebp-10Ch]
  unsigned int v81; // [esp+184h] [ebp-4h]

  v13 = flt_B097C8 > 0.0;
  v73 = a10;
  v71 = (int)this;
  v67 = *(float *)&a8;
  v72 = *(float *)&a9;
  v68 = a11;
  if ( !v13 )
    return 0;
  if ( dword_B35C04 > dword_B097D0 )
    return 0;
  if ( *(float *)&a9 != 0.0 )
  {
    if ( a9->vtbl->super.super.Unk_04((NiObject *)a9) )
      ++dword_B35C04;
  }
  v69 = 0;
  v81 = 0;
  if ( *(float *)&a8 == 0.0 )
    return 0;
  v14 = *(_DWORD *)"ures";
  v15 = aTextures[8];
  *(_DWORD *)ArgList = *(_DWORD *)"Textures";
  v79 = v14;
  v80 = v15;
  v16 = (_WORD *)((char *)&v77 + 3);
  do
  {
    v17 = *((_BYTE *)v16 + 1);
    v16 = (_WORD *)((char *)v16 + 1);
  }
  while ( v17 );
  *v16 = *(_WORD *)SubStr;
  v18 = strlen(a8) + 1;
  v19 = (char *)&v77 + 3;
  while ( *++v19 )
    ;
  qmemcpy(v19, a8, v18);
  v21 = (int *)sub_442890((UInt32 *)&v66, ArgList, 0, 0);
  LOBYTE(v81) = 1;
  sub_55E2A0(&v69, v21);
  LOBYTE(v81) = 0;
  if ( v66 != 0.0 )
  {
    v22 = v66;
    if ( !InterlockedDecrement((volatile LONG *)(LODWORD(v66) + 4)) )
      (**(void (__thiscall ***)(_DWORD, int))LODWORD(v22))(LODWORD(v22), 1);
  }
  if ( !v69 )
    return 0;
  if ( *(float *)&a9 == 0.0 )
    goto LABEL_90;
  m_pcName = a9->members.super.super.m_pcName;
  if ( m_pcName )
  {
    LODWORD(v63) = 5;
    if ( !strncmp(m_pcName, "Decal", v63) )
      goto LABEL_90;
    LODWORD(v64) = 6;
    if ( !strncmp(m_pcName, "FaceGen", v64) )
      goto LABEL_90;
    LODWORD(v65) = 5;
    if ( !strncmp(m_pcName, "Bip01", v65) )
      goto LABEL_90;
  }
  if ( a9->vtbl->super.super.Unk_04((NiObject *)a9) )
  {
    v24 = v73;
    if ( *v73 <= 0 )
    {
      NiPropertyByID = NiNode_GetNiPropertyByID(a9, 4);
      if ( !NiPropertyByID
        || !a9->members.effects.vtlb
        || ((*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) < 1
         || (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) > 0xA
          ? (v26 = 0)
          : (v26 = 1),
            (v27 = v26 != 0 ? (Ni2DBuffer *)NiPropertyByID : 0) == 0) )
      {
LABEL_86:
        v50 = *v24 < 0;
        v81 = 0xFFFFFFFF;
        if ( !v50 )
        {
          sub_7016A0((NiD3DVertexShader *)&v69);
          return 0;
        }
        goto LABEL_91;
      }
      v28 = (_DWORD *)FormHeapAlloc(0x4Cu);
      if ( v28 )
      {
        *v28 = 0;
        v28[0x12] = 0;
        v29 = (int)v28;
      }
      else
      {
        v29 = 0;
      }
      *(float *)(v29 + 0x40) = 0.0;
      *(_BYTE *)(v29 + 0x44) = 0;
      *(_DWORD *)(v29 + 4) = 0;
      NiSmartPointer_Set__((Ni2DBuffer **)(v29 + 0x48), v27);
      sub_55E2A0((int *)v29, &v69);
      v30 = sub_4DC270((int)a9);
      if ( v30 )
        refID = v30->super.super.super.super.super.refID;
      else
        refID = 0;
      *(_DWORD *)(v29 + 0x3C) = refID;
      v70 = 0;
      v32 = *(_DWORD *)&a9->members.children.numObjs;
      LOBYTE(v81) = 2;
      if ( v32 )
      {
        if ( byte_B06F5C != 1 )
        {
LABEL_47:
          if ( !v68 )
            goto LABEL_85;
          v35 = *(_WORD *)(v68 + 0xB6) == 0;
          v67 = 0.0;
          v66 = 0.0;
          if ( v35 )
            goto LABEL_85;
          while ( 1 )
          {
            v36 = (NiNode *)LODWORD(v67);
            if ( v67 != 0.0 )
              break;
            *(float *)&v37 = COERCE_FLOAT(sub_405790(v68, LODWORD(v66)));
            if ( *(float *)&v37 != 0.0 )
            {
              if ( (*(int (__thiscall **)(int))(*(_DWORD *)v37 + 0x10))(v37) )
              {
                v67 = *(float *)&v37;
              }
              else if ( (*(int (__thiscall **)(int))(*(_DWORD *)v37 + 8))(v37) )
              {
                for ( i = 0; i < *(unsigned __int16 *)(v37 + 0xB6); ++i )
                {
                  if ( v67 != 0.0 )
                    break;
                  *(float *)&v39 = COERCE_FLOAT(sub_405790(v37, i));
                  if ( *(float *)&v39 != 0.0 )
                  {
                    if ( (*(int (__thiscall **)(const char *))(*(_DWORD *)v39 + 0x10))(v39) )
                      v67 = *(float *)&v39;
                  }
                }
              }
            }
            v40 = *(unsigned __int16 *)(v68 + 0xB6);
            if ( ++LODWORD(v66) >= v40 )
            {
              if ( v67 == 0.0 )
                goto LABEL_85;
              v36 = (NiNode *)LODWORD(v67);
              break;
            }
          }
          v41 = NiNode_GetNiPropertyByID(v36, 4);
          v42 = 0;
          if ( !v41 )
            goto LABEL_85;
          if ( !v36->members.effects.vtlb )
            goto LABEL_85;
          v43 = (*((int (__thiscall **)(NiProperty *))v41->vtbl + 0x15))(v41) >= 1
             && (*((int (__thiscall **)(NiProperty *))v41->vtbl + 0x15))(v41) <= 0xA;
          v44 = v43 ? (Ni2DBuffer *)v41 : 0;
          if ( !v44 )
            goto LABEL_85;
          v45 = (_DWORD *)FormHeapAlloc(0x4Cu);
          if ( v45 )
          {
            *v45 = 0;
            v45[0x12] = 0;
            v42 = (int)v45;
          }
          *(_BYTE *)(v42 + 0x44) = *(_BYTE *)(v29 + 0x44);
          *(float *)(v42 + 0x40) = *(float *)(v29 + 0x40);
          *(_DWORD *)(v42 + 4) = *(_DWORD *)(v29 + 4);
          NiSmartPointer_Set__((Ni2DBuffer **)(v42 + 0x48), v44);
          sub_55E2A0((int *)v42, (int *)v29);
          *(_DWORD *)(v42 + 0x3C) = *(_DWORD *)(v29 + 0x3C);
          v68 = 0;
          v35 = *(_DWORD *)(LODWORD(v72) + 0xB8) == 0;
          LOBYTE(v81) = 5;
          if ( v35 )
          {
            v48 = (float *)FormHeapAlloc(0x1Cu);
            v74 = v48;
            LOBYTE(v81) = 7;
            if ( v48 )
            {
              v57 = sub_404E30(&flt_B097C8);
              v49 = sub_56BE50(
                      v48,
                      v71,
                      v57,
                      v42,
                      (int)v36,
                      *(float *)&a2,
                      *(float *)&a3,
                      *(float *)&a4,
                      SLOBYTE(a5),
                      a6,
                      a7,
                      COERCE_INT(1.0),
                      a12);
            }
            else
            {
              v49 = 0;
            }
            LOBYTE(v81) = 5;
            NiSmartPointer_Set__((Ni2DBuffer **)&v68, (Ni2DBuffer *)v49);
            qmemcpy((void *)(v42 + 8), (const void *)(v29 + 8), 0x34u);
          }
          else
          {
            if ( byte_B06F5C != 1 )
            {
LABEL_84:
              LOBYTE(v81) = 2;
              sub_7016A0((NiD3DVertexShader *)&v68);
LABEL_85:
              LOBYTE(v81) = 0;
              sub_7016A0((NiD3DVertexShader *)&v70);
              v24 = v73;
              goto LABEL_86;
            }
            v46 = (float *)FormHeapAlloc(0x54u);
            v74 = v46;
            LOBYTE(v81) = 6;
            if ( v46 )
            {
              v72 = -a5;
              v66 = -*(float *)&a6;
              v67 = -*(float *)&a7;
              v75 = v72;
              v76 = v66;
              v77 = v67;
              v58 = v72;
              v59 = v66;
              v60 = (const char *)LODWORD(v67);
              v56 = sub_404E30(&flt_B097C8);
              v47 = sub_56CE90(v46, v71, v56, v42, (int)v36, a2, a3, a4, v58, v59, (int)v60, 1.0, a12);
            }
            else
            {
              v47 = 0;
            }
            LOBYTE(v81) = 5;
            NiSmartPointer_Set__((Ni2DBuffer **)&v68, (Ni2DBuffer *)v47);
            sub_56CD60(v47);
          }
          if ( v68 )
            sub_678D30((int *)&ActorProcessManager_ptr, (volatile LONG *)v68);
          goto LABEL_84;
        }
        v66 = COERCE_FLOAT(FormHeapAlloc(0x54u));
        LOBYTE(v81) = 3;
        if ( v66 == 0.0 )
        {
          v33 = 0;
        }
        else
        {
          v61 = flt_A468FC;
          v54 = sub_404E30(&flt_B097C8);
          v33 = sub_56CE90((float *)LODWORD(v66), v71, v54, v29, (int)a9, a2, a3, a4, a5, *(float *)&a6, a7, v61, a12);
        }
        LOBYTE(v81) = 2;
        NiSmartPointer_Set__((Ni2DBuffer **)&v70, (Ni2DBuffer *)v33);
        sub_56CD60(v33);
      }
      else
      {
        v66 = COERCE_FLOAT(FormHeapAlloc(0x1Cu));
        LOBYTE(v81) = 4;
        if ( v66 == 0.0 )
        {
          v34 = 0;
        }
        else
        {
          *(float *)&v62 = flt_A468FC;
          v55 = sub_404E30(&flt_B097C8);
          v34 = sub_56BE50(
                  (float *)LODWORD(v66),
                  v71,
                  v55,
                  v29,
                  (int)a9,
                  *(float *)&a2,
                  *(float *)&a3,
                  *(float *)&a4,
                  SLOBYTE(a5),
                  a6,
                  a7,
                  v62,
                  a12);
        }
        LOBYTE(v81) = 2;
        NiSmartPointer_Set__((Ni2DBuffer **)&v70, (Ni2DBuffer *)v34);
      }
      if ( v70 )
        sub_678D30((int *)&ActorProcessManager_ptr, (volatile LONG *)v70);
      goto LABEL_47;
    }
    --*v73;
LABEL_90:
    v81 = 0xFFFFFFFF;
LABEL_91:
    sub_7016A0((NiD3DVertexShader *)&v69);
    return 1;
  }
  if ( !a9->vtbl->super.super.Unk_02((NiObject *)a9) )
    goto LABEL_90;
  end = a9->members.children.end;
  v70 = 0;
  if ( !end )
    goto LABEL_90;
  while ( 1 )
  {
    if ( end > v70 )
    {
      v53 = *((_DWORD **)&a9->members.children.data->vtbl + v70);
      if ( v53 )
      {
        if ( !sub_4CF1A0((void *)v71, a2, a3, a4, a5, a6, a7, (const char *)LODWORD(v67), v53, v73, v68, a12, a13) )
          break;
      }
    }
    end = a9->members.children.end;
    if ( ++v70 >= end )
      goto LABEL_90;
  }
  v81 = 0xFFFFFFFF;
  sub_7016A0((NiD3DVertexShader *)&v69);
  return 0;
}
