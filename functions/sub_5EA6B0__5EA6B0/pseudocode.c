CHAR *__thiscall sub_5EA6B0(Actor *this)
{
  int v2; // eax
  unsigned int v3; // eax
  unsigned int v4; // edx
  CHAR *result; // eax

  if ( !Actor_IsNPC(this) )
    return 0;
  v2 = (int)this->vtbl->super.super.GetBaseForm((TESObjectREFR *)this);
  if ( !v2 )
    return 0;
  v3 = *(_DWORD *)(v2 + 0x104);
  if ( !v3 )
    return 0;
  v4 = v3 + 0x18;
  if ( v3 == 0xFFFFFFE8 )
    return 0;
  LOWORD(v3) = *(_WORD *)(v3 + 0x20);
  v3 = (_WORD)v3 == 0xFFFF ? strlen(*(const char **)(v4 + 4)) : (unsigned __int16)v3;
  if ( !v3 )
    return 0;
  result = *(CHAR **)(v4 + 4);
  if ( !result )
    return EmptyString;
  return result;
}
