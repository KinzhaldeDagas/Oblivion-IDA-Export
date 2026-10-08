0x4A2E90: push    esi; Verified: clears TESRegion.cachedWeather +0x24, finds region-data ID 3, casts to TESRegionDataWeather, performs Oblivion weighted TESWeather selection, and stores result at +0x24.
0x4A2E91: mov     esi, ecx
0x4A2E93: mov     ecx, [esi+18h]; dataList
0x4A2E96: test    ecx, ecx
0x4A2E98: mov     dword ptr [esi+24h], 0
0x4A2E9F: jz      short loc_4A2ECE
0x4A2EA1: push    0; int
0x4A2EA3: push    offset ??_R0?AVTESRegionDataWeather@@@8; struct TypeDescriptor *
0x4A2EA8: push    offset ??_R0?AVTESRegionData@@@8; struct _s_RTTICompleteObjectLocator *
0x4A2EAD: push    0; int
0x4A2EAF: push    3; dataID
0x4A2EB1: call    TESRegion_FindDataByID; Exterior fog source: retrieves region data type 3 before TESRegionDataWeather cast.
0x4A2EB6: push    eax; void *
0x4A2EB7: call    OblivionDynamicCast; Exterior fog source: casts region data to TESRegionDataWeather.
0x4A2EBC: add     esp, 14h
0x4A2EBF: test    eax, eax
0x4A2EC1: jz      short loc_4A2ECE
0x4A2EC3: lea     ecx, [eax+8]; list
0x4A2EC6: call    OblivionTESWeatherList_SelectWeightedWeather; Verified: performs weighted TESWeather selection using each entry's selectionWeight, random roll modulo sum, and cumulative ranges. First zero-weight entry may be chosen because of the initial 0xFFFFFFFF accumulator; later zero-weight entries are skipped.
0x4A2ECB: mov     [esi+24h], eax; Verified: TESRegion_RefreshCachedWeather selects a weighted TESWeather from region data ID 3 and stores it in TESRegion cached weather field at +0x24; Sky may use this as current weather override.
0x4A2ECE: pop     esi
0x4A2ECF: retn
