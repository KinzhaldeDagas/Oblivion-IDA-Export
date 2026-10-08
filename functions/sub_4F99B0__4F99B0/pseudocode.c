CHAR *__thiscall sub_4F99B0(_DWORD *this, int a2, int a3)
{
  CHAR *result; // eax

  result = (CHAR *)*(this + 4); /*0x4f99b0*/
  if ( !result ) /*0x4f99b5*/
    return EmptyString; /*0x4f99b7*/
  return result; /*0x4f99bc*/
}
