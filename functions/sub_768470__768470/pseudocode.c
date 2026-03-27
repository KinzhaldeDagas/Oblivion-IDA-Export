char __thiscall sub_768470(
        NiDX9Renderer *this,
        NiGeometry *a2,
        NiGeometryData *a3,
        unsigned __int16 a4,
        _DWORD *a5,
        UInt16 *a6,
        UInt16 *a7,
        int a8,
        NiD3DShaderDeclaration *a9)
{
  NiGeometryBufferData *BuffData; // edi
  char result; // al
  UInt16 v12; // ax
  UInt32 v13; // eax
  unsigned int v14; // ebp
  NiVBChip *v15; // eax
  int Unk04; // ebx
  PrePackObject *v17; // eax
  NiD3DShaderDeclaration *v18; // ecx
  PrePackObject *v19; // esi
  char v20; // al
  int v21; // [esp-4h] [ebp-10h]
  char v22; // [esp+18h] [ebp+Ch]
  NiTMap_void *p_PrePackObjects; // [esp+1Ch] [ebp+10h]
  UInt32 StreamCount; // [esp+20h] [ebp+14h]

  BuffData = a3->member.BuffData;
  if ( sub_777F10(BuffData) )
    return 1;
  v12 = a3->__vftable->GetNumVertices(a3);
  BuffData->MaxVertCount = a3->member.m_usVertices;
  BuffData->VertCount = v12;
  BuffData->IndexArray = a6;
  v21 = (int)a9;
  BuffData->MaxTriCount = (unsigned __int16)a5;
  v13 = (unsigned __int16)a8;
  BuffData->TriCount = a4;
  BuffData->ArrayLengths = a7;
  BuffData->NumArrays = v13;
  result = sub_7633D0(this, BuffData, a3, 0, v21);
  v22 = result;
  if ( result )
  {
    v14 = 0;
    StreamCount = BuffData->StreamCount;
    if ( StreamCount )
    {
      p_PrePackObjects = &this->member.PrePackObjects;
      do
      {
        if ( v14 >= BuffData->StreamCount )
          v15 = 0;
        else
          v15 = BuffData->VBChip[v14];
        Unk04 = v15->Unk04;
        v17 = (PrePackObject *)FormHeapAlloc(0x24u);
        v18 = a9;
        v19 = v17;
        v17->m_pkData = a3;
        v17->m_pkShraderDecl = v18;
        v17->m_pkSkin = 0;
        v17->m_pkPartition = 0;
        v17->m_uiBonesPerPartition = 0;
        v17->m_uiBonesPerVertex = 0;
        v17->m_pkBuffData = BuffData;
        v17->m_uiStream = v14;
        v20 = NiTMap_GetAt(p_PrePackObjects, Unk04, &a8);
        v19->m_pkNext = v20 != 0 ? (void *)a8 : 0;
        NiTMap_SetAt(p_PrePackObjects, Unk04, (int)v19);
        ++v14;
      }
      while ( v14 < StreamCount );
      return v22;
    }
  }
  return result;
}
