char __fastcall sub_440510(unsigned int a1)
{
  ExtraDataList *v2; // ecx
  int v3; // ecx
  unsigned int v4; // eax
  int v5; // edi
  unsigned int i; // ebp
  unsigned int j; // esi
  ExtraDataList *v8; // ecx
  ExtraDataList *v9; // esi
  bool v10; // bl
  BSExtraDataVtbl *v11; // eax
  BSExtraDataVtbl *v12; // eax
  BSExtraData *m_data; // ecx
  int v15; // [esp+0h] [ebp-4h]
  int v16; // [esp+0h] [ebp-4h]

  v2 = *(ExtraDataList **)(a1 + 0x34); /*0x440512*/
  if ( v2 ) /*0x440517*/
  {
    v16 = (int)v2; /*0x4d6560*/
    v9 = v2; /*0x4d6563*/
    v10 = 0; /*0x4d6565*/
    if ( (v2[1].members.m_presenceBitfield[8] & 1) != 0 ) /*0x4d656b*/
      v11 = sub_424180(v2 + 2); /*0x4d6570*/
    else
      v11 = (BSExtraDataVtbl *)MEMORY[0xB35C24]; /*0x4d6577*/
    if ( v11 ) /*0x4d657e*/
    {
      v10 = BYTE2(v11[3].Destructor) == 0; /*0x4d6584*/
      LOBYTE(v16) = v10; /*0x4d658b*/
      if ( (v9[1].members.m_presenceBitfield[8] & 1) != 0 ) /*0x4d658f*/
        v12 = sub_424180(v9 + 2); /*0x4d6594*/
      else
        v12 = (BSExtraDataVtbl *)MEMORY[0xB35C24]; /*0x4d659b*/
      m_data = v9[4].members.m_data; /*0x4d65a2*/
      if ( v12 ) /*0x4d65a5*/
      {
        if ( m_data ) /*0x4d65a9*/
        {
          (*((void (__thiscall **)(BSExtraDataVtbl *, BSExtraData *, int))v12->Destructor + 0x26))(v12, m_data, v16); /*0x4d65bc*/
          sub_4D1E40(v9, v16); /*0x4d65c1*/
        }
      }
    }
    LOBYTE(v4) = v10; /*0x4d65c8*/
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 8); /*0x44051e*/
    v15 = v3; /*0x482600*/
    v4 = MEMORY[0xB35C24]; /*0x482601*/
    v5 = v3; /*0x482609*/
    if ( MEMORY[0xB35C24] ) /*0x482601*/
    {
      LOBYTE(v15) = *(_BYTE *)(v4 + 0x1A) == 0; /*0x482615*/
      v4 = *(_DWORD *)(v3 + 0xC); /*0x482619*/
      for ( i = 0; i < v4; ++i ) /*0x482620*/
      {
        for ( j = 0; j < v4; ++j ) /*0x48262c*/
        {
          v8 = *(ExtraDataList **)(*(_DWORD *)(v5 + 0x10) + 8 * (j + i * v4)); /*0x48263b*/
          if ( v8 ) /*0x48263f*/
          {
            if ( v8[1].members.m_presenceBitfield[0xA] == 6 ) /*0x482645*/
              sub_4D5320(v8, v15); /*0x482648*/
          }
          v4 = *(_DWORD *)(v5 + 0xC); /*0x48264d*/
        }
        v4 = *(_DWORD *)(v5 + 0xC); /*0x482657*/
      }
    }
  }
  return v4; /*0x482666*/
}
