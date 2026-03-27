0x958BA0: mov     edx, [ecx+0Ch]
0x958BA3: mov     eax, [esp+arg_0]
0x958BA7: push    ebx
0x958BA8: push    esi
0x958BA9: mov     esi, [esp+8+arg_4]
0x958BAD: dec     edx
0x958BAE: test    esi, esi
0x958BB0: push    edi
0x958BB1: jz      short loc_958C16
0x958BB3: lea     edi, [ecx+edx*4+0DE0h]
0x958BBA: mov     [esp+0Ch+arg_4], edi
0x958BBE: push    ebp
0x958BBF: nop
0x958BC0: test    edx, edx
0x958BC2: jl      short loc_958BEA
0x958BC4: mov     ebp, [esp+10h+arg_4]
0x958BC8: mov     ebp, [ebp+0]
0x958BCB: mov     edi, [eax+4]
0x958BCE: mov     ebx, [eax]
0x958BD0: mov     [ebx+edi*4], ebp
0x958BD3: inc     dword ptr [eax+4]
0x958BD6: dec     dword ptr [ecx+0Ch]
0x958BD9: mov     ebx, [esp+10h+arg_4]
0x958BDD: dec     esi
0x958BDE: sub     ebx, 4
0x958BE1: dec     edx
0x958BE2: test    esi, esi
0x958BE4: mov     [esp+10h+arg_4], ebx
0x958BE8: jnz     short loc_958BC0
0x958BEA: test    esi, esi
0x958BEC: pop     ebp
0x958BED: jle     short loc_958C16
0x958BEF: nop
0x958BF0: mov     edx, [ecx+10h]
0x958BF3: lea     edi, [edx+edx*4]
0x958BF6: shl     edi, 4
0x958BF9: inc     edx
0x958BFA: mov     [ecx+10h], edx
0x958BFD: mov     edx, [eax+4]
0x958C00: mov     ebx, [eax]
0x958C02: lea     edi, [edi+ecx+0F70h]
0x958C09: mov     [ebx+edx*4], edi
0x958C0C: mov     edi, [eax+4]
0x958C0F: inc     edi
0x958C10: dec     esi
0x958C11: mov     [eax+4], edi
0x958C14: jnz     short loc_958BF0
0x958C16: pop     edi
0x958C17: pop     esi
0x958C18: pop     ebx
0x958C19: retn    8
