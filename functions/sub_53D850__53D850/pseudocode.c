NiObjectVtbl *__thiscall sub_53D850(_DWORD *this)
{
  int v2; // esi
  int v3; // eax
  char v4; // al
  NiObjectVtbl *result; // eax
  NiObject *v6; // eax
  NiObject *v7; // esi
  unsigned __int8 v8; // al

  v2 = *(this + 0xF);
  if ( !v2 )
    goto LABEL_7;
  v3 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v2 + 4))(*(this + 0xF));
  if ( v3 )
  {
    while ( (char *)v3 != dword_B3CFBC )
    {
      v3 = *(_DWORD *)(v3 + 4);
      if ( !v3 )
        goto LABEL_5;
    }
    v4 = 1;
  }
  else
  {
LABEL_5:
    v4 = 0;
  }
  result = v4 != 0 ? (NiObjectVtbl *)v2 : 0;
  if ( !result )
  {
LABEL_7:
    v6 = NiRTTI_Cast((BSStringT *)dword_B3CF5C, (NiObject *)*(this + 0xF));
    v7 = v6;
    if ( !v6 )
      return 0;
    v8 = sub_6CC550((int)v6);
    if ( v8 == byte_A79EFC )
    {
      return 0;
    }
    else if ( BYTE2(v7[1].members.m_uiRefCount) == 1 && v8 == HIBYTE(v7[1].members.m_uiRefCount) )
    {
      return v7[3].__vftable;
    }
    else
    {
      return *(NiObjectVtbl **)(v7[2].members.m_uiRefCount + 0x18 * v8);
    }
  }
  return result;
}
