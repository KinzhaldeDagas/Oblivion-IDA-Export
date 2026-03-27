0x98524C: push    ebp
0x98524D: mov     ebp, esp
0x98524F: push    ecx
0x985250: push    ecx
0x985251: push    esi
0x985252: lea     eax, [ebp+SystemTimeAsFileTime]
0x985255: push    eax; lpSystemTimeAsFileTime
0x985256: call    dword ptr ds:0A281BCh
0x98525C: push    1
0x98525E: push    0
0x985260: push    0
0x985262: push    [ebp+SystemTimeAsFileTime.dwHighDateTime]
0x985265: call    __allmul
0x98526A: mov     ecx, [ebp+SystemTimeAsFileTime.dwLowDateTime]
0x98526D: xor     esi, esi
0x98526F: add     eax, ecx
0x985271: adc     edx, esi
0x985273: mov     ds:0BA9DF0h, eax
0x985278: mov     ds:0BA9DF4h, edx
0x98527E: xor     eax, eax
0x985280: pop     esi
0x985281: leave
0x985282: retn
