// Verified: Oblivion weather-list chunk record is 8 bytes: TESWeather FormID plus selectionWeight. Fallout's 12-byte WeatherEntry adds TESGlobal* pChanceVar; this is a documented cross-game layout divergence.
void __cdecl OblivionTESWeatherList_LoadChunk(OblivionTESWeatherList *list, Data *file, TESForm *owner)
{
  UInt32 v4; // edi
  char *v5; // ebx
  UInt32 *v6; // esi
  UInt32 v7; // ebx
  _DWORD *v8; // edi
  TESForm *v9; // eax
  void *v10; // eax
  unsigned int a2; // [esp+Ch] [ebp+8h]

  if ( file )
  {
    if ( list )
    {
      if ( owner )
      {
        v4 = file->currentChunk.length >> 3; /*0x4eedfd*/
        if ( v4 )
        {
          sub_5B1D70((unsigned int *)list); /*0x4eee07*/
          v5 = (char *)FormHeapAlloc((unsigned __int64)v4 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v4);
          a2 = (unsigned int)v5; /*0x4eee34*/
          if ( !TESFile_GetChunkData(file, v5, 8 * v4) )
            PrintError("Error getting TESWeatherList chunk for form ID: %d", owner->member.refID);
          v6 = (UInt32 *)v5; /*0x4eee56*/
          v7 = v4; /*0x4eee58*/
          do
          {
            TESForm_ResolveFormID(v6, file); /*0x4eee62*/
            v8 = (_DWORD *)FormHeapAlloc(8u); /*0x4eee82*/
            v9 = TESForm_LookupByFormID(*v6); /*0x4eee84*/
            v10 = OblivionDynamicCast( /*0x4eee8d*/
                    v9,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESWeather `RTTI Type Descriptor',
                    0);
            *v8 = v10; /*0x4eee97*/
            if ( v10 )
            {
              v8[1] = v6[1]; /*0x4eeeb6*/
              BSSimpleList_PushFront(list, (int)v8); /*0x4eeebe*/
            }
            else
            {
              PrintError("Error while loading weather list...cannot identify TESWeather from form ID: (%08X)", *v6);
              FormHeapFree((unsigned int)v8); /*0x4eeea9*/
            }
            v6 += 2; /*0x4eeec3*/
            --v7; /*0x4eeec6*/
          }
          while ( v7 );
          BSSimpleList_SortViaArrayAndRebuild( /*0x4eeed8*/
            (EntryData *)list,
            (int (__cdecl *)(tListVoid *, tListVoid *))OblivionTESWeatherList_CompareSelectionWeight);
          FormHeapFree(a2); /*0x4eeede*/
        }
      }
    }
  }
}
