// Verified DistantLODLoaderTaskData destructor: frees every TESBoundObject-keyed cell payload/map, releases instancedLODNode (+0x1C) and cellLODBuffer (+0x20), then destroys the embedded map.
void __thiscall DistantLODLoaderTaskData_Destroy(DistantLODLoaderTaskData *this)
{
  unsigned int bucketCount; // ecx
  MEF_U32PointerMapLayout32 *p_cellObjects; // ebp
  unsigned int v4; // eax
  _DWORD *buckets; // edx
  MEF_U32PointerMapEntry32 *v6; // eax
  _DWORD *v7; // esi
  volatile LONG *resource20; // esi
  LONG (__stdcall *v9)(volatile LONG *); // edi
  volatile LONG *resource1C; // esi
  unsigned int v11; // [esp-Ch] [ebp-3Ch]
  unsigned int v12; // [esp-8h] [ebp-38h]
  unsigned int v13; // [esp-4h] [ebp-34h]
  void *valueOut; // [esp+14h] [ebp-1Ch] BYREF
  MEF_U32PointerMapEntry32 *position; // [esp+18h] [ebp-18h] BYREF
  DistantLODLoaderTaskData *v16; // [esp+1Ch] [ebp-14h]
  unsigned int keyOut; // [esp+20h] [ebp-10h] BYREF
  int v18; // [esp+2Ch] [ebp-4h]

  v16 = this; /*0x4bd259*/
  bucketCount = this->cellObjects.bucketCount; /*0x4bd25d*/
  p_cellObjects = (MEF_U32PointerMapLayout32 *)&v16->cellObjects; /*0x4bd260*/
  v4 = 0; /*0x4bd263*/
  v18 = 2; /*0x4bd267*/
  if ( bucketCount ) /*0x4bd26f*/
  {
    buckets = v16->cellObjects.buckets; /*0x4bd274*/
    while ( !*buckets ) /*0x4bd279*/
    {
      ++v4; /*0x4bd27f*/
      ++buckets; /*0x4bd282*/
      if ( v4 >= bucketCount ) /*0x4bd287*/
        goto LABEL_5; /*0x4bd287*/
    }
    v6 = *((MEF_U32PointerMapEntry32 **)v16->cellObjects.buckets + v4); /*0x4bd371*/
  }
  else
  {
LABEL_5:
    v6 = 0; /*0x4bd289*/
  }
  position = v6; /*0x4bd28d*/
  while ( position ) /*0x4bd291*/
  {
    valueOut = 0; /*0x4bd2b1*/
    NiTMap_U32Pointer_GetNextEntry(p_cellObjects, &position, &keyOut, &valueOut); /*0x4bd2b9*/
    v7 = valueOut; /*0x4bd2be*/
    if ( valueOut ) /*0x4bd2c4*/
    {
      v13 = *((_DWORD *)valueOut + 9); /*0x4bd2c9*/
      *((_DWORD *)valueOut + 8) = &NiTArray<float>::`vftable'; /*0x4bd2ca*/
      FormHeapFree(v13); /*0x4bd2cd*/
      v12 = v7[5]; /*0x4bd2d5*/
      v7[4] = &NiTArray<float>::`vftable'; /*0x4bd2d6*/
      FormHeapFree(v12); /*0x4bd2d9*/
      v11 = v7[1]; /*0x4bd2e1*/
      *v7 = &NiTArray<float>::`vftable'; /*0x4bd2e2*/
      FormHeapFree(v11); /*0x4bd2e4*/
      FormHeapFree((unsigned int)v7); /*0x4bd2ea*/
    }
  }
  NiTMap_Clear(p_cellObjects); /*0x4bd2fb*/
  resource20 = (volatile LONG *)this->cellLODBuffer;// Verified DistantLODLoaderTaskData destructor frees the cellObjects map payloads and releases the NiNode scene field at +0x1C and Ni2DBuffer field at +0x20. /*0x4bd300*/
  v9 = InterlockedDecrement; /*0x4bd305*/
  LOBYTE(v18) = 1; /*0x4bd30b*/
  if ( resource20 ) /*0x4bd310*/
  {
    if ( !v9(resource20 + 1) ) /*0x4bd316*/
      (**(void (__thiscall ***)(void *, int))resource20)((void *)resource20, 1); /*0x4bd328*/
  }
  resource1C = (volatile LONG *)this->instancedLODNode; /*0x4bd32a*/
  LOBYTE(v18) = 0; /*0x4bd32f*/
  if ( resource1C ) /*0x4bd334*/
  {
    if ( !v9(resource1C + 1) ) /*0x4bd33a*/
      (**(void (__thiscall ***)(void *, int))resource1C)((void *)resource1C, 1); /*0x4bd34c*/
  }
  v18 = 0xFFFFFFFF; /*0x4bd350*/
  NiTPointerMap<TESBoundObject *,DISTANT_3D_DATA *>::~NiTPointerMap<TESBoundObject *,DISTANT_3D_DATA *>((unsigned int *)p_cellObjects); /*0x4bd358*/
}
