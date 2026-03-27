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

  result = 0;
  if ( a2 )
  {
    if ( TESFile_GetChunkType(a2) == 0x49445343 )
    {
      *(_DWORD *)ArgList = 0;
      TESFile_GetChunkData4(a2, ArgList);
      v6 = (_DWORD *)FormHeapAlloc(8u);
      v7 = (int)v6;
      if ( *(_DWORD *)ArgList )
      {
        TESForm_ResolveFormID((UInt32 *)ArgList, a2);
        v8 = TESForm_LookupByFormID(*(UInt32 *)ArgList);
        v9 = OblivionDynamicCast(
               v8,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               &TESSound `RTTI Type Descriptor',
               0);
        *(_DWORD *)v7 = v9;
        if ( !v9 )
        {
          v10 = (const char *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*a4 + 0xD4))(a4, a4[3]);
          PrintError("Unable to find CreatureSound ID (%08X) for creature '%s' (%08X).", *(_DWORD *)ArgList, v10, v11);
        }
      }
      else
      {
        *v6 = 0;
      }
    }
    else
    {
      if ( TESFile_GetChunkType(a2) != 0x46445343 )
        return 0;
      TESFile_GetChunkData(a2, Dst, 0x104u);
      v7 = FormHeapAlloc(8u);
      *(_DWORD *)v7 = sub_517ED0(Dst);
    }
    TESFile_GetNextChunk(a2);
    if ( TESFile_GetChunkType(a2) == 0x43445343 )
    {
      TESFile_GetChunkData(a2, (char *)(v7 + 4), 1u);
      CreatureSoundArray_InsertSoundEntry(this, v7, a3);
      return 1;
    }
    FormHeapFree(v7);
    return 0;
  }
  return result;
}
