char __userpurge sub_4FD5F0@<al>(char *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, char *Str2)
{
  unsigned int v7; // ebx
  void *v8; // eax
  TESObjectREFR *v9; // eax
  TESObjectREFR *v10; // edi
  Script *v11; // eax
  void *v12; // eax
  char result; // al
  bool v14; // zf
  char *v15; // ebp
  int v16; // edi
  char v17; // bl
  Script *v18; // ecx
  char v19; // al
  size_t v20; // [esp-4h] [ebp-1Ch]
  unsigned int v22; // [esp+14h] [ebp-4h]
  char *Str2a; // [esp+1Ch] [ebp+4h]

  v7 = strlen(Str2); /*0x4fd603*/
  v8 = *((void **)Str2 + 0x84); /*0x4fd613*/
  v22 = v7; /*0x4fd61b*/
  if ( v8 ) /*0x4fd61f*/
  {
    v9 = (TESObjectREFR *)OblivionDynamicCast( /*0x4fd634*/
                            v8,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                            (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                            0);
    v10 = v9; /*0x4fd639*/
    if ( v9 ) /*0x4fd640*/
    {
      sub_4D70E0(v9, a3, a4); /*0x4fd644*/
      sub_4D7240(v10); /*0x4fd64b*/
    }
    else
    {
      v12 = OblivionDynamicCast( /*0x4fd667*/
              *((void **)Str2 + 0x84),
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &TESScriptableForm `RTTI Type Descriptor',
              0);
      if ( v12 ) /*0x4fd671*/
        v11 = *((Script **)v12 + 1); /*0x4fd673*/
      else
        v11 = 0; /*0x4fd678*/
    }
    if ( !v11 ) /*0x4fd67c*/
    {
      *((_DWORD *)Str2 + 0x83) = 0; /*0x4fd67f*/
      return 0; /*0x4fd68d*/
    }
    result = sub_4FAA90(v11, Str2, (UInt32 *)Str2 + 0x83); /*0x4fd69a*/
    Str2[0x204] = result; /*0x4fd6a1*/
    if ( !result ) /*0x4fd6a7*/
    {
      *((_DWORD *)Str2 + 0x83) = 0; /*0x4fd6ad*/
      return result; /*0x4fd6ba*/
    }
    return 1; /*0x4fd6a7*/
  }
  v14 = this + 0x3C == 0; /*0x4fd6bd*/
  v15 = this + 0x3C; /*0x4fd6bd*/
  Str2a = Str2 + 0x20C; /*0x4fd6c6*/
  *((_DWORD *)Str2 + 0x83) = 0; /*0x4fd6ca*/
  if ( !v14 )
  {
    do
    {
      v16 = *(_DWORD *)v15; /*0x4fd6d2*/
      if ( !*(_DWORD *)v15 ) /*0x4fd6d2*/
        break; /*0x4fd6d2*/
      LODWORD(v20) = v7; /*0x4fd6dc*/
      if ( !_strnicmp(*(const char **)(v16 + 0x18), Str2, v20) )
      {
        v17 = *(_BYTE *)(v7 + *(_DWORD *)(v16 + 0x18)); /*0x4fd6ee*/
        if ( !isalnum(v17) && v17 != 0x2D && v17 != 0x5F )
        {
          Str2[0x204] = *(_BYTE *)(v16 + 0x10) != 0 ? 0x73 : 0x66;
          *(_DWORD *)Str2a = *(_DWORD *)v16; /*0x4fd78e*/
          return 1; /*0x4fd78e*/
        }
        v7 = v22; /*0x4fd70b*/
      }
      v15 = *((char **)v15 + 1); /*0x4fd70f*/
    }
    while ( v15 );
  }
  v18 = *((Script **)this + 0x13); /*0x4fd716*/
  if ( v18 ) /*0x4fd71f*/
  {
    v19 = sub_4FAA90(v18, Str2, (UInt32 *)Str2a); /*0x4fd727*/
    Str2[0x204] = v19; /*0x4fd72e*/
    if ( v19 ) /*0x4fd734*/
      return 1; /*0x4fd799*/
  }
  if ( sub_4474D0((int *)g_TESDataHandler, Str2) && sub_4FD0A0(this, a2, a3, a4, Str2, 0, 0) ) /*0x4fd74f*/
  {
    Str2[0x204] = 0x47; /*0x4fd75d*/
    *(_DWORD *)Str2a = 0; /*0x4fd766*/
    return 1; /*0x4fd76c*/
  }
  else
  {
    Str2[0x204] = 0; /*0x4fd7a1*/
    *(_DWORD *)Str2a = 0; /*0x4fd7aa*/
    return 0; /*0x4fd7b0*/
  }
}
