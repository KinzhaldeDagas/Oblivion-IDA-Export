// Verified: consumes DistantLODLoaderTaskData, walks its form-pointer -> DistantLODCellObjectData map, dispatches each key through virtual slot +0x11C, then frees the three arrays and clears the map. The external .lod parser RTTI-casts keys to TESBoundObject; the embedded REFR parser stores a NAME-resolved TESForm* without a local cast, so that path's bound-object invariant is Probable, not Verified.
void __stdcall DistantLODLoaderTaskData_CleanupCellObjects(DistantLODLoaderTaskData *taskData)
{
  DistantLODLoaderTaskData *v1; // edi
  unsigned int v2; // eax
  unsigned __int16 cellY; // dx
  _DWORD *v4; // esi
  int v5; // eax
  _DWORD *resource20; // edi
  NiAVObject *v7; // esi
  unsigned int v8; // [esp+24h] [ebp-2Ch]
  unsigned int a2; // [esp+28h] [ebp-28h]
  unsigned int v10; // [esp+2Ch] [ebp-24h]
  void *valueOut; // [esp+40h] [ebp-10h] BYREF
  MEF_U32PointerMapEntry32 *position; // [esp+44h] [ebp-Ch] BYREF
  int v13; // [esp+48h] [ebp-8h]
  unsigned int v14; // [esp+4Ch] [ebp-4h]

  v1 = taskData; /*0x4bcef5*/
  if ( taskData && taskData->parseComplete && taskData->cellLODBuffer && taskData->instancedLODNode ) /*0x4bcf15*/
  {
    v2 = sub_7B2110(taskData->cellX, taskData->cellY); /*0x4bcf29*/
    cellY = v1->cellY; /*0x4bcf2e*/
    v14 = v2; /*0x4bcf32*/
    v13 = TESObjectCELL_PackExteriorGroupLabel(v1->cellX, cellY); /*0x4bcf48*/
    position = (MEF_U32PointerMapEntry32 *)NiTMapBase_GetFirstNode((unsigned int *)&v1->cellObjects); /*0x4bcf53*/
    while ( position ) /*0x4bcf57*/
    {
      taskData = 0; /*0x4bcf71*/
      valueOut = 0; /*0x4bcf75*/
      NiTMap_U32Pointer_GetNextEntry( /*0x4bcf79*/
        (MEF_U32PointerMapLayout32 *)&v1->cellObjects,
        &position,
        (unsigned int *)&taskData,
        &valueOut);
      v4 = valueOut; /*0x4bcf84*/
      if ( !taskData ) /*0x4bcf88*/
        goto LABEL_10; /*0x4bcf88*/
      if ( valueOut ) /*0x4bcf8c*/
      {
        v5 = *((_DWORD *)valueOut + 0xC); /*0x4bcf8e*/
        if ( v5 ) /*0x4bcf93*/
          (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, int, unsigned int, int, void *, void *))(taskData->cellX + 0x11C))( /*0x4bcfbc*/
            *((_DWORD *)valueOut + 5),
            *((_DWORD *)valueOut + 1),
            *((_DWORD *)valueOut + 9),
            v5,
            v14,
            v13,
            v1->instancedLODNode,
            v1->cellLODBuffer);                 // Verified virtual dispatch from each map key through vtable +0x11C with parsed arrays/count and cell context. External .lod entries are locally RTTI-verified TESBoundObject; embedded CELL/REFR entries are TESForm* resolved from NAME with no local cast. Probable: embedded references satisfy the same bound-object callback contract, supported by REFR baseForm serialization and all consumers.
LABEL_10:
        if ( v4 ) /*0x4bcfc2*/
        {
          v10 = v4[9]; /*0x4bcfc7*/
          v4[8] = &NiTArray<float>::`vftable'; /*0x4bcfc8*/
          FormHeapFree(v10); /*0x4bcfcf*/
          a2 = v4[5]; /*0x4bcfd7*/
          v4[4] = &NiTArray<float>::`vftable'; /*0x4bcfd8*/
          FormHeapFree(a2); /*0x4bcfdf*/
          v8 = v4[1]; /*0x4bcfe7*/
          *v4 = &NiTArray<float>::`vftable'; /*0x4bcfe8*/
          FormHeapFree(v8); /*0x4bcfee*/
          FormHeapFree((unsigned int)v4); /*0x4bcff4*/
        }
      }
    }
    NiTMap_Clear(&v1->cellObjects.vtable); /*0x4bd006*/
    resource20 = v1->cellLODBuffer; /*0x4bd00d*/
    v7 = *(NiAVObject **)&MEMORY[0xB33E90][0x594]; /*0x4bd014*/
    if ( resource20[1] > 2u ) /*0x4bd01a*/
      ((void (__thiscall *)(NiAVObject *, _DWORD *, int))v7->vtbl[1].super.super.Destructor)(v7, resource20, 1); /*0x4bd029*/
    NiAVObject_UpdateNiAVObject(v7, 0.0, 1); /*0x4bd035*/
    NiAVObject_InitializePropertyState(v7); /*0x4bd03c*/
  }
}
