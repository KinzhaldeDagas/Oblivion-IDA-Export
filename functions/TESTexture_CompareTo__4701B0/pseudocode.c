bool __thiscall TESTexture_CompareTo(void *this, void *a2)
{
  void *v3; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned __int16 v7; // cx
  unsigned int v8; // edi
  unsigned int v9; // ecx
  const char *v10; // eax
  const char *v11; // ecx

  v3 = OblivionDynamicCast( /*0x4701c6*/
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
         &TESTexture `RTTI Type Descriptor',
         0);
  if ( !v3 ) /*0x4701d0*/
    return 1; /*0x4701d2*/
  LOWORD(v5) = *((_WORD *)this + 4); /*0x4701d8*/
  if ( (_WORD)v5 == 0xFFFF ) /*0x4701e2*/
    v5 = strlen(*((const char **)this + 1)); /*0x4701e7*/
  else
    v5 = (unsigned __int16)v5; /*0x4701fd*/
  if ( !v5 )
  {
    LOWORD(v6) = *((_WORD *)v3 + 4); /*0x470204*/
    v6 = (_WORD)v6 == 0xFFFF ? strlen(*((const char **)v3 + 1)) : (unsigned __int16)v6;
    if ( !v6 ) /*0x470227*/
      return 0; /*0x470227*/
  }
  v7 = *((_WORD *)this + 4); /*0x470229*/
  v8 = v7 == 0xFFFF ? strlen(*((const char **)this + 1)) : v7;
  LOWORD(v9) = *((_WORD *)v3 + 4); /*0x470252*/
  v9 = (_WORD)v9 == 0xFFFF ? strlen(*((const char **)v3 + 1)) : (unsigned __int16)v9;
  if ( v8 != v9 ) /*0x470276*/
    return 1; /*0x470276*/
  v10 = *((const char **)v3 + 1); /*0x470278*/
  if ( !v10 ) /*0x47027d*/
    v10 = EmptyString; /*0x47027f*/
  v11 = *((const char **)this + 1); /*0x470284*/
  if ( !v11 ) /*0x470289*/
    v11 = EmptyString; /*0x47028b*/
  return CRT_StricmpLocaleDispatch(v11, v10) != 0; /*0x47029f*/
}
