0x986AB8: cmp     cx, si
0x986ABB: jnz     short loc_986B12
0x986ABD: cmp     si, bx
0x986AC0: jz      short loc_986ACB
0x986AC2: cmp     [ebp+10h], ebx
0x986AC5: jnz     loc_9869B8
0x986ACB: cmp     [ebp-0Ch], bl
0x986ACE: jz      short loc_986AD7
0x986AD0: mov     eax, [ebp-10h]
0x986AD3: and     dword ptr [eax+70h], 0FFFFFFFDh
0x986AD7: xor     eax, eax
0x986AD9: pop     esi
0x986ADA: pop     edi
0x986ADB: pop     ebx
0x986ADC: leave
0x986ADD: retn
0x986ADE: cmp     cx, [eax+16h]
0x986AE2: jb      short loc_986AB6
0x986AE4: cmp     cx, [eax+18h]
0x986AE8: ja      short loc_986AB6
0x986AEA: add     cx, [eax+1Ah]
0x986AEE: jmp     short loc_986AB6
0x986AF0: movzx   edx, word ptr [ebp-4]
0x986AF4: lea     ecx, [edx+eax]
0x986AF7: test    byte ptr [ecx+1Dh], 10h
0x986AFB: jz      short loc_986B0A
0x986AFD: movzx   cx, byte ptr [ecx+11Dh]
0x986B05: jmp     loc_9869F2
0x986B0A: movzx   ecx, dx
0x986B0D: jmp     loc_9869F5
0x986B12: sbb     eax, eax
0x986B14: and     eax, 2
0x986B17: dec     eax
0x986B18: cmp     [ebp-0Ch], bl
0x986B1B: jz      short loc_986AD9
0x986B1D: mov     ecx, [ebp-10h]
0x986B20: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x986B24: jmp     short loc_986AD9
