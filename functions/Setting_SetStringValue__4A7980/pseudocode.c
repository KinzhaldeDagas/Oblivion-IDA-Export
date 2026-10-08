int __thiscall Setting_SetStringValue(const char **this, int a2, int a3, int a4, char *a5)
{
  const char *v5; // eax

  if ( !this ) /*0x4a798a*/
    return Setting_SetStringValue_::Done(0, a2); /*0x4a798a*/
  v5 = *(this + 1); /*0x4a7990*/
  if ( v5 ) /*0x4a7996*/
    return Setting_SetStringValue_::GetNameLen(v5, a2, a3, a4, (int)a5); /*0x4a7997*/
  else
    return Setting_SetStringValue_::CheckValue(0, a2, a3, a4, a5); /*0x4a79b1*/
}
