0x987DD0: mov     eax, [esp+Dst]
0x987DD4: push    ebx
0x987DD5: xor     ebx, ebx
0x987DD7: cmp     eax, ebx
0x987DD9: push    esi
0x987DDA: push    edi
0x987DDB: jz      short loc_987DE5
0x987DDD: mov     edi, [esp+0Ch+SizeInBytes]
0x987DE1: cmp     edi, ebx
0x987DE3: ja      short loc_987E00
0x987DE5: call    __errno
0x987DEA: push    16h
0x987DEC: pop     esi
0x987DED: mov     [eax], esi
0x987DEF: push    ebx
0x987DF0: push    ebx
0x987DF1: push    ebx
0x987DF2: push    ebx
0x987DF3: push    ebx
0x987DF4: call    __invalid_parameter
0x987DF9: add     esp, 14h
0x987DFC: mov     eax, esi
0x987DFE: jmp     short loc_987E3D
0x987E00: mov     esi, [esp+0Ch+Src]
0x987E04: cmp     esi, ebx
0x987E06: jnz     short loc_987E0C
0x987E08: mov     [eax], bl
0x987E0A: jmp     short loc_987DE5
0x987E0C: mov     edx, eax
0x987E0E: cmp     [edx], bl
0x987E10: jz      short loc_987E16
0x987E12: inc     edx
0x987E13: dec     edi
0x987E14: jnz     short loc_987E0E
0x987E16: cmp     edi, ebx
0x987E18: jz      short loc_987E08
0x987E1A: mov     cl, [esi]
0x987E1C: mov     [edx], cl
0x987E1E: inc     edx
0x987E1F: inc     esi
0x987E20: cmp     cl, bl
0x987E22: jz      short loc_987E27
0x987E24: dec     edi
0x987E25: jnz     short loc_987E1A
0x987E27: cmp     edi, ebx
0x987E29: jnz     short loc_987E3B
0x987E2B: mov     [eax], bl
0x987E2D: call    __errno
0x987E32: push    22h ; '"'
0x987E34: pop     ecx
0x987E35: mov     [eax], ecx
0x987E37: mov     esi, ecx
0x987E39: jmp     short loc_987DEF
0x987E3B: xor     eax, eax
0x987E3D: pop     edi
0x987E3E: pop     esi
0x987E3F: pop     ebx
0x987E40: retn
