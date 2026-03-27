BSExtraData *__thiscall sub_4847F0(ExtraDataList ***this)
{
  ExtraDataList **v2; // edi
  BSExtraData *i; // ebx
  ExtraDataList *v4; // esi

  v2 = *this;
  for ( i = 0; v2; v2 = (ExtraDataList **)v2[1] )
  {
    v4 = *v2;
    if ( !*v2 )
      break;
    if ( sub_41E850(*v2) )
    {
      i = sub_41E850(v4);
      BaseExtraList_RemoveExtraByPtr(v4, (int)i, 0);
      if ( !v4->members.m_data )
        BSSimpleList_Remove(*this, (int)v4);
      v2 = *this;
    }
  }
  return i;
}
