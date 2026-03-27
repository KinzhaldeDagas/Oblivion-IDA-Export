0x9868A3: cmp     ax, cx
0x9868A6: jnz     short loc_9868C9
0x9868A8: cmp     cx, bx
0x9868AB: jz      short loc_9868B6
0x9868AD: cmp     [ebp+10h], ebx
0x9868B0: jnz     loc_98682C
0x9868B6: cmp     [ebp-4], bl
0x9868B9: jz      short loc_9868C2
0x9868BB: mov     eax, [ebp-8]
0x9868BE: and     dword ptr [eax+70h], 0FFFFFFFDh
0x9868C2: xor     eax, eax
0x9868C4: pop     esi
0x9868C5: pop     edi
0x9868C6: pop     ebx
0x9868C7: leave
0x9868C8: retn
0x9868C9: sbb     eax, eax
0x9868CB: and     eax, 2
0x9868CE: dec     eax
0x9868CF: cmp     [ebp-4], bl
0x9868D2: jz      short loc_9868C4
0x9868D4: mov     ecx, [ebp-8]
0x9868D7: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x9868DB: jmp     short loc_9868C4
