0x64AF90: push    esi
0x64AF91: push    edi
0x64AF92: mov     edi, [esp+8+a2]
0x64AF96: test    edi, edi
0x64AF98: mov     esi, ecx
0x64AF9A: jz      short loc_64AFAF
0x64AF9C: mov     ecx, [esi+0C0h]
0x64AFA2: test    ecx, ecx
0x64AFA4: jz      short loc_64AFF9
0x64AFA6: call    sub_5660A0
0x64AFAB: test    al, al
0x64AFAD: jz      short loc_64AFF9
0x64AFAF: cmp     dword ptr [esi+0C0h], 0
0x64AFB6: jz      short loc_64AFF2
0x64AFB8: test    edi, edi
0x64AFBA: jnz     short loc_64AFF2
0x64AFBC: mov     ecx, ds:0B33B00h
0x64AFC2: call    sub_45A500
0x64AFC7: test    al, al
0x64AFC9: jz      short loc_64AFDF
0x64AFCB: mov     eax, [esi+0C0h]
0x64AFD1: mov     ecx, ds:0B33B00h
0x64AFD7: push    eax
0x64AFD8: call    sub_45C7A0
0x64AFDD: jmp     short loc_64AFF2
0x64AFDF: mov     ecx, [esi+0C0h]
0x64AFE5: test    ecx, ecx
0x64AFE7: jz      short loc_64AFF2
0x64AFE9: mov     edx, [ecx]
0x64AFEB: mov     eax, [edx+10h]
0x64AFEE: push    1
0x64AFF0: call    eax
0x64AFF2: mov     dword ptr [esi+2Ch], 0
0x64AFF9: mov     edx, [esi]
0x64AFFB: mov     eax, [edx+350h]
0x64B001: mov     ecx, esi
0x64B003: mov     [esi+0C0h], edi
0x64B009: mov     dword ptr [esi+0CCh], 0
0x64B013: call    eax
0x64B015: pop     edi
0x64B016: pop     esi
0x64B017: retn    4
