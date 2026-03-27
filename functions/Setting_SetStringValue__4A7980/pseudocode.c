int __thiscall Setting_SetStringValue(const char **this, int a2, int a3, int a4, int a5)
{
  const char *v5; // eax

  if ( !this )
    return Setting_SetStringValue_::Done(0, a2);
  v5 = *(this + 1);
  if ( v5 )
    return Setting_SetStringValue_::GetNameLen(v5, a2, a3, a4, a5);
  else
    return Setting_SetStringValue_::CheckValue(0, a2, a3, a4, a5);
}
