0x4A56F0: push    esi; Verified: writes region-data RDAT header and serializes weatherList as RDWT; Climate instead serializes the same EntryData abstraction as WLS(T).
0x4A56F1: mov     esi, ecx
0x4A56F3: call    TESRegionData_SaveHeader; Verified: serializes region-data type/override/priority base header into RDAT.
0x4A56F8: push    54574452h
0x4A56FD: lea     ecx, [esi+8]
0x4A5700: call    OblivionTESWeatherList_SaveChunk; Verified: serializes each Oblivion weather entry as TESWeather FormID plus uint32 selectionWeight at +4; shared by climate WLS(T) and region RDWT.
0x4A5705: pop     esi
0x4A5706: retn
