// DX11 V194 audit (2026-09-25): preserve this engine geometry-precache/prepack path. The inspected bodies perform geometry-group/buffer preparation and/or queue per-stream PrePackObject records; this is distinct from the optional IDirect3DResource9::PreLoad residency hint. No direct COM vtable +0x24 call was observed in these bodies; no claim is made about all transitive callees.
char __thiscall NiDX9Renderer_QueueSkinnedGeometryPrepack(
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

  v7 = *((_DWORD *)a4 + 3); /*0x768587*/
  v8 = *(_DWORD *)(v7 + 0xC); /*0x76858b*/
  v9 = *(_DWORD *)(v7 + 8); /*0x76858e*/
  v24 = 1; /*0x768599*/
  if ( !v9 ) /*0x76859d*/
    return 1; /*0x7686f0*/
  v10 = (unsigned __int16 *)(v8 + 0x1C); /*0x7685a4*/
  v26 = v10; /*0x7685a8*/
  v27 = v9; /*0x7685ac*/
  do
  {
    v11 = *((NiGeometryBufferData **)v10 + 3); /*0x7685b1*/
    if ( !NiGeometryBufferData_HasLiveStreams(v11) )
    {
      LOWORD(v12) = v10[3]; /*0x7685c6*/
      v13 = v10[1]; /*0x7685cd*/
      v14 = *((UInt16 **)v10 + 0xFFFFFFFE); /*0x7685d1*/
      v15 = *((UInt16 **)v10 + 0xFFFFFFFF); /*0x7685d4*/
      v16 = *v10; /*0x7685d7*/
      v11->VertCount = v16; /*0x7685da*/
      v11->MaxVertCount = v16; /*0x7685dd*/
      if ( (_WORD)v12 ) /*0x7685e0*/
        v12 = (unsigned __int16)v12; /*0x7685e9*/
      else
        v12 = 1; /*0x7685e2*/
      v11->NumArrays = v12; /*0x7685f3*/
      v11->TriCount = v13; /*0x7685ff*/
      v11->MaxTriCount = v13; /*0x768602*/
      v11->IndexArray = v14; /*0x76860b*/
      v11->ArrayLengths = v15; /*0x76860e*/
      if ( sub_7633D0(this, v11, a3, (int)(v10 + 0xFFFFFFF2), (int)a5) )
      {
        v17 = 0; /*0x768621*/
        StreamCount = v11->StreamCount; /*0x768625*/
        if ( StreamCount )
        {
          do
          {
            if ( v17 >= v11->StreamCount ) /*0x768633*/
              v18 = 0; /*0x76863d*/
            else
              v18 = v11->VBChip[v17]; /*0x768638*/
            Unk04 = v18->Unk04; /*0x76863f*/
            v20 = (PrePackObject *)FormHeapAlloc(0x24u); /*0x768651*/
            v20->m_pkPartition = v26 + 0xFFFFFFF2; /*0x76865a*/
            v20->m_pkData = a3; /*0x768661*/
            v20->m_pkShraderDecl = a5; /*0x76866a*/
            v20->m_uiBonesPerPartition = a6; /*0x76866d*/
            v20->m_pkSkin = a4; /*0x768678*/
            v20->m_uiBonesPerVertex = a7; /*0x768687*/
            v20->m_pkNext = 0; /*0x76868a*/
            v20->m_pkBuffData = v11; /*0x768691*/
            v20->m_uiStream = v17; /*0x768694*/
            v21 = NiTMap_GetAt(&this->member.PrePackObjects.vtbl, Unk04, &v28); /*0x768697*/
            v20->m_pkNext = v21 != 0 ? (void *)v28 : 0;
            NiTMap_SetAt(&this->member.PrePackObjects.vtbl, Unk04, (int)v20); /*0x7686b3*/
            ++v17; /*0x7686b8*/
          }
          while ( v17 < StreamCount );
          v10 = v26; /*0x7686c5*/
        }
      }
      else
      {
        v24 = 0; /*0x7686cb*/
      }
    }
    v10 += 0x16; /*0x7686d0*/
    v22 = v27-- == 1; /*0x7686d3*/
    v26 = v10; /*0x7686d8*/
  }
  while ( !v22 );
  return v24; /*0x7686e9*/
}
