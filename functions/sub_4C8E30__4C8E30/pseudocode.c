char __thiscall sub_4C8E30(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // esi
  TESForm::ModReferenceList **p_next; // edi
  TESFormVtbl *v6; // ebx
  TESFormVtbl **i; // esi
  TESFormVtbl **v9; // [esp+Ch] [ebp+4h]

  v3 = (TESForm *)OblivionDynamicCast( /*0x4c8e47*/
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESLandTexture `RTTI Type Descriptor',
                    0);
  v4 = v3; /*0x4c8e4c*/
  if ( v3 ) /*0x4c8e53*/
  {
    v9 = (TESFormVtbl **)((char *)this + 0x2C); /*0x4c8e5c*/
    BSSimpleList_Clear((_DWORD *)this + 0xB); /*0x4c8e60*/
    TESForm_CopyAllComponentsFrom(this, v4); /*0x4c8e68*/
    *((_WORD *)this + 0x14) = v4[1].member.modlist.data; /*0x4c8e71*/
    *((_BYTE *)this + 0x2A) = BYTE2(v4[1].member.modlist.data); /*0x4c8e78*/
    LOBYTE(v3) = HIBYTE(v4[1].member.modlist.data); /*0x4c8e7b*/
    *((_BYTE *)this + 0x2B) = (_BYTE)v3; /*0x4c8e7e*/
    p_next = &v4[1].member.modlist.next; /*0x4c8e81*/
    if ( v4 != (TESForm *)0xFFFFFFD4 ) /*0x4c8e86*/
    {
      do /*0x4c8ee8*/
      {
        if ( !p_next[1] && !*p_next ) /*0x4c8e96*/
          break; /*0x4c8e99*/
        v6 = (TESFormVtbl *)*p_next; /*0x4c8e9b*/
        if ( *p_next ) /*0x4c8e9b*/
        {
          for ( i = v9; i[1]; i = (TESFormVtbl **)i[1] ) /*0x4c8ea5*/
            ; /*0x4c8eb0*/
          if ( *i ) /*0x4c8eb9*/
          {
            v3 = (TESForm *)FormHeapAlloc(8u); /*0x4c8ec0*/
            if ( v3 ) /*0x4c8eca*/
            {
              v3->vtbl = v6; /*0x4c8ecc*/
              *(_DWORD *)&v3->member.type = 0; /*0x4c8ece*/
              i[1] = (TESFormVtbl *)v3; /*0x4c8ed5*/
            }
            else
            {
              LOBYTE(v3) = 0; /*0x4c8eda*/
              i[1] = 0; /*0x4c8edc*/
            }
          }
          else
          {
            *i = v6; /*0x4c8ee1*/
          }
        }
        p_next = (TESForm::ModReferenceList **)p_next[1]; /*0x4c8ee3*/
      }
      while ( p_next ); /*0x4c8ee8*/
    }
  }
  return (char)v3; /*0x4c8eeb*/
}
