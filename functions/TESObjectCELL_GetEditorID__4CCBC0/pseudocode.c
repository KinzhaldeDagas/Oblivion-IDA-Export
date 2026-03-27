CHAR *__thiscall TESObjectCELL_GetEditorID(ExtraDataList *this)
{
  ExtraDataList *v2; // edi
  CHAR *result; // eax

  v2 = this + 2;
  if ( sub_41FA30(this + 2) )
    return (CHAR *)sub_41FA30(v2);
  result = (CHAR *)sDefaultCellName;
  if ( (*((_BYTE *)this + 0x24) & 1) != 0 )
    return EmptyString;
  return result;
}
