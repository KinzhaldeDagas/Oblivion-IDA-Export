int __thiscall sub_67BDD0(_DWORD *this)
{
  int v2; // esi
  int *v3; // ebx
  void **v4; // edi
  UInt32 v5; // eax
  TESForm *v6; // eax
  _DWORD *v7; // eax
  UInt32 v8; // eax
  TESForm *v9; // eax

  v2 = *this; /*0x67bdd5*/
  v3 = 0; /*0x67bdd8*/
  while ( v2 ) /*0x67bdd5*/
  {
    if ( !*(_DWORD *)(v2 + 4) && !*(_DWORD *)v2 ) /*0x67bde9*/
      break; /*0x67bdec*/
    v4 = *(void ***)v2; /*0x67bdf2*/
    v5 = **(_DWORD **)v2; /*0x67bdf4*/
    if ( v5 ) /*0x67bdf8*/
    {
      v6 = TESForm_LookupByFormID(v5); /*0x67be09*/
      *v4 = OblivionDynamicCast( /*0x67be1a*/
              v6,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &Actor `RTTI Type Descriptor',
              0);
    }
    if ( *v4 ) /*0x67be1c*/
    {
      v3 = (int *)v2; /*0x67be71*/
      v2 = *(_DWORD *)(v2 + 4); /*0x67be73*/
    }
    else if ( v3 ) /*0x67be23*/
    {
      BSSimpleList_Remove(v3, (int)v4); /*0x67be5e*/
      v2 = v3[1]; /*0x67be63*/
      FormHeapFree((unsigned int)v4); /*0x67be67*/
    }
    else
    {
      v7 = *(_DWORD **)(v2 + 4); /*0x67be25*/
      if ( v7 ) /*0x67be2a*/
      {
        *(_DWORD *)(v2 + 4) = v7[1]; /*0x67be2f*/
        *(_DWORD *)v2 = *v7; /*0x67be35*/
        FormHeapFree((unsigned int)v7); /*0x67be37*/
      }
      else
      {
        *(_DWORD *)v2 = 0; /*0x67be4b*/
      }
      FormHeapFree((unsigned int)v4); /*0x67be40*/
    }
  }
  v8 = *(this + 1); /*0x67be7f*/
  if ( v8 ) /*0x67be84*/
  {
    v9 = TESForm_LookupByFormID(v8); /*0x67be95*/
    *(this + 1) = OblivionDynamicCast( /*0x67bea6*/
                    v9,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &Actor `RTTI Type Descriptor',
                    0);
  }
  return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 2) + 0xE8))(*(this + 2)); /*0x67beb5*/
}
