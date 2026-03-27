0x74AB20: push    ebx
0x74AB21: push    ebp
0x74AB22: push    esi
0x74AB23: mov     ebx, 1
0x74AB28: test    ds:0B40888h, bl
0x74AB2E: push    edi
0x74AB2F: mov     esi, ecx
0x74AB31: jnz     short loc_74AB50
0x74AB33: or      ds:0B40888h, ebx
0x74AB39: push    offset sub_A26CF0; void (__cdecl *)()
0x74AB3E: mov     dword ptr ds:0B40884h, 0
0x74AB48: call    _atexit
0x74AB4D: add     esp, 4
0x74AB50: movzx   ecx, word ptr [esi+0Ah]
0x74AB54: mov     eax, [esp+10h+arg_0]
0x74AB58: cmp     eax, ecx
0x74AB5A: mov     ebp, [esp+10h+arg_4]
0x74AB5E: jb      short loc_74AB78
0x74AB60: lea     edx, [eax+1]
0x74AB63: mov     [esi+0Ah], dx
0x74AB67: mov     ecx, [ebp+0]
0x74AB6A: cmp     ecx, ds:0B40884h
0x74AB70: jz      short loc_74AB9C
0x74AB72: add     [esi+0Ch], bx
0x74AB76: jmp     short loc_74AB9C
0x74AB78: mov     ecx, ds:0B40884h
0x74AB7E: cmp     [ebp+0], ecx
0x74AB81: mov     edx, [esi+4]
0x74AB84: jz      short loc_74AB91
0x74AB86: cmp     [edx+eax*4], ecx
0x74AB89: jnz     short loc_74AB9C
0x74AB8B: add     [esi+0Ch], bx
0x74AB8F: jmp     short loc_74AB9C
0x74AB91: cmp     [edx+eax*4], ecx
0x74AB94: jz      short loc_74AB9C
0x74AB96: add     word ptr [esi+0Ch], 0FFFFh
0x74AB9C: mov     ecx, [esi+4]
0x74AB9F: mov     esi, [ecx+eax*4]
0x74ABA2: cmp     esi, [ebp+0]
0x74ABA5: lea     edi, [ecx+eax*4]
0x74ABA8: jz      short loc_74ABDC
0x74ABAA: test    esi, esi
0x74ABAC: jz      short loc_74ABC9
0x74ABAE: lea     edx, [esi+4]
0x74ABB1: push    edx; lpAddend
0x74ABB2: call    dword ptr ds:0A2807Ch
0x74ABB8: test    eax, eax
0x74ABBA: jnz     short loc_74ABC9
0x74ABBC: test    esi, esi
0x74ABBE: jz      short loc_74ABC9
0x74ABC0: mov     eax, [esi]
0x74ABC2: mov     edx, [eax]
0x74ABC4: push    ebx
0x74ABC5: mov     ecx, esi
0x74ABC7: call    edx
0x74ABC9: mov     eax, [ebp+0]
0x74ABCC: test    eax, eax
0x74ABCE: mov     [edi], eax
0x74ABD0: jz      short loc_74ABDC
0x74ABD2: add     eax, 4
0x74ABD5: push    eax; lpAddend
0x74ABD6: call    dword ptr ds:0A28078h
0x74ABDC: pop     edi
0x74ABDD: pop     esi
0x74ABDE: pop     ebp
0x74ABDF: pop     ebx
0x74ABE0: retn    8
