0x9999CF: push    ebp
0x9999D0: mov     ebp, esp
0x9999D2: push    ecx
0x9999D3: push    ecx
0x9999D4: lea     eax, [ebp+SystemTimeAsFileTime]
0x9999D7: push    eax; lpSystemTimeAsFileTime
0x9999D8: call    ds:GetSystemTimeAsFileTime
0x9999DE: mov     eax, [ebp+SystemTimeAsFileTime.dwLowDateTime]
0x9999E1: mov     ecx, [ebp+SystemTimeAsFileTime.dwHighDateTime]
0x9999E4: push    0
0x9999E6: add     eax, 2AC18000h
0x9999EB: push    989680h
0x9999F0: adc     ecx, 0FE624E21h
0x9999F6: push    ecx
0x9999F7: push    eax
0x9999F8: call    __aulldiv
0x9999FD: mov     ecx, [ebp+Time]
0x999A00: test    ecx, ecx
0x999A02: jz      short locret_999A06
0x999A04: mov     [ecx], eax
0x999A06: leave
0x999A07: retn
