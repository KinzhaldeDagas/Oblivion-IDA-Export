bool __thiscall TESTexture_CompareTo(void *this, void *a2)
{
  void *v3; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned __int16 v7; // cx
  unsigned int v8; // edi
  unsigned int v9; // ecx
  char *v10; // eax
  char *v11; // ecx

  v3 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
         &TESTexture `RTTI Type Descriptor',
         0);
  if ( !v3 )
    return 1;
  LOWORD(v5) = *((_WORD *)this + 4);
  if ( (_WORD)v5 == 0xFFFF )
    v5 = strlen(*((const char **)this + 1));
  else
    v5 = (unsigned __int16)v5;
  if ( !v5 )
  {
    LOWORD(v6) = *((_WORD *)v3 + 4);
    v6 = (_WORD)v6 == 0xFFFF ? strlen(*((const char **)v3 + 1)) : (unsigned __int16)v6;
    if ( !v6 )
      return 0;
  }
  v7 = *((_WORD *)this + 4);
  v8 = v7 == 0xFFFF ? strlen(*((const char **)this + 1)) : v7;
  LOWORD(v9) = *((_WORD *)v3 + 4);
  v9 = (_WORD)v9 == 0xFFFF ? strlen(*((const char **)v3 + 1)) : (unsigned __int16)v9;
  if ( v8 != v9 )
    return 1;
  v10 = *((char **)v3 + 1);
  if ( !v10 )
    v10 = EmptyString;
  v11 = *((char **)this + 1);
  if ( !v11 )
    v11 = EmptyString;
  return _strcmp(v11, v10) != 0;
}
