void __thiscall sub_7C5340(BSShaderProperty *this, BSShaderProperty *clone, void *cloneProcess)
{
  NiExtraData **m_extraDataList; // edi
  int v5; // eax

  BSShaderProperty_CopyCloneMembers(this, clone, cloneProcess); /*0x7c534f*/
  m_extraDataList = clone[1].member.super.super.m_extraDataList; /*0x7c5354*/
  if ( m_extraDataList != *((NiExtraData ***)this + 0x1F) ) /*0x7c535a*/
  {
    if ( m_extraDataList ) /*0x7c535e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)m_extraDataList + 1) ) /*0x7c5364*/
        ((void (__thiscall *)(NiExtraData **, int))(*m_extraDataList)->__vftable)(m_extraDataList, 1); /*0x7c537a*/
    }
    v5 = *((_DWORD *)this + 0x1F); /*0x7c537c*/
    clone[1].member.super.super.m_extraDataList = (NiExtraData **)v5; /*0x7c5381*/
    if ( v5 ) /*0x7c5384*/
      InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x7c538a*/
  }
  *(float *)&clone[1].member.super.super.m_extraDataListLen = *((float *)this + 0x20); /*0x7c5397*/
  clone[1].member.passInfo = *((_DWORD *)this + 0x22); /*0x7c53a4*/
}
