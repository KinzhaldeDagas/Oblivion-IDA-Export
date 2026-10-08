unsigned int __thiscall TESForm::GetEditorNameLen(TESForm *this)
{
  const char *v1; // eax

  if ( unk_B333F4 ) /*0x404e57*/
    return 0; /*0x404e57*/
  unk_B333F4 = 1; /*0x404e59*/
  v1 = this->vtbl->GetEditorName(this); /*0x404e68*/
  unk_B333F4 = 0; /*0x404e6c*/
  if ( !v1 ) /*0x404e73*/
    return 0; /*0x404e84*/
  else
    return strlen(v1); /*0x404e75*/
}
