char __thiscall CreatureSoundArray_LoadAndLinkSoundEntry(_DWORD *this, Data *a2, unsigned int a3, _DWORD *a4)
{
  char result; // al
  _DWORD *v6; // eax
  int v7; // edi
  TESForm *v8; // eax
  void *v9; // eax
  const char *v10; // eax
  int v11; // [esp-8h] [ebp-120h]
  char ArgList[4]; // [esp+Ch] [ebp-10Ch] BYREF
  char Dst[260]; // [esp+10h] [ebp-108h] BYREF

  result = 0; /*0x519985*/
  if ( a2 ) /*0x51998b*/
  {
    if ( TESFile_GetChunkType(a2) == 0x49445343 ) /*0x5199a0*/
    {
      *(_DWORD *)ArgList = 0; /*0x5199ab*/
      TESFile_GetChunkData4(a2, ArgList); /*0x5199b3*/
      v6 = (_DWORD *)FormHeapAlloc(8u); /*0x5199ba*/
      v7 = (int)v6; /*0x5199c7*/
      if ( *(_DWORD *)ArgList ) /*0x5199c9*/
      {
        TESForm_ResolveFormID((UInt32 *)ArgList, a2); /*0x5199d1*/
        v8 = TESForm_LookupByFormID(*(UInt32 *)ArgList); /*0x5199ec*/
        v9 = OblivionDynamicCast( /*0x5199f5*/
               v8,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               &TESSound `RTTI Type Descriptor',
               0);
        *(_DWORD *)v7 = v9; /*0x5199ff*/
        if ( !v9 ) /*0x519a01*/
        {
          v10 = (const char *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*a4 + 0xD4))(a4, a4[3]); /*0x519a12*/
          PrintError("Unable to find CreatureSound ID (%08X) for creature '%s' (%08X).", *(_DWORD *)ArgList, v10, v11); /*0x519a1f*/
        }
      }
      else
      {
        *v6 = 0; /*0x519a29*/
      }
    }
    else
    {
      if ( TESFile_GetChunkType(a2) != 0x46445343 ) /*0x519a3b*/
        return 0; /*0x519aa5*/
      TESFile_GetChunkData(a2, Dst, 0x104u); /*0x519a49*/
      v7 = FormHeapAlloc(8u); /*0x519a5a*/
      *(_DWORD *)v7 = sub_517ED0(Dst); /*0x519a64*/
    }
    TESFile_GetNextChunk(a2); /*0x519a68*/
    if ( TESFile_GetChunkType(a2) == 0x43445343 ) /*0x519a79*/
    {
      TESFile_GetChunkData(a2, (char *)(v7 + 4), 1u); /*0x519a83*/
      CreatureSoundArray_InsertSoundEntry(this, v7, a3); /*0x519a93*/
      return 1; /*0x519a9a*/
    }
    FormHeapFree(v7); /*0x519a9d*/
    return 0; /*0x519a9d*/
  }
  return result; /*0x519aa8*/
}
