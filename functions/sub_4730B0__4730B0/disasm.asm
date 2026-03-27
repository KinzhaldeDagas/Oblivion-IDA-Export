0x4730B0: push    ebp
0x4730B1: mov     ebp, ecx
0x4730B3: mov     eax, [ebp+98h]
0x4730B9: test    eax, eax
0x4730BB: jz      short loc_473119
0x4730BD: push    ebx
0x4730BE: movzx   ebx, word ptr [eax+46h]
0x4730C2: push    edi
0x4730C3: xor     edi, edi
0x4730C5: test    ebx, ebx
0x4730C7: jbe     short loc_473117
0x4730C9: push    esi
0x4730CA: lea     ebx, [ebx+0]
0x4730D0: mov     eax, [ebp+98h]
0x4730D6: mov     ecx, [eax+40h]
0x4730D9: mov     esi, [ecx+edi*4]
0x4730DC: test    esi, esi
0x4730DE: jz      short loc_47310F
0x4730E0: mov     edx, [esi]
0x4730E2: mov     eax, [edx+4]
0x4730E5: mov     ecx, esi
0x4730E7: call    eax
0x4730E9: test    eax, eax
0x4730EB: jz      short loc_4730FE
0x4730ED: lea     ecx, [ecx+0]
0x4730F0: cmp     eax, offset dword_B35270
0x4730F5: jz      short loc_47311B
0x4730F7: mov     eax, [eax+4]
0x4730FA: test    eax, eax
0x4730FC: jnz     short loc_4730F0
0x4730FE: xor     al, al
0x473100: neg     al
0x473102: sbb     eax, eax
0x473104: and     eax, esi
0x473106: jz      short loc_47310F
0x473108: mov     ecx, eax
0x47310A: call    sub_49F520
0x47310F: add     edi, 1
0x473112: cmp     edi, ebx
0x473114: jb      short loc_4730D0
0x473116: pop     esi
0x473117: pop     edi
0x473118: pop     ebx
0x473119: pop     ebp
0x47311A: retn
0x47311B: mov     al, 1
0x47311D: jmp     short loc_473100
