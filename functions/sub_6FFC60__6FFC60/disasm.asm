0x6FFC60: push    ebx
0x6FFC61: push    esi
0x6FFC62: push    edi
0x6FFC63: push    offset stru_B3F600; lpCriticalSection
0x6FFC68: mov     edi, ecx
0x6FFC6A: call    dword ptr ds:0A2806Ch
0x6FFC70: call    dword ptr ds:0A2808Ch
0x6FFC76: add     dword ptr ds:0B3F67Ch, 1
0x6FFC7D: mov     ds:0B3F678h, eax
0x6FFC82: mov     ax, [edi+14h]
0x6FFC86: sub     ax, 1
0x6FFC8A: movzx   esi, ax
0x6FFC8D: xor     ebx, ebx
0x6FFC8F: cmp     si, bx
0x6FFC92: jl      short loc_6FFCA4
0x6FFC94: push    esi
0x6FFC95: mov     ecx, edi
0x6FFC97: call    sub_6FF480
0x6FFC9C: sub     esi, 1
0x6FFC9F: cmp     si, bx
0x6FFCA2: jge     short loc_6FFC94
0x6FFCA4: mov     ecx, [edi+10h]
0x6FFCA7: push    ecx
0x6FFCA8: call    FormHeapFree
0x6FFCAD: add     esp, 4
0x6FFCB0: mov     [edi+10h], ebx
0x6FFCB3: mov     [edi+16h], bx
0x6FFCB7: mov     [edi+14h], bx
0x6FFCBB: sub     dword ptr ds:0B3F67Ch, 1
0x6FFCC2: jnz     short loc_6FFCCA
0x6FFCC4: mov     ds:0B3F678h, ebx
0x6FFCCA: push    offset stru_B3F600; lpCriticalSection
0x6FFCCF: call    dword ptr ds:0A28074h
0x6FFCD5: pop     edi
0x6FFCD6: pop     esi
0x6FFCD7: pop     ebx
0x6FFCD8: retn
