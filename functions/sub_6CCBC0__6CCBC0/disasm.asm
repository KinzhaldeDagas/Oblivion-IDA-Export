0x6CCBC0: push    ebx
0x6CCBC1: push    ebp
0x6CCBC2: push    esi
0x6CCBC3: push    edi
0x6CCBC4: mov     edi, [esp+10h+arg0]
0x6CCBC8: push    edi; arg0
0x6CCBC9: mov     esi, ecx
0x6CCBCB: call    sub_700750
0x6CCBD0: mov     ecx, [edi]
0x6CCBD2: lea     eax, [esp+10h+arg0]
0x6CCBD6: push    eax
0x6CCBD7: push    esi
0x6CCBD8: call    NiTMap_GetAt
0x6CCBDD: mov     ebp, [esp+10h+arg0]
0x6CCBE1: xor     bl, bl
0x6CCBE3: cmp     [esi+0Dh], bl
0x6CCBE6: jbe     short loc_6CCC10
0x6CCBE8: jmp     short loc_6CCBF0
0x6CCBEA: align 10h
0x6CCBF0: mov     edx, [esi+14h]
0x6CCBF3: movzx   eax, bl
0x6CCBF6: lea     ecx, [eax+eax*2]
0x6CCBF9: mov     ecx, [edx+ecx*8]
0x6CCBFC: test    ecx, ecx
0x6CCBFE: jz      short loc_6CCC08
0x6CCC00: mov     eax, [ecx]
0x6CCC02: mov     edx, [eax+38h]
0x6CCC05: push    edi
0x6CCC06: call    edx
0x6CCC08: add     bl, 1
0x6CCC0B: cmp     bl, [esi+0Dh]
0x6CCC0E: jb      short loc_6CCBF0
0x6CCC10: mov     eax, [esi+18h]
0x6CCC13: test    eax, eax
0x6CCC15: jz      short loc_6CCC3C
0x6CCC17: lea     ecx, [esp+10h+arg0]
0x6CCC1B: push    ecx
0x6CCC1C: mov     ecx, [edi]
0x6CCC1E: push    eax
0x6CCC1F: call    NiTMap_GetAt
0x6CCC24: test    al, al
0x6CCC26: jz      short loc_6CCC36
0x6CCC28: mov     esi, [esp+10h+arg0]
0x6CCC2C: pop     edi
0x6CCC2D: mov     [ebp+18h], esi
0x6CCC30: pop     esi
0x6CCC31: pop     ebp
0x6CCC32: pop     ebx
0x6CCC33: retn    4
0x6CCC36: mov     esi, [esi+18h]
0x6CCC39: mov     [ebp+18h], esi
0x6CCC3C: pop     edi
0x6CCC3D: pop     esi
0x6CCC3E: pop     ebp
0x6CCC3F: pop     ebx
0x6CCC40: retn    4
