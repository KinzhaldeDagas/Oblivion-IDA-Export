TESForm::ModReferenceList *__thiscall Actor_GetBaseClass(Actor *this)
{
  TESForm *v2; // eax

  if ( Actor_IsNPC(this) && (v2 = this->vtbl->super.super.GetBaseForm(this)) != 0 )
    return v2[0xA].member.modlist.next;
  else
    return 0;
}
