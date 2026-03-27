char __fastcall sub_440510(unsigned int a1)
{
  ExtraDataList *v2; // ecx
  int v3; // ecx
  unsigned int v4; // eax
  int v5; // edi
  unsigned int i; // ebp
  unsigned int j; // esi
  _BYTE *v8; // ecx
  ExtraDataList *v9; // esi
  bool v10; // bl
  BSExtraDataVtbl *v11; // eax
  BSExtraDataVtbl *v12; // eax
  BSExtraData *m_data; // ecx
  int v15; // [esp+0h] [ebp-4h]
  int v16; // [esp+0h] [ebp-4h]

  v2 = *(ExtraDataList **)(a1 + 0x34);
  if ( v2 )
  {
    v16 = (int)v2;
    v9 = v2;
    v10 = 0;
    if ( (v2[1].members.m_presenceBitfield[8] & 1) != 0 )
      v11 = sub_424180(v2 + 2);
    else
      v11 = (BSExtraDataVtbl *)bhkWorldM;
    if ( v11 )
    {
      v10 = BYTE2(v11[3].Destructor) == 0;
      LOBYTE(v16) = v10;
      if ( (v9[1].members.m_presenceBitfield[8] & 1) != 0 )
        v12 = sub_424180(v9 + 2);
      else
        v12 = (BSExtraDataVtbl *)bhkWorldM;
      m_data = v9[4].members.m_data;
      if ( v12 )
      {
        if ( m_data )
        {
          (*((void (__thiscall **)(BSExtraDataVtbl *, BSExtraData *, int))v12->Destructor + 0x26))(v12, m_data, v16);
          sub_4D1E40(v9, v16);
        }
      }
    }
    LOBYTE(v4) = v10;
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 8);
    v15 = v3;
    v4 = bhkWorldM;
    v5 = v3;
    if ( bhkWorldM )
    {
      LOBYTE(v15) = *(_BYTE *)(v4 + 0x1A) == 0;
      v4 = *(_DWORD *)(v3 + 0xC);
      for ( i = 0; i < v4; ++i )
      {
        for ( j = 0; j < v4; ++j )
        {
          v8 = *(_BYTE **)(*(_DWORD *)(v5 + 0x10) + 8 * (j + i * v4));
          if ( v8 )
          {
            if ( v8[0x26] == 6 )
              sub_4D5320(v8, v15);
          }
          v4 = *(_DWORD *)(v5 + 0xC);
        }
        v4 = *(_DWORD *)(v5 + 0xC);
      }
    }
  }
  return v4;
}
