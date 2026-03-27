char __thiscall sub_4C8E30(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // esi
  TESForm::ModReferenceList **p_next; // edi
  TESFormVtbl *v6; // ebx
  TESFormVtbl **i; // esi
  TESFormVtbl **v9; // [esp+Ch] [ebp+4h]

  v3 = (TESForm *)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESLandTexture `RTTI Type Descriptor',
                    0);
  v4 = v3;
  if ( v3 )
  {
    v9 = (TESFormVtbl **)((char *)this + 0x2C);
    BSSimpleList_Clear((_DWORD *)this + 0xB);
    TESForm_CopyAllComponentsFrom(this, v4);
    *((_WORD *)this + 0x14) = v4[1].member.modlist.data;
    *((_BYTE *)this + 0x2A) = BYTE2(v4[1].member.modlist.data);
    LOBYTE(v3) = HIBYTE(v4[1].member.modlist.data);
    *((_BYTE *)this + 0x2B) = (_BYTE)v3;
    p_next = &v4[1].member.modlist.next;
    if ( v4 != (TESForm *)0xFFFFFFD4 )
    {
      do
      {
        if ( !p_next[1] && !*p_next )
          break;
        v6 = (TESFormVtbl *)*p_next;
        if ( *p_next )
        {
          for ( i = v9; i[1]; i = (TESFormVtbl **)i[1] )
            ;
          if ( *i )
          {
            v3 = (TESForm *)FormHeapAlloc(8u);
            if ( v3 )
            {
              v3->vtbl = v6;
              *(_DWORD *)&v3->member.type = 0;
              i[1] = (TESFormVtbl *)v3;
            }
            else
            {
              LOBYTE(v3) = 0;
              i[1] = 0;
            }
          }
          else
          {
            *i = v6;
          }
        }
        p_next = (TESForm::ModReferenceList **)p_next[1];
      }
      while ( p_next );
    }
  }
  return (char)v3;
}
