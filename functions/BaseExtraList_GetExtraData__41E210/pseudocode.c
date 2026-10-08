BSExtraData *__thiscall BaseExtraList_GetExtraData(ExtraDataList *this, ExtraDataType a2)
{
  unsigned int v2; // eax
  ExtraDataList *v5; // ebx
  BSExtraData *v6; // edi
  BSExtraData *i; // esi

  v2 = a2 >> 3; /*0x41e219*/
  if ( v2 >= 0xC || ((unsigned __int8)(1 << (a2 & 7)) & this->members.m_presenceBitfield[v2]) == 0 ) /*0x41e23f*/
    return 0; /*0x41e242*/
  v5 = *((ExtraDataList **)NtCurrentTeb()->ThreadLocalStoragePointer /*0x41e256*/
       + LODWORD(OB_ShaderConstantStorage_010201A0[0x18FF4]));
  v6 = 0; /*0x41e25a*/
  if ( this == *(ExtraDataList **)v5->members.m_presenceBitfield ) /*0x41e262*/
  {
    sub_41DEA0(); /*0x41e264*/
    if ( a2 <= kExtraData_HaggleAmount ) /*0x41e26c*/
      v6 = *(BSExtraData **)&v5->members.m_presenceBitfield[4 * (unsigned __int8)a2 + 8]; /*0x41e26e*/
  }
  if ( !v6 ) /*0x41e277*/
  {
    NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&MEMORY[0xB33800], (int)&aBaseextralistG); /*0x41e283*/
    for ( i = this->members.m_data; i; i = i->members.next ) /*0x41e28d*/
    {
      if ( v6 ) /*0x41e292*/
        break; /*0x41e292*/
      if ( i->members.type == a2 ) /*0x41e29b*/
      {
        sub_41DF90(this, i); /*0x41e29f*/
        v6 = i; /*0x41e2a7*/
      }
    }
    NiLeaveCriticalSection_0(&MEMORY[0xB33800]); /*0x41e2b5*/
  }
  return v6; /*0x41e241*/
}
