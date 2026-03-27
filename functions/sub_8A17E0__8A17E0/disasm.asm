0x8A17E0: push    ebx
0x8A17E1: push    esi
0x8A17E2: mov     esi, ecx
0x8A17E4: xor     ebx, ebx
0x8A17E6: cmp     [esi+0Ch], ebx
0x8A17E9: jnz     short loc_8A1835
0x8A17EB: push    1Ch; Size
0x8A17ED: call    FormHeapAlloc
0x8A17F2: add     esp, 4
0x8A17F5: cmp     eax, ebx
0x8A17F7: jz      short loc_8A1814
0x8A17F9: mov     [eax], ebx
0x8A17FB: mov     ecx, 80000000h
0x8A1800: mov     [eax+4], ebx
0x8A1803: mov     [eax+8], ebx
0x8A1806: mov     [eax+0Ch], ecx
0x8A1809: mov     [eax+10h], ebx
0x8A180C: mov     [eax+14h], ebx
0x8A180F: mov     [eax+18h], ecx
0x8A1812: jmp     short loc_8A1816
0x8A1814: xor     eax, eax
0x8A1816: cmp     [esi+8], ebx
0x8A1819: mov     [esi+0Ch], eax
0x8A181C: jz      short loc_8A1826
0x8A181E: push    eax
0x8A181F: mov     ecx, esi
0x8A1821: call    sub_8A16D0
0x8A1826: mov     eax, [esp+8+arg_0]
0x8A182A: mov     byte ptr [eax], 1
0x8A182D: mov     eax, [esi+0Ch]
0x8A1830: pop     esi
0x8A1831: pop     ebx
0x8A1832: retn    4
0x8A1835: mov     ecx, [esp+8+arg_0]
0x8A1839: mov     [ecx], bl
0x8A183B: mov     eax, [esi+0Ch]
0x8A183E: pop     esi
0x8A183F: pop     ebx
0x8A1840: retn    4
