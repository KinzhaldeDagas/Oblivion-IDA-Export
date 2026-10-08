CHAR *__thiscall TESObjectCELL_GetEditorID(ExtraDataList *this)
{
  ExtraDataList *v2; // edi
  CHAR *result; // eax

  v2 = this + 2; /*0x4ccbc4*/
  if ( sub_41FA30(this + 2) ) /*0x4ccbc9*/
    return (CHAR *)sub_41FA30(v2); /*0x4ccbd6*/
  result = (CHAR *)MEMORY[0xB35C0C].value; /*0x4ccbdf*/
  if ( (*((_BYTE *)this + 0x24) & 1) != 0 ) /*0x4ccbe4*/
    return EmptyString; /*0x4ccbe6*/
  return result; /*0x4ccbd4*/
}
