NiObjectVtbl *__thiscall sub_74FA90(_DWORD *this)
{
  int v2; // esi
  NiRTTI *v3; // eax
  char v4; // al
  NiObjectVtbl *result; // eax
  NiObject *v6; // eax
  NiObject *v7; // esi
  unsigned __int8 v8; // al

  v2 = *(this + 0x12); /*0x74fa94*/
  if ( !v2 ) /*0x74fa99*/
    goto LABEL_7; /*0x74fa99*/
  v3 = (NiRTTI *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)v2 + 4))(*(this + 0x12)); /*0x74faa2*/
  if ( v3 ) /*0x74faa6*/
  {
    while ( v3 != &stru_B3E7E8 ) /*0x74faad*/
    {
      v3 = v3->parent; /*0x74faaf*/
      if ( !v3 ) /*0x74fab4*/
        goto LABEL_5; /*0x74fab4*/
    }
    v4 = 1; /*0x74faf7*/
  }
  else
  {
LABEL_5:
    v4 = 0; /*0x74fab6*/
  }
  result = v4 != 0 ? (NiObjectVtbl *)v2 : 0;
  if ( !result ) /*0x74fabe*/
  {
LABEL_7:
    v6 = NiRTTI_Cast((BSStringT *)&stru_B3EA50, (NiObject *)*(this + 0x12)); /*0x74fac9*/
    v7 = v6; /*0x74face*/
    if ( !v6 ) /*0x74fad5*/
      return 0; /*0x74fad5*/
    v8 = sub_6CC550((int)v6); /*0x74fad9*/
    if ( v8 == byte_A79EFC ) /*0x74fae4*/
    {
      return 0; /*0x74fb0a*/
    }
    else if ( BYTE2(v7[1].members.m_uiRefCount) == 1 && v8 == HIBYTE(v7[1].members.m_uiRefCount) ) /*0x74faef*/
    {
      return v7[3].__vftable; /*0x74faf1*/
    }
    else
    {
      return *(NiObjectVtbl **)(v7[2].members.m_uiRefCount + 0x18 * v8); /*0x74fb04*/
    }
  }
  return result; /*0x74faf4*/
}
