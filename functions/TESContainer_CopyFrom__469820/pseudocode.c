void __thiscall TESContainer_CopyFrom(_BYTE *this, void *a2)
{
  _BYTE *v3; // esi
  char *v4; // edi
  _DWORD *v5; // ebp
  _DWORD *v6; // eax
  _DWORD *v7; // esi

  v3 = OblivionDynamicCast( /*0x46983c*/
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
         &TESContainer `RTTI Type Descriptor',
         0);
  if ( v3 ) /*0x469843*/
  {
    TESContainer_Clear(this); /*0x469847*/
    if ( (v3[4] & 1) != 0 ) /*0x469850*/
      *(this + 4) |= 1u; /*0x469852*/
    else
      *(this + 4) &= ~1u; /*0x469858*/
    v4 = v3 + 8; /*0x46985d*/
    if ( v3 != (_BYTE *)0xFFFFFFF8 ) /*0x469862*/
    {
      do /*0x46989f*/
      {
        if ( (*(this + 4) & 1) != 0 ) /*0x469869*/
        {
          v5 = *(_DWORD **)v4; /*0x46986b*/
          if ( *(_DWORD *)v4 ) /*0x46986b*/
          {
            v6 = (_DWORD *)FormHeapAlloc(8u); /*0x469873*/
            v7 = 0; /*0x469878*/
            if ( v6 ) /*0x46987f*/
            {
              v6[1] = 0; /*0x469881*/
              *v6 = 1; /*0x469884*/
              v7 = v6; /*0x46988a*/
            }
            BSSimpleList_PushFront((_DWORD *)this + 2, (int)v7); /*0x469890*/
            *v7 = *v5; /*0x469898*/
          }
        }
        v4 = *((char **)v4 + 1); /*0x46989a*/
      }
      while ( v4 ); /*0x46989f*/
    }
  }
}
