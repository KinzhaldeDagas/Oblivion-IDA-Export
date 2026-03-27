char __cdecl sub_4809A0(NiObjectNET *a1)
{
  NiObjectNET *v1; // esi
  NiExtraData *ExtraData; // eax
  _DWORD *v4; // eax
  char *m_pcName; // eax
  unsigned int i; // edi
  int v7; // ecx
  _WORD *v8; // eax
  char v9; // [esp+13h] [ebp-1h]

  v1 = a1;
  v9 = 0;
  if ( !a1 )
    return 0;
  if ( !dword_B34404 )
  {
    ExtraData = NiObjectNET_GetExtraData(a1, dword_A7D0EC);
    if ( ExtraData )
    {
      if ( ((int)ExtraData[1].__vftable & 0x20) != 0 )
      {
        dword_B34404 = (int)v1;
        v4 = sub_700010(v1, (int)&stru_B3CAC0);
        if ( v4 )
          dword_B34400 = v4[0x1F];
      }
    }
    if ( !dword_B34404 )
      return 0;
  }
  m_pcName = (char *)v1->members.m_pcName;
  if ( m_pcName && !_strcmp(m_pcName, "EditorMarker") )
  {
    if ( byte_B34390 )
    {
      LOWORD(v1[1].vtbl) |= 1u;
      return 1;
    }
    else
    {
      if ( dword_B34400 )
      {
        (*(void (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_B34400 + 0x50))(
          dword_B34400,
          "EditorMarker",
          0);
        (*(void (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_B34400 + 0x50))(
          dword_B34400,
          "EditorMarker:0",
          0);
      }
      (*(void (__thiscall **)(UInt32, NiObjectNET **, NiObjectNET *))(*(_DWORD *)v1[1].members.super.m_uiRefCount + 0x88))(
        v1[1].members.super.m_uiRefCount,
        &a1,
        v1);
      sub_7016A0((NiD3DVertexShader *)&a1);
      if ( (NiObjectNET *)dword_B34404 == v1 )
      {
        dword_B34404 = 0;
        dword_B34400 = 0;
      }
      return 1;
    }
  }
  else
  {
    for ( i = 0; i < HIWORD(v1[7].members.m_controller); ++i )
    {
      if ( HIWORD(v1[7].members.m_controller) > i )
      {
        v7 = *(_DWORD *)&v1[7].members.m_pcName[4 * i];
        if ( v7 )
        {
          v8 = (_WORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
          if ( v8 )
          {
            v9 = sub_4809A0(v8);
            if ( v9 )
              break;
          }
        }
      }
    }
    if ( (NiObjectNET *)dword_B34404 == v1 )
    {
      dword_B34404 = 0;
      dword_B34400 = 0;
    }
    return v9;
  }
}
