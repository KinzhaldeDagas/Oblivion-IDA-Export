int __thiscall sub_891160(int ***this)
{
  int result; // eax
  int **v3; // ecx
  NiObject *v4; // eax
  int v5; // eax
  NiObject *v6; // eax
  NiObject *v7; // eax
  NiObject *v8; // ebx
  int m_uiRefCount_high; // esi
  int v10; // edi
  const char *v11; // eax

  result = 0; /*0x891163*/
  if ( ((unsigned int)*(this + 0x7D) & 0x8000) != 0 )
  {
    v3 = *(this + 0xD9); /*0x891175*/
    if ( v3
      && (v4 = sub_89F6B0(v3, 0)) != 0
      && (v5 = (int)v4->__vftable->Unk_02(v4)) != 0
      && (*(_WORD *)(v5 + 0xB6) ? (v6 = **(NiObject ***)(v5 + 0xB0)) : (v6 = 0),
          (v7 = NiRTTI_Cast((BSStringT *)&parent, v6), (v8 = v7) != 0)
       && (m_uiRefCount_high = HIWORD(v7[0x16].members.m_uiRefCount), HIWORD(v7[0x16].members.m_uiRefCount))) )
    {
      while ( 1 ) /*0x8911e7*/
      {
        if ( HIWORD(v8[0x16].members.m_uiRefCount) > (unsigned int)--m_uiRefCount_high ) /*0x8911ec*/
        {
          v10 = *((_DWORD *)&v8[0x16].__vftable->super.Destructor + m_uiRefCount_high); /*0x8911f4*/
          if ( v10 ) /*0x8911f9*/
          {
            v11 = *(const char **)(v10 + 8); /*0x8911fb*/
            if ( v11 ) /*0x891200*/
            {
              if ( !CRT_StricmpLocaleDispatch(v11, "bhkColDisp") ) /*0x891208*/
                return v10; /*0x891229*/
            }
          }
        }
        if ( !m_uiRefCount_high ) /*0x891216*/
          goto LABEL_15; /*0x891216*/
      }
    }
    else
    {
LABEL_15:
      *(this + 0x7D) = (int **)((unsigned int)*(this + 0x7D) & 0xFFFF7FFF); /*0x891218*/
      return 0; /*0x891224*/
    }
  }
  return result; /*0x891227*/
}
