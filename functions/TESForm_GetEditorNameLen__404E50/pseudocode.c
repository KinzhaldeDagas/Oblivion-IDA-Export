unsigned int __thiscall TESForm::GetEditorNameLen(TESForm *this)
{
  const char *v1; // eax

  if ( byte_B333F4 )
    return 0;
  byte_B333F4 = 1;
  v1 = this->vtbl->GetEditorName(this);
  byte_B333F4 = 0;
  if ( !v1 )
    return 0;
  else
    return strlen(v1);
}
