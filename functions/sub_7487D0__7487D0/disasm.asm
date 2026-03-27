0x7487D0: sub     esp, 24h
0x7487D3: push    esi
0x7487D4: push    4; Size
0x7487D6: call    FormHeapAlloc
0x7487DB: mov     esi, eax
0x7487DD: add     esp, 4
0x7487E0: test    esi, esi
0x7487E2: jz      short loc_748800
0x7487E4: lea     eax, [esp+28h+SystemInfo]
0x7487E8: push    eax; lpSystemInfo
0x7487E9: call    dword ptr ds:0A281F0h
0x7487EF: mov     ecx, [esp+28h+SystemInfo.dwNumberOfProcessors]
0x7487F3: mov     [esi], ecx
0x7487F5: mov     ds:0B407B8h, esi
0x7487FB: pop     esi
0x7487FC: add     esp, 24h
0x7487FF: retn
0x748800: mov     dword ptr ds:0B407B8h, 0
0x74880A: pop     esi
0x74880B: add     esp, 24h
0x74880E: retn
