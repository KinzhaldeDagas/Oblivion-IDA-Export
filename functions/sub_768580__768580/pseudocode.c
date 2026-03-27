char __thiscall sub_768580(
        NiDX9Renderer *this,
        NiGeometry *a2,
        NiGeometryData *a3,
        NiSkinInstance *a4,
        NiD3DShaderDeclaration *a5,
        UInt32 a6,
        UInt32 a7)
{
  int v7; // eax
  int v8; // esi
  int v9; // eax
  unsigned __int16 *v10; // esi
  NiGeometryBufferData *v11; // edi
  int v12; // ecx
  unsigned __int16 v13; // dx
  UInt16 *v14; // ebx
  UInt16 *v15; // ebp
  UInt32 v16; // eax
  unsigned int v17; // ebp
  NiVBChip *v18; // eax
  int Unk04; // ebx
  PrePackObject *v20; // esi
  char v21; // al
  bool v22; // zf
  char v24; // [esp+7h] [ebp-15h]
  unsigned __int16 *v26; // [esp+Ch] [ebp-10h]
  int v27; // [esp+10h] [ebp-Ch]
  int v28; // [esp+14h] [ebp-8h] BYREF
  UInt32 StreamCount; // [esp+18h] [ebp-4h]

  v7 = *((_DWORD *)a4 + 3);
  v8 = *(_DWORD *)(v7 + 0xC);
  v9 = *(_DWORD *)(v7 + 8);
  v24 = 1;
  if ( !v9 )
    return 1;
  v10 = (unsigned __int16 *)(v8 + 0x1C);
  v26 = v10;
  v27 = v9;
  do
  {
    v11 = *((NiGeometryBufferData **)v10 + 3);
    if ( !sub_777F10(v11) )
    {
      LOWORD(v12) = v10[3];
      v13 = v10[1];
      v14 = *((UInt16 **)v10 + 0xFFFFFFFE);
      v15 = *((UInt16 **)v10 + 0xFFFFFFFF);
      v16 = *v10;
      v11->VertCount = v16;
      v11->MaxVertCount = v16;
      if ( (_WORD)v12 )
        v12 = (unsigned __int16)v12;
      else
        v12 = 1;
      v11->NumArrays = v12;
      v11->TriCount = v13;
      v11->MaxTriCount = v13;
      v11->IndexArray = v14;
      v11->ArrayLengths = v15;
      if ( sub_7633D0(this, v11, a3, (int)(v10 + 0xFFFFFFF2), (int)a5) )
      {
        v17 = 0;
        StreamCount = v11->StreamCount;
        if ( StreamCount )
        {
          do
          {
            if ( v17 >= v11->StreamCount )
              v18 = 0;
            else
              v18 = v11->VBChip[v17];
            Unk04 = v18->Unk04;
            v20 = (PrePackObject *)FormHeapAlloc(0x24u);
            v20->m_pkPartition = v26 + 0xFFFFFFF2;
            v20->m_pkData = a3;
            v20->m_pkShraderDecl = a5;
            v20->m_uiBonesPerPartition = a6;
            v20->m_pkSkin = a4;
            v20->m_uiBonesPerVertex = a7;
            v20->m_pkNext = 0;
            v20->m_pkBuffData = v11;
            v20->m_uiStream = v17;
            v21 = NiTMap_GetAt(&this->member.PrePackObjects.vtbl, Unk04, &v28);
            v20->m_pkNext = v21 != 0 ? (void *)v28 : 0;
            NiTMap_SetAt(&this->member.PrePackObjects.vtbl, Unk04, (int)v20);
            ++v17;
          }
          while ( v17 < StreamCount );
          v10 = v26;
        }
      }
      else
      {
        v24 = 0;
      }
    }
    v10 += 0x16;
    v22 = v27-- == 1;
    v26 = v10;
  }
  while ( !v22 );
  return v24;
}
