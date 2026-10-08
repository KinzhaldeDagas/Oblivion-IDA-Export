void __thiscall sub_4F9AF0(TESForm *this, TESForm *a2)
{
  TESForm *v3; // ebx
  TESForm::ModReferenceList **p_next; // ebx
  TESForm::ModReferenceList **i; // ebp
  TESForm::ModReferenceList *v6; // edi
  int v7; // eax
  TESForm::ModReferenceList **v8; // esi
  bool v9; // zf
  TESForm::ModReferenceList **v10; // eax
  TESForm *a2a; // [esp+10h] [ebp+4h]

  v3 = (TESForm *)OblivionDynamicCast( /*0x4f9b11*/
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESLoadScreen `RTTI Type Descriptor',
                    0);
  a2a = v3; /*0x4f9b18*/
  if ( v3 ) /*0x4f9b1c*/
  {
    sub_4F99C0(this); /*0x4f9b24*/
    p_next = &v3[1].member.modlist.next; /*0x4f9b29*/
    for ( i = (TESForm::ModReferenceList **)((char *)this + 0x2C); p_next; p_next = (TESForm::ModReferenceList **)p_next[1] ) /*0x4f9b31*/
    {
      if ( !p_next[1] && !*p_next ) /*0x4f9b3b*/
        break; /*0x4f9b3e*/
      v6 = *p_next; /*0x4f9b40*/
      if ( *p_next ) /*0x4f9b40*/
      {
        v7 = (int)(i + 1); /*0x4f9b4a*/
        v8 = i; /*0x4f9b4d*/
        if ( i[1] ) /*0x4f9b46*/
        {
          do /*0x4f9b5a*/
          {
            v8 = *(TESForm::ModReferenceList ***)v7; /*0x4f9b51*/
            v9 = *(_DWORD *)(*(_DWORD *)v7 + 4) == 0; /*0x4f9b53*/
            v7 = *(_DWORD *)v7 + 4; /*0x4f9b57*/
          }
          while ( !v9 ); /*0x4f9b5a*/
        }
        if ( *v8 ) /*0x4f9b5c*/
        {
          v10 = (TESForm::ModReferenceList **)FormHeapAlloc(8u); /*0x4f9b63*/
          if ( v10 ) /*0x4f9b6d*/
          {
            *v10 = v6; /*0x4f9b6f*/
            v10[1] = 0; /*0x4f9b71*/
            v8[1] = (TESForm::ModReferenceList *)v10; /*0x4f9b78*/
          }
          else
          {
            v8[1] = 0; /*0x4f9b7f*/
          }
        }
        else
        {
          *v8 = v6; /*0x4f9b84*/
        }
      }
      if ( i[1] ) /*0x4f9b86*/
        i = (TESForm::ModReferenceList **)i[1]; /*0x4f9b8d*/
    }
    TESForm_CopyAllComponentsFrom(this, a2a); /*0x4f9ba1*/
  }
}
