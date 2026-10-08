// Verified external .lod parser format: each record has a TESBoundObject FormID, count N, then rotationAnglesXYZ (3N floats), positions (3N floats), and scalePercent (N floats). The base-object transform applies rotation components as X, Y, Z radians and scale as abs(floor(scalePercent)/100).
bool __cdecl DistantLOD_ParseExternalCellFile(
        void *bsFile,
        DistantLODCellObjectMap *outMap,
        DistantLODLoadMode lodMode)
{
  bool result; // al
  DistantLODCellObjectData *v4; // esi
  int (__cdecl *v5)(void *, unsigned int *, int, int *, int); // edx
  unsigned int v6; // edi
  int (__cdecl *v7)(void *, int *, int, int *, int); // edx
  _BYTE *v8; // edi
  TESForm *v9; // eax
  int (__cdecl *v10)(void *, unsigned int *, int, int *, int); // edx
  bool v11; // zf
  DistantLODCellObjectData *v12; // eax
  int (__cdecl *v13)(void *, float *, unsigned int, int *, int); // edx
  unsigned int v14; // edi
  int (__cdecl *v15)(void *, float *, unsigned int, int *, int); // edx
  unsigned int v16; // edi
  int (__cdecl *v17)(void *, float *, unsigned int, int *, int); // ecx
  unsigned int v18; // edi
  float *data; // [esp-10h] [ebp-4Ch]
  float *v20; // [esp-10h] [ebp-4Ch]
  float *v21; // [esp-10h] [ebp-4Ch]
  bool v22; // [esp+16h] [ebp-26h]
  bool v23; // [esp+17h] [ebp-25h]
  unsigned int v24; // [esp+18h] [ebp-24h] BYREF
  int v25; // [esp+1Ch] [ebp-20h] BYREF
  unsigned int v26; // [esp+20h] [ebp-1Ch] BYREF
  int a1; // [esp+24h] [ebp-18h] BYREF
  int v28; // [esp+28h] [ebp-14h] BYREF
  int v29; // [esp+2Ch] [ebp-10h] BYREF
  unsigned int v30; // [esp+38h] [ebp-4h]

  result = 0; /*0x4d16f7*/
  v4 = 0; /*0x4d16f9*/
  v23 = 0; /*0x4d16ff*/
  if ( outMap && bsFile ) /*0x4d170f*/
  {
    (*(void (__thiscall **)(void *, _DWORD, _DWORD))(*(_DWORD *)bsFile + 0x18))(bsFile, 0, 0); /*0x4d171f*/
    if ( *((_BYTE *)bsFile + 0x24) ) /*0x4d1721*/
    {
      v5 = *((int (__cdecl **)(void *, unsigned int *, int, int *, int))bsFile + 1); /*0x4d1731*/
      v26 = 0; /*0x4d1747*/
      v25 = 1; /*0x4d174b*/
      v22 = v5(bsFile, &v26, 4, &v25, 1) != 4; /*0x4d1759*/
      v6 = 0; /*0x4d175d*/
      v25 = 0; /*0x4d1764*/
      if ( !v22 ) /*0x4d1768*/
      {
        while ( 1 ) /*0x4d1774*/
        {
          if ( v6 >= v26 ) /*0x4d177a*/
          {
            if ( v26 ) /*0x4d1962*/
            {
              if ( v6 == v26 ) /*0x4d1966*/
                v23 = 1; /*0x4d1968*/
            }
            break; /*0x4d1968*/
          }
          v7 = *((int (__cdecl **)(void *, int *, int, int *, int))bsFile + 1); /*0x4d1780*/
          a1 = 0; /*0x4d1791*/
          v8 = 0; /*0x4d1795*/
          v28 = 1; /*0x4d1797*/
          if ( v7(bsFile, &a1, 4, &v28, 1) != 4 /*0x4d17cf*/
            || !a1
            || (v9 = TESForm_LookupByFormID(a1),
                (v8 = OblivionDynamicCast(
                        v9,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                        (struct TypeDescriptor *)&TESBoundObject `RTTI Type Descriptor',
                        0)) == 0) )
          {
            v22 = 1; /*0x4d17d1*/
          }
          v10 = *((int (__cdecl **)(void *, unsigned int *, int, int *, int))bsFile + 1); /*0x4d17d5*/
          v24 = 0; /*0x4d17e6*/
          v28 = 1; /*0x4d17ea*/
          if ( v10(bsFile, &v24, 4, &v28, 1) != 4 ) /*0x4d17f6*/
            v22 = 1; /*0x4d17f8*/
          if ( v8 && v8[4] == 0x1E )            // Verified DistantLODLoadMode dispatch: TESObjectTREE forms (type 0x1E) are accepted in TreesOnly (1) or AllBoundObjects (4) mode; other modes skip them. /*0x4d1807*/
          {                                     // Verified value 4 bypasses both type-specific exclusions and includes all TESBoundObject forms; values 1 and 2 select the TREE and non-TREE channels respectively.
            if ( lodMode != DistantLODLoadMode_AllBoundObjects ) /*0x4d1810*/
            {
              v11 = lodMode == DistantLODLoadMode_TreesOnly; /*0x4d1812*/
              goto LABEL_20; /*0x4d1814*/
            }
          }
          else if ( lodMode != DistantLODLoadMode_AllBoundObjects )// Verified DistantLODLoadMode dispatch: non-TREE TESBoundObject forms are accepted in NonTreeBoundObjectsOnly (2) or AllBoundObjects (4) mode. /*0x4d181b*/
          {
            v11 = lodMode == DistantLODLoadMode_NonTreeBoundObjectsOnly; /*0x4d181d*/
LABEL_20:
            if ( !v11 ) /*0x4d1822*/
              goto LABEL_31; /*0x4d1822*/
          }
          if ( v8 ) /*0x4d182a*/
          {
            if ( v24 ) /*0x4d1834*/
            {
              v12 = (DistantLODCellObjectData *)FormHeapAlloc(0x34u); /*0x4d183c*/
              v28 = (int)v12; /*0x4d1844*/
              v30 = 0; /*0x4d184a*/
              if ( v12 ) /*0x4d184e*/
                v4 = DistantLODCellObjectData_ctor(v12); /*0x4d1857*/
              v4->recordCount = v24; /*0x4d185d*/
              v30 = 0xFFFFFFFF; /*0x4d186b*/
              sub_4CA040((unsigned __int16 *)&v4->positions, 3 * v24); /*0x4d1873*/
              sub_4CA040((unsigned __int16 *)v4, 3 * v24); /*0x4d1882*/
              sub_4CA040((unsigned __int16 *)&v4->scalePercent, v24); /*0x4d188f*/
              NiTMap_SetAt(outMap, (int)v8, (int)v4); /*0x4d189a*/
              v13 = *((int (__cdecl **)(void *, float *, unsigned int, int *, int))bsFile + 1); /*0x4d18a3*/
              v14 = 0xC * v24; /*0x4d18b4*/
              data = v4->positions.data; /*0x4d18b7*/
              v28 = 1; /*0x4d18b9*/
              if ( v13(bsFile, data, 0xC * v24, &v28, 1) != v14 ) /*0x4d18c4*/
                v22 = 1; /*0x4d18c6*/
              v15 = *((int (__cdecl **)(void *, float *, unsigned int, int *, int))bsFile + 1); /*0x4d18ce*/
              v16 = 0xC * v24; /*0x4d18df*/
              v20 = v4->rotationAnglesXYZ.data; /*0x4d18e2*/
              v28 = 1; /*0x4d18e4*/
              if ( v15(bsFile, v20, 0xC * v24, &v28, 1) != v16 ) /*0x4d18ef*/
                v22 = 1; /*0x4d18f1*/
              v17 = *((int (__cdecl **)(void *, float *, unsigned int, int *, int))bsFile + 1); /*0x4d18fc*/
              v18 = 4 * v24; /*0x4d1907*/
              v21 = v4->scalePercent.data; /*0x4d190a*/
              v29 = 1; /*0x4d190c*/
              v4 = 0; /*0x4d1915*/
              if ( v17(bsFile, v21, 4 * v24, &v29, 1) != v18 ) /*0x4d1919*/
                v22 = 1; /*0x4d191b*/
            }
            goto LABEL_33; /*0x4d191f*/
          }
LABEL_31:
          if ( v24 ) /*0x4d1927*/
            (*(void (__thiscall **)(void *, unsigned int, int))(*(_DWORD *)bsFile + 0xC))( /*0x4d1946*/
              bsFile,
              0x1C * v24,
              BSFile_FilePos_Cur);
LABEL_33:
          ++v25; /*0x4d1948*/
          if ( v22 ) /*0x4d1951*/
            break; /*0x4d1951*/
          v6 = v25; /*0x4d1770*/
        }
      }
    }
    (**(void (__thiscall ***)(void *, int))bsFile)(bsFile, 1); /*0x4d196c*/
    return v23; /*0x4d1976*/
  }
  return result; /*0x4d197a*/
}
