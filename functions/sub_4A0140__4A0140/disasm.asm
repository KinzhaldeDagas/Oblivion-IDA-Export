0x4A0140: mov     eax, ds:0B3F928h
0x4A0145: push    esi
0x4A0146: mov     esi, [eax+8]
0x4A0149: test    esi, esi
0x4A014B: push    edi
0x4A014C: mov     edi, ecx
0x4A014E: jz      short loc_4A0181
0x4A0150: mov     edx, [esi]
0x4A0152: mov     eax, [edx+4]
0x4A0155: mov     ecx, esi
0x4A0157: call    eax
0x4A0159: test    eax, eax
0x4A015B: jz      short loc_4A016E
0x4A015D: lea     ecx, [ecx+0]
0x4A0160: cmp     eax, offset dword_B42CEC
0x4A0165: jz      short loc_4A019D
0x4A0167: mov     eax, [eax+4]
0x4A016A: test    eax, eax
0x4A016C: jnz     short loc_4A0160
0x4A016E: xor     al, al
0x4A0170: neg     al
0x4A0172: sbb     eax, eax
0x4A0174: and     eax, esi
0x4A0176: mov     esi, eax
0x4A0178: jz      short loc_4A0181
0x4A017A: mov     byte ptr [esi+21E0h], 0
0x4A0181: mov     ecx, [esp+8+a2]
0x4A0185: push    ecx; a2
0x4A0186: mov     ecx, edi; this
0x4A0188: call    NiNode__OnVisible
0x4A018D: test    esi, esi
0x4A018F: jz      short loc_4A0198
0x4A0191: mov     byte ptr [esi+21E0h], 1
0x4A0198: pop     edi
0x4A0199: pop     esi
0x4A019A: retn    4
0x4A019D: mov     al, 1
0x4A019F: jmp     short loc_4A0170
