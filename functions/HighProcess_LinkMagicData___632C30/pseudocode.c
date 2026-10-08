TESForm *__thiscall HighProcess_LinkMagicData_(UInt32 *this, unsigned int a2, unsigned int a3, MobileObject *a4)
{
  TESForm *v5; // eax
  TESForm *v6; // eax
  TESForm *v7; // eax
  void *v8; // eax
  int v9; // esi
  int *v10; // ebp
  void **v11; // ebx
  UInt32 v12; // eax
  TESForm *v13; // eax
  _DWORD *v14; // eax
  TESForm *result; // eax
  UInt32 *v16; // esi
  int v17; // ebx
  TESForm *v18; // eax
  TESForm *v19; // eax
  TESForm *v20; // eax

  MiddleHighProc_LinkMagicData_((LowProcess *)this, a2, a3, a4); /*0x632c47*/
  v5 = TESForm_LookupByFormID(*(this + 0x86)); /*0x632c61*/
  *(this + 0x86) = (UInt32)OblivionDynamicCast( /*0x632c7e*/
                             v5,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                             (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                             0);
  v6 = TESForm_LookupByFormID(*(this + 0x69)); /*0x632c8d*/
  *(this + 0x69) = (UInt32)OblivionDynamicCast( /*0x632caa*/
                             v6,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                             (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                             0);
  v7 = TESForm_LookupByFormID(*(this + 0xB1)); /*0x632cb9*/
  v8 = OblivionDynamicCast( /*0x632cc2*/
         v7,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
         0);
  v9 = *(this + 0x63); /*0x632cc7*/
  v10 = 0; /*0x632cd0*/
  *(this + 0xB1) = (UInt32)v8; /*0x632cd4*/
  while ( v9 ) /*0x632cda*/
  {
    if ( !*(_DWORD *)(v9 + 4) && !*(_DWORD *)v9 ) /*0x632ce6*/
      break; /*0x632ce9*/
    v11 = *(void ***)v9; /*0x632cef*/
    v12 = **(_DWORD **)v9; /*0x632cf1*/
    if ( v12 ) /*0x632cf5*/
    {
      v13 = TESForm_LookupByFormID(v12); /*0x632d06*/
      *v11 = OblivionDynamicCast( /*0x632d17*/
               v13,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               &Actor `RTTI Type Descriptor',
               0);
    }
    if ( *v11 ) /*0x632d19*/
    {
      v10 = (int *)v9; /*0x632d6e*/
      v9 = *(_DWORD *)(v9 + 4); /*0x632d70*/
    }
    else if ( v10 ) /*0x632d20*/
    {
      BSSimpleList_Remove(v10, (int)v11); /*0x632d5b*/
      v9 = v10[1]; /*0x632d60*/
      FormHeapFree((unsigned int)v11); /*0x632d64*/
    }
    else
    {
      v14 = *(_DWORD **)(v9 + 4); /*0x632d22*/
      if ( v14 ) /*0x632d27*/
      {
        *(_DWORD *)(v9 + 4) = v14[1]; /*0x632d2c*/
        *(_DWORD *)v9 = *v14; /*0x632d32*/
        FormHeapFree((unsigned int)v14); /*0x632d34*/
      }
      else
      {
        *(_DWORD *)v9 = 0; /*0x632d48*/
      }
      FormHeapFree((unsigned int)v11); /*0x632d3d*/
    }
  }
  result = (TESForm *)g_TESSaveLoadGame; /*0x632d7b*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x5Au ) /*0x632d84*/
  {
    v16 = this + 0xB2; /*0x632d86*/
    v17 = 5; /*0x632d8c*/
    do /*0x632dbf*/
    {
      if ( *v16 ) /*0x632d91*/
      {
        v18 = TESForm_LookupByFormID(*v16); /*0x632da6*/
        *v16 = (UInt32)OblivionDynamicCast( /*0x632db7*/
                         v18,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                         (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                         0);
      }
      ++v16; /*0x632db9*/
      --v17; /*0x632dbc*/
    }
    while ( v17 ); /*0x632dbf*/
    result = (TESForm *)*(this + 0xB9); /*0x632dc1*/
    if ( result ) /*0x632dc9*/
    {
      v19 = TESForm_LookupByFormID((UInt32)result); /*0x632dda*/
      result = (TESForm *)OblivionDynamicCast( /*0x632de3*/
                            v19,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                            (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                            0);
      *(this + 0xB9) = (UInt32)result; /*0x632deb*/
    }
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x6Au ) /*0x632dfb*/
  {
    result = (TESForm *)*(this + 0x96); /*0x632dfd*/
    if ( result ) /*0x632e05*/
    {
      v20 = TESForm_LookupByFormID((UInt32)result); /*0x632e16*/
      result = (TESForm *)OblivionDynamicCast( /*0x632e1f*/
                            v20,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                            &Actor `RTTI Type Descriptor',
                            0);
      *(this + 0x96) = (UInt32)result; /*0x632e27*/
    }
  }
  return result; /*0x632e2d*/
}
