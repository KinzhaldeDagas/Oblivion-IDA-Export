void __thiscall sub_47B090(int **this, int arg0, float *a3, int a4, char a5, Ni2DBuffer *a6)
{
  int v7; // ebx
  int v8; // ebp
  Ni2DBuffer *v9; // eax
  unsigned int v10; // eax
  int v11; // esi
  void (__thiscall ***v12)(_DWORD, int); // esi
  _DWORD *v13; // ebp
  int **v14; // edi
  const TESNPC *v15; // edi
  void *v16; // ecx
  int *v17; // eax
  int v18; // eax
  int *v19; // eax
  NiObject *v20; // eax
  int v21; // ebx
  unsigned int v22; // edi
  int v23; // eax
  int v24; // ecx
  const char *v25; // ecx
  int v26; // eax
  const char *v27; // eax
  const char *v28; // ebp
  const char *v29; // ebx
  char *Name; // eax
  int v31; // edx
  unsigned __int16 v32; // ax
  __int16 v33; // ax
  size_t v34; // [esp+8h] [ebp-B8h]
  const char *v35; // [esp+8h] [ebp-B8h]
  Ni2DBuffer *v37; // [esp+24h] [ebp-9Ch]
  unsigned int v38; // [esp+2Ch] [ebp-94h]
  _DWORD *v39; // [esp+30h] [ebp-90h]
  void *v40; // [esp+34h] [ebp-8Ch] BYREF
  NiTimeController *a2; // [esp+38h] [ebp-88h] BYREF
  int v42; // [esp+3Ch] [ebp-84h] BYREF
  void *v43; // [esp+40h] [ebp-80h] BYREF
  int v44; // [esp+44h] [ebp-7Ch]
  void *slot; // [esp+48h] [ebp-78h] BYREF
  unsigned int v46; // [esp+4Ch] [ebp-74h]
  int v47; // [esp+50h] [ebp-70h] BYREF
  FaceGenHeadParameters a1; // [esp+54h] [ebp-6Ch] BYREF
  unsigned int v49; // [esp+BCh] [ebp-4h]

  v7 = arg0; /*0x47b0c3*/
  v8 = arg0 + 0xAC; /*0x47b0ca*/
  v37 = 0; /*0x47b0d2*/
  sub_4784A0((_WORD *)(arg0 + 0xAC)); /*0x47b0de*/
  sub_477F90(arg0 + 0xAC); /*0x47b0e5*/
  if ( a4 == 1 ) /*0x47b0f2*/
  {
    v9 = a6; /*0x47b0f4*/
    if ( !a6 ) /*0x47b0fd*/
      v9 = sub_478A40(this); /*0x47b101*/
    v37 = v9; /*0x47b106*/
  }
  *(float *)(arg0 + 0x54) = g_zeroNiPoint3.x; /*0x47b10f*/
  *(float *)(arg0 + 0x58) = g_zeroNiPoint3.y; /*0x47b121*/
  *(float *)(arg0 + 0x5C) = g_zeroNiPoint3.z; /*0x47b12a*/
  if ( a3 ) /*0x47b12d*/
  {
    a3[0x15] = g_zeroNiPoint3.x; /*0x47b135*/
    a3[0x16] = g_zeroNiPoint3.y; /*0x47b13e*/
    a3[0x17] = g_zeroNiPoint3.z; /*0x47b147*/
  }
  v10 = 0; /*0x47b14a*/
  v38 = 0; /*0x47b153*/
  if ( *(_WORD *)(arg0 + 0xB6) ) /*0x47b14c*/
  {
    do /*0x47b15d*/
    {
      if ( *(unsigned __int16 *)(v7 + 0xB6) > v10 ) /*0x47b166*/
      {
        v11 = *(_DWORD *)(*(_DWORD *)(v7 + 0xB0) + 4 * v10); /*0x47b1f7*/
        if ( v11 && !(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 0xC))(v11) ) /*0x47b209*/
        {
          (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)v7 + 0x88))(v7, &v47, v11); /*0x47b223*/
          if ( !v47 ) /*0x47b22b*/
            goto LABEL_52; /*0x47b22b*/
          v12 = (void (__thiscall ***)(_DWORD, int))v47; /*0x47b231*/
          if ( InterlockedDecrement((volatile LONG *)(v47 + 4)) ) /*0x47b237*/
            goto LABEL_52; /*0x47b23f*/
LABEL_14:
          (**v12)(v12, 1); /*0x47b1e2*/
          goto LABEL_52; /*0x47b1ec*/
        }
      }
      else
      {
        v11 = 0; /*0x47b16c*/
      }
      if ( !a5 || (LODWORD(v34) = strlen(off_B06590), _strnicmp(*(const char **)(v11 + 8), off_B06590, v34)) ) /*0x47b198*/
      {
        v13 = *(_DWORD **)(v11 + 0xB8); /*0x47b269*/
        v39 = v13; /*0x47b26b*/
        if ( *(_DWORD *)(v11 + 0xB4) && *(_DWORD *)(v11 + 0xB8) && v37 ) /*0x47b282*/
        {
          v14 = this; /*0x47b288*/
          if ( *(this + 0x54) /*0x47b2c5*/
            && (*(int (__thiscall **)(_DWORD))(**(this + 0x54) + 0x170))(*(this + 0x54))
            && *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(this + 0x54) + 0x170))(*(this + 0x54)) + 4) == 0x23 )
          {
            v15 = (const TESNPC *)(*(int (__thiscall **)(_DWORD))(**(this + 0x54) + 0x170))(*(this + 0x54)); /*0x47b2e7*/
            ArrayConstructor( /*0x47b2f0*/
              (char *)&a1,
              0x18u,
              4,
              (void (__thiscall *)(char *))FaceGenMatrix_Construct,
              (void (__thiscall *)(void *))FaceGenMatrix_Destruct);
            v16 = *(void **)(v11 + 0xB4); /*0x47b2f5*/
            v49 = 0; /*0x47b300*/
            v17 = sub_700790(v16, (int *)&slot); /*0x47b30b*/
            sub_405070(&v40, *v17); /*0x47b317*/
            LOBYTE(v49) = 1; /*0x47b320*/
            NiPointerSlot_Release(&slot); /*0x47b328*/
            (*(void (__thiscall **)(int, void *))(*(_DWORD *)v11 + 0x8C))(v11, v40); /*0x47b33c*/
            v18 = *(_DWORD *)(v11 + 0xB8); /*0x47b33e*/
            if ( v18 ) /*0x47b346*/
            {
              if ( *(_DWORD *)(v18 + 0xC) ) /*0x47b348*/
              {
                v19 = sub_700790(*(void **)(v18 + 0xC), (int *)&v43); /*0x47b358*/
                sub_405070(&a2, *v19); /*0x47b364*/
                LOBYTE(v49) = 2; /*0x47b36d*/
                NiPointerSlot_Release(&v43); /*0x47b375*/
                v20 = NiObject_CloneWithPointerMap(*(NiObject **)(v11 + 0xB8)); /*0x47b380*/
                sub_478350((_DWORD *)v11, (int)v20); /*0x47b388*/
                sub_478300(*(NiNode **)(v11 + 0xB8), a2); /*0x47b398*/
                LOBYTE(v49) = 1; /*0x47b3a1*/
                NiPointerSlot_Release((void **)&a2); /*0x47b3a9*/
              }
            }
            TESNPC_BuildAbsoluteFaceGenParameters(v15, &a1); /*0x47b3b5*/
            if ( useFaceGenHeads ) /*0x47b3ba*/
              BSFaceGenModel_ApplyEGMMorph(v37, &a1, (NiGeometry *)v11, 1.0, 0); /*0x47b3d5*/
            LOBYTE(v49) = 0; /*0x47b3de*/
            NiPointerSlot_Release(&v40); /*0x47b3e6*/
            v49 = 0xFFFFFFFF; /*0x47b3f9*/
            _LN21((char *)&a1, 0x18u, 4, (void (__thiscall *)(void *))FaceGenMatrix_Destruct); /*0x47b404*/
            goto LABEL_32; /*0x47b404*/
          }
        }
        else
        {
LABEL_32:
          v14 = this; /*0x47b409*/
        }
        sub_47AC20(v14, (NiNode *)v11); /*0x47b410*/
        if ( v13 ) /*0x47b417*/
        {
          v21 = v13[5]; /*0x47b423*/
          v22 = 0; /*0x47b426*/
          v46 = *(_DWORD *)(v13[2] + 0x40); /*0x47b42a*/
          v44 = v21; /*0x47b42e*/
          if ( v46 ) /*0x47b432*/
          {
            do /*0x47b516*/
            {
              v23 = NiObjectNET_LookupObjectByName(*this, *(char **)(*(_DWORD *)(v21 + 4 * v22) + 8)); /*0x47b44e*/
              if ( v23 ) /*0x47b458*/
              {
                *(_DWORD *)(v13[5] + 4 * v22) = v23; /*0x47b45d*/
              }
              else
              {
                LODWORD(v34) = strlen(*(const char **)(*(_DWORD *)(v21 + 4 * v22) + 8)); /*0x47b46d*/
                if ( !_strnicmp(*(const char **)(v11 + 8), *(const char **)(*(_DWORD *)(v21 + 4 * v22) + 8), v34) ) /*0x47b481*/
                {
                  v24 = *(_DWORD *)(arg0 + 0x1C); /*0x47b494*/
                  if ( v24 ) /*0x47b499*/
                    v25 = *(const char **)(v24 + 8); /*0x47b49b*/
                  else
                    v25 = "NULL"; /*0x47b4a0*/
                  PrintError( /*0x47b4b6*/
                    "Bone '%s' not found for part '%s->%s'.\r\nMake sure all the vertices are skinned to a bone in Max.",
                    *(const char **)(*(_DWORD *)(v21 + 4 * v22) + 8),
                    v25,
                    *(const char **)(arg0 + 8));
                }
                else
                {
                  v26 = (*this)[7]; /*0x47b4c6*/
                  if ( v26 ) /*0x47b4cb*/
                    v27 = *(const char **)(v26 + 8); /*0x47b4cd*/
                  else
                    v27 = "NULL"; /*0x47b4d2*/
                  v28 = *(const char **)(arg0 + 8); /*0x47b4e1*/
                  v29 = *(const char **)(*(_DWORD *)(v21 + 4 * v22) + 8); /*0x47b4e8*/
                  v35 = v27; /*0x47b4f1*/
                  Name = TESObjectREFR_GetName((TESObjectREFR *)*(this + 0x54)); /*0x47b4f2*/
                  PrintError("Bone '%s' not found for part '%s'.\r\nRequested by '%s' model '%s'.", v29, v28, Name, v35); /*0x47b4ff*/
                  v21 = v44; /*0x47b504*/
                }
                v13 = v39; /*0x47b50b*/
              }
              ++v22; /*0x47b50f*/
            }
            while ( v22 < v46 ); /*0x47b516*/
          }
          if ( a3 ) /*0x47b524*/
          {
            v13[4] = a3; /*0x47b52d*/
            (*(void (__thiscall **)(float *, int, int))(*(_DWORD *)a3 + 0x84))(a3, v11, 1); /*0x47b53b*/
          }
          v7 = arg0; /*0x47b53d*/
        }
        v8 = arg0 + 0xAC; /*0x47b544*/
        goto LABEL_52; /*0x47b544*/
      }
      (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)v7 + 0x88))(v7, &v42, v11); /*0x47b1b8*/
      if ( v42 ) /*0x47b1c0*/
      {
        v12 = (void (__thiscall ***)(_DWORD, int))v42; /*0x47b1c6*/
        if ( !InterlockedDecrement((volatile LONG *)(v42 + 4)) ) /*0x47b1cc*/
          goto LABEL_14; /*0x47b1d4*/
      }
LABEL_52:
      v10 = ++v38; /*0x47b548*/
    }
    while ( v38 < *(unsigned __int16 *)(v7 + 0xB6) ); /*0x47b15d*/
  }
  sub_4784A0((_WORD *)v8); /*0x47b562*/
  if ( *(_WORD *)(v8 + 0xA) ) /*0x47b569*/
  {
    v31 = *(_DWORD *)(v8 + 4); /*0x47b570*/
    do /*0x47b590*/
    {
      v32 = *(_WORD *)(v8 + 0xA); /*0x47b573*/
      if ( *(_DWORD *)(v31 + 4 * v32 - 4) ) /*0x47b57a*/
        break; /*0x47b584*/
      v33 = v32 - 1; /*0x47b586*/
      *(_WORD *)(v8 + 0xA) = v33; /*0x47b58c*/
    }
    while ( v33 ); /*0x47b590*/
  }
}
