CHAR *__thiscall TESBipedModelForm_GetBipedIconPath(_DWORD *this, int a2)
{
  int v2; // edx
  _DWORD *v3; // eax
  unsigned __int16 v4; // si
  unsigned int v5; // eax
  CHAR *result; // eax

  v2 = a2;
  v3 = this + 3 * a2 + 0x1B;
  v4 = *((_WORD *)v3 + 2);
  if ( v4 == 0xFFFF )
    v5 = strlen((const char *)*v3);
  else
    v5 = v4;
  if ( !v5 && a2 == 1 )
    v2 = 0;
  result = (CHAR *)*(this + 3 * v2 + 0x1B);
  if ( !result )
    return EmptyString;
  return result;
}
