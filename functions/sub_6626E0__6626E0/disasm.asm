0x6626E0: push    esi
0x6626E1: push    edi
0x6626E2: mov     edi, ecx
0x6626E4: call    Actor__GetRaceIfNPC
0x6626E9: mov     esi, eax
0x6626EB: add     esi, 30h ; '0'
0x6626EE: jz      short loc_66270A
0x6626F0: mov     eax, [esi]
0x6626F2: test    eax, eax
0x6626F4: jz      short loc_66270A
0x6626F6: mov     edx, [edi]
0x6626F8: push    eax
0x6626F9: mov     eax, [edx+2DCh]
0x6626FF: mov     ecx, edi
0x662701: call    eax
0x662703: mov     esi, [esi+4]
0x662706: test    esi, esi
0x662708: jnz     short loc_6626F0
0x66270A: pop     edi
0x66270B: pop     esi
0x66270C: retn
