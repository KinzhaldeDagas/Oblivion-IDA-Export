0x74FA90: push    esi
0x74FA91: push    edi
0x74FA92: mov     edi, ecx
0x74FA94: mov     esi, [edi+48h]
0x74FA97: test    esi, esi
0x74FA99: jz      short loc_74FAC0
0x74FA9B: mov     eax, [esi]
0x74FA9D: mov     edx, [eax+4]
0x74FAA0: mov     ecx, esi
0x74FAA2: call    edx
0x74FAA4: test    eax, eax
0x74FAA6: jz      short loc_74FAB6
0x74FAA8: cmp     eax, offset dword_B3E7E8
0x74FAAD: jz      short loc_74FAF7
0x74FAAF: mov     eax, [eax+4]
0x74FAB2: test    eax, eax
0x74FAB4: jnz     short loc_74FAA8
0x74FAB6: xor     al, al
0x74FAB8: neg     al
0x74FABA: sbb     eax, eax
0x74FABC: and     eax, esi
0x74FABE: jnz     short loc_74FB0C
0x74FAC0: mov     eax, [edi+48h]
0x74FAC3: push    eax
0x74FAC4: push    offset dword_B3EA50
0x74FAC9: call    NiRTTI_Cast
0x74FACE: mov     esi, eax
0x74FAD0: add     esp, 8
0x74FAD3: test    esi, esi
0x74FAD5: jz      short loc_74FB0A
0x74FAD7: mov     ecx, esi
0x74FAD9: call    sub_6CC550
0x74FADE: cmp     al, ds:0A79EFCh
0x74FAE4: jz      short loc_74FB0A
0x74FAE6: cmp     byte ptr [esi+0Eh], 1
0x74FAEA: jnz     short loc_74FAFB
0x74FAEC: cmp     al, [esi+0Fh]
0x74FAEF: jnz     short loc_74FAFB
0x74FAF1: mov     eax, [esi+18h]
0x74FAF4: pop     edi
0x74FAF5: pop     esi
0x74FAF6: retn
0x74FAF7: mov     al, 1
0x74FAF9: jmp     short loc_74FAB8
0x74FAFB: mov     ecx, [esi+14h]
0x74FAFE: movzx   eax, al
0x74FB01: lea     eax, [eax+eax*2]
0x74FB04: mov     eax, [ecx+eax*8]
0x74FB07: pop     edi
0x74FB08: pop     esi
0x74FB09: retn
0x74FB0A: xor     eax, eax
0x74FB0C: pop     edi
0x74FB0D: pop     esi
0x74FB0E: retn
