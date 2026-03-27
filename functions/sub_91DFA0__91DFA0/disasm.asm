0x91DFA0: push    esi
0x91DFA1: mov     esi, ecx
0x91DFA3: mov     eax, [esi+24h]
0x91DFA6: test    eax, eax
0x91DFA8: mov     dword ptr [esi], offset off_A9D81C
0x91DFAE: mov     dword ptr [esi+8], offset off_A9D804
0x91DFB5: mov     dword ptr [esi+20h], offset off_A9D7FC
0x91DFBC: mov     dword ptr [esi+28h], offset off_A9D7E8
0x91DFC3: jz      short loc_91DFF9
0x91DFC5: mov     ecx, [eax+60h]
0x91DFC8: push    edi
0x91DFC9: xor     edi, edi
0x91DFCB: test    ecx, ecx
0x91DFCD: jle     short loc_91DFF8
0x91DFCF: push    ebx
0x91DFD0: mov     ebx, esi
0x91DFD2: test    ebx, ebx
0x91DFD4: mov     eax, [esi+24h]
0x91DFD7: mov     ecx, [eax+5Ch]
0x91DFDA: mov     ecx, [ecx+edi*4]
0x91DFDD: jz      short loc_91DFE4
0x91DFDF: lea     eax, [esi+28h]
0x91DFE2: jmp     short loc_91DFE6
0x91DFE4: xor     eax, eax
0x91DFE6: push    eax
0x91DFE7: call    sub_898AD0
0x91DFEC: mov     edx, [esi+24h]
0x91DFEF: mov     eax, [edx+60h]
0x91DFF2: inc     edi
0x91DFF3: cmp     edi, eax
0x91DFF5: jl      short loc_91DFD2
0x91DFF7: pop     ebx
0x91DFF8: pop     edi
0x91DFF9: mov     dword ptr [esi+28h], offset ??_7hkCollisionListener@@6B@; const hkCollisionListener::`vftable'
0x91E000: mov     ecx, esi
0x91E002: pop     esi
0x91E003: jmp     sub_949180
