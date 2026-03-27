bool __thiscall TESModel_CompareTo(void *this, void *a2)
{
  void *v3; // edi
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned __int16 v7; // ax
  unsigned int v8; // esi
  unsigned int v9; // eax
  char *v10; // eax
  char *v11; // [esp-4h] [ebp-Ch]

  v3 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
         &TESModel `RTTI Type Descriptor',
         0);
  if ( !v3 )
    return 1;
  LOWORD(v5) = *((_WORD *)this + 4);
  v5 = (_WORD)v5 == 0xFFFF ? strlen(*((const char **)this + 1)) : (unsigned __int16)v5;
  if ( v5
    || ((LOWORD(v6) = *((_WORD *)v3 + 4), (_WORD)v6 != 0xFFFF)
      ? (v6 = (unsigned __int16)v6)
      : (v6 = strlen(*((const char **)v3 + 1))),
        v6) )
  {
    v7 = *((_WORD *)this + 4);
    v8 = v7 == 0xFFFF ? strlen(*((const char **)this + 1)) : v7;
    LOWORD(v9) = *((_WORD *)v3 + 4);
    v9 = (_WORD)v9 == 0xFFFF ? strlen(*((const char **)v3 + 1)) : (unsigned __int16)v9;
    if ( v8 != v9 )
      return 1;
    v11 = (char *)(*(int (__thiscall **)(void *))(*(_DWORD *)v3 + 0x14))(v3);
    v10 = (char *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x14))(this);
    if ( _strcmp(v10, v11) )
      return 1;
  }
  return *((float *)v3 + 3) != *((float *)this + 3);
}
