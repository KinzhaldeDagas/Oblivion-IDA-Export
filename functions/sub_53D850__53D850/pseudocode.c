NiObjectVtbl *__thiscall sub_53D850(_DWORD *this)
{
  int v2; // esi
  NiRTTI *v3; // eax
  char v4; // al
  NiObjectVtbl *result; // eax
  NiObject *v6; // eax
  NiObject *v7; // esi
  unsigned __int8 v8; // al

  v2 = *(this + 0xF); /*0x53d854*/
  if ( !v2 ) /*0x53d859*/
    goto LABEL_7; /*0x53d859*/
  v3 = (NiRTTI *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)v2 + 4))(*(this + 0xF)); /*0x53d862*/
  if ( v3 ) /*0x53d866*/
  {
    while ( v3 != &stru_B3CFBC ) /*0x53d86d*/
    {
      v3 = v3->parent; /*0x53d86f*/
      if ( !v3 ) /*0x53d874*/
        goto LABEL_5; /*0x53d874*/
    }
    v4 = 1; /*0x53d8b7*/
  }
  else
  {
LABEL_5:
    v4 = 0; /*0x53d876*/
  }
  result = v4 != 0 ? (NiObjectVtbl *)v2 : 0;
  if ( !result ) /*0x53d87e*/
  {
LABEL_7:
    v6 = NiRTTI_Cast((BSStringT *)&stru_B3CF5C, (NiObject *)*(this + 0xF)); /*0x53d889*/
    v7 = v6; /*0x53d88e*/
    if ( !v6 ) /*0x53d895*/
      return 0; /*0x53d895*/
    v8 = sub_6CC550((int)v6); /*0x53d899*/
    if ( v8 == byte_A79EFC ) /*0x53d8a4*/
    {
      return 0; /*0x53d8ca*/
    }
    else if ( BYTE2(v7[1].members.m_uiRefCount) == 1 && v8 == HIBYTE(v7[1].members.m_uiRefCount) ) /*0x53d8af*/
    {
      return v7[3].__vftable; /*0x53d8b1*/
    }
    else
    {
      return *(NiObjectVtbl **)(v7[2].members.m_uiRefCount + 0x18 * v8); /*0x53d8c4*/
    }
  }
  return result; /*0x53d8b4*/
}
