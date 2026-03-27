void __thiscall sub_767860(NiDX9Renderer *this, NiGeometryData *a2)
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

  v2 = a2;
  v3 = this;
  if ( a2 )
  {
    BuffData = a2->member.BuffData;
    v4 = BuffData;
    if ( BuffData )
    {
      if ( BuffData->StreamCount )
      {
        if ( *BuffData->VBChip )
        {
          sub_763FE0(this);
          StreamCount = BuffData->StreamCount;
          v6 = 0;
          v16 = 0;
          if ( StreamCount )
          {
            do
            {
              Unk04 = v4->VBChip[v6]->Unk04;
              v14 = 0;
              if ( NiTMap_GetAt(&v3->member.PrePackObjects.vtbl, Unk04, &v14) )
              {
                v8 = v14;
                v9 = 0;
                while ( v8 )
                {
                  if ( *(NiGeometryData **)v8 == a2 )
                  {
                    v10 = 0;
                    if ( v9 )
                    {
                      *(_DWORD *)(v9 + 0x20) = *(_DWORD *)(v8 + 0x20);
                      v10 = *(_DWORD *)(v8 + 0x20);
                    }
                    else
                    {
                      p_PrePackObjects = &this->member.PrePackObjects;
                      if ( *(_DWORD *)(v8 + 0x20) )
                      {
                        NiTMap_SetAt(p_PrePackObjects, Unk04, *(_DWORD *)(v8 + 0x20));
                        v10 = *(_DWORD *)(v8 + 0x20);
                      }
                      else
                      {
                        NiTMap_RemoveAt(p_PrePackObjects, Unk04);
                      }
                    }
                    *(_DWORD *)(v8 + 0x20) = 0;
                    FormHeapFree(v8);
                    v8 = v10;
                    v6 = v16;
                  }
                  else
                  {
                    v9 = v8;
                    v8 = *(_DWORD *)(v8 + 0x20);
                  }
                }
                v4 = BuffData;
                v3 = this;
              }
              v12 = v4->StreamCount;
              v16 = ++v6;
            }
            while ( v6 < v12 );
            v2 = a2;
          }
          sub_764040(v3);
        }
      }
      (*(void (__thiscall **)(NiGeometryGroupManager *, NiGeometryData *, _DWORD))(*(_DWORD *)v3->member.geometryGroupMgr
                                                                                 + 0x1C))(
        v3->member.geometryGroupMgr,
        v2,
        0);
    }
  }
}
