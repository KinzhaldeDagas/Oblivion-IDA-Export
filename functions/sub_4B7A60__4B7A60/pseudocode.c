void __thiscall sub_4B7A60(TESForm *this, TESForm *a2)
{
  TESForm *v2; // esi
  char *v3; // edi
  TESForm::FormFlags *v4; // ebx
  TESForm::FormFlags *p_flags; // ebp
  TESForm::FormFlags v6; // edi
  int v7; // eax
  TESForm::FormFlags *v8; // esi
  bool v9; // zf
  TESForm::FormFlags *v10; // eax
  char *v12; // [esp+Ch] [ebp-4h]

  v2 = this;
  v3 = (char *)OblivionDynamicCast(
                 a2,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                 &TESObjectDOOR `RTTI Type Descriptor',
                 0);
  v12 = v3;
  if ( v3 )
  {
    sub_4B7900((unsigned int *)v2);
    v4 = (TESForm::FormFlags *)(v3 + 0x68);
    p_flags = &v2[4].member.flags;
    if ( v3 != (char *)0xFFFFFF98 )
    {
      do
      {
        if ( !*((_DWORD *)v4 + 1) && !*v4 )
          break;
        v6 = *v4;
        if ( *v4 )
        {
          v7 = (int)(p_flags + 1);
          v8 = p_flags;
          if ( *((_DWORD *)p_flags + 1) )
          {
            do
            {
              v8 = *(TESForm::FormFlags **)v7;
              v9 = *(_DWORD *)(*(_DWORD *)v7 + 4) == 0;
              v7 = *(_DWORD *)v7 + 4;
            }
            while ( !v9 );
          }
          if ( *v8 )
          {
            v10 = (TESForm::FormFlags *)FormHeapAlloc(8u);
            if ( v10 )
            {
              *v10 = v6;
              *((_DWORD *)v10 + 1) = 0;
              *((_DWORD *)v8 + 1) = v10;
            }
            else
            {
              *((_DWORD *)v8 + 1) = 0;
            }
          }
          else
          {
            *v8 = v6;
          }
          v2 = this;
        }
        if ( *((_DWORD *)p_flags + 1) )
          p_flags = *((TESForm::FormFlags **)p_flags + 1);
        v4 = *((TESForm::FormFlags **)v4 + 1);
        v3 = v12;
      }
      while ( v4 );
    }
    v2[4].member.type = v3[0x64];
    v2[3].member.modlist.data = *((Data **)v3 + 0x16);
    v2[3].member.modlist.next = *((TESForm::ModReferenceList **)v3 + 0x17);
    v2[4].vtbl = *((TESFormVtbl **)v3 + 0x18);
    TESForm_CopyAllComponentsFrom(v2, a2);
  }
}
