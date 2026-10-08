char __thiscall sub_45CEE0(_DWORD *this)
{
  int v2; // ecx
  unsigned int v3; // edx
  unsigned int v4; // eax
  _DWORD *v5; // edi
  _DWORD *v6; // ecx
  NiTMap_Entry_TESCELL *v7; // eax
  int v8; // ebp
  TESForm *v9; // eax
  char *v10; // eax
  char *v11; // ebx
  void (__thiscall *v12)(NiRefObject *, bool); // edi
  _DWORD *v13; // ecx
  int v14; // ecx
  unsigned __int16 *v15; // eax
  unsigned __int16 v16; // bp
  void *v18; // [esp+8h] [ebp-10h] BYREF
  int a1; // [esp+Ch] [ebp-Ch] BYREF
  NiTMap_Entry_TESCELL *i; // [esp+10h] [ebp-8h] BYREF
  int v21; // [esp+14h] [ebp-4h]

  v2 = *(this + 0x16); /*0x45cee6*/
  v3 = *(_DWORD *)(v2 + 4); /*0x45cee9*/
  v4 = 0; /*0x45ceec*/
  if ( v3 ) /*0x45cef1*/
  {
    v5 = *(_DWORD **)(v2 + 8); /*0x45cef3*/
    v6 = v5; /*0x45cef6*/
    while ( !*v6 ) /*0x45cf03*/
    {
      ++v4; /*0x45cf09*/
      ++v6; /*0x45cf0c*/
      if ( v4 >= v3 ) /*0x45cf11*/
        goto LABEL_5; /*0x45cf11*/
    }
    v7 = (NiTMap_Entry_TESCELL *)v5[v4]; /*0x45cf8f*/
  }
  else
  {
LABEL_5:
    v7 = 0; /*0x45cf13*/
  }
  for ( i = v7; i; LOBYTE(v7) = NiTMap_RemoveAt((_DWORD *)*(this + 0x16), v8) ) /*0x45cf1b*/
  {
    NiTMap_U32Pointer_GetNextEntry((NiTMap_TESCELL *)*(this + 0x16), &i, (void **)&a1, (TESObjectCELL **)&v18); /*0x45cf35*/
    v8 = a1; /*0x45cf3a*/
    v9 = TESForm_LookupByFormID(a1); /*0x45cf4d*/
    v10 = (char *)OblivionDynamicCast( /*0x45cf56*/
                    v9,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                    0);
    v11 = (char *)v18; /*0x45cf5b*/
    v12 = (void (__thiscall *)(NiRefObject *, bool))v10; /*0x45cf5f*/
    if ( v10 ) /*0x45cf66*/
    {
      if ( !*((_DWORD *)v10 + 0xF) ) /*0x45cf68*/
      {
        ExtraDataList_SetSavedAttachedAnimation((ExtraDataList *)(v10 + 0x44), (BSExtraData *)v18); /*0x45cf74*/
        v13 = (_DWORD *)*(this + 1); /*0x45cf79*/
        if ( !v13 ) /*0x45cf84*/
          v13 = (_DWORD *)*this; /*0x45cf86*/
        ChangesMap_AddFormChangeFlags(v13, v12, 0x1000000); /*0x45cf88*/
        continue; /*0x45cf8d*/
      }
      v14 = *(this + 5); /*0x45cf97*/
      *(this + 5) = v18; /*0x45cf9a*/
      v21 = v14; /*0x45cf9d*/
      v15 = (unsigned __int16 *)g_TESSaveLoadGame->unk000[5]; /*0x45cfa7*/
      v16 = *v15; /*0x45cfaa*/
      g_TESSaveLoadGame->unk000[5] = (UInt32)(v15 + 1); /*0x45cfb0*/
      sub_4E2F70(v12, 0); /*0x45cfb7*/
      if ( &v11[v16 + 2] != (char *)*(this + 5) ) /*0x45cfc6*/
        (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)&MEMORY[0xB33E90][0xF00] + 0x18))( /*0x45cfd8*/
          *(_DWORD *)&MEMORY[0xB33E90][0xF00],
          "LoadAttachedAnimations() call did not properly empty buffer.");
      v8 = a1; /*0x45cfde*/
      *(this + 5) = v21; /*0x45cfe2*/
    }
    MemoryHeap_Free_checked(v11); /*0x45cfeb*/
  }
  if ( *(_DWORD *)(*(this + 0x16) + 0xC) ) /*0x45d009*/
    LOBYTE(v7) = (*(char (__thiscall **)(_DWORD, const char *))(**(_DWORD **)&MEMORY[0xB33E90][0xF00] + 0x18))( /*0x45d021*/
                   *(_DWORD *)&MEMORY[0xB33E90][0xF00],
                   "LoadAttachedAnimations() call finished, but still has elements in the map.");
  return (char)v7; /*0x45d00d*/
}
