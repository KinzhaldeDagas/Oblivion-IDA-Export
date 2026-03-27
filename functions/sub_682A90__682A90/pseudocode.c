int __userpurge sub_682A90@<eax>(NiTMap_TESCELL *a1@<ecx>, double a2@<st2>, double a3@<st1>, int a4, int *a5, int *a6)
{
  int v7; // eax
  double v8; // st7
  int v9; // ebx
  UInt32 m_numBuckets; // eax
  NiTMap_Entry_TESCELL **v11; // ebp
  UInt32 v12; // ecx
  NiTMap_Entry_TESCELL **m_buckets; // edx
  NiTMap_Entry_TESCELL *v14; // ecx
  TESObjectREFR *v15; // esi
  void *vtbl; // ecx
  int v17; // eax
  char *Name; // eax
  double v19; // st7
  int v20; // eax
  UInt32 v21; // edx
  UInt32 v22; // eax
  NiTMap_Entry_TESCELL **v23; // ecx
  NiTMap_Entry_TESCELL *v24; // eax
  TESObjectREFR *v25; // esi
  void *v26; // ecx
  int v27; // eax
  char *v28; // eax
  double v29; // st7
  int v30; // eax
  double v31; // st7
  UInt32 v32; // ecx
  NiTMap_TESCELL *v33; // edi
  UInt32 v34; // eax
  NiTMap_Entry_TESCELL **v35; // edx
  NiTMap_Entry_TESCELL *v36; // eax
  TESObjectREFR *v37; // esi
  void *v38; // ecx
  int v39; // eax
  char *v40; // eax
  double v41; // st7
  int v42; // ecx
  int *v43; // eax
  int v44; // ecx
  float v46; // [esp+0h] [ebp-1D0h]
  float v47; // [esp+0h] [ebp-1D0h]
  float v48; // [esp+0h] [ebp-1D0h]
  float v49; // [esp+0h] [ebp-1D0h]
  float v50; // [esp+0h] [ebp-1D0h]
  float v51; // [esp+4h] [ebp-1CCh]
  float v52; // [esp+4h] [ebp-1CCh]
  float v53; // [esp+4h] [ebp-1CCh]
  float v54; // [esp+4h] [ebp-1CCh]
  float v55; // [esp+4h] [ebp-1CCh]
  UInt32 refID; // [esp+8h] [ebp-1C8h]
  UInt32 v57; // [esp+8h] [ebp-1C8h]
  UInt32 v58; // [esp+8h] [ebp-1C8h]
  int v59; // [esp+Ch] [ebp-1C4h]
  int v60; // [esp+Ch] [ebp-1C4h]
  int v61; // [esp+Ch] [ebp-1C4h]
  int v62; // [esp+Ch] [ebp-1C4h]
  TESChildCELL *v63; // [esp+20h] [ebp-1B0h] BYREF
  TESChildCELL *v64; // [esp+24h] [ebp-1ACh] BYREF
  NiTMap_Entry_TESCELL *v65; // [esp+28h] [ebp-1A8h] BYREF
  int v66; // [esp+2Ch] [ebp-1A4h]
  int v67; // [esp+30h] [ebp-1A0h]
  int *v68; // [esp+34h] [ebp-19Ch]
  int *v69; // [esp+38h] [ebp-198h]
  char v70[400]; // [esp+3Ch] [ebp-194h] BYREF

  v68 = a5;
  v69 = a6;
  sub_49F470(&stru_B3C000);
  v7 = *a6;
  v59 = a1[1].m_numItems + a1[2].m_numItems;
  v67 = *a5;
  v66 = v7;
  _sprintf(v70, "Paths to build: %d", v59);
  v51 = (float)v67;
  v8 = (double)iDebugTextLeftRightOffset;
  v46 = v8;
  InterfaceMgr_DebugTextLine((char)a6, a2, a3, v8, v70, v46, v51, 1, 0xFFFFFFFF);
  v9 = a4 + v67;
  m_numBuckets = a1[1].m_numBuckets;
  LOBYTE(v11) = (_BYTE)a1 + 0x10;
  v12 = 0;
  v67 += a4;
  if ( m_numBuckets )
  {
    m_buckets = a1[1].m_buckets;
    while ( !*m_buckets )
    {
      ++v12;
      ++m_buckets;
      if ( v12 >= m_numBuckets )
        goto LABEL_5;
    }
    v14 = a1[1].m_buckets[v12];
  }
  else
  {
LABEL_5:
    v14 = 0;
  }
  v65 = v14;
  while ( v65 )
  {
    v64 = 0;
    v63 = 0;
    sub_452600(a1 + 1, &v65, (void **)&v64, (TESObjectCELL **)&v63);
    v15 = (TESObjectREFR *)v64;
    if ( v64 )
    {
      if ( v63 )
      {
        vtbl = v64[0x16].vtbl;
        v17 = 0xFFFFFFFF;
        if ( vtbl )
          v17 = (*(int (__thiscall **)(void *))(*(_DWORD *)vtbl + 8))(vtbl);
        v60 = v17;
        refID = v15->member.super.refID;
        Name = TESObjectREFR_GetName(v15);
        _sprintf(v70, "HIGH: \"%s\" (%08x) - %i", Name, refID, v60);
        v52 = (float)v67;
        v19 = (double)iDebugTextLeftRightOffset;
        v47 = v19;
        InterfaceMgr_DebugTextLine((char)v11, a2, a3, v19, v70, v47, v52, 1, 0xFFFFFFFF);
        v9 += a4;
        v20 = nHeight - 0xA;
        v67 = v9;
        if ( v9 > v20 )
          break;
      }
    }
  }
  v21 = a1[2].m_numBuckets;
  v22 = 0;
  if ( v21 )
  {
    v11 = a1[2].m_buckets;
    v23 = v11;
    while ( !*v23 )
    {
      ++v22;
      ++v23;
      if ( v22 >= v21 )
        goto LABEL_19;
    }
    v24 = v11[v22];
  }
  else
  {
LABEL_19:
    v24 = 0;
  }
  v65 = v24;
  while ( v65 )
  {
    v63 = 0;
    v64 = 0;
    sub_452600(a1 + 2, &v65, (void **)&v63, (TESObjectCELL **)&v64);
    v25 = (TESObjectREFR *)v63;
    if ( v63 )
    {
      if ( v64 )
      {
        v26 = v63[0x16].vtbl;
        v27 = 0xFFFFFFFF;
        if ( v26 )
          v27 = (*(int (__thiscall **)(void *))(*(_DWORD *)v26 + 8))(v26);
        v61 = v27;
        v57 = v25->member.super.refID;
        v28 = TESObjectREFR_GetName(v25);
        _sprintf(v70, "\"%s\" (%08x) - %i", v28, v57, v61);
        v53 = (float)v67;
        v29 = (double)iDebugTextLeftRightOffset;
        v48 = v29;
        InterfaceMgr_DebugTextLine((char)v11, a2, a3, v29, v70, v48, v53, 1, 0xFFFFFFFF);
        v9 += a4;
        v30 = nHeight - 0xA;
        v67 = v9;
        if ( v9 > v30 )
          break;
      }
    }
  }
  _sprintf(v70, "Paths Completed: %d", a1[3].m_numItems);
  v54 = (float)v66;
  v63 = (TESChildCELL *)(0x500 - iDebugTextLeftRightOffset);
  v31 = (double)(int)v63;
  v49 = v31;
  InterfaceMgr_DebugTextLine((char)v11, a2, a3, v31, v70, v49, v54, 3, 0xFFFFFFFF);
  v32 = a1[3].m_numBuckets;
  v66 += a4;
  v33 = a1 + 3;
  v34 = 0;
  if ( v32 )
  {
    v11 = v33->m_buckets;
    v35 = v11;
    while ( !*v35 )
    {
      ++v34;
      ++v35;
      if ( v34 >= v32 )
        goto LABEL_33;
    }
    v36 = v11[v34];
  }
  else
  {
LABEL_33:
    v36 = 0;
  }
  v65 = v36;
  while ( v65 )
  {
    v63 = 0;
    v64 = 0;
    sub_452600(v33, &v65, (void **)&v63, (TESObjectCELL **)&v64);
    v37 = (TESObjectREFR *)v63;
    if ( v63 )
    {
      if ( v64 )
      {
        v38 = v63[0x16].vtbl;
        v39 = 0xFFFFFFFF;
        if ( v38 )
          v39 = (*(int (__thiscall **)(void *))(*(_DWORD *)v38 + 8))(v38);
        v62 = v39;
        v58 = v37->member.super.refID;
        v40 = TESObjectREFR_GetName(v37);
        _sprintf(v70, "\"%s\" (%08x) - %i", v40, v58, v62);
        v55 = (float)v66;
        v63 = (TESChildCELL *)(0x500 - iDebugTextLeftRightOffset);
        v41 = (double)(int)v63;
        v50 = v41;
        InterfaceMgr_DebugTextLine((char)v11, a2, a3, v41, v70, v50, v55, 3, 0xFFFFFFFF);
        v42 = nHeight - 0xA;
        v66 += a4;
        if ( v66 > v42 )
          break;
      }
    }
  }
  v43 = v69;
  v44 = v66;
  *v68 = v9;
  *v43 = v44;
  return j_NiLeaveCriticalSection_0((LPCRITICAL_SECTION)&stru_B3C000);
}
