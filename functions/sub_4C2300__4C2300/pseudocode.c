void __thiscall sub_4C2300(_DWORD *this)
{
  NiProperty *NiPropertyByID; // ebx
  TESWorldSpace *CurrentWorldspace; // eax
  float y; // ecx
  float z; // edx
  int v6; // eax
  TES *v7; // ecx
  double v8; // st6
  double v9; // rt0
  TESWorldSpace *v10; // eax
  TESWorldSpaceTerrainLODQuadMap *RootTerrainLODQuadMap; // eax
  _DWORD *v12; // eax
  NiNode *v13; // edi
  void (__thiscall ***v14)(_DWORD, int); // esi
  int **v15; // eax
  bool v16; // zf
  int *v17; // eax
  int v18; // eax
  NiNode **v19; // ecx
  NiNode *v20; // ecx
  NiProperty *v21; // edi
  BOOL v22; // esi
  _DWORD *v23; // esi
  void (__thiscall **v24)(_DWORD *, int, int); // edi
  int v25; // eax
  void (__thiscall **v26)(_DWORD *, int, int); // edi
  int v27; // eax
  int v28; // [esp+10h] [ebp-58h]
  int v29; // [esp+1Ch] [ebp-4Ch] BYREF
  float x; // [esp+4Ch] [ebp-1Ch] BYREF
  float v31; // [esp+50h] [ebp-18h]
  float v32; // [esp+54h] [ebp-14h]

  NiPropertyByID = 0; /*0x4c230e*/
  if ( TES::GetCurrentWorldspace(MEMORY[0xB333A0]) ) /*0x4c2319*/
  {
    CurrentWorldspace = TES::GetCurrentWorldspace(MEMORY[0xB333A0]); /*0x4c232c*/
    if ( TESWorldSpace_GetRootTerrainLODQuadMap(CurrentWorldspace) ) /*0x4c2333*/
    {
      y = g_zeroNiPoint3.y; /*0x4c2345*/
      z = g_zeroNiPoint3.z; /*0x4c234b*/
      x = g_zeroNiPoint3.x; /*0x4c2351*/
      v6 = *(this + 9); /*0x4c2355*/
      v31 = y; /*0x4c2358*/
      v7 = MEMORY[0xB333A0]; /*0x4c235c*/
      v32 = z; /*0x4c2362*/
      v8 = dbl_A2FAA0; /*0x4c236c*/
      v9 = dbl_A37650; /*0x4c237d*/
      x = ((double)*(int *)(v6 + 0x98) + v8) * v9; /*0x4c237f*/
      v31 = v9 * (v8 + (double)*(int *)(v6 + 0x9C)); /*0x4c2390*/
      v10 = TES::GetCurrentWorldspace(v7); /*0x4c2394*/
      RootTerrainLODQuadMap = TESWorldSpace_GetRootTerrainLODQuadMap(v10); /*0x4c239b*/
      v12 = sub_4EA670(RootTerrainLODQuadMap, &x, 0); /*0x4c23a2*/
      if ( v12 ) /*0x4c23a9*/
      {
        v13 = (NiNode *)*sub_4BFD90((_DWORD *)*v12, &v29); /*0x4c23bd*/
        if ( v29 ) /*0x4c23c5*/
        {
          v14 = (void (__thiscall ***)(_DWORD, int))v29; /*0x4c23c7*/
          if ( !InterlockedDecrement((volatile LONG *)(v29 + 4)) ) /*0x4c23cd*/
            (**v14)(v14, 1); /*0x4c23e3*/
        }
        if ( v13 ) /*0x4c23e7*/
          NiPropertyByID = NiNode_GetNiPropertyByID(v13, 4); /*0x4c23f2*/
      }
    }
  }
  v15 = *(int ***)(v28 + 0x24); /*0x4c23fa*/
  if ( v15 )
  {
    if ( *v15 )
    {
      v16 = **v15 == 0; /*0x4c2410*/
      v17 = *v15; /*0x4c2414*/
      if ( !v16 )
      {
        v18 = *v17; /*0x4c241d*/
        if ( *(_WORD *)(v18 + 0xB6) )
        {
          v19 = *(NiNode ***)(v18 + 0xB0); /*0x4c242d*/
          if ( *v19 )
          {
            if ( *(_WORD *)(v18 + 0xB6) ) /*0x4c243c*/
              v20 = *v19; /*0x4c244c*/
            else
              v20 = 0; /*0x4c2446*/
            v21 = NiNode_GetNiPropertyByID(v20, 4); /*0x4c2455*/
            v22 = v21 /*0x4c2477*/
               && (*((int (__thiscall **)(NiProperty *))v21->vtbl + 0x15))(v21) >= 5
               && (*((int (__thiscall **)(NiProperty *))v21->vtbl + 0x15))(v21) <= 0xA;
            v23 = v22 ? (_DWORD *)v21 : 0;
            if ( v23 ) /*0x4c2486*/
            {
              if ( NiPropertyByID ) /*0x4c248e*/
              {
                v24 = (void (__thiscall **)(_DWORD *, int, int))(*v23 + 0x80); /*0x4c24a2*/
                v25 = (*((int (__thiscall **)(NiProperty *, _DWORD))NiPropertyByID->vtbl + 0x22))(NiPropertyByID, 0); /*0x4c24a8*/
                (*v24)(v23, 9, v25); /*0x4c24b1*/
                v26 = (void (__thiscall **)(_DWORD *, int, int))(*v23 + 0x84); /*0x4c24c1*/
                v27 = (*((int (__thiscall **)(NiProperty *, _DWORD))NiPropertyByID->vtbl + 0x23))(NiPropertyByID, 0); /*0x4c24c7*/
                (*v26)(v23, 9, v27); /*0x4c24d0*/
                JUMPOUT(0x4C2575); /*0x4c2575*/
              }
            }
          }
        }
      }
    }
  }
  JUMPOUT(0x4C2600); /*0x4c2600*/
}
