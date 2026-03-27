0x8DCD60: push    ebx
0x8DCD61: push    esi
0x8DCD62: mov     esi, [esp+8+arg_0]
0x8DCD66: push    edi
0x8DCD67: mov     edi, [esi+110h]
0x8DCD6D: dec     edi
0x8DCD6E: js      short loc_8DCD8B
0x8DCD70: mov     ebx, [esp+0Ch+arg_4]
0x8DCD74: mov     eax, [esi+10Ch]
0x8DCD7A: mov     ecx, [eax+edi*4]
0x8DCD7D: test    ecx, ecx
0x8DCD7F: jz      short loc_8DCD88
0x8DCD81: mov     edx, [ecx]
0x8DCD83: push    ebx
0x8DCD84: push    esi
0x8DCD85: call    dword ptr [edx+4]
0x8DCD88: dec     edi
0x8DCD89: jns     short loc_8DCD74
0x8DCD8B: mov     edx, [esi+110h]
0x8DCD91: dec     edx
0x8DCD92: js      short loc_8DCDDD
0x8DCD94: mov     eax, [esi+10Ch]
0x8DCD9A: cmp     dword ptr [eax+edx*4], 0
0x8DCD9E: jnz     short loc_8DCDDA
0x8DCDA0: mov     ebx, [esi+110h]
0x8DCDA6: dec     ebx
0x8DCDA7: mov     ecx, ebx
0x8DCDA9: cmp     edx, ecx
0x8DCDAB: mov     [esi+110h], ebx
0x8DCDB1: mov     eax, edx
0x8DCDB3: jge     short loc_8DCDDA
0x8DCDB5: jmp     short loc_8DCDC0
0x8DCDB7: align 10h
0x8DCDC0: mov     ecx, [esi+10Ch]
0x8DCDC6: mov     edi, [ecx+eax*4+4]
0x8DCDCA: lea     ecx, [ecx+eax*4]
0x8DCDCD: mov     [ecx], edi
0x8DCDCF: mov     ecx, [esi+110h]
0x8DCDD5: inc     eax
0x8DCDD6: cmp     eax, ecx
0x8DCDD8: jl      short loc_8DCDC0
0x8DCDDA: dec     edx
0x8DCDDB: jns     short loc_8DCD94
0x8DCDDD: pop     edi
0x8DCDDE: pop     esi
0x8DCDDF: pop     ebx
0x8DCDE0: retn
