Data *__thiscall TESForm_GetOverrideFile(TESForm *this, int a2)
{
  TESForm::ModReferenceList *p_modlist; // ecx
  int v3; // edi
  Data *result; // eax
  Data *data; // edx
  bool v6; // zf

  p_modlist = &this->member.modlist;
  v3 = 0;
  result = 0;
  while ( p_modlist )
  {
    data = p_modlist->data;
    v6 = p_modlist->data == 0;
    p_modlist = p_modlist->next;
    if ( !v6 )
    {
      result = data;
      if ( a2 != 0xFFFFFFFF && ++v3 > a2 )
        break;
    }
  }
  return result;
}
