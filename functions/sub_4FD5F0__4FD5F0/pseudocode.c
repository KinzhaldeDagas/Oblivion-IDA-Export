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

  v7 = strlen(Str2);
  v8 = *((void **)Str2 + 0x84);
  v22 = v7;
  if ( v8 )
  {
    v9 = (TESObjectREFR *)OblivionDynamicCast(
                            v8,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                            (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                            0);
    v10 = v9;
    if ( v9 )
    {
      sub_4D70E0(v9, a3, a4);
      sub_4D7240(v10);
    }
    else
    {
      v12 = OblivionDynamicCast(
              *((void **)Str2 + 0x84),
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &TESScriptableForm `RTTI Type Descriptor',
              0);
      if ( v12 )
        v11 = *((Script **)v12 + 1);
      else
        v11 = 0;
    }
    if ( !v11 )
    {
      *((_DWORD *)Str2 + 0x83) = 0;
      return 0;
    }
    result = sub_4FAA90(v11, Str2, (UInt32 *)Str2 + 0x83);
    Str2[0x204] = result;
    if ( !result )
    {
      *((_DWORD *)Str2 + 0x83) = 0;
      return result;
    }
    return 1;
  }
  v14 = this + 0x3C == 0;
  v15 = this + 0x3C;
  Str2a = Str2 + 0x20C;
  *((_DWORD *)Str2 + 0x83) = 0;
  if ( !v14 )
  {
    do
    {
      v16 = *(_DWORD *)v15;
      if ( !*(_DWORD *)v15 )
        break;
      LODWORD(v20) = v7;
      if ( !_strnicmp(*(const char **)(v16 + 0x18), Str2, v20) )
      {
        v17 = *(_BYTE *)(v7 + *(_DWORD *)(v16 + 0x18));
        if ( !isalnum(v17) && v17 != 0x2D && v17 != 0x5F )
        {
          Str2[0x204] = *(_BYTE *)(v16 + 0x10) != 0 ? 0x73 : 0x66;
          *(_DWORD *)Str2a = *(_DWORD *)v16;
          return 1;
        }
        v7 = v22;
      }
      v15 = *((char **)v15 + 1);
    }
    while ( v15 );
  }
  v18 = *((Script **)this + 0x13);
  if ( v18 )
  {
    v19 = sub_4FAA90(v18, Str2, (UInt32 *)Str2a);
    Str2[0x204] = v19;
    if ( v19 )
      return 1;
  }
  if ( sub_4474D0((int *)TESDataHandler, Str2) && sub_4FD0A0(this, a2, a3, a4, Str2, 0, 0) )
  {
    Str2[0x204] = 0x47;
    *(_DWORD *)Str2a = 0;
    return 1;
  }
  else
  {
    Str2[0x204] = 0;
    *(_DWORD *)Str2a = 0;
    return 0;
  }
}
