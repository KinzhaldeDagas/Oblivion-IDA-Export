0x88E0F0: push    ebx
0x88E0F1: push    ebp
0x88E0F2: mov     ebp, [esp+8+arg_0]
0x88E0F6: push    esi
0x88E0F7: push    edi
0x88E0F8: mov     edi, ecx
0x88E0FA: mov     ecx, [edi+94h]
0x88E100: lea     esi, [edi+90h]
0x88E106: xor     eax, eax
0x88E108: test    ecx, ecx
0x88E10A: jle     short loc_88E11E
0x88E10C: mov     edx, [esi]
0x88E10E: mov     edi, edi
0x88E110: cmp     [edx], ebp
0x88E112: jz      short loc_88E121
0x88E114: add     eax, 1
0x88E117: add     edx, 4
0x88E11A: cmp     eax, ecx
0x88E11C: jl      short loc_88E110
0x88E11E: or      eax, 0FFFFFFFFh
0x88E121: test    eax, eax
0x88E123: setnl   bl
0x88E126: cmp     byte ptr [edi+0FCh], 0
0x88E12D: jz      short loc_88E13D
0x88E12F: mov     eax, [ebp+1Ch]
0x88E132: and     eax, 3Fh
0x88E135: cmp     al, 14h
0x88E137: jz      loc_88E1BD
0x88E13D: push    ebp
0x88E13E: mov     ecx, edi
0x88E140: call    sub_88D780
0x88E145: test    eax, eax
0x88E147: jnz     short loc_88E1BD
0x88E149: test    bl, bl
0x88E14B: jnz     short loc_88E1BD
0x88E14D: mov     eax, ds:0BA7A08h
0x88E152: test    eax, eax
0x88E154: jz      short loc_88E163
0x88E156: push    0
0x88E158: push    ebp
0x88E159: push    edi
0x88E15A: call    eax ; dword_BA7A08
0x88E15C: add     esp, 0Ch
0x88E15F: test    al, al
0x88E161: jz      short loc_88E1BD
0x88E163: mov     ecx, [esi+8]
0x88E166: and     ecx, 3FFFFFFFh
0x88E16C: cmp     [esi+4], ecx
0x88E16F: jnz     short loc_88E17C
0x88E171: push    4
0x88E173: push    esi
0x88E174: call    sub_8A6EE0
0x88E179: add     esp, 8
0x88E17C: mov     edx, [esi+4]
0x88E17F: mov     eax, [esi]
0x88E181: mov     [eax+edx*4], ebp
0x88E184: mov     ebx, 1
0x88E189: add     [esi+4], ebx
0x88E18C: mov     ecx, [edi+0A8h]
0x88E192: lea     esi, [edi+0A0h]
0x88E198: and     ecx, 3FFFFFFFh
0x88E19E: cmp     [esi+4], ecx
0x88E1A1: jnz     short loc_88E1AE
0x88E1A3: push    4
0x88E1A5: push    esi
0x88E1A6: call    sub_8A6EE0
0x88E1AB: add     esp, 8
0x88E1AE: mov     edx, [esi+4]
0x88E1B1: mov     eax, [esi]
0x88E1B3: mov     dword ptr [eax+edx*4], 0
0x88E1BA: add     [esi+4], ebx
0x88E1BD: pop     edi
0x88E1BE: pop     esi
0x88E1BF: pop     ebp
0x88E1C0: pop     ebx
0x88E1C1: retn    4
