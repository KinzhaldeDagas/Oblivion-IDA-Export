void __cdecl sub_4EEDD0(EntryData *a1, Data *a2, int a3)
{
  UInt32 v4; // edi
  char *v5; // ebx
  UInt32 *v6; // esi
  UInt32 v7; // ebx
  _DWORD *v8; // edi
  TESForm *v9; // eax
  void *v10; // eax
  unsigned int a2a; // [esp+Ch] [ebp+8h]

  if ( a2 )
  {
    if ( a1 )
    {
      if ( a3 )
      {
        v4 = a2->currentChunk.length >> 3;
        if ( v4 )
        {
          sub_5B1D70(a1);
          v5 = (char *)FormHeapAlloc((unsigned __int64)v4 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v4);
          a2a = (unsigned int)v5;
          if ( !TESFile_GetChunkData(a2, v5, 8 * v4) )
            PrintError("Error getting TESWeatherList chunk for form ID: %d", *(_DWORD *)(a3 + 0xC));
          v6 = (UInt32 *)v5;
          v7 = v4;
          do
          {
            TESForm_ResolveFormID(v6, a2);
            v8 = (_DWORD *)FormHeapAlloc(8u);
            v9 = TESForm_LookupByFormID(*v6);
            v10 = OblivionDynamicCast(
                    v9,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESWeather `RTTI Type Descriptor',
                    0);
            *v8 = v10;
            if ( v10 )
            {
              v8[1] = v6[1];
              BSSimpleList_PushFront(a1, (int)v8);
            }
            else
            {
              PrintError("Error while loading weather list...cannot identify TESWeather from form ID: (%08X)", *v6);
              FormHeapFree((unsigned int)v8);
            }
            v6 += 2;
            --v7;
          }
          while ( v7 );
          sub_5B27A0(a1, (int (__cdecl *)(int, _DWORD))sub_4EEB10);
          FormHeapFree(a2a);
        }
      }
    }
  }
}
