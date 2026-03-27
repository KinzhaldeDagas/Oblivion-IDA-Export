0x643640: push    ebx
0x643641: push    esi
0x643642: push    edi
0x643643: mov     edi, ecx
0x643645: mov     ecx, offset TimeGlobals
0x64364A: call    TimeGlobals_GetGameHour
0x64364F: fstp    dword ptr [edi+14h]
0x643652: mov     ecx, offset TimeGlobals
0x643657: call    TimeGlobals_GetGameYear
0x64365C: mov     ebx, eax
0x64365E: mov     ecx, offset TimeGlobals
0x643663: shl     ebx, 4
0x643666: call    TimeGlobals_GetGameMonth
0x64366B: mov     esi, eax
0x64366D: or      esi, ebx
0x64366F: mov     ecx, offset TimeGlobals
0x643674: shl     esi, 9
0x643677: call    TimeGlobals_GetGameDay
0x64367C: movsx   eax, al
0x64367F: or      eax, esi
0x643681: mov     [edi+18h], eax
0x643684: pop     edi
0x643685: pop     esi
0x643686: pop     ebx
0x643687: retn
