// DX11 V194 audit (2026-09-25): preserve this engine geometry-precache/prepack path. The inspected bodies perform geometry-group/buffer preparation and/or queue per-stream PrePackObject records; this is distinct from the optional IDirect3DResource9::PreLoad residency hint. No direct COM vtable +0x24 call was observed in these bodies; no claim is made about all transitive callees.
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
  NiD3DShaderDeclaration *v21; // [esp-4h] [ebp-10h]
  char v22; // [esp+18h] [ebp+Ch]
  NiTMap_void *p_PrePackObjects; // [esp+1Ch] [ebp+10h]
  UInt32 StreamCount; // [esp+20h] [ebp+14h]

  BuffData = a3->member.BuffData; /*0x768477*/
  if ( NiGeometryBufferData_HasLiveStreams(BuffData) ) /*0x76847e*/
    return 1; /*0x768489*/
  v12 = a3->__vftable->GetNumVertices(a3); /*0x768496*/
  BuffData->MaxVertCount = a3->member.m_usVertices; /*0x7684aa*/
  BuffData->VertCount = v12; /*0x7684b1*/
  BuffData->IndexArray = a6; /*0x7684b9*/
  v21 = a9; /*0x7684c0*/
  BuffData->MaxTriCount = (unsigned __int16)a5; /*0x7684c3*/
  v13 = (unsigned __int16)a8; /*0x7684c6*/
  BuffData->TriCount = a4; /*0x7684cb*/
  BuffData->ArrayLengths = a7; /*0x7684d6*/
  BuffData->NumArrays = v13; /*0x7684d9*/
  result = sub_7633D0(this, BuffData, a3, 0, (int)v21); /*0x7684dc*/
  v22 = result; /*0x7684e3*/
  if ( result )
  {
    v14 = 0; /*0x7684f1*/
    StreamCount = BuffData->StreamCount; /*0x7684f5*/
    if ( StreamCount )
    {
      p_PrePackObjects = &this->member.PrePackObjects; /*0x768501*/
      do
      {
        if ( v14 >= BuffData->StreamCount ) /*0x768508*/
          v15 = 0; /*0x768512*/
        else
          v15 = BuffData->VBChip[v14]; /*0x76850d*/
        Unk04 = v15->Unk04; /*0x768514*/
        v17 = (PrePackObject *)FormHeapAlloc(0x24u); /*0x768519*/
        v18 = a9; /*0x76851e*/
        v19 = v17; /*0x768522*/
        v17->m_pkData = a3; /*0x76852f*/
        v17->m_pkShraderDecl = v18; /*0x768534*/
        v17->m_pkSkin = 0; /*0x76853c*/
        v17->m_pkPartition = 0; /*0x76853f*/
        v17->m_uiBonesPerPartition = 0; /*0x768542*/
        v17->m_uiBonesPerVertex = 0; /*0x768545*/
        v17->m_pkBuffData = BuffData; /*0x768548*/
        v17->m_uiStream = v14; /*0x76854b*/
        v20 = NiTMap_GetAt(p_PrePackObjects, Unk04, &a8); /*0x76854e*/
        v19->m_pkNext = v20 != 0 ? (void *)a8 : 0;
        NiTMap_SetAt(p_PrePackObjects, Unk04, (int)v19); /*0x768564*/
        ++v14; /*0x768569*/
      }
      while ( v14 < StreamCount );
      return v22; /*0x768572*/
    }
  }
  return result; /*0x768487*/
}
