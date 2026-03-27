0x705150: push    ebx
0x705151: mov     ebx, [esp+4+arg_0]
0x705155: push    edi
0x705156: push    ebx
0x705157: mov     edi, ecx
0x705159: call    sub_6D7E00
0x70515E: test    al, al
0x705160: jnz     short loc_705169
0x705162: pop     edi
0x705163: xor     al, al
0x705165: pop     ebx
0x705166: retn    4
0x705169: mov     ax, [edi+18h]
0x70516D: cmp     ax, [ebx+18h]
0x705171: jnz     short loc_705162
0x705173: movzx   ecx, word ptr [ebx+26h]
0x705177: push    ebp
0x705178: movzx   ebp, word ptr [edi+26h]
0x70517C: cmp     ebp, ecx
0x70517E: jz      short loc_705188
0x705180: pop     ebp
0x705181: pop     edi
0x705182: xor     al, al
0x705184: pop     ebx
0x705185: retn    4
0x705188: push    esi
0x705189: xor     esi, esi
0x70518B: test    ebp, ebp
0x70518D: jbe     short loc_7051CF
0x70518F: nop
0x705190: mov     edx, [edi+20h]
0x705193: mov     ecx, [edx+esi*4]
0x705196: test    ecx, ecx
0x705198: mov     eax, [ebx+20h]
0x70519B: mov     eax, [eax+esi*4]
0x70519E: jz      short loc_7051C4
0x7051A0: test    eax, eax
0x7051A2: jz      loc_705230
0x7051A8: cmp     esi, 5
0x7051AB: push    eax
0x7051AC: jnz     short loc_7051B9
0x7051AE: call    sub_704300
0x7051B3: test    al, al
0x7051B5: jz      short loc_705230
0x7051B7: jmp     short loc_7051C8
0x7051B9: call    sub_704290
0x7051BE: test    al, al
0x7051C0: jz      short loc_705230
0x7051C2: jmp     short loc_7051C8
0x7051C4: test    eax, eax
0x7051C6: jnz     short loc_705230
0x7051C8: add     esi, 1
0x7051CB: cmp     esi, ebp
0x7051CD: jb      short loc_705190
0x7051CF: mov     ecx, [edi+2Ch]
0x7051D2: test    ecx, ecx
0x7051D4: jz      short loc_70522A
0x7051D6: mov     eax, [ebx+2Ch]
0x7051D9: test    eax, eax
0x7051DB: jz      short loc_705230
0x7051DD: movzx   ebp, word ptr [ecx+0Ah]
0x7051E1: movzx   ecx, word ptr [eax+0Ah]
0x7051E5: cmp     ebp, ecx
0x7051E7: jnz     short loc_705230
0x7051E9: xor     esi, esi
0x7051EB: test    ebp, ebp
0x7051ED: jbe     short loc_705221
0x7051EF: nop
0x7051F0: mov     edx, [edi+2Ch]
0x7051F3: mov     eax, [edx+4]
0x7051F6: mov     ecx, [eax+esi*4]
0x7051F9: test    ecx, ecx
0x7051FB: mov     edx, [ebx+2Ch]
0x7051FE: mov     eax, [edx+4]
0x705201: mov     eax, [eax+esi*4]
0x705204: jz      short loc_705216
0x705206: test    eax, eax
0x705208: jz      short loc_705230
0x70520A: push    eax
0x70520B: call    sub_704380
0x705210: test    al, al
0x705212: jz      short loc_705230
0x705214: jmp     short loc_70521A
0x705216: test    eax, eax
0x705218: jnz     short loc_705230
0x70521A: add     esi, 1
0x70521D: cmp     esi, ebp
0x70521F: jb      short loc_7051F0
0x705221: pop     esi
0x705222: pop     ebp
0x705223: pop     edi
0x705224: mov     al, 1
0x705226: pop     ebx
0x705227: retn    4
0x70522A: cmp     dword ptr [ebx+2Ch], 0
0x70522E: jz      short loc_705221
0x705230: pop     esi
0x705231: pop     ebp
0x705232: pop     edi
0x705233: xor     al, al
0x705235: pop     ebx
0x705236: retn    4
