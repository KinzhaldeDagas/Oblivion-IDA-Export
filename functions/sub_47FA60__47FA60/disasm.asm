0x47FA60: mov     ecx, [esp+arg_0]
0x47FA64: sub     esp, 8
0x47FA67: test    ecx, ecx
0x47FA69: push    esi
0x47FA6A: jz      short loc_47FA81
0x47FA6C: push    offset dword_BA7B80
0x47FA71: lea     eax, [esp+10h+var_8]
0x47FA75: push    eax
0x47FA76: call    sub_47F990
0x47FA7B: mov     esi, [eax]
0x47FA7D: test    esi, esi
0x47FA7F: jnz     short loc_47FA88
0x47FA81: xor     eax, eax
0x47FA83: pop     esi
0x47FA84: add     esp, 8
0x47FA87: retn
0x47FA88: mov     edx, [esi]
0x47FA8A: mov     eax, [edx+4]
0x47FA8D: mov     ecx, esi
0x47FA8F: call    eax
0x47FA91: test    eax, eax
0x47FA93: jz      short loc_47FAA3
0x47FA95: cmp     eax, offset dword_BA7D24
0x47FA9A: jz      short loc_47FAB0
0x47FA9C: mov     eax, [eax+4]
0x47FA9F: test    eax, eax
0x47FAA1: jnz     short loc_47FA95
0x47FAA3: xor     al, al
0x47FAA5: neg     al
0x47FAA7: sbb     eax, eax
0x47FAA9: and     eax, esi
0x47FAAB: pop     esi
0x47FAAC: add     esp, 8
0x47FAAF: retn
0x47FAB0: mov     al, 1
0x47FAB2: neg     al
0x47FAB4: sbb     eax, eax
0x47FAB6: and     eax, esi
0x47FAB8: pop     esi
0x47FAB9: add     esp, 8
0x47FABC: retn
