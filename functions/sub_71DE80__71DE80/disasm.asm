0x71DE80: mov     eax, [esp+arg_1C]
0x71DE84: cmp     dword ptr [eax+4], 0FF00h
0x71DE8B: jnz     short locret_71DF07
0x71DE8D: mov     eax, [eax]
0x71DE8F: cmp     eax, 0FF0000h
0x71DE94: jnz     short loc_71DEE1
0x71DE96: mov     eax, [esp+arg_4]
0x71DE9A: test    eax, eax
0x71DE9C: jbe     short locret_71DF07
0x71DE9E: mov     ecx, [esp+Src]
0x71DEA2: push    ebp
0x71DEA3: push    esi
0x71DEA4: push    edi
0x71DEA5: mov     edi, [esp+0Ch+arg_0]
0x71DEA9: mov     ebp, eax
0x71DEAB: mov     eax, [esp+0Ch+Dst]
0x71DEAF: nop
0x71DEB0: test    edi, edi
0x71DEB2: jbe     short loc_71DED8
0x71DEB4: mov     esi, edi
0x71DEB6: movzx   edx, byte ptr [ecx+2]
0x71DEBA: mov     [eax], dl
0x71DEBC: movzx   edx, byte ptr [ecx+1]
0x71DEC0: add     eax, 1
0x71DEC3: mov     [eax], dl
0x71DEC5: movzx   edx, byte ptr [ecx]
0x71DEC8: add     eax, 1
0x71DECB: mov     [eax], dl
0x71DECD: add     eax, 1
0x71DED0: add     ecx, 3
0x71DED3: sub     esi, 1
0x71DED6: jnz     short loc_71DEB6
0x71DED8: sub     ebp, 1
0x71DEDB: jnz     short loc_71DEB0
0x71DEDD: pop     edi
0x71DEDE: pop     esi
0x71DEDF: pop     ebp
0x71DEE0: retn
0x71DEE1: cmp     eax, 0FFh
0x71DEE6: jnz     short locret_71DF07
0x71DEE8: mov     eax, [esp+arg_0]
0x71DEEC: imul    eax, [esp+arg_4]
0x71DEF1: mov     ecx, [esp+Src]
0x71DEF5: mov     edx, [esp+Dst]
0x71DEF9: lea     eax, [eax+eax*2]
0x71DEFC: push    eax; Size
0x71DEFD: push    ecx; Src
0x71DEFE: push    edx; Dst
0x71DEFF: call    _memcpy
0x71DF04: add     esp, 0Ch
0x71DF07: retn
