// Verified registration as the TestSeenData script command. The callback creates a temporary NiNode using DebugRender_GetOrCreateVertexColorProperty, builds seen-data visualization from the current reference/cell state, updates it, and attaches it to the scene. Its precise rendering data format remains partly Unknown.
char __cdecl ScriptCommand_TestSeenData()
{
  NiNode *v0; // eax
  NiNode *v1; // ebp
  BSShaderProperty *VertexColorProperty; // eax
  ExtraDataList *DwordAtOffset40; // edi
  BSExtraDataVtbl *v4; // esi
  void (__thiscall *v5)(BSExtraDataVtbl *, NiNode *, float *, int); // edx
  unsigned int v6; // eax
  unsigned int i; // ecx
  unsigned int j; // ebx
  ExtraDataList **GridEntry; // eax
  ExtraDataList *v10; // esi
  BSExtraDataVtbl *v11; // edi
  float *v12; // eax
  void (__thiscall *v13)(BSExtraDataVtbl *, NiNode *, float *, int); // edx
  float v15; // [esp+28h] [ebp-58h]
  float angleZ; // [esp+28h] [ebp-58h]
  unsigned int v17; // [esp+28h] [ebp-58h]
  float v18; // [esp+2Ch] [ebp-54h]
  float v19; // [esp+30h] [ebp-50h]
  float v20; // [esp+34h] [ebp-4Ch]
  float v21[3]; // [esp+38h] [ebp-48h] BYREF
  float v22[3]; // [esp+44h] [ebp-3Ch] BYREF
  NiMatrix33 v23; // [esp+50h] [ebp-30h] BYREF
  unsigned int v24; // [esp+7Ch] [ebp-4h]

  v0 = (NiNode *)FormHeapAlloc(0xDCu); /*0x50ed7c*/
  v24 = 0; /*0x50ed8a*/
  if ( v0 ) /*0x50ed92*/
    v1 = NiNode::NiNode(v0, 0); /*0x50ed9d*/
  else
    v1 = 0; /*0x50eda1*/
  v24 = 0xFFFFFFFF; /*0x50eda3*/
  VertexColorProperty = (BSShaderProperty *)DebugRender_GetOrCreateVertexColorProperty();// Verified TestSeenData command handler requests DebugRender_GetOrCreateVertexColorProperty. Its table row at B0C028 points to TestSeenData (A508CC) with description "Visually displays the current seen data" (A508A0), confirming the vertex-color property is shared beyond PathGrid debug rendering. /*0x50edab*/
  sub_405680(v1, VertexColorProperty); /*0x50edb3*/
  DwordAtOffset40 = (ExtraDataList *)Shared_GetDwordAtOffset40(reference); /*0x50edc3*/
  if ( TESObjectCELL_IsInterior((TESObjectCELL *)DwordAtOffset40) ) /*0x50edc7*/
  {
    v4 = sub_4CCED0(DwordAtOffset40); /*0x50eddb*/
    if ( v4 ) /*0x50eddf*/
    {
      v15 = reference->vtbl->super.super.super.GetPos(reference)[2]; /*0x50edfa*/
      v5 = *((void (__thiscall **)(BSExtraDataVtbl *, NiNode *, float *, int))v4->Destructor + 1); /*0x50ee00*/
      v21[0] = 0.0; /*0x50ee03*/
      v21[1] = 0.0; /*0x50ee0d*/
      v21[2] = v15; /*0x50ee17*/
      v5(v4, v1, v21, 1); /*0x50ee1d*/
      angleZ = sub_4CCE00(DwordAtOffset40) * dbl_A3D360; /*0x50ee2c*/
      if ( angleZ != 0.0 ) /*0x50ee3f*/
      {
        qmemcpy(&v23, &stru_B26AF0[0xA].unk2C, sizeof(v23)); /*0x50ee53*/
        NiMatrix33_InitRotationZ(&v23, angleZ); /*0x50ee5d*/
        qmemcpy(&v1->members.super.m_localTransform, &v23, 0x24u); /*0x50ee6e*/
      }
    }
  }
  else
  {
    v6 = uGridsToLoad; /*0x50ee75*/
    for ( i = 0; ; ++i ) /*0x50ee7a*/
    {
      v17 = i; /*0x50ee7e*/
      if ( i >= v6 ) /*0x50ee82*/
        break; /*0x50ee82*/
      for ( j = 0; j < v6; ++j ) /*0x50ee88*/
      {
        GridEntry = (ExtraDataList **)GetGridEntry(MEMORY[0xB333A0]->gridCellArray, i, j); /*0x50eea2*/
        v10 = *GridEntry; /*0x50eea7*/
        if ( *GridEntry ) /*0x50eea7*/
        {
          v11 = sub_4CCED0(*GridEntry); /*0x50eeb4*/
          if ( v11 ) /*0x50eeb8*/
          {
            v19 = (float)(TESObjectCELL_GetXCoordinate((TESObjectCELL *)v10) << 0xC); /*0x50eece*/
            v18 = (float)(TESObjectCELL_GetYCoordinate((TESObjectCELL *)v10) << 0xC); /*0x50eef0*/
            v12 = reference->vtbl->super.super.super.GetPos(reference); /*0x50eef4*/
            v13 = *((void (__thiscall **)(BSExtraDataVtbl *, NiNode *, float *, int))v11->Destructor + 1); /*0x50eefb*/
            v20 = v12[2]; /*0x50eefe*/
            v22[0] = v19; /*0x50ef08*/
            v22[1] = v18; /*0x50ef15*/
            v22[2] = v20; /*0x50ef20*/
            v13(v11, v1, v22, 1); /*0x50ef24*/
          }
        }
        v6 = uGridsToLoad; /*0x50ef26*/
        i = v17; /*0x50ef2b*/
      }
    }
  }
  NiAVObject_UpdateNiAVObject((NiAVObject *)v1, 0.0, 1); /*0x50ef4b*/
  NiAVObject_InitializePropertyState((NiAVObject *)v1); /*0x50ef52*/
  sub_440E60(MEMORY[0xB333A0], (int)v1, flt_A37CC8); /*0x50ef68*/
  return 1; /*0x50ef6f*/
}
