0x7ECB20: test    byte ptr ds:0B466D8h, 1
0x7ECB27: jnz     short loc_7ECB50
0x7ECB29: fld     dword ptr ds:0A37080h
0x7ECB2F: or      dword ptr ds:0B466D8h, 1
0x7ECB36: fstp    dword ptr ds:0B466C8h
0x7ECB3C: fldz
0x7ECB3E: fst     dword ptr ds:0B466CCh
0x7ECB44: fst     dword ptr ds:0B466D0h
0x7ECB4A: fstp    dword ptr ds:0B466D4h
0x7ECB50: push    ebx
0x7ECB51: mov     ebx, ds:0B466CCh
0x7ECB57: push    ebp
0x7ECB58: mov     ebp, ds:0B466C8h
0x7ECB5E: push    esi
0x7ECB5F: mov     esi, ds:0B466D4h
0x7ECB65: xor     edx, edx
0x7ECB67: xor     eax, eax
0x7ECB69: push    edi
0x7ECB6A: mov     edi, ds:0B466D0h
0x7ECB70: mov     ds:0B46138h, eax
0x7ECB75: mov     ds:0B4613Ch, eax
0x7ECB7A: mov     ds:0B46140h, eax
0x7ECB7F: mov     ds:0B46144h, eax
0x7ECB84: mov     ds:0B46148h, eax
0x7ECB89: mov     ds:0B4614Ch, eax
0x7ECB8E: mov     ds:0B46150h, eax
0x7ECB93: mov     ds:0B46154h, eax
0x7ECB98: jmp     short loc_7ECBA0
0x7ECB9A: align 10h
0x7ECBA0: movzx   ecx, dx
0x7ECBA3: lea     eax, [ecx+11h]
0x7ECBA6: movzx   eax, ax
0x7ECBA9: shl     eax, 4
0x7ECBAC: add     eax, offset dword_B46498
0x7ECBB1: mov     [eax], ebp
0x7ECBB3: mov     [eax+4], ebx
0x7ECBB6: add     ecx, 1
0x7ECBB9: mov     [eax+8], edi
0x7ECBBC: mov     [eax+0Ch], esi
0x7ECBBF: movzx   eax, cx
0x7ECBC2: mov     ecx, ds:0B25AD0h
0x7ECBC8: shl     eax, 4
0x7ECBCB: add     eax, offset dword_B46498
0x7ECBD0: mov     [eax], ecx
0x7ECBD2: mov     ecx, ds:0B25AD4h
0x7ECBD8: mov     [eax+4], ecx
0x7ECBDB: mov     ecx, ds:0B25AD8h
0x7ECBE1: mov     [eax+8], ecx
0x7ECBE4: mov     ecx, ds:0B25ADCh
0x7ECBEA: add     edx, 1
0x7ECBED: cmp     edx, 8
0x7ECBF0: mov     [eax+0Ch], ecx
0x7ECBF3: jl      short loc_7ECBA0
0x7ECBF5: pop     edi
0x7ECBF6: pop     esi
0x7ECBF7: pop     ebp
0x7ECBF8: pop     ebx
0x7ECBF9: retn
