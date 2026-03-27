0x662710: push    edi
0x662711: mov     edi, ecx
0x662713: call    Actor__GetRaceIfNPC
0x662718: test    eax, eax
0x66271A: jz      short loc_66274B
0x66271C: push    esi
0x66271D: mov     ecx, edi
0x66271F: call    Actor__GetRaceIfNPC
0x662724: mov     esi, eax
0x662726: add     esi, 30h ; '0'
0x662729: jz      short loc_66274A
0x66272B: jmp     short loc_662730
0x66272D: align 10h
0x662730: mov     eax, [esi]
0x662732: test    eax, eax
0x662734: jz      short loc_66274A
0x662736: mov     edx, [edi]
0x662738: push    eax
0x662739: mov     eax, [edx+2E0h]
0x66273F: mov     ecx, edi
0x662741: call    eax
0x662743: mov     esi, [esi+4]
0x662746: test    esi, esi
0x662748: jnz     short loc_662730
0x66274A: pop     esi
0x66274B: pop     edi
0x66274C: retn
