char __cdecl sub_4809A0(NiObjectNET *slot)
{
  NiObjectNET *v1; // esi
  NiExtraData *ExtraData; // eax
  _DWORD *v4; // eax
  const char *m_pcName; // eax
  unsigned int i; // edi
  int v7; // ecx
  NiObjectNET *v8; // eax
  char v9; // [esp+13h] [ebp-1h]

  v1 = slot; /*0x4809a3*/
  v9 = 0; /*0x4809ab*/
  if ( !slot ) /*0x4809af*/
    return 0; /*0x4809af*/
  if ( !*(_DWORD *)&MEMORY[0xB33E90][0x574] ) /*0x4809b7*/
  {
    ExtraData = NiObjectNET_GetExtraData(slot, dword_A7D0EC); /*0x4809c6*/
    if ( ExtraData ) /*0x4809cd*/
    {
      if ( ((int)ExtraData[1].__vftable & 0x20) != 0 ) /*0x4809d7*/
      {
        *(_DWORD *)&MEMORY[0xB33E90][0x574] = v1; /*0x4809e0*/
        v4 = sub_700010(v1, (int)&stru_B3CAC0); /*0x4809e6*/
        if ( v4 ) /*0x4809ed*/
          *(_DWORD *)&MEMORY[0xB33E90][0x570] = v4[0x1F]; /*0x4809f2*/
      }
    }
    if ( !*(_DWORD *)&MEMORY[0xB33E90][0x574] ) /*0x4809f8*/
      return 0; /*0x4809b2*/
  }
  m_pcName = v1->members.m_pcName; /*0x480a00*/
  if ( !m_pcName || CRT_StricmpLocaleDispatch(m_pcName, "EditorMarker") ) /*0x480a11*/
  {
    for ( i = 0; i < HIWORD(v1[7].members.m_controller); ++i ) /*0x480a93*/
    {
      if ( HIWORD(v1[7].members.m_controller) > i ) /*0x480aa9*/
      {
        v7 = *(_DWORD *)&v1[7].members.m_pcName[4 * i]; /*0x480ab1*/
        if ( v7 ) /*0x480ab6*/
        {
          v8 = (NiObjectNET *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7); /*0x480abd*/
          if ( v8 ) /*0x480ac1*/
          {
            v9 = sub_4809A0(v8); /*0x480ace*/
            if ( v9 ) /*0x480ad2*/
              break; /*0x480ad2*/
          }
        }
      }
    }
    if ( *(NiObjectNET **)&MEMORY[0xB33E90][0x574] == v1 ) /*0x480ae8*/
    {
      *(_DWORD *)&MEMORY[0xB33E90][0x574] = 0; /*0x480aea*/
      *(_DWORD *)&MEMORY[0xB33E90][0x570] = 0; /*0x480af0*/
    }
    return v9; /*0x480af6*/
  }
  else if ( MEMORY[0xB33E90][0x500] ) /*0x480a1d*/
  {
    LOWORD(v1[1].vtbl) |= 1u; /*0x480a25*/
    return 1; /*0x480a2b*/
  }
  else
  {
    if ( *(_DWORD *)&MEMORY[0xB33E90][0x570] ) /*0x480a30*/
    {
      (*(void (__thiscall **)(_DWORD, const char *, _DWORD))(**(_DWORD **)&MEMORY[0xB33E90][0x570] + 0x50))( /*0x480a45*/
        *(_DWORD *)&MEMORY[0xB33E90][0x570],
        "EditorMarker",
        0);
      (*(void (__thiscall **)(_DWORD, const char *, _DWORD))(**(_DWORD **)&MEMORY[0xB33E90][0x570] + 0x50))( /*0x480a58*/
        *(_DWORD *)&MEMORY[0xB33E90][0x570],
        "EditorMarker:0",
        0);
    }
    (*(void (__thiscall **)(UInt32, NiObjectNET **, NiObjectNET *))(*(_DWORD *)v1[1].members.super.m_uiRefCount + 0x88))( /*0x480a6b*/
      v1[1].members.super.m_uiRefCount,
      &slot,
      v1);
    NiPointerSlot_Release((void **)&slot); /*0x480a71*/
    if ( *(NiObjectNET **)&MEMORY[0xB33E90][0x574] == v1 ) /*0x480a7c*/
    {
      *(_DWORD *)&MEMORY[0xB33E90][0x574] = 0; /*0x480a7e*/
      *(_DWORD *)&MEMORY[0xB33E90][0x570] = 0; /*0x480a84*/
    }
    return 1; /*0x480a8b*/
  }
}
