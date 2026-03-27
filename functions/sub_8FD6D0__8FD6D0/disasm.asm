0x8FD6D0: mov     ecx, [esp+arg_4]
0x8FD6D4: push    esi
0x8FD6D5: movzx   esi, byte ptr [ecx+21h]
0x8FD6D9: xor     eax, eax
0x8FD6DB: test    esi, esi
0x8FD6DD: jle     short loc_8FD706
0x8FD6DF: push    edi
0x8FD6E0: mov     di, [esp+8+arg_8]
0x8FD6E5: lea     edx, [ecx+2]
0x8FD6E8: cmp     [edx], di
0x8FD6EB: jz      short loc_8FD6F8
0x8FD6ED: inc     eax
0x8FD6EE: add     edx, 4
0x8FD6F1: cmp     eax, esi
0x8FD6F3: jl      short loc_8FD6E8
0x8FD6F5: pop     edi
0x8FD6F6: pop     esi
0x8FD6F7: retn
0x8FD6F8: push    eax
0x8FD6F9: call    sub_9363C0
0x8FD6FE: mov     eax, [esp+8+arg_0]
0x8FD702: dec     byte ptr [eax+2]
0x8FD705: pop     edi
0x8FD706: pop     esi
0x8FD707: retn
