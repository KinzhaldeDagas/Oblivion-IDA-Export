0x985994: push    ebp
0x985995: mov     ebp, esp
0x985997: push    ecx
0x985998: push    ecx
0x985999: lea     eax, [ebp+SystemTimeAsFileTime]
0x98599C: push    eax; lpSystemTimeAsFileTime
0x98599D: call    dword ptr ds:0A281BCh
0x9859A3: mov     eax, [ebp+SystemTimeAsFileTime.dwLowDateTime]
0x9859A6: mov     ecx, [ebp+SystemTimeAsFileTime.dwHighDateTime]
0x9859A9: push    0
0x9859AB: add     eax, 2AC18000h
0x9859B0: push    (offset loc_98967F+1)
0x9859B5: adc     ecx, 0FE624E21h
0x9859BB: push    ecx
0x9859BC: push    eax
0x9859BD: call    __aulldiv
0x9859C2: mov     ecx, [ebp+Time]
0x9859C5: test    ecx, ecx
0x9859C7: jz      short locret_9859CE
0x9859C9: mov     [ecx], eax
0x9859CB: mov     [ecx+4], edx
0x9859CE: leave
0x9859CF: retn
