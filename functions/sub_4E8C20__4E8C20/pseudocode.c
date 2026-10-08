// Verified: TESRoad destructor helper traverses its 37-bucket map of BSSimpleList<TESConnectedPoint*> values, calls the per-entry cleanup routine for each point, frees each list node and list header, clears the map, and zeros TESRoad+0x18. Exact TESConnectedPoint layout/cleanup semantics remain Unknown.
int __thiscall TESRoad_ClearConnectedPointMap(TESRoad *this)
{
  TESRoad *v1; // edi
  unsigned int v2; // edx
  MEF_U32PointerMapLayout32 *v3; // ebp
  unsigned int v4; // eax
  _DWORD *v5; // esi
  _DWORD *v6; // ecx
  MEF_U32PointerMapEntry32 *v7; // eax
  unsigned int **v8; // esi
  unsigned int *v9; // edi
  unsigned int **v10; // eax
  int result; // eax
  void *valueOut; // [esp+Ch] [ebp-10h] BYREF
  MEF_U32PointerMapEntry32 *position; // [esp+10h] [ebp-Ch] BYREF
  TESRoad *v14; // [esp+14h] [ebp-8h]
  unsigned int keyOut; // [esp+18h] [ebp-4h] BYREF

  v1 = this; /*0x4e8c26*/
  v2 = *((_DWORD *)this + 8); /*0x4e8c28*/
  v3 = (MEF_U32PointerMapLayout32 *)((char *)this + 0x1C); /*0x4e8c2b*/
  v4 = 0; /*0x4e8c2e*/
  v14 = this; /*0x4e8c32*/
  if ( v2 ) /*0x4e8c36*/
  {
    v5 = *((_DWORD **)this + 9); /*0x4e8c38*/
    v6 = v5; /*0x4e8c3b*/
    while ( !*v6 ) /*0x4e8c43*/
    {
      ++v4; /*0x4e8c45*/
      ++v6; /*0x4e8c48*/
      if ( v4 >= v2 ) /*0x4e8c4d*/
        goto LABEL_5; /*0x4e8c4d*/
    }
    v7 = (MEF_U32PointerMapEntry32 *)v5[v4]; /*0x4e8cc3*/
  }
  else
  {
LABEL_5:
    v7 = 0; /*0x4e8c4f*/
  }
  position = v7; /*0x4e8c53*/
  if ( v7 ) /*0x4e8c57*/
  {
    do /*0x4e8cde*/
    {
      valueOut = 0; /*0x4e8c71*/
      NiTMap_U32Pointer_GetNextEntry(v3, &position, &keyOut, &valueOut); /*0x4e8c79*/
      v8 = (unsigned int **)valueOut; /*0x4e8c7e*/
      if ( valueOut ) /*0x4e8c84*/
      {
        while ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)v8) ) /*0x4e8c8f*/
        {
          v9 = *v8; /*0x4e8c91*/
          if ( *v8 ) /*0x4e8c91*/
          {
            sub_4BEFA0(*v8); /*0x4e8c99*/
            FormHeapFree((unsigned int)v9); /*0x4e8c9f*/
          }
          v10 = (unsigned int **)v8[1]; /*0x4e8ca7*/
          if ( v10 ) /*0x4e8cac*/
          {
            v8[1] = v10[1]; /*0x4e8cb1*/
            *v8 = *v10; /*0x4e8cb7*/
            FormHeapFree((unsigned int)v10); /*0x4e8cb9*/
          }
          else
          {
            *v8 = 0; /*0x4e8cc8*/
          }
        }
        FormHeapFree((unsigned int)v8); /*0x4e8cd1*/
      }
    }
    while ( position ); /*0x4e8cde*/
    v1 = v14; /*0x4e8ce0*/
  }
  result = NiTMap_Clear(v3); /*0x4e8ce6*/
  *((_DWORD *)v1 + 6) = 0; /*0x4e8ceb*/
  return result; /*0x4e8cf2*/
}
