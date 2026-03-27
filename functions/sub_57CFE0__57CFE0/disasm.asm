0x57CFE0: push    ecx
0x57CFE1: push    ebx
0x57CFE2: push    ebp
0x57CFE3: push    esi
0x57CFE4: mov     esi, ecx
0x57CFE6: cmp     dword ptr [esi+0E0h], 0
0x57CFED: lea     ebx, [esi+0E0h]
0x57CFF3: push    edi
0x57CFF4: mov     [esp+14h+var_4], esi
0x57CFF8: jz      loc_57D10E
0x57CFFE: mov     al, [esp+14h+arg_4]
0x57D002: mov     edi, [esp+14h+arg_0]
0x57D006: mov     ebp, 3E9h
0x57D00B: jmp     short loc_57D014
0x57D00D: align 10h
0x57D010: mov     esi, [esp+14h+var_4]
0x57D014: test    al, al
0x57D016: jnz     loc_57D0A9
0x57D01C: xor     cl, cl
0x57D01E: xor     edx, edx
0x57D020: lea     eax, [esi+0E4h]
0x57D026: test    cl, cl
0x57D028: jz      short loc_57D02F
0x57D02A: cmp     [eax-4], ebp
0x57D02D: jg      short loc_57D09B
0x57D02F: cmp     [eax-4], edi
0x57D032: jnz     short loc_57D038
0x57D034: mov     cl, 1
0x57D036: jmp     short loc_57D03C
0x57D038: test    cl, cl
0x57D03A: jz      short loc_57D040
0x57D03C: cmp     [eax], ebp
0x57D03E: jg      short loc_57D089
0x57D040: cmp     [eax], edi
0x57D042: jnz     short loc_57D048
0x57D044: mov     cl, 1
0x57D046: jmp     short loc_57D04C
0x57D048: test    cl, cl
0x57D04A: jz      short loc_57D051
0x57D04C: cmp     [eax+4], ebp
0x57D04F: jg      short loc_57D08E
0x57D051: cmp     [eax+4], edi
0x57D054: jnz     short loc_57D05A
0x57D056: mov     cl, 1
0x57D058: jmp     short loc_57D05E
0x57D05A: test    cl, cl
0x57D05C: jz      short loc_57D063
0x57D05E: cmp     [eax+8], ebp
0x57D061: jg      short loc_57D093
0x57D063: cmp     [eax+8], edi
0x57D066: jnz     short loc_57D06C
0x57D068: mov     cl, 1
0x57D06A: jmp     short loc_57D070
0x57D06C: test    cl, cl
0x57D06E: jz      short loc_57D075
0x57D070: cmp     [eax+0Ch], ebp
0x57D073: jg      short loc_57D098
0x57D075: cmp     [eax+0Ch], edi
0x57D078: jnz     short loc_57D07C
0x57D07A: mov     cl, 1
0x57D07C: add     edx, 5
0x57D07F: add     eax, 14h
0x57D082: cmp     edx, 0Ah
0x57D085: jl      short loc_57D026
0x57D087: jmp     short loc_57D09B
0x57D089: add     edx, 1
0x57D08C: jmp     short loc_57D09B
0x57D08E: add     edx, 2
0x57D091: jmp     short loc_57D09B
0x57D093: add     edx, 3
0x57D096: jmp     short loc_57D09B
0x57D098: add     edx, 4
0x57D09B: test    cl, cl
0x57D09D: jz      short loc_57D10E
0x57D09F: cmp     edx, 0Ah
0x57D0A2: jge     short loc_57D0A9
0x57D0A4: cmp     edi, 3
0x57D0A7: jnz     short loc_57D119
0x57D0A9: xor     esi, esi
0x57D0AB: mov     eax, ebx
0x57D0AD: mov     ecx, ebx
0x57D0AF: nop
0x57D0B0: cmp     [eax], edi
0x57D0B2: jnz     short loc_57D0B7
0x57D0B4: add     ecx, 4
0x57D0B7: mov     edx, [ecx]
0x57D0B9: test    edx, edx
0x57D0BB: mov     [eax], edx
0x57D0BD: jz      short loc_57D0CD
0x57D0BF: add     esi, 1
0x57D0C2: add     eax, 4
0x57D0C5: add     ecx, 4
0x57D0C8: cmp     esi, 0Ah
0x57D0CB: jl      short loc_57D0B0
0x57D0CD: cmp     dword ptr [ebx], 3
0x57D0D0: jnz     short loc_57D126
0x57D0D2: mov     eax, [esp+14h+var_4]
0x57D0D6: cmp     dword ptr [eax+0E4h], 0
0x57D0DD: jnz     short loc_57D126
0x57D0DF: push    0
0x57D0E1: call    GetGlobalScriptStateObj??
0x57D0E6: add     esp, 4
0x57D0E9: test    eax, eax
0x57D0EB: jz      short loc_57D0FE
0x57D0ED: push    1
0x57D0EF: call    GetGlobalScriptStateObj??
0x57D0F4: add     esp, 4
0x57D0F7: mov     ecx, eax
0x57D0F9: call    sub_5859C0
0x57D0FE: xor     al, al
0x57D100: cmp     dword ptr [ebx], 0
0x57D103: mov     edi, 3
0x57D108: jnz     loc_57D010
0x57D10E: pop     edi
0x57D10F: pop     esi
0x57D110: pop     ebp
0x57D111: or      eax, 0FFFFFFFFh
0x57D114: pop     ebx
0x57D115: pop     ecx
0x57D116: retn    8
0x57D119: pop     edi
0x57D11A: pop     esi
0x57D11B: pop     ebp
0x57D11C: mov     eax, 0FFFFFFFEh
0x57D121: pop     ebx
0x57D122: pop     ecx
0x57D123: retn    8
0x57D126: test    esi, esi
0x57D128: jle     short loc_57D156
0x57D12A: cmp     esi, 1
0x57D12D: jnz     short loc_57D143
0x57D12F: mov     eax, [ebx]
0x57D131: cmp     eax, 3F3h
0x57D136: jz      short loc_57D13C
0x57D138: cmp     eax, ebp
0x57D13A: jnz     short loc_57D143
0x57D13C: mov     byte ptr ds:0B42D54h, 1
0x57D143: mov     ecx, [esp+14h+var_4]
0x57D147: mov     eax, [ecx+esi*4+0DCh]
0x57D14E: pop     edi
0x57D14F: pop     esi
0x57D150: pop     ebp
0x57D151: pop     ebx
0x57D152: pop     ecx
0x57D153: retn    8
0x57D156: cmp     edi, 1
0x57D159: jnz     short loc_57D160
0x57D15B: call    sub_57CC00
0x57D160: cmp     edi, 3F3h
0x57D166: mov     edx, [esp+14h+var_4]
0x57D16A: mov     byte ptr [edx+8], 4
0x57D16E: jz      short loc_57D185
0x57D170: cmp     edi, ebp
0x57D172: jz      short loc_57D185
0x57D174: pop     edi
0x57D175: pop     esi
0x57D176: mov     al, 1
0x57D178: pop     ebp
0x57D179: mov     ds:0B42D54h, al
0x57D17E: xor     eax, eax
0x57D180: pop     ebx
0x57D181: pop     ecx
0x57D182: retn    8
0x57D185: pop     edi
0x57D186: pop     esi
0x57D187: xor     al, al
0x57D189: pop     ebp
0x57D18A: mov     ds:0B42D54h, al
0x57D18F: xor     eax, eax
0x57D191: pop     ebx
0x57D192: pop     ecx
0x57D193: retn    8
