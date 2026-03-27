0xA26CC0: push    esi
0xA26CC1: mov     esi, dword_B4088C
0xA26CC7: test    esi, esi
0xA26CC9: jz      short loc_A26CE7
0xA26CCB: lea     eax, [esi+4]
0xA26CCE: push    eax; lpAddend
0xA26CCF: call    ds:InterlockedDecrement
0xA26CD5: test    eax, eax
0xA26CD7: jnz     short loc_A26CE7
0xA26CD9: test    esi, esi
0xA26CDB: jz      short loc_A26CE7
0xA26CDD: mov     edx, [esi]
0xA26CDF: mov     eax, [edx]
0xA26CE1: push    1
0xA26CE3: mov     ecx, esi
0xA26CE5: call    eax
0xA26CE7: pop     esi
0xA26CE8: retn
