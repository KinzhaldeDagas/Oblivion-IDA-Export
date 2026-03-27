0x985209: push    ebp
0x98520A: mov     ebp, esp
0x98520C: push    ecx
0x98520D: push    ecx
0x98520E: push    edi
0x98520F: lea     eax, [ebp+SystemTimeAsFileTime]
0x985212: push    eax; lpSystemTimeAsFileTime
0x985213: call    dword ptr ds:0A281BCh
0x985219: push    1
0x98521B: push    0
0x98521D: push    0
0x98521F: push    [ebp+SystemTimeAsFileTime.dwHighDateTime]
0x985222: call    __allmul
0x985227: sub     eax, ds:0BA9DF0h
0x98522D: mov     ecx, [ebp+SystemTimeAsFileTime.dwLowDateTime]
0x985230: sbb     edx, ds:0BA9DF4h
0x985236: xor     edi, edi
0x985238: push    edi
0x985239: add     eax, ecx
0x98523B: push    2710h
0x985240: adc     edx, edi
0x985242: push    edx
0x985243: push    eax
0x985244: call    __aulldiv
0x985249: pop     edi
0x98524A: leave
0x98524B: retn
