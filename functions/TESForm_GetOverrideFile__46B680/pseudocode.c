// TESForm override-file selector. With a2=-1 it walks the entire mod-reference list and returns the last non-null TESFile; TESTopicInfo lazy responses therefore read only the winning override file.
Data *__thiscall TESForm_GetOverrideFile(TESForm *this, int a2)
{
  TESForm::ModReferenceList *p_modlist; // ecx
  int v3; // edi
  Data *result; // eax
  Data *data; // edx
  bool v6; // zf

  p_modlist = &this->member.modlist; /*0x46b681*/
  v3 = 0; /*0x46b684*/
  result = 0; /*0x46b686*/
  while ( p_modlist ) /*0x46b68a*/
  {
    data = p_modlist->data; /*0x46b691*/
    v6 = p_modlist->data == 0; /*0x46b693*/
    p_modlist = p_modlist->next; /*0x46b695*/
    if ( !v6 ) /*0x46b698*/
    {
      result = data;                            // Update result on every non-null file entry; no merge traversal occurs when caller passes -1. /*0x46b69d*/
      if ( a2 != 0xFFFFFFFF && ++v3 > a2 ) /*0x46b6a6*/
        break; /*0x46b6a6*/
    }
  }
  return result;                                // For TESTopicInfo::GetResponseList this returned final TESFile is paired with the single sourceFileOffset stored by the last INFO loader invocation. /*0x46b6ad*/
}
