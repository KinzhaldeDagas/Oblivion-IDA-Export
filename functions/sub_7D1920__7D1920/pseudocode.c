// Runtime corroboration 2026-10-02 (DX11 V228, Anvil Dock Gate): B42EA5 read as1 while protected static census counted123 Lighting30 shader-vtable occurrences,2773 other shader occurrences and2 unreadable shader pointers across2898 geometry occurrences. Thus capability enabled does not establish ordinary static geometry uses Lighting30, consistent with this function returning default shader ID1 unless its specific predicates select1A. The current CPU discovery sampler captured non-Lighting30 property inventories; that is a frontend sampling limitation, not evidence to change Oblivion shader selection or relax A9576C property validation. Actual GPU bucket suppression was zero in this run.
int __cdecl BSShaderManager_InferGeometryShaderID(NiAVObject *geometry, char normalMapBypass)
{
  volatile LONG *v2; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebx
  volatile LONG *v4; // esi
  volatile LONG *v5; // esi
  int v7; // edi
  NiProperty *NiPropertyByID; // eax
  NiProperty *v9; // esi
  unsigned __int8 *m_pcName; // eax
  int v11; // ecx
  NiObject *v12; // eax
  const char *vftable; // eax
  bool v14; // bl
  const char *v15; // eax
  double v16; // st7
  NiProperty *v17; // esi
  NiProperty *v18; // eax
  int v19; // edi
  volatile LONG *v20; // eax
  NiObjectNET *v21; // eax
  NiObject *m_controller; // esi
  const char *v23; // esi
  size_t v24; // [esp-4h] [ebp-138h]
  size_t v25; // [esp-4h] [ebp-138h]
  volatile LONG *v26; // [esp+14h] [ebp-120h] BYREF
  NiSourceTexture *outTexture; // [esp+18h] [ebp-11Ch] BYREF
  volatile LONG *v28; // [esp+1Ch] [ebp-118h] BYREF
  char Src[260]; // [esp+20h] [ebp-114h] BYREF
  unsigned int v30; // [esp+130h] [ebp-4h]

  outTexture = 0; /*0x7d1969*/
  v2 = *NiGeometry_GetPropertyState((NiGeometry *)geometry, &v28); /*0x7d1976*/
  v3 = InterlockedDecrement; /*0x7d197e*/
  if ( v28 ) /*0x7d1984*/
  {
    v4 = v28; /*0x7d1986*/
    if ( !v3(v28 + 1) ) /*0x7d198c*/
      (**(void (__thiscall ***)(volatile LONG *, int))v4)(v4, 1); /*0x7d199e*/
  }
  if ( !v2 ) /*0x7d19a2*/
  {
    NiAVObject_InitializePropertyState(geometry); /*0x7d19a6*/
    v2 = *NiGeometry_GetPropertyState((NiGeometry *)geometry, &v26); /*0x7d19b7*/
    if ( v26 ) /*0x7d19bf*/
    {
      v5 = v26; /*0x7d19c1*/
      if ( !v3(v26 + 1) ) /*0x7d19c7*/
        (**(void (__thiscall ***)(volatile LONG *, int))v5)(v5, 1); /*0x7d19d9*/
    }
  }
  if ( !geometry ) /*0x7d19dd*/
    return 0; /*0x7d19dd*/
  if ( geometry->vtbl->super.Unk_05((NiObject *)geometry) ) /*0x7d19ee*/
    return 0; /*0x7d19ee*/
  v7 = *((_DWORD *)v2 + 8); /*0x7d19f4*/
  if ( !v7 ) /*0x7d19f9*/
    return 0; /*0x7d19f9*/
  NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)geometry, 2); /*0x7d19ff*/
  v9 = NiPropertyByID; /*0x7d1a04*/
  if ( NiPropertyByID ) /*0x7d1a08*/
  {
    m_pcName = (unsigned __int8 *)NiPropertyByID->members.m_pcName; /*0x7d1a0a*/
    if ( m_pcName ) /*0x7d1a0f*/
    {
      if ( !CRT_StricmpLocaleDispatch(m_pcName, "lava") ) /*0x7d1a17*/
        return 0x11; /*0x7d1a28*/
    }
  }
  v11 = *(_DWORD *)(v7 + 0x20); /*0x7d1a2d*/
  if ( !*(_DWORD *)v11 || !*(_DWORD *)(*(_DWORD *)v11 + 8) ) /*0x7d1a36*/
    return 0; /*0x7d1a36*/
  v12 = NiRTTI_Cast((BSStringT *)stru_B3F95C, *(NiObject **)(*(_DWORD *)v11 + 8)); /*0x7d1a43*/
  if ( !v12 ) /*0x7d1a4d*/
    return 1; /*0x7d1a4d*/
  vftable = (const char *)v12[7].__vftable; /*0x7d1a53*/
  if ( !vftable ) /*0x7d1a58*/
    return 1; /*0x7d1a58*/
  BuildTextureVariantPath(Src, vftable, "_n");  // Builds the normal-map companion name with suffix _n. BuildTextureVariantPath replaces everything from the final underscore in the diffuse basename, rather than blindly appending _n. /*0x7d1a69*/
  v14 = !*NiSourceTexture_LoadChecked(&outTexture, Src, 1, 1) && !normalMapBypass; /*0x7d1a97*/
  NiPointerSlot_Release((NiD3DVertexShader *)&outTexture); /*0x7d1a9d*/
  if ( v14 ) /*0x7d1aa4*/
    return 0; /*0x7d19e1*/
  if ( v9 ) /*0x7d1aac*/
  {
    v15 = v9->members.m_pcName; /*0x7d1aae*/
    if ( v15 ) /*0x7d1ab3*/
    {
      LODWORD(v24) = 4; /*0x7d1ab5*/
      if ( !_strnicmp(v15, "hair", v24) ) /*0x7d1abd*/
      {
        if ( OB_RendererGlobalState_010201A0[0xC] || *(int *)&OB_RendererGlobalState_010201A0[0xAF] >= 5 ) /*0x7d1ad8*/
          return 0x1A; /*0x7d1ae3*/
        return 1; /*0x7d1ad8*/
      }
    }
  }
  if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] < 2 /*0x7d1afe*/
    || !v9
    || CRT_StricmpLocaleDispatch((unsigned __int8 *)v9->members.m_pcName, "skin") )
  {
    if ( (*(_BYTE *)(v7 + 0x18) & 0xE) == 8 ) /*0x7d1b36*/
      return 0xF; /*0x7d1b3d*/
    v17 = NiNode_GetNiPropertyByID((NiNode *)geometry, 0); /*0x7d1b4f*/
    v18 = NiNode_GetNiPropertyByID((NiNode *)geometry, 2); /*0x7d1b51*/
    if ( v18 ) /*0x7d1b58*/
    {
      LODWORD(v24) = 7; /*0x7d1b5d*/
      v19 = _strnicmp(v18->members.m_pcName, "dynalpha", v24); /*0x7d1b6d*/
    }
    else
    {
      v19 = 0xFFFFFFFF; /*0x7d1b71*/
    }
    if ( !v17 ) /*0x7d1b76*/
    {
      if ( v19 ) /*0x7d1b7a*/
        goto LABEL_52; /*0x7d1b7a*/
      v20 = (volatile LONG *)FormHeapAlloc(0x1Cu); /*0x7d1b7e*/
      v26 = v20; /*0x7d1b86*/
      v30 = 0; /*0x7d1b8c*/
      if ( v20 ) /*0x7d1b93*/
        v21 = NiAlphaProperty_ctor((NiObjectNET *)v20); /*0x7d1b97*/
      else
        v21 = 0; /*0x7d1b9e*/
      LOWORD(v21[1].vtbl) &= ~1u; /*0x7d1ba0*/
      v30 = 0xFFFFFFFF; /*0x7d1ba6*/
      v17 = (NiProperty *)v21; /*0x7d1bb1*/
    }
    if ( ((int)v17[1].vtbl & 1) != 0 || !v19 ) /*0x7d1bbb*/
    {
      if ( OB_RendererGlobalState_010201A0[0xC] ) /*0x7d1bbd*/
        return 0x1A; /*0x7d1bcb*/
      goto LABEL_56; /*0x7d1bc4*/
    }
LABEL_52:
    if ( OB_RendererGlobalState_010201A0[0xC] ) /*0x7d1bcd*/
    {
      m_controller = (NiObject *)geometry->members.super.m_controller; /*0x7d1bd6*/
      if ( m_controller ) /*0x7d1bdb*/
      {
        while ( !NiRTTI::IsObjectOfRTTIType(&stru_B3CE30, m_controller) ) /*0x7d1bf0*/
        {
          m_controller = (NiObject *)m_controller[6].members.m_uiRefCount; /*0x7d1bf6*/
          if ( !m_controller ) /*0x7d1bfb*/
            goto LABEL_56; /*0x7d1bfb*/
        }
        return 0x1A; /*0x7d1bf0*/
      }
    }
LABEL_56:
    v23 = geometry->members.super.m_pcName; /*0x7d1bfd*/
    if ( v23 ) /*0x7d1c02*/
    {
      LODWORD(v24) = 5; /*0x7d1c04*/
      if ( strncmp(v23, "Block", v24) ) /*0x7d1c0c*/
      {
        LODWORD(v25) = 4; /*0x7d1c18*/
        strncmp(v23, "STBB", v25); /*0x7d1c20*/
      }
    }
    return 1; /*0x7d1c28*/
  }
  if ( *(float *)&v9[3].members.super.m_uiRefCount < 1.0 ) /*0x7d1b14*/
  {
    v16 = flt_A46B10; /*0x7d1b16*/
    ++v9[3].members.m_controller; /*0x7d1b1c*/
    *(float *)&v9[3].members.super.m_uiRefCount = v16; /*0x7d1b20*/
  }
  return 0xE; /*0x7d1c2d*/
}
