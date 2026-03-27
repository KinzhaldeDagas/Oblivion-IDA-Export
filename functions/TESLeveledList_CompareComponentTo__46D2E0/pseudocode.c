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

  v3 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
         &TESLeveledList `RTTI Type Descriptor',
         0);
  v4 = v3;
  if ( !v3 )
    return 1;
  v6 = *(this + 0xD);
  v7 = v3[0xD];
  if ( (v6 & 1) != (v7 & 1)
    || ((v6 & 2) != 0) != ((v7 & 2) != 0)
    || *(this + 0xC) != v4[0xC]
    || ((v6 & 4) != 0) != ((v7 & 4) != 0) )
  {
    return 1;
  }
  next = (BSSimpleList_VoidPtr *)(this + 4);
  v9 = (BSSimpleList_VoidPtr *)(v4 + 4);
  if ( BSSimpleList_IsEmpty(next) )
  {
    if ( !BSSimpleList_IsEmpty(v9) )
      return 1;
  }
  else
  {
    if ( next )
    {
      while ( v9 )
      {
        data = next->firstNode.data;
        v11 = v9->firstNode.data;
        if ( next->firstNode.data )
        {
          if ( v11
            && (data[1] != v11[1] || *(_WORD *)data != *(_WORD *)v11 || *((_WORD *)data + 4) != *((_WORD *)v11 + 4)) )
          {
            break;
          }
        }
        next = (BSSimpleList_VoidPtr *)next->firstNode.next;
        v9 = (BSSimpleList_VoidPtr *)v9->firstNode.next;
        if ( !next )
          goto LABEL_16;
      }
      return 1;
    }
LABEL_16:
    if ( v9 )
      return 1;
  }
  return 0;
}
