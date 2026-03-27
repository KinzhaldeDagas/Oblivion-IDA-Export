0x923D70: mov     ecx, [esp+arg_C]
0x923D74: mov     eax, [esp+arg_4]
0x923D78: push    ebx
0x923D79: push    ebp
0x923D7A: push    esi
0x923D7B: mov     esi, [eax+44h]
0x923D7E: push    edi
0x923D7F: mov     edi, [esp+10h+arg_8]
0x923D83: lea     ebp, [edi+ecx*4]
0x923D86: cmp     esi, [eax+0Ch]
0x923D89: jnz     short loc_923D91
0x923D8B: add     esi, 80h ; '€'
0x923D91: mov     ebx, [eax+10h]
0x923D94: sub     ebx, 10h
0x923D97: cmp     edi, ebp
0x923D99: jnb     short loc_923DB7
0x923D9B: jmp     short loc_923DA0
0x923D9D: align 10h
0x923DA0: mov     edx, [edi]
0x923DA2: mov     ecx, [edx+50h]
0x923DA5: mov     eax, [ecx]
0x923DA7: call    dword ptr [eax+1Ch]
0x923DAA: add     esi, eax
0x923DAC: cmp     esi, ebx
0x923DAE: ja      short loc_923DC3
0x923DB0: add     edi, 4
0x923DB3: cmp     edi, ebp
0x923DB5: jb      short loc_923DA0
0x923DB7: mov     eax, [esp+10h+arg_0]
0x923DBB: pop     edi
0x923DBC: pop     esi
0x923DBD: pop     ebp
0x923DBE: mov     byte ptr [eax], 1
0x923DC1: pop     ebx
0x923DC2: retn
0x923DC3: mov     eax, [esp+10h+arg_0]
0x923DC7: pop     edi
0x923DC8: pop     esi
0x923DC9: pop     ebp
0x923DCA: mov     byte ptr [eax], 0
0x923DCD: pop     ebx
0x923DCE: retn
