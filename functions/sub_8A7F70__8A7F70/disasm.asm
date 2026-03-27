0x8A7F70: mov     edx, [esp+arg_0]
0x8A7F74: push    esi
0x8A7F75: mov     esi, [esp+4+arg_4]
0x8A7F79: push    edi
0x8A7F7A: mov     edi, edx
0x8A7F7C: and     edi, 3Fh
0x8A7F7F: cmp     edi, 1Dh
0x8A7F82: jz      short loc_8A7F9C
0x8A7F84: mov     eax, edx
0x8A7F86: shr     eax, 0Eh
0x8A7F89: test    al, 1
0x8A7F8B: jnz     short loc_8A7F97
0x8A7F8D: mov     ecx, esi
0x8A7F8F: shr     ecx, 0Eh
0x8A7F92: test    cl, 1
0x8A7F95: jz      short loc_8A7F9C
0x8A7F97: pop     edi
0x8A7F98: xor     al, al
0x8A7F9A: pop     esi
0x8A7F9B: retn
0x8A7F9C: test    edx, 0FFFF0000h
0x8A7FA2: jz      short loc_8A7FC7
0x8A7FA4: test    esi, 0FFFF0000h
0x8A7FAA: jz      short loc_8A7FC7
0x8A7FAC: mov     eax, edx
0x8A7FAE: xor     eax, esi
0x8A7FB0: mov     ecx, esi
0x8A7FB2: and     eax, 0FFFF0000h
0x8A7FB7: and     ecx, 3Fh
0x8A7FBA: cmp     edi, 8
0x8A7FBD: jnz     short loc_8A7FCC
0x8A7FBF: cmp     ecx, edi
0x8A7FC1: jnz     short loc_8A7FCC
0x8A7FC3: test    eax, eax
0x8A7FC5: jz      short loc_8A8036
0x8A7FC7: pop     edi
0x8A7FC8: mov     al, 1
0x8A7FCA: pop     esi
0x8A7FCB: retn
0x8A7FCC: test    eax, eax
0x8A7FCE: jz      short loc_8A7FE9
0x8A7FD0: mov     eax, ds:0BA7DB0h[edi*4]
0x8A7FD7: mov     edx, 1
0x8A7FDC: shl     edx, cl
0x8A7FDE: pop     edi
0x8A7FDF: pop     esi
0x8A7FE0: and     eax, edx
0x8A7FE2: neg     eax
0x8A7FE4: sbb     eax, eax
0x8A7FE6: neg     eax
0x8A7FE8: retn
0x8A7FE9: mov     eax, edx
0x8A7FEB: and     eax, esi
0x8A7FED: test    eax, 8000h
0x8A7FF2: jz      short loc_8A8025
0x8A7FF4: mov     eax, 1
0x8A7FF9: shl     eax, cl
0x8A7FFB: test    ds:0BA7DB0h[edi*4], eax
0x8A8002: jz      short loc_8A7F97
0x8A8004: mov     eax, edx
0x8A8006: shr     eax, 8
0x8A8009: and     eax, 1Fh
0x8A800C: shr     esi, 8
0x8A800F: and     esi, 1Fh
0x8A8012: sub     eax, esi
0x8A8014: cdq
0x8A8015: xor     eax, edx
0x8A8017: sub     eax, edx
0x8A8019: sub     eax, 1
0x8A801C: neg     eax
0x8A801E: sbb     eax, eax
0x8A8020: pop     edi
0x8A8021: neg     eax
0x8A8023: pop     esi
0x8A8024: retn
0x8A8025: cmp     edi, 8
0x8A8028: jnz     loc_8A7F97
0x8A802E: cmp     ecx, edi
0x8A8030: jnz     loc_8A7F97
0x8A8036: mov     ecx, esi
0x8A8038: shr     ecx, 8
0x8A803B: and     ecx, 1Fh
0x8A803E: mov     eax, 1
0x8A8043: shl     eax, cl
0x8A8045: shr     edx, 8
0x8A8048: and     edx, 1Fh
0x8A804B: pop     edi
0x8A804C: and     eax, ds:0BA7E30h[edx*4]
0x8A8053: pop     esi
0x8A8054: neg     eax
0x8A8056: sbb     eax, eax
0x8A8058: neg     eax
0x8A805A: retn
