// Verified TESRoad RGRP format is 12-byte target XYZ positions flattened across each source point's edge count. This differs from TESPathGrid PGRR, which stores u16 target point indices; PGRP row size is shared but the connection encoding is not.
unsigned int __thiscall TESRoad_SaveFormRecord(TESRoad *this, bool modifiedOnly, int recordFlags)
{
  char v3; // bp
  int v4; // edi
  TESRoad *v5; // esi
  unsigned int v6; // eax
  char *v7; // ebx
  TESConnectedPoint **v8; // edi
  char *v9; // esi
  TESConnectedPoint *v10; // ebp
  int v11; // ebx
  char *i; // eax
  NiPoint3 *v13; // eax
  float x; // ecx
  void *v15; // edi
  int v16; // ebx
  char **v17; // ebp
  char *ConnectionList; // esi
  NiPoint3 *v19; // edi
  size_t v21; // [esp-Ch] [ebp-30h]
  size_t v22; // [esp-Ch] [ebp-30h]
  MEF_U32PointerMapEntry32 *position; // [esp+8h] [ebp-1Ch] BYREF
  TESRoad *v24; // [esp+Ch] [ebp-18h]
  unsigned int v25; // [esp+10h] [ebp-14h]
  int v26; // [esp+14h] [ebp-10h]
  void *valueOut; // [esp+18h] [ebp-Ch] BYREF
  void *v28; // [esp+1Ch] [ebp-8h] BYREF
  unsigned int keyOut; // [esp+20h] [ebp-4h] BYREF

  v5 = this; /*0x4e87c5*/
  v24 = this; /*0x4e87c7*/
  TESForm_InitializeFormRecord((TESForm *)this, v3); /*0x4e87cb*/
  v6 = *((_DWORD *)v5 + 6); /*0x4e87d0*/
  if ( v6 )
  {
    if ( (*((_DWORD *)v5 + 2) & 0x20) == 0 )
    {
      HIDWORD(v21) = v4; /*0x4e87f9*/
      v7 = (char *)FormHeapAlloc((unsigned __int64)v6 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v6);
      v28 = v7; /*0x4e880c*/
      v26 = 0; /*0x4e8810*/
      v25 = 0; /*0x4e8814*/
      for ( position = (MEF_U32PointerMapEntry32 *)NiTMapBase_GetFirstNode((unsigned int *)v5 + 7); /*0x4e8823*/
            position;
            v7 = (char *)v28 )
      {
        valueOut = 0; /*0x4e8842*/
        NiTMap_U32Pointer_GetNextEntry((MEF_U32PointerMapLayout32 *)((char *)v5 + 0x1C), &position, &keyOut, &valueOut); /*0x4e8846*/
        v8 = (TESConnectedPoint **)valueOut; /*0x4e884b*/
        if ( valueOut ) /*0x4e8851*/
        {
          v9 = &v7[0x10 * v26]; /*0x4e885a*/
          do /*0x4e88ba*/
          {
            if ( !v8[1] && !*v8 ) /*0x4e8866*/
              break; /*0x4e8869*/
            v10 = *v8; /*0x4e886b*/
            v11 = 0; /*0x4e886f*/
            for ( i = PathGraphNode_GetConnections((char *)*v8); i; i = *((char **)i + 1) ) /*0x4e8878*/
            {
              if ( *(_DWORD *)i ) /*0x4e8880*/
                ++v11; /*0x4e8885*/
            }
            v13 = PathGraphNode_GetPosition(v10); /*0x4e8891*/
            x = v13->x; /*0x4e8896*/
            v25 += v11; /*0x4e8898*/
            ++v26; /*0x4e889c*/
            *(float *)v9 = x; /*0x4e88a1*/
            *((_DWORD *)v9 + 1) = LODWORD(v13->y); /*0x4e88a6*/
            *((_DWORD *)v9 + 2) = LODWORD(v13->z); /*0x4e88ac*/
            v9[0xC] = v11; /*0x4e88af*/
            v8 = (TESConnectedPoint **)v8[1]; /*0x4e88b2*/
            v9 += 0x10; /*0x4e88b5*/
          }
          while ( v8 ); /*0x4e88ba*/
          v5 = v24; /*0x4e88bc*/
        }
      }
      LODWORD(v21) = 0x10 * *((_DWORD *)v5 + 6); /*0x4e88d6*/
      TESForm_PutFormRecordChunkData(0x50524750, v7, v21); /*0x4e88dd*/
      FormHeapFree((unsigned int)v7); /*0x4e88e3*/
      v15 = (void *)FormHeapAlloc((0xC * (unsigned __int64)v25) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v25);
      valueOut = v15; /*0x4e890a*/
      v16 = 0; /*0x4e890e*/
      position = (MEF_U32PointerMapEntry32 *)NiTMapBase_GetFirstNode((unsigned int *)v5 + 7); /*0x4e8917*/
      if ( position ) /*0x4e891b*/
      {
        do /*0x4e89af*/
        {
          v28 = 0; /*0x4e8933*/
          NiTMap_U32Pointer_GetNextEntry((MEF_U32PointerMapLayout32 *)((char *)v5 + 0x1C), &position, &keyOut, &v28); /*0x4e893b*/
          v17 = (char **)v28; /*0x4e8940*/
          if ( v28 ) /*0x4e8946*/
          {
            do /*0x4e89a8*/
            {
              if ( !v17[1] && !*v17 ) /*0x4e894e*/
                break; /*0x4e8952*/
              ConnectionList = PathGraphNode_GetConnections(*v17); /*0x4e895c*/
              if ( ConnectionList ) /*0x4e8960*/
              {
                v19 = (NiPoint3 *)((char *)valueOut + 0xC * v16); /*0x4e8969*/
                do /*0x4e899d*/
                {
                  if ( !*((_DWORD *)ConnectionList + 1) && !*(_DWORD *)ConnectionList ) /*0x4e8976*/
                    break; /*0x4e8979*/
                  *v19 = *PathGraphNode_GetPosition(*(TESConnectedPoint **)ConnectionList); /*0x4e8984*/
                  ConnectionList = *((char **)ConnectionList + 1); /*0x4e8992*/
                  ++v16; /*0x4e8995*/
                  ++v19; /*0x4e8998*/
                }
                while ( ConnectionList ); /*0x4e899d*/
              }
              v17 = (char **)v17[1]; /*0x4e899f*/
              v5 = v24; /*0x4e89a4*/
            }
            while ( v17 ); /*0x4e89a8*/
          }
        }
        while ( position ); /*0x4e89af*/
        v15 = valueOut; /*0x4e89b5*/
      }
      LODWORD(v22) = 0xC * v25; /*0x4e89c4*/
      TESForm_PutFormRecordChunkData(0x52524750, v15, v22); /*0x4e89cb*/
      FormHeapFree((unsigned int)v15); /*0x4e89d1*/
    }
  }
  return TESForm_FinalizeFormRecord((TESForm *)v5); /*0x4e89dd*/
}
