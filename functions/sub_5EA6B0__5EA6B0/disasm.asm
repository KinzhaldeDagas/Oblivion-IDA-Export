0x5EA6B0: push    esi
0x5EA6B1: mov     esi, ecx
0x5EA6B3: call    Actor_IsNPC
0x5EA6B8: test    al, al
0x5EA6BA: jz      short loc_5EA712
0x5EA6BC: mov     eax, [esi]
0x5EA6BE: mov     edx, [eax+170h]
0x5EA6C4: mov     ecx, esi
0x5EA6C6: call    edx
0x5EA6C8: test    eax, eax
0x5EA6CA: jz      short loc_5EA712
0x5EA6CC: mov     eax, [eax+104h]
0x5EA6D2: test    eax, eax
0x5EA6D4: jz      short loc_5EA712
0x5EA6D6: lea     edx, [eax+18h]
0x5EA6D9: test    edx, edx
0x5EA6DB: jz      short loc_5EA712
0x5EA6DD: movzx   eax, word ptr [edx+8]
0x5EA6E1: cmp     ax, 0FFFFh
0x5EA6E5: jnz     short loc_5EA6FD
0x5EA6E7: mov     eax, [edx+4]
0x5EA6EA: lea     esi, [eax+1]
0x5EA6ED: lea     ecx, [ecx+0]
0x5EA6F0: mov     cl, [eax]
0x5EA6F2: add     eax, 1
0x5EA6F5: test    cl, cl
0x5EA6F7: jnz     short loc_5EA6F0
0x5EA6F9: sub     eax, esi
0x5EA6FB: jmp     short loc_5EA700
0x5EA6FD: movzx   eax, ax
0x5EA700: test    eax, eax
0x5EA702: jz      short loc_5EA712
0x5EA704: mov     eax, [edx+4]
0x5EA707: test    eax, eax
0x5EA709: jnz     short loc_5EA714
0x5EA70B: mov     eax, offset EmptyString
0x5EA710: pop     esi
0x5EA711: retn
0x5EA712: xor     eax, eax
0x5EA714: pop     esi
0x5EA715: retn
