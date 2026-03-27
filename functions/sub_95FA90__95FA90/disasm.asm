0x95FA90: push    ebx
0x95FA91: mov     ebx, [esp+4+arg_0]
0x95FA95: mov     eax, [ebx]
0x95FA97: mov     edx, [eax+0Ch]
0x95FA9A: push    edi
0x95FA9B: mov     edi, ecx
0x95FA9D: mov     ecx, ebx
0x95FA9F: call    edx
0x95FAA1: cmp     eax, 4
0x95FAA4: jz      short loc_95FAAD
0x95FAA6: pop     edi
0x95FAA7: xor     al, al
0x95FAA9: pop     ebx
0x95FAAA: retn    4
0x95FAAD: movzx   eax, word ptr [edi+0Eh]
0x95FAB1: cmp     ax, [ebx+0Eh]
0x95FAB5: jnz     short loc_95FAA6
0x95FAB7: push    esi
0x95FAB8: xor     esi, esi
0x95FABA: test    ax, ax
0x95FABD: jbe     short loc_95FAEB
0x95FABF: nop
0x95FAC0: mov     eax, [edi+8]
0x95FAC3: lea     edx, ds:0[esi*4]
0x95FACA: mov     ecx, [edx+eax]
0x95FACD: mov     eax, [ebx+8]
0x95FAD0: add     eax, edx
0x95FAD2: mov     edx, [ecx]
0x95FAD4: mov     eax, [eax]
0x95FAD6: mov     edx, [edx+28h]
0x95FAD9: push    eax
0x95FADA: call    edx
0x95FADC: test    al, al
0x95FADE: jnz     short loc_95FAF3
0x95FAE0: movzx   eax, word ptr [edi+0Eh]
0x95FAE4: add     esi, 1
0x95FAE7: cmp     esi, eax
0x95FAE9: jb      short loc_95FAC0
0x95FAEB: pop     esi
0x95FAEC: pop     edi
0x95FAED: mov     al, 1
0x95FAEF: pop     ebx
0x95FAF0: retn    4
0x95FAF3: pop     esi
0x95FAF4: pop     edi
0x95FAF5: xor     al, al
0x95FAF7: pop     ebx
0x95FAF8: retn    4
