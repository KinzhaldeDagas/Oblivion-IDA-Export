0x925FB0: push    ebx
0x925FB1: mov     ebx, [esp+4+arg_0]
0x925FB5: mov     eax, [ebx+4]
0x925FB8: xor     ecx, ecx
0x925FBA: test    eax, eax
0x925FBC: jle     short loc_92601F
0x925FBE: push    ebp
0x925FBF: mov     ebp, [esp+8+arg_4]
0x925FC3: push    esi
0x925FC4: push    edi
0x925FC5: mov     edx, [ebx]
0x925FC7: mov     esi, [edx+ecx*4]
0x925FCA: inc     ecx
0x925FCB: cmp     ecx, eax
0x925FCD: mov     [esp+10h+arg_0], ecx
0x925FD1: jnz     short loc_925FD8
0x925FD3: mov     edi, [ebx+10h]
0x925FD6: jmp     short loc_925FDC
0x925FD8: movzx   edi, word ptr [ebx+16h]
0x925FDC: add     edi, esi
0x925FDE: cmp     esi, edi
0x925FE0: jnb     short loc_926015
0x925FE2: movzx   eax, byte ptr [esi]
0x925FE5: sub     eax, 2
0x925FE8: jz      short loc_925FF4
0x925FEA: sub     eax, 2
0x925FED: jz      short loc_925FF4
0x925FEF: sub     eax, 2
0x925FF2: jnz     short loc_92600B
0x925FF4: mov     ecx, [esi+10h]
0x925FF7: mov     eax, [ebp+0]
0x925FFA: push    ecx
0x925FFB: push    8
0x925FFD: push    offset aContactmgr; "ContactMgr"
0x926002: mov     ecx, ebp
0x926004: call    dword ptr [eax+8]
0x926007: mov     ecx, [esp+10h+arg_0]
0x92600B: movzx   edx, byte ptr [esi+3]
0x92600F: add     esi, edx
0x926011: cmp     esi, edi
0x926013: jb      short loc_925FE2
0x926015: mov     eax, [ebx+4]
0x926018: cmp     ecx, eax
0x92601A: jl      short loc_925FC5
0x92601C: pop     edi
0x92601D: pop     esi
0x92601E: pop     ebp
0x92601F: pop     ebx
0x926020: retn
