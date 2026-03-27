0x7126A0: push    edi
0x7126A1: mov     edi, ecx
0x7126A3: cmp     dword ptr [edi+0D8h], 401000Ch
0x7126AD: jnb     short loc_71270B
0x7126AF: push    ebx
0x7126B0: xor     ebx, ebx
0x7126B2: cmp     [edi+1F8h], ebx
0x7126B8: jbe     short loc_71270A
0x7126BA: push    esi
0x7126BB: jmp     short loc_7126C0
0x7126BD: align 10h
0x7126C0: mov     eax, [edi+1F0h]
0x7126C6: mov     esi, [eax+ebx*4]
0x7126C9: test    esi, esi
0x7126CB: jz      short loc_7126FE
0x7126CD: mov     edx, [esi]
0x7126CF: mov     eax, [edx+4]
0x7126D2: mov     ecx, esi
0x7126D4: call    eax
0x7126D6: test    eax, eax
0x7126D8: jz      short loc_7126FE
0x7126DA: lea     ebx, [ebx+0]
0x7126E0: cmp     eax, offset dword_B3FA80
0x7126E5: jz      short loc_7126F0
0x7126E7: mov     eax, [eax+4]
0x7126EA: test    eax, eax
0x7126EC: jnz     short loc_7126E0
0x7126EE: jmp     short loc_7126FE
0x7126F0: cmp     dword ptr [esi+1Ch], 0
0x7126F4: jnz     short loc_7126FE
0x7126F6: push    esi
0x7126F7: mov     ecx, edi
0x7126F9: call    sub_712640
0x7126FE: add     ebx, 1
0x712701: cmp     ebx, [edi+1F8h]
0x712707: jb      short loc_7126C0
0x712709: pop     esi
0x71270A: pop     ebx
0x71270B: pop     edi
0x71270C: retn
