int __thiscall sub_682A90(NiTMap_TESCELL *this, int a2, int *a3, int *a4)
{
  int v7; // eax
  int v8; // ebx
  UInt32 m_numBuckets; // eax
  UInt32 v10; // ecx
  NiTMap_Entry_TESCELL **m_buckets; // edx
  MEF_U32PointerMapEntry32 *v12; // ecx
  TESObjectREFR *v13; // esi
  void *vtbl; // ecx
  int v15; // eax
  char *Name; // eax
  int v17; // eax
  UInt32 v18; // edx
  UInt32 v19; // eax
  NiTMap_Entry_TESCELL **v20; // ecx
  MEF_U32PointerMapEntry32 *v21; // eax
  TESObjectREFR *v22; // esi
  void *v23; // ecx
  int v24; // eax
  char *v25; // eax
  int v26; // eax
  UInt32 v27; // ecx
  MEF_U32PointerMapLayout32 *v28; // edi
  UInt32 v29; // eax
  MEF_U32PointerMapEntry32 **buckets; // edx
  MEF_U32PointerMapEntry32 *v31; // eax
  TESObjectREFR *v32; // esi
  void *v33; // ecx
  int v34; // eax
  char *v35; // eax
  int v36; // ecx
  int *v37; // eax
  int v38; // ecx
  float v40; // [esp+0h] [ebp-1D0h]
  float v41; // [esp+0h] [ebp-1D0h]
  float v42; // [esp+0h] [ebp-1D0h]
  float v43; // [esp+0h] [ebp-1D0h]
  float v44; // [esp+0h] [ebp-1D0h]
  float v45; // [esp+4h] [ebp-1CCh]
  float v46; // [esp+4h] [ebp-1CCh]
  float v47; // [esp+4h] [ebp-1CCh]
  float v48; // [esp+4h] [ebp-1CCh]
  float v49; // [esp+4h] [ebp-1CCh]
  UInt32 refID; // [esp+8h] [ebp-1C8h]
  UInt32 v51; // [esp+8h] [ebp-1C8h]
  UInt32 v52; // [esp+8h] [ebp-1C8h]
  UInt32 v53; // [esp+Ch] [ebp-1C4h]
  int v54; // [esp+Ch] [ebp-1C4h]
  int v55; // [esp+Ch] [ebp-1C4h]
  int v56; // [esp+Ch] [ebp-1C4h]
  TESChildCELL *v57; // [esp+20h] [ebp-1B0h] BYREF
  TESChildCELL *v58; // [esp+24h] [ebp-1ACh] BYREF
  MEF_U32PointerMapEntry32 *position; // [esp+28h] [ebp-1A8h] BYREF
  int v60; // [esp+2Ch] [ebp-1A4h]
  int v61; // [esp+30h] [ebp-1A0h]
  int *v62; // [esp+34h] [ebp-19Ch]
  int *v63; // [esp+38h] [ebp-198h]
  char v64[400]; // [esp+3Ch] [ebp-194h] BYREF

  v62 = a3; /*0x682abd*/
  v63 = a4; /*0x682ac1*/
  sub_49F470(&unk_B3C000); /*0x682ac5*/
  v7 = *a4; /*0x682ad2*/
  v53 = this[1].m_numItems + this[2].m_numItems; /*0x682ad5*/
  v61 = *a3; /*0x682ae0*/
  v60 = v7; /*0x682ae4*/
  _sprintf(v64, "Paths to build: %d", v53);
  v45 = (float)v61; /*0x682afb*/
  v40 = (float)iDebugTextLeftRightOffset; /*0x682b09*/
  InterfaceMgr_DebugTextLine(v64, v40, v45, 1, 0xFFFFFFFF); /*0x682b0d*/
  v8 = a2 + v61; /*0x682b12*/
  m_numBuckets = this[1].m_numBuckets; /*0x682b19*/
  v10 = 0; /*0x682b24*/
  v61 += a2; /*0x682b28*/
  if ( m_numBuckets ) /*0x682b2c*/
  {
    m_buckets = this[1].m_buckets; /*0x682b2e*/
    while ( !*m_buckets ) /*0x682b33*/
    {
      ++v10; /*0x682b35*/
      ++m_buckets; /*0x682b38*/
      if ( v10 >= m_numBuckets ) /*0x682b3d*/
        goto LABEL_5; /*0x682b3d*/
    }
    v12 = (MEF_U32PointerMapEntry32 *)this[1].m_buckets[v10]; /*0x682b52*/
  }
  else
  {
LABEL_5:
    v12 = 0; /*0x682b3f*/
  }
  position = v12; /*0x682b43*/
  while ( position )
  {
    v58 = 0; /*0x682b6a*/
    v57 = 0; /*0x682b6e*/
    NiTMap_U32Pointer_GetNextEntry( /*0x682b72*/
      (MEF_U32PointerMapLayout32 *)&this[1],
      &position,
      (unsigned int *)&v58,
      (void **)&v57);
    v13 = (TESObjectREFR *)v58; /*0x682b77*/
    if ( v58 )
    {
      if ( v57 )
      {
        vtbl = v58[0x16].vtbl; /*0x682b86*/
        v15 = 0xFFFFFFFF; /*0x682b89*/
        if ( vtbl ) /*0x682b8e*/
          v15 = (*(int (__thiscall **)(void *))(*(_DWORD *)vtbl + 8))(vtbl); /*0x682b95*/
        v54 = v15; /*0x682b9a*/
        refID = v13->member.super.refID; /*0x682b9b*/
        Name = TESObjectREFR_GetName(v13); /*0x682b9e*/
        _sprintf(v64, "HIGH: \"%s\" (%08x) - %i", Name, refID, v54);
        v46 = (float)v61; /*0x682bc1*/
        v41 = (float)iDebugTextLeftRightOffset; /*0x682bcf*/
        InterfaceMgr_DebugTextLine(v64, v41, v46, 1, 0xFFFFFFFF); /*0x682bd3*/
        v8 += a2; /*0x682bd8*/
        v17 = nHeight - 0xA; /*0x682be4*/
        v61 = v8; /*0x682bec*/
        if ( v8 > v17 ) /*0x682bf0*/
          break; /*0x682bf0*/
      }
    }
  }
  v18 = this[2].m_numBuckets; /*0x682bff*/
  v19 = 0; /*0x682c02*/
  if ( v18 ) /*0x682c06*/
  {
    v20 = this[2].m_buckets; /*0x682c0b*/
    while ( !*v20 ) /*0x682c12*/
    {
      ++v19; /*0x682c14*/
      ++v20; /*0x682c17*/
      if ( v19 >= v18 ) /*0x682c1c*/
        goto LABEL_19; /*0x682c1c*/
    }
    v21 = (MEF_U32PointerMapEntry32 *)this[2].m_buckets[v19]; /*0x682c2e*/
  }
  else
  {
LABEL_19:
    v21 = 0; /*0x682c1e*/
  }
  position = v21; /*0x682c22*/
  while ( position ) /*0x682c26*/
  {
    v57 = 0; /*0x682c48*/
    v58 = 0; /*0x682c4c*/
    NiTMap_U32Pointer_GetNextEntry( /*0x682c50*/
      (MEF_U32PointerMapLayout32 *)&this[2],
      &position,
      (unsigned int *)&v57,
      (void **)&v58);
    v22 = (TESObjectREFR *)v57; /*0x682c55*/
    if ( v57 ) /*0x682c5b*/
    {
      if ( v58 ) /*0x682c62*/
      {
        v23 = v57[0x16].vtbl; /*0x682c64*/
        v24 = 0xFFFFFFFF; /*0x682c67*/
        if ( v23 ) /*0x682c6c*/
          v24 = (*(int (__thiscall **)(void *))(*(_DWORD *)v23 + 8))(v23); /*0x682c73*/
        v55 = v24; /*0x682c78*/
        v51 = v22->member.super.refID; /*0x682c79*/
        v25 = TESObjectREFR_GetName(v22); /*0x682c7c*/
        _sprintf(v64, "\"%s\" (%08x) - %i", v25, v51, v55); /*0x682c8c*/
        v47 = (float)v61; /*0x682c9f*/
        v42 = (float)iDebugTextLeftRightOffset; /*0x682cad*/
        InterfaceMgr_DebugTextLine(v64, v42, v47, 1, 0xFFFFFFFF); /*0x682cb1*/
        v8 += a2; /*0x682cb6*/
        v26 = nHeight - 0xA; /*0x682cc2*/
        v61 = v8; /*0x682cca*/
        if ( v8 > v26 ) /*0x682cce*/
          break; /*0x682cce*/
      }
    }
  }
  _sprintf(v64, "Paths Completed: %d", this[3].m_numItems);
  v48 = (float)v60; /*0x682d09*/
  v57 = (TESChildCELL *)(0x500 - iDebugTextLeftRightOffset); /*0x682d0d*/
  v43 = (float)(int)v57; /*0x682d19*/
  InterfaceMgr_DebugTextLine(v64, v43, v48, 3, 0xFFFFFFFF); /*0x682d1d*/
  v27 = this[3].m_numBuckets; /*0x682d29*/
  v60 += a2; /*0x682d2c*/
  v28 = (MEF_U32PointerMapLayout32 *)&this[3]; /*0x682d30*/
  v29 = 0; /*0x682d36*/
  if ( v27 ) /*0x682d3a*/
  {
    buckets = v28->buckets; /*0x682d3f*/
    while ( !*buckets ) /*0x682d43*/
    {
      ++v29; /*0x682d45*/
      ++buckets; /*0x682d48*/
      if ( v29 >= v27 ) /*0x682d4d*/
        goto LABEL_33; /*0x682d4d*/
    }
    v31 = v28->buckets[v29]; /*0x682d5f*/
  }
  else
  {
LABEL_33:
    v31 = 0; /*0x682d4f*/
  }
  position = v31; /*0x682d53*/
  while ( position ) /*0x682d57*/
  {
    v57 = 0; /*0x682d78*/
    v58 = 0; /*0x682d7c*/
    NiTMap_U32Pointer_GetNextEntry(v28, &position, (unsigned int *)&v57, (void **)&v58); /*0x682d80*/
    v32 = (TESObjectREFR *)v57; /*0x682d85*/
    if ( v57 ) /*0x682d8b*/
    {
      if ( v58 ) /*0x682d96*/
      {
        v33 = v57[0x16].vtbl; /*0x682d98*/
        v34 = 0xFFFFFFFF; /*0x682d9b*/
        if ( v33 ) /*0x682da0*/
          v34 = (*(int (__thiscall **)(void *))(*(_DWORD *)v33 + 8))(v33); /*0x682da7*/
        v56 = v34; /*0x682dac*/
        v52 = v32->member.super.refID; /*0x682dad*/
        v35 = TESObjectREFR_GetName(v32); /*0x682db0*/
        _sprintf(v64, "\"%s\" (%08x) - %i", v35, v52, v56); /*0x682dc0*/
        v49 = (float)v60; /*0x682dde*/
        v57 = (TESChildCELL *)(0x500 - iDebugTextLeftRightOffset); /*0x682de2*/
        v44 = (float)(int)v57; /*0x682dee*/
        InterfaceMgr_DebugTextLine(v64, v44, v49, 3, 0xFFFFFFFF); /*0x682df2*/
        v36 = nHeight - 0xA; /*0x682e08*/
        v60 += a2; /*0x682e10*/
        if ( v60 > v36 ) /*0x682e14*/
          break; /*0x682e14*/
      }
    }
  }
  v37 = v63; /*0x682e25*/
  v38 = v60; /*0x682e29*/
  *v62 = v8; /*0x682e2d*/
  *v37 = v38; /*0x682e2f*/
  return j_NiLeaveCriticalSection_0((LPCRITICAL_SECTION)&unk_B3C000); /*0x682e3b*/
}
