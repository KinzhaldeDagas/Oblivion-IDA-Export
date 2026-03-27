char __cdecl sub_77A5B0(NiD3DShader *a1, NiObjectNET *a2)
{
  NiD3DShader *v2; // ebx
  NiD3DShaderConstantMap *VertexConstantMap; // eax
  unsigned int v4; // esi
  int v5; // ebp
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
  unsigned int *v23; // eax
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
  int v48; // [esp+18h] [ebp-14h]
  unsigned int ii; // [esp+1Ch] [ebp-10h]
  int v50; // [esp+20h] [ebp-Ch]
  int v51; // [esp+20h] [ebp-Ch]
  unsigned int jj; // [esp+20h] [ebp-Ch]
  unsigned int v53; // [esp+24h] [ebp-8h]
  unsigned int v54; // [esp+24h] [ebp-8h]
  unsigned int v55; // [esp+28h] [ebp-4h]

  sub_6FFAC0(a2, off_B29F84);
  v2 = a1;
  VertexConstantMap = a1->member.VertexConstantMap;
  v4 = 0;
  v5 = 0;
  v50 = 0;
  v48 = 0;
  ii = 0;
  if ( VertexConstantMap )
  {
    numObjs = VertexConstantMap->Entries.numObjs;
    if ( VertexConstantMap->Entries.numObjs )
    {
      do
      {
        v7 = ((int (__thiscall *)(NiD3DShaderConstantMap *, unsigned int))a1->member.VertexConstantMap->_vtbl->sub_9A8E20)(
               a1->member.VertexConstantMap,
               v4);
        if ( v7 )
        {
          if ( (*(_DWORD *)(v7 + 0x14) & 0xF0000000) == 0x30000000 )
            ++v5;
        }
        ++v4;
      }
      while ( v4 < numObjs );
    }
    v50 = v5 * a1->member.Passes.end;
    v5 = v50;
  }
  PixelConstantMap = a1->member.PixelConstantMap;
  if ( PixelConstantMap )
  {
    v9 = PixelConstantMap->Entries.numObjs;
    for ( i = 0; i < v9; ++i )
    {
      v11 = ((int (__thiscall *)(NiD3DShaderConstantMap *, unsigned int))a1->member.PixelConstantMap->_vtbl->sub_9A8E20)(
              a1->member.PixelConstantMap,
              i);
      if ( v11 )
      {
        if ( (*(_DWORD *)(v11 + 0x14) & 0xF0000000) == 0x30000000 )
          ++v48;
      }
    }
    v48 *= a1->member.Passes.end;
  }
  end = a1->member.Passes.end;
  v13 = 0;
  v55 = end;
  v53 = 0;
  if ( a1->member.Passes.end )
  {
    do
    {
      v14 = *((_DWORD *)&v2->member.Passes.data->__vftable + v13);
      if ( v14 )
      {
        v15 = *(unsigned __int16 **)(v14 + 0x34);
        if ( v15 )
        {
          v16 = v15[0xC];
          for ( j = 0; j < v16; ++j )
          {
            v18 = (*(int (__thiscall **)(unsigned __int16 *, unsigned int))(*(_DWORD *)v15 + 0x3C))(v15, j);
            if ( v18 )
            {
              if ( (*(_DWORD *)(v18 + 0x14) & 0xF0000000) == 0x30000000 )
                ++v48;
            }
          }
          v2 = a1;
        }
        v19 = *(unsigned __int16 **)(v14 + 0x48);
        if ( v19 )
        {
          v20 = v19[0xC];
          for ( k = 0; k < v20; ++k )
          {
            v22 = (*(int (__thiscall **)(unsigned __int16 *, unsigned int))(*(_DWORD *)v19 + 0x3C))(v19, k);
            if ( v22 )
            {
              if ( (*(_DWORD *)(v22 + 0x14) & 0xF0000000) == 0x30000000 )
                ++v50;
            }
          }
          v2 = a1;
        }
      }
      end = v55;
      v13 = ++v53;
    }
    while ( v53 < v55 );
    v5 = v50;
  }
  if ( v5 || v48 )
  {
    v23 = (unsigned int *)FormHeapAlloc(0x24u);
    if ( v23 )
      v24 = sub_9A22E0(v23, off_B29F84, v5, v48);
    else
      v24 = 0;
    v25 = 0;
    v54 = 0;
    if ( end )
    {
      do
      {
        v51 = *((_DWORD *)&v2->member.Passes.data->__vftable + v25);
        if ( v51 )
        {
          v26 = v2->member.PixelConstantMap;
          if ( v26 )
            ii = v26->Entries.numObjs;
          for ( m = 0; m < ii; ++m )
          {
            v28 = ((int (__thiscall *)(NiD3DShaderConstantMap *, unsigned int))a1->member.PixelConstantMap->_vtbl->sub_9A8E20)(
                    a1->member.PixelConstantMap,
                    m);
            v29 = v28;
            if ( v28 )
            {
              if ( (*(_DWORD *)(v28 + 0x14) & 0xF0000000) == 0x30000000 )
              {
                ExtraData = NiObjectNET_GetExtraData(a2, *(const char **)(v28 + 0xC));
                if ( ExtraData )
                {
                  *(_DWORD *)(v24[8] + 8 * v24[6]) = *(_DWORD *)(v29 + 0x1C) | (0xFF << dword_AB2908);
                  *(_DWORD *)(v24[8] + 8 * v24[6]++ + 4) = ExtraData;
                }
              }
            }
          }
          v31 = a1->member.VertexConstantMap;
          v32 = 0;
          ii = 0;
          if ( v31 )
          {
            ii = v31->Entries.numObjs;
            v32 = ii;
          }
          for ( n = 0; n < v32; ++n )
          {
            v34 = ((int (__thiscall *)(NiD3DShaderConstantMap *, unsigned int))a1->member.VertexConstantMap->_vtbl->sub_9A8E20)(
                    a1->member.VertexConstantMap,
                    n);
            v35 = v34;
            if ( v34 )
            {
              if ( (*(_DWORD *)(v34 + 0x14) & 0xF0000000) == 0x30000000 )
              {
                v36 = NiObjectNET_GetExtraData(a2, *(const char **)(v34 + 0xC));
                if ( v36 )
                {
                  *(_DWORD *)(v24[7] + 8 * v24[5]) = *(_DWORD *)(v35 + 0x1C) | (0xFF << dword_AB2908);
                  *(_DWORD *)(v24[7] + 8 * v24[5]++ + 4) = v36;
                }
              }
            }
          }
          v37 = *(unsigned __int16 **)(v51 + 0x34);
          if ( v37 )
          {
            v38 = 0;
            for ( ii = v37[0xC]; v38 < ii; ++v38 )
            {
              v39 = (*(int (__thiscall **)(unsigned __int16 *, unsigned int))(*(_DWORD *)v37 + 0x3C))(v37, v38);
              v40 = v39;
              if ( v39 )
              {
                if ( (*(_DWORD *)(v39 + 0x14) & 0xF0000000) == 0x30000000 )
                {
                  v41 = NiObjectNET_GetExtraData(a2, *(const char **)(v39 + 0xC));
                  if ( v41 )
                  {
                    *(_DWORD *)(v24[8] + 8 * v24[6]) = *(_DWORD *)(v40 + 0x1C);
                    *(_DWORD *)(v24[8] + 8 * v24[6]++ + 4) = v41;
                  }
                }
              }
            }
          }
          v42 = *(unsigned __int16 **)(v51 + 0x48);
          if ( v42 )
          {
            v43 = 0;
            for ( jj = v42[0xC]; v43 < jj; ++v43 )
            {
              v44 = (*(int (__thiscall **)(unsigned __int16 *, unsigned int))(*(_DWORD *)v42 + 0x3C))(v42, v43);
              v45 = v44;
              if ( v44 )
              {
                if ( (*(_DWORD *)(v44 + 0x14) & 0xF0000000) == 0x30000000 )
                {
                  v46 = NiObjectNET_GetExtraData(a2, *(const char **)(v44 + 0xC));
                  if ( v46 )
                  {
                    *(_DWORD *)(v24[7] + 8 * v24[5]) = *(_DWORD *)(v45 + 0x1C);
                    *(_DWORD *)(v24[7] + 8 * v24[5]++ + 4) = v46;
                  }
                }
              }
            }
          }
          v2 = a1;
        }
        v25 = ++v54;
      }
      while ( v54 < v55 );
    }
    LOBYTE(v13) = NiNode_AddNiExtraData((const void **)&a2->vtbl, (int)v2, v24);
  }
  return v13;
}
