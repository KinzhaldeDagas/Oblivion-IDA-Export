0x47CBD0: push    ebx
0x47CBD1: push    esi
0x47CBD2: mov     esi, [esp+8+arg_0]
0x47CBD6: test    esi, esi
0x47CBD8: mov     ebx, ecx
0x47CBDA: jz      loc_47CC75
0x47CBE0: movzx   ecx, word ptr [ebx+44h]
0x47CBE4: xor     eax, eax
0x47CBE6: test    cx, cx
0x47CBE9: push    edi
0x47CBEA: jbe     short loc_47CC15
0x47CBEC: mov     edx, [ebx+40h]
0x47CBEF: nop
0x47CBF0: movzx   edi, ax
0x47CBF3: cmp     [edx+edi*4], esi
0x47CBF6: jz      short loc_47CC02
0x47CBF8: add     eax, 1
0x47CBFB: cmp     ax, cx
0x47CBFE: jb      short loc_47CBF0
0x47CC00: jmp     short loc_47CC15
0x47CC02: cmp     ax, ds:0A7A160h
0x47CC09: jz      short loc_47CC15
0x47CC0B: movzx   eax, ax
0x47CC0E: mov     dword ptr [edx+eax*4], 0
0x47CC15: mov     edx, [esi]
0x47CC17: mov     eax, [edx+4]
0x47CC1A: mov     ecx, esi
0x47CC1C: call    eax
0x47CC1E: test    eax, eax
0x47CC20: jz      short loc_47CC30
0x47CC22: cmp     eax, offset dword_B3FAB0
0x47CC27: jz      short loc_47CC51
0x47CC29: mov     eax, [eax+4]
0x47CC2C: test    eax, eax
0x47CC2E: jnz     short loc_47CC22
0x47CC30: xor     al, al
0x47CC32: neg     al
0x47CC34: sbb     eax, eax
0x47CC36: and     eax, esi
0x47CC38: mov     edi, eax
0x47CC3A: jz      short loc_47CC74
0x47CC3C: movzx   eax, word ptr [edi+0B6h]
0x47CC43: xor     esi, esi
0x47CC45: test    eax, eax
0x47CC47: jbe     short loc_47CC74
0x47CC49: cmp     eax, esi
0x47CC4B: ja      short loc_47CC55
0x47CC4D: xor     eax, eax
0x47CC4F: jmp     short loc_47CC5E
0x47CC51: mov     al, 1
0x47CC53: jmp     short loc_47CC32
0x47CC55: mov     ecx, [edi+0B0h]
0x47CC5B: mov     eax, [ecx+esi*4]
0x47CC5E: push    eax
0x47CC5F: mov     ecx, ebx
0x47CC61: call    sub_47CBD0
0x47CC66: movzx   eax, word ptr [edi+0B6h]
0x47CC6D: add     esi, 1
0x47CC70: cmp     eax, esi
0x47CC72: ja      short loc_47CC55
0x47CC74: pop     edi
0x47CC75: pop     esi
0x47CC76: pop     ebx
0x47CC77: retn    4
