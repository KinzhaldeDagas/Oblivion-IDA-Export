0x941CE0: push    ebx
0x941CE1: push    ebp
0x941CE2: mov     ebp, [esp+8+arg_8]
0x941CE6: push    esi
0x941CE7: push    edi
0x941CE8: mov     edi, ecx
0x941CEA: mov     ecx, [esp+10h+arg_4]
0x941CEE: mov     ebx, eax
0x941CF0: mov     eax, [edi]
0x941CF2: push    eax; Args
0x941CF3: push    offset aSHkobject_1; "\n%s<hkobject>"
0x941CF8: push    ecx; int
0x941CF9: call    sub_8BBEE0
0x941CFE: add     esp, 0Ch
0x941D01: mov     ecx, 1
0x941D06: call    sub_941B90
0x941D0B: mov     ecx, ebx
0x941D0D: xor     esi, esi
0x941D0F: call    sub_90D240
0x941D14: test    eax, eax
0x941D16: jle     short loc_941D49
0x941D18: jmp     short loc_941D20
0x941D1A: align 10h
0x941D20: mov     edx, [esp+10h+arg_4]
0x941D24: mov     eax, [esp+10h+arg_0]
0x941D28: push    ebp; int
0x941D29: push    edx; int
0x941D2A: push    eax; int
0x941D2B: push    esi
0x941D2C: mov     ecx, ebx
0x941D2E: call    sub_90D260
0x941D33: push    eax; int
0x941D34: push    edi; Args
0x941D35: call    sub_942170
0x941D3A: add     esp, 14h
0x941D3D: mov     ecx, ebx
0x941D3F: inc     esi
0x941D40: call    sub_90D240
0x941D45: cmp     esi, eax
0x941D47: jl      short loc_941D20
0x941D49: mov     esi, [edi+4]
0x941D4C: mov     ebx, esi
0x941D4E: cmp     esi, ebx
0x941D50: jle     short loc_941D83
0x941D52: mov     eax, [edi+8]
0x941D55: and     eax, 3FFFFFFFh
0x941D5A: cmp     eax, esi
0x941D5C: jge     short loc_941D72
0x941D5E: add     eax, eax
0x941D60: cmp     esi, eax
0x941D62: jl      short loc_941D66
0x941D64: mov     eax, esi
0x941D66: push    1
0x941D68: push    eax
0x941D69: push    edi
0x941D6A: call    sub_8A6E40
0x941D6F: add     esp, 0Ch
0x941D72: cmp     ebx, esi
0x941D74: mov     eax, ebx
0x941D76: jge     short loc_941D83
0x941D78: mov     ecx, [edi]
0x941D7A: mov     byte ptr [eax+ecx], 9
0x941D7E: inc     eax
0x941D7F: cmp     eax, esi
0x941D81: jl      short loc_941D78
0x941D83: mov     edx, [edi]
0x941D85: mov     ecx, [esp+10h+arg_4]
0x941D89: mov     [edi+4], esi
0x941D8C: mov     byte ptr [edx+esi-1], 0
0x941D91: mov     eax, [edi]
0x941D93: mov     ebx, [edi+4]
0x941D96: push    eax; Args
0x941D97: push    offset aSHkobject_0; "\n%s</hkobject>"
0x941D9C: dec     ebx
0x941D9D: push    ecx; int
0x941D9E: mov     [edi+4], ebx
0x941DA1: call    sub_8BBEE0
0x941DA6: add     esp, 0Ch
0x941DA9: pop     edi
0x941DAA: pop     esi
0x941DAB: pop     ebp
0x941DAC: xor     eax, eax
0x941DAE: pop     ebx
0x941DAF: retn
