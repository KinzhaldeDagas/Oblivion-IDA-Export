0x91BEF0: push    ebx
0x91BEF1: mov     ebx, ecx
0x91BEF3: mov     eax, [ebx+30h]
0x91BEF6: mov     ecx, [esp+4+arg_0]
0x91BEFA: push    esi
0x91BEFB: push    edi
0x91BEFC: mov     edi, [eax+ecx*4]
0x91BEFF: mov     eax, [edi+8]
0x91BF02: xor     esi, esi
0x91BF04: test    eax, eax
0x91BF06: jle     short loc_91BF2D
0x91BF08: jmp     short loc_91BF10
0x91BF0A: align 10h
0x91BF10: mov     eax, ds:0BA8438h
0x91BF15: mov     ecx, [ebx+18h]
0x91BF18: mov     edx, [ecx]
0x91BF1A: push    eax
0x91BF1B: mov     eax, [edi+4]
0x91BF1E: mov     eax, [eax+esi*4]
0x91BF21: push    eax
0x91BF22: call    dword ptr [edx+10h]
0x91BF25: mov     eax, [edi+8]
0x91BF28: inc     esi
0x91BF29: cmp     esi, eax
0x91BF2B: jl      short loc_91BF10
0x91BF2D: mov     eax, [edi+0Ch]
0x91BF30: and     eax, 3FFFFFFFh
0x91BF35: lea     esi, [edi+4]
0x91BF38: jge     short loc_91BF52
0x91BF3A: add     eax, eax
0x91BF3C: xor     ecx, ecx
0x91BF3E: test    eax, eax
0x91BF40: setle   cl
0x91BF43: push    4
0x91BF45: dec     ecx
0x91BF46: and     eax, ecx
0x91BF48: push    eax
0x91BF49: push    esi
0x91BF4A: call    sub_8A6E40
0x91BF4F: add     esp, 0Ch
0x91BF52: pop     edi
0x91BF53: mov     dword ptr [esi+4], 0
0x91BF5A: pop     esi
0x91BF5B: pop     ebx
0x91BF5C: retn    4
