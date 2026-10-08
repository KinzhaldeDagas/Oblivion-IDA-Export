0x4A5670: push    0FFFFFFFFh; Verified: copy/merge constructor copies TESRegionData base fields and EntryData list from source Weather data; this is not the RDWT parser.
0x4A5672: push    offset SEH_4A5670
0x4A5677: mov     eax, large fs:0
0x4A567D: push    eax
0x4A567E: push    ecx
0x4A567F: push    ebx
0x4A5680: push    esi
0x4A5681: push    edi
0x4A5682: mov     eax, ds:0B30AACh
0x4A5687: xor     eax, esp
0x4A5689: push    eax
0x4A568A: lea     eax, [esp+20h+var_C]
0x4A568E: mov     large fs:0, eax
0x4A5694: mov     esi, ecx
0x4A5696: mov     [esp+20h+var_10], esi
0x4A569A: mov     ebx, [esp+20h+source]
0x4A569E: push    ebx
0x4A569F: call    sub_4A34E0
0x4A56A4: lea     edi, [esi+8]
0x4A56A7: mov     ecx, edi
0x4A56A9: mov     [esp+20h+var_4], 0
0x4A56B1: mov     dword ptr [esi], offset ??_7TESRegionDataWeather@@6B@; const TESRegionDataWeather::`vftable'
0x4A56B7: call    sub_4EED50
0x4A56BC: push    0; append
0x4A56BE: add     ebx, 8
0x4A56C1: push    ebx; source
0x4A56C2: mov     ecx, edi; this
0x4A56C4: mov     byte ptr [esp+28h+var_4], 1
0x4A56C9: call    OblivionTESWeatherList_CopyEntries; Verified: clears destination weather list when mode is false, then copies each 8-byte {TESWeather*, sortWeight} payload into a new list node; mode true preserves existing entries and appends.
0x4A56CE: mov     eax, esi
0x4A56D0: mov     ecx, [esp+20h+var_C]
0x4A56D4: mov     large fs:0, ecx
0x4A56DB: pop     ecx
0x4A56DC: pop     edi
0x4A56DD: pop     esi
0x4A56DE: pop     ebx
0x4A56DF: add     esp, 10h
0x4A56E2: retn    4
0x9B28C0: mov     ecx, [ebp-10h]
0x9B28C3: jmp     TESRegionData_SetBaseVTable
0x9B28C8: mov     ecx, [ebp-10h]
0x9B28CB: add     ecx, 8
0x9B28CE: jmp     sub_4EED70
0x9B28D3: mov     edx, [esp+arg_4]
0x9B28D7: lea     eax, [edx-10h]
0x9B28DA: mov     ecx, [edx-14h]
0x9B28DD: xor     ecx, eax
0x9B28DF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B28E4: mov     eax, offset stru_ADE854
0x9B28E9: jmp     ___CxxFrameHandler3
