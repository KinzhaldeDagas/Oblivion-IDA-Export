//
// DX11 authority audit 2026-10-01: verified NiDX9Renderer vtable A88EA4+B4 target. NiGeometryData destructor 7291E0 calls 7014A0, which dispatches this PurgeGeometryData virtual. If bufferData/stream/chip exists, 763FE0 enters renderer+80 then precache+100, removes every matching data pointer from linked prepack objects (next +20), frees records, then 764040 releases +100 before +80. Crucially, geometryGroupMgr renderer+8A0 virtual+1C is invoked AFTER this local lock interval and may also run when the stream/chip branch was skipped. Therefore those lock helpers alone do not establish lifetime/exclusion for all geometry-group teardown. Verified homologous Fallout NiXenonRenderer::PurgeGeometryData 827A9D58: same guarded prepack walk and unlocked final manager virtual+1C, but its buffer/chip/prepack/manager offsets differ (PPC manager+70C vs Oblivion+8A0).
void __thiscall NiDX9Renderer_PurgeGeometryData(NiDX9Renderer *this, NiGeometryData *data)
{
  NiGeometryData *v2; // ebp
  NiDX9Renderer *v3; // ebx
  NiGeometryBufferData *v4; // esi
  UInt32 StreamCount; // eax
  UInt32 v6; // edi
  int Unk04; // ebp
  unsigned int v8; // esi
  unsigned int v9; // ebx
  unsigned int v10; // edi
  NiTMap_void *p_PrePackObjects; // ecx
  UInt32 v12; // eax
  unsigned int v14; // [esp+Ch] [ebp-Ch] BYREF
  NiGeometryBufferData *BuffData; // [esp+10h] [ebp-8h]
  int v16; // [esp+14h] [ebp-4h]

  v2 = data; /*0x767865*/
  v3 = this; /*0x76786b*/
  if ( data ) /*0x767871*/
  {
    BuffData = data->member.BuffData; /*0x76787d*/
    v4 = BuffData; /*0x767878*/
    if ( BuffData ) /*0x767881*/
    {
      if ( BuffData->StreamCount ) /*0x767887*/
      {
        if ( *BuffData->VBChip ) /*0x767894*/
        {
          NiDX9Renderer_EnterRendererAndPrecache(this); /*0x76789e*/
          StreamCount = BuffData->StreamCount; /*0x7678a3*/
          v6 = 0; /*0x7678a6*/
          v16 = 0; /*0x7678aa*/
          if ( StreamCount ) /*0x7678ae*/
          {
            do /*0x767963*/
            {
              Unk04 = v4->VBChip[v6]->Unk04; /*0x7678c2*/
              v14 = 0; /*0x7678d1*/
              if ( NiTMap_GetAt(&v3->member.PrePackObjects.vtbl, Unk04, &v14) ) /*0x7678d9*/
              {
                v8 = v14; /*0x7678e2*/
                v9 = 0; /*0x7678e6*/
                while ( v8 ) /*0x7678ea*/
                {
                  if ( *(NiGeometryData **)v8 == data ) /*0x7678f6*/
                  {
                    v10 = 0; /*0x7678f8*/
                    if ( v9 ) /*0x7678fc*/
                    {
                      *(_DWORD *)(v9 + 0x20) = *(_DWORD *)(v8 + 0x20); /*0x767901*/
                      v10 = *(_DWORD *)(v8 + 0x20); /*0x767904*/
                    }
                    else
                    {
                      p_PrePackObjects = &this->member.PrePackObjects; /*0x76790d*/
                      if ( *(_DWORD *)(v8 + 0x20) ) /*0x767913*/
                      {
                        NiTMap_SetAt(p_PrePackObjects, Unk04, *(_DWORD *)(v8 + 0x20)); /*0x76791e*/
                        v10 = *(_DWORD *)(v8 + 0x20); /*0x767923*/
                      }
                      else
                      {
                        NiTMap_RemoveAt(p_PrePackObjects, Unk04); /*0x767929*/
                      }
                    }
                    *(_DWORD *)(v8 + 0x20) = 0; /*0x76792f*/
                    FormHeapFree(v8); /*0x767936*/
                    v8 = v10; /*0x76793b*/
                    v6 = v16; /*0x76793d*/
                  }
                  else
                  {
                    v9 = v8; /*0x767946*/
                    v8 = *(_DWORD *)(v8 + 0x20); /*0x767948*/
                  }
                }
                v4 = BuffData; /*0x76794f*/
                v3 = this; /*0x767953*/
              }
              v12 = v4->StreamCount; /*0x767957*/
              v16 = ++v6; /*0x76795f*/
            }
            while ( v6 < v12 ); /*0x767963*/
            v2 = data; /*0x767969*/
          }
          NiDX9Renderer_LeavePrecacheAndRenderer(v3); /*0x76796f*/
        }
      }
      (*(void (__thiscall **)(NiGeometryGroupManager *, NiGeometryData *, _DWORD))(*(_DWORD *)v3->member.geometryGroupMgr /*0x767983*/
                                                                                 + 0x1C))(
        v3->member.geometryGroupMgr,
        v2,
        0);
    }
  }
}
