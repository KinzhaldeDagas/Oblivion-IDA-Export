_DWORD *__usercall Setting_SetStringValue_::CheckValue@<eax>(_DWORD *a1@<ebp>, int a2, int a3, int a4, char *a5)
{
  if ( a5 ) /*0x4a79b9*/
    return (_DWORD *)Setting_SetStringValue_::GetValueLen(a5, a2, a3, a4, a5); /*0x4a79ba*/
  else
    return Setting_SetStringValue_::Done_SetValueNull(a1, a2); /*0x4a79b9*/
}
