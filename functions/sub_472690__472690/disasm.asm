0x472690: push    ebx
0x472691: push    ebp
0x472692: push    esi
0x472693: xor     bl, bl
0x472695: cmp     [esp+0Ch+arg_0], 0
0x47269A: push    edi
0x47269B: mov     ebp, ecx
0x47269D: jnz     short loc_4726A1
0x47269F: mov     bl, 1
0x4726A1: mov     eax, [ebp+98h]
0x4726A7: xor     edi, edi
0x4726A9: cmp     [eax+46h], di
0x4726AD: jbe     short loc_472713
0x4726AF: nop
0x4726B0: mov     eax, [eax+40h]
0x4726B3: mov     esi, [eax+edi*4]
0x4726B6: xor     eax, eax
0x4726B8: test    esi, esi
0x4726BA: jz      short loc_4726E6
0x4726BC: mov     edx, [esi]
0x4726BE: mov     eax, [edx+4]
0x4726C1: mov     ecx, esi
0x4726C3: call    eax
0x4726C5: test    eax, eax
0x4726C7: jz      short loc_4726DE
0x4726C9: lea     esp, [esp+0]
0x4726D0: cmp     eax, offset dword_B35270
0x4726D5: jz      short loc_4726F4
0x4726D7: mov     eax, [eax+4]
0x4726DA: test    eax, eax
0x4726DC: jnz     short loc_4726D0
0x4726DE: xor     al, al
0x4726E0: neg     al
0x4726E2: sbb     eax, eax
0x4726E4: and     eax, esi
0x4726E6: test    bl, bl
0x4726E8: jnz     short loc_4726F8
0x4726EA: cmp     eax, [esp+10h+arg_0]
0x4726EE: jnz     short loc_472702
0x4726F0: mov     bl, 1
0x4726F2: jmp     short loc_472702
0x4726F4: mov     al, 1
0x4726F6: jmp     short loc_4726E0
0x4726F8: test    eax, eax
0x4726FA: jz      short loc_472702
0x4726FC: cmp     dword ptr [eax+44h], 0
0x472700: jnz     short loc_472715
0x472702: mov     eax, [ebp+98h]
0x472708: movzx   ecx, word ptr [eax+46h]
0x47270C: add     edi, 1
0x47270F: cmp     edi, ecx
0x472711: jb      short loc_4726B0
0x472713: xor     eax, eax
0x472715: pop     edi
0x472716: pop     esi
0x472717: pop     ebp
0x472718: pop     ebx
0x472719: retn    4
