// Verified NiD3DShader_CreateSCMExtraData: removes the prior named cache, counts attribute-kind30000000 entries in shader-owned and pass-owned maps, creates NiSCMExtraData when needed and prepopulates 8-byte key/extra-pointer arrays before attaching it to the geometry. The render wrapper later resets cursors, and attribute callbacks consume the cache. Fallout AddEntry is an architectural guide; preserve Oblivion two-stage offsets and actual key generation.
char __cdecl NiD3DShader_CreateSCMExtraData(NiD3DShader *shader, NiObjectNET *geometry)
{
  NiD3DShader *v2; // ebx
  NiD3DShaderConstantMap *VertexConstantMap; // eax
  unsigned int v4; // esi
  unsigned int v5; // ebp
  unsigned int numObjs; // edi
  int v7; // eax
  NiD3DShaderConstantMap *PixelConstantMap; // eax
  unsigned int v9; // edi
  unsigned int i; // esi
  int v11; // eax
  unsigned int end; // edi
  int v13; // eax
  int v14; // ebp
  unsigned __int16 *v15; // edi
  unsigned int v16; // ebx
  unsigned int j; // esi
  int v18; // eax
  unsigned __int16 *v19; // edi
  unsigned int v20; // ebx
  unsigned int k; // esi
  int v22; // eax
  NiSCMExtraData *v23; // eax
  unsigned int *v24; // esi
  int v25; // eax
  NiD3DShaderConstantMap *v26; // eax
  unsigned int m; // ebx
  int v28; // eax
  int v29; // edi
  NiExtraData *ExtraData; // eax
  NiD3DShaderConstantMap *v31; // eax
  unsigned int v32; // ebp
  unsigned int n; // ebx
  int v34; // eax
  int v35; // edi
  NiExtraData *v36; // eax
  unsigned __int16 *v37; // ebp
  unsigned int v38; // ebx
  int v39; // eax
  int v40; // edi
  NiExtraData *v41; // eax
  unsigned __int16 *v42; // ebp
  unsigned int v43; // ebx
  int v44; // eax
  int v45; // edi
  NiExtraData *v46; // eax
  unsigned int pixelCapacity; // [esp+18h] [ebp-14h]
  unsigned int ii; // [esp+1Ch] [ebp-10h]
  int v50; // [esp+20h] [ebp-Ch]
  int v51; // [esp+20h] [ebp-Ch]
  unsigned int jj; // [esp+20h] [ebp-Ch]
  unsigned int v53; // [esp+24h] [ebp-8h]
  unsigned int v54; // [esp+24h] [ebp-8h]
  unsigned int v55; // [esp+28h] [ebp-4h]

  sub_6FFAC0(geometry, off_B29F84); /*0x77a5c1*/
  v2 = shader; /*0x77a5c6*/
  VertexConstantMap = shader->member.VertexConstantMap; /*0x77a5ca*/
  v4 = 0; /*0x77a5cd*/
  v5 = 0; /*0x77a5cf*/
  v50 = 0; /*0x77a5d3*/
  pixelCapacity = 0; /*0x77a5d7*/
  ii = 0; /*0x77a5db*/
  if ( VertexConstantMap ) /*0x77a5df*/
  {
    numObjs = VertexConstantMap->Entries.numObjs; /*0x77a5e1*/
    if ( VertexConstantMap->Entries.numObjs ) /*0x77a5e1*/
    {
      do /*0x77a618*/
      {
        v7 = ((int (__thiscall *)(NiD3DShaderConstantMap *, unsigned int))shader->member.VertexConstantMap->_vtbl->sub_9A8E20)( /*0x77a5f9*/
               shader->member.VertexConstantMap,
               v4);
        if ( v7 ) /*0x77a5fd*/
        {
          if ( (*(_DWORD *)(v7 + 0x14) & 0xF0000000) == 0x30000000 ) /*0x77a60e*/
            ++v5; /*0x77a610*/
        }
        ++v4; /*0x77a613*/
      }
      while ( v4 < numObjs ); /*0x77a618*/
    }
    v50 = v5 * shader->member.Passes.end; /*0x77a621*/
    v5 = v50; /*0x77a625*/
  }
  PixelConstantMap = shader->member.PixelConstantMap; /*0x77a627*/
  if ( PixelConstantMap ) /*0x77a62c*/
  {
    v9 = PixelConstantMap->Entries.numObjs; /*0x77a62e*/
    for ( i = 0; i < v9; ++i ) /*0x77a62e*/
    {
      v11 = ((int (__thiscall *)(NiD3DShaderConstantMap *, unsigned int))shader->member.PixelConstantMap->_vtbl->sub_9A8E20)( /*0x77a641*/
              shader->member.PixelConstantMap,
              i);
      if ( v11 ) /*0x77a645*/
      {
        if ( (*(_DWORD *)(v11 + 0x14) & 0xF0000000) == 0x30000000 ) /*0x77a654*/
          ++pixelCapacity; /*0x77a656*/
      }
    }
    pixelCapacity *= shader->member.Passes.end; /*0x77a66b*/
  }
  end = shader->member.Passes.end; /*0x77a66f*/
  v13 = 0; /*0x77a673*/
  v55 = end; /*0x77a677*/
  v53 = 0; /*0x77a67b*/
  if ( shader->member.Passes.end ) /*0x77a66f*/
  {
    do /*0x77a722*/
    {
      v14 = *((_DWORD *)&v2->member.Passes.data->__vftable + v13); /*0x77a688*/
      if ( v14 ) /*0x77a68d*/
      {
        v15 = *(unsigned __int16 **)(v14 + 0x34); /*0x77a693*/
        if ( v15 ) /*0x77a698*/
        {
          v16 = v15[0xC]; /*0x77a69a*/
          for ( j = 0; j < v16; ++j ) /*0x77a69a*/
          {
            v18 = (*(int (__thiscall **)(unsigned __int16 *, unsigned int))(*(_DWORD *)v15 + 0x3C))(v15, j); /*0x77a6ac*/
            if ( v18 ) /*0x77a6b0*/
            {
              if ( (*(_DWORD *)(v18 + 0x14) & 0xF0000000) == 0x30000000 ) /*0x77a6bf*/
                ++pixelCapacity; /*0x77a6c1*/
            }
          }
          v2 = shader; /*0x77a6cd*/
        }
        v19 = *(unsigned __int16 **)(v14 + 0x48); /*0x77a6d1*/
        if ( v19 ) /*0x77a6d6*/
        {
          v20 = v19[0xC]; /*0x77a6d8*/
          for ( k = 0; k < v20; ++k ) /*0x77a6d8*/
          {
            v22 = (*(int (__thiscall **)(unsigned __int16 *, unsigned int))(*(_DWORD *)v19 + 0x3C))(v19, k); /*0x77a6ea*/
            if ( v22 ) /*0x77a6ee*/
            {
              if ( (*(_DWORD *)(v22 + 0x14) & 0xF0000000) == 0x30000000 ) /*0x77a6ff*/
                ++v50; /*0x77a701*/
            }
          }
          v2 = shader; /*0x77a70d*/
        }
      }
      end = v55; /*0x77a715*/
      v13 = ++v53; /*0x77a719*/
    }
    while ( v53 < v55 ); /*0x77a722*/
    v5 = v50; /*0x77a728*/
  }
  if ( v5 || pixelCapacity ) /*0x77a735*/
  {
    v23 = (NiSCMExtraData *)FormHeapAlloc(0x24u); /*0x77a73d*/
    if ( v23 ) /*0x77a747*/
      v24 = (unsigned int *)NiSCMExtraData_Constructor(v23, off_B29F84, v5, pixelCapacity); /*0x77a75d*/
    else
      v24 = 0; /*0x77a761*/
    v25 = 0; /*0x77a763*/
    v54 = 0; /*0x77a767*/
    if ( end ) /*0x77a76b*/
    {
      do /*0x77a991*/
      {
        v51 = *((_DWORD *)&v2->member.Passes.data->__vftable + v25); /*0x77a779*/
        if ( v51 ) /*0x77a77d*/
        {
          v26 = v2->member.PixelConstantMap; /*0x77a783*/
          if ( v26 ) /*0x77a788*/
            ii = v26->Entries.numObjs; /*0x77a78e*/
          for ( m = 0; m < ii; ++m ) /*0x77a79a*/
          {
            v28 = ((int (__thiscall *)(NiD3DShaderConstantMap *, unsigned int))shader->member.PixelConstantMap->_vtbl->sub_9A8E20)( /*0x77a7ad*/
                    shader->member.PixelConstantMap,
                    m);
            v29 = v28; /*0x77a7af*/
            if ( v28 ) /*0x77a7b3*/
            {
              if ( (*(_DWORD *)(v28 + 0x14) & 0xF0000000) == 0x30000000 ) /*0x77a7c4*/
              {
                ExtraData = NiObjectNET_GetExtraData(geometry, *(const char **)(v28 + 0xC)); /*0x77a7ce*/
                if ( ExtraData ) /*0x77a7d5*/
                {
                  *(_DWORD *)(v24[8] + 8 * v24[6]) = *(_DWORD *)(v29 + 0x1C) | (0xFF << dword_AB2908); /*0x77a7ed*/
                  *(_DWORD *)(v24[8] + 8 * v24[6]++ + 4) = ExtraData; /*0x77a7f6*/
                }
              }
            }
          }
          v31 = shader->member.VertexConstantMap; /*0x77a809*/
          v32 = 0; /*0x77a80c*/
          ii = 0; /*0x77a810*/
          if ( v31 ) /*0x77a814*/
          {
            ii = v31->Entries.numObjs; /*0x77a81a*/
            v32 = ii; /*0x77a81e*/
          }
          for ( n = 0; n < v32; ++n ) /*0x77a824*/
          {
            v34 = ((int (__thiscall *)(NiD3DShaderConstantMap *, unsigned int))shader->member.VertexConstantMap->_vtbl->sub_9A8E20)( /*0x77a833*/
                    shader->member.VertexConstantMap,
                    n);
            v35 = v34; /*0x77a835*/
            if ( v34 ) /*0x77a839*/
            {
              if ( (*(_DWORD *)(v34 + 0x14) & 0xF0000000) == 0x30000000 ) /*0x77a84a*/
              {
                v36 = NiObjectNET_GetExtraData(geometry, *(const char **)(v34 + 0xC)); /*0x77a854*/
                if ( v36 ) /*0x77a85b*/
                {
                  *(_DWORD *)(v24[7] + 8 * v24[5]) = *(_DWORD *)(v35 + 0x1C) | (0xFF << dword_AB2908); /*0x77a873*/
                  *(_DWORD *)(v24[7] + 8 * v24[5]++ + 4) = v36; /*0x77a87c*/
                }
              }
            }
          }
          v37 = *(unsigned __int16 **)(v51 + 0x34); /*0x77a88f*/
          if ( v37 ) /*0x77a894*/
          {
            v38 = 0; /*0x77a89a*/
            for ( ii = v37[0xC]; v38 < ii; ++v38 ) /*0x77a896*/
            {
              v39 = (*(int (__thiscall **)(unsigned __int16 *, unsigned int))(*(_DWORD *)v37 + 0x3C))(v37, v38); /*0x77a8ad*/
              v40 = v39; /*0x77a8af*/
              if ( v39 ) /*0x77a8b3*/
              {
                if ( (*(_DWORD *)(v39 + 0x14) & 0xF0000000) == 0x30000000 ) /*0x77a8c2*/
                {
                  v41 = NiObjectNET_GetExtraData(geometry, *(const char **)(v39 + 0xC)); /*0x77a8cc*/
                  if ( v41 ) /*0x77a8d3*/
                  {
                    *(_DWORD *)(v24[8] + 8 * v24[6]) = *(_DWORD *)(v40 + 0x1C); /*0x77a8e8*/
                    *(_DWORD *)(v24[8] + 8 * v24[6]++ + 4) = v41; /*0x77a8f1*/
                  }
                }
              }
            }
          }
          v42 = *(unsigned __int16 **)(v51 + 0x48); /*0x77a906*/
          if ( v42 ) /*0x77a90b*/
          {
            v43 = 0; /*0x77a911*/
            for ( jj = v42[0xC]; v43 < jj; ++v43 ) /*0x77a90d*/
            {
              v44 = (*(int (__thiscall **)(unsigned __int16 *, unsigned int))(*(_DWORD *)v42 + 0x3C))(v42, v43); /*0x77a929*/
              v45 = v44; /*0x77a92b*/
              if ( v44 ) /*0x77a92f*/
              {
                if ( (*(_DWORD *)(v44 + 0x14) & 0xF0000000) == 0x30000000 ) /*0x77a93e*/
                {
                  v46 = NiObjectNET_GetExtraData(geometry, *(const char **)(v44 + 0xC)); /*0x77a948*/
                  if ( v46 ) /*0x77a94f*/
                  {
                    *(_DWORD *)(v24[7] + 8 * v24[5]) = *(_DWORD *)(v45 + 0x1C); /*0x77a964*/
                    *(_DWORD *)(v24[7] + 8 * v24[5]++ + 4) = v46; /*0x77a96d*/
                  }
                }
              }
            }
          }
          v2 = shader; /*0x77a97e*/
        }
        v25 = ++v54; /*0x77a986*/
      }
      while ( v54 < v55 ); /*0x77a991*/
    }
    LOBYTE(v13) = NiObjectNET_AddExtraData((const void **)&geometry->vtbl, (int)v2, v24); /*0x77a99c*/
  }
  return v13; /*0x77a9a1*/
}
