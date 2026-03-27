0x47FAC0: mov     eax, [esp+arg_0]
0x47FAC4: push    esi
0x47FAC5: mov     esi, [eax+0A8h]
0x47FACB: test    esi, esi
0x47FACD: jnz     short loc_47FAD3
0x47FACF: xor     eax, eax
0x47FAD1: pop     esi
0x47FAD2: retn
0x47FAD3: mov     edx, [esi]
0x47FAD5: mov     eax, [edx+4]
0x47FAD8: mov     ecx, esi
0x47FADA: call    eax
0x47FADC: test    eax, eax
0x47FADE: jz      short loc_47FAEE
0x47FAE0: cmp     eax, offset dword_BA7D24
0x47FAE5: jz      short loc_47FAF8
0x47FAE7: mov     eax, [eax+4]
0x47FAEA: test    eax, eax
0x47FAEC: jnz     short loc_47FAE0
0x47FAEE: xor     al, al
0x47FAF0: neg     al
0x47FAF2: sbb     eax, eax
0x47FAF4: and     eax, esi
0x47FAF6: pop     esi
0x47FAF7: retn
0x47FAF8: mov     al, 1
0x47FAFA: neg     al
0x47FAFC: sbb     eax, eax
0x47FAFE: and     eax, esi
0x47FB00: pop     esi
0x47FB01: retn
