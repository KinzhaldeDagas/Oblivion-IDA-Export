char __thiscall TESLeveledList_CompareComponentTo(char *this, void *a2)
{
  _BYTE *v3; // eax
  _BYTE *v4; // edi
  char v6; // cl
  char v7; // al
  BSSimpleList_VoidPtr *next; // esi
  BSSimpleList_VoidPtr *v9; // edi
  _DWORD *data; // eax
  _DWORD *v11; // ecx

  v3 = OblivionDynamicCast( /*0x46d2f7*/
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
         &TESLeveledList `RTTI Type Descriptor',
         0);
  v4 = v3; /*0x46d2fc*/
  if ( !v3 ) /*0x46d303*/
    return 1; /*0x46d309*/
  v6 = *(this + 0xD); /*0x46d30c*/
  v7 = v3[0xD]; /*0x46d30f*/
  if ( (v6 & 1) != (v7 & 1) /*0x46d348*/
    || ((v6 & 2) != 0) != ((v7 & 2) != 0)
    || *(this + 0xC) != v4[0xC]
    || ((v6 & 4) != 0) != ((v7 & 4) != 0) )
  {
    return 1; /*0x46d348*/
  }
  next = (BSSimpleList_VoidPtr *)(this + 4); /*0x46d34a*/
  v9 = (BSSimpleList_VoidPtr *)(v4 + 4); /*0x46d34f*/
  if ( BSSimpleList_IsEmpty(next) ) /*0x46d352*/
  {
    if ( !BSSimpleList_IsEmpty(v9) ) /*0x46d3b5*/
      return 1; /*0x46d3b5*/
  }
  else
  {
    if ( next ) /*0x46d35d*/
    {
      while ( v9 ) /*0x46d362*/
      {
        data = next->firstNode.data; /*0x46d364*/
        v11 = v9->firstNode.data; /*0x46d368*/
        if ( next->firstNode.data ) /*0x46d364*/
        {
          if ( v11 /*0x46d388*/
            && (data[1] != v11[1] || *(_WORD *)data != *(_WORD *)v11 || *((_WORD *)data + 4) != *((_WORD *)v11 + 4)) )
          {
            break; /*0x46d388*/
          }
        }
        next = (BSSimpleList_VoidPtr *)next->firstNode.next; /*0x46d38a*/
        v9 = (BSSimpleList_VoidPtr *)v9->firstNode.next; /*0x46d38f*/
        if ( !next ) /*0x46d392*/
          goto LABEL_16; /*0x46d392*/
      }
      return 1; /*0x46d388*/
    }
LABEL_16:
    if ( v9 ) /*0x46d396*/
      return 1; /*0x46d39d*/
  }
  return 0; /*0x46d305*/
}
