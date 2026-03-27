0x74C6A0: push    ebx
0x74C6A1: mov     ebx, [esp+4+arg_0]
0x74C6A5: mov     edx, [ebx]
0x74C6A7: test    edx, edx
0x74C6A9: setz    al
0x74C6AC: test    al, al
0x74C6AE: push    esi
0x74C6AF: mov     esi, ecx
0x74C6B1: jz      short loc_74C6BB
0x74C6B3: pop     esi
0x74C6B4: or      eax, 0FFFFFFFFh
0x74C6B7: pop     ebx
0x74C6B8: retn    4
0x74C6BB: push    ebp
0x74C6BC: push    edi
0x74C6BD: movzx   edi, word ptr [esi+0Ah]
0x74C6C1: xor     eax, eax
0x74C6C3: test    di, di
0x74C6C6: jbe     short loc_74C6E8
0x74C6C8: mov     ebp, [esi+4]
0x74C6CB: jmp     short loc_74C6D0
0x74C6CD: align 10h
0x74C6D0: movzx   ecx, ax
0x74C6D3: cmp     dword ptr [ebp+ecx*4+0], 0
0x74C6D8: setz    cl
0x74C6DB: test    cl, cl
0x74C6DD: jnz     short loc_74C713
0x74C6DF: add     eax, 1
0x74C6E2: cmp     ax, [esi+0Ah]
0x74C6E6: jb      short loc_74C6D0
0x74C6E8: movzx   ecx, word ptr [esi+8]
0x74C6EC: movzx   edi, di
0x74C6EF: cmp     edi, ecx
0x74C6F1: jb      short loc_74C701
0x74C6F3: movzx   edx, word ptr [esi+0Eh]
0x74C6F7: add     edx, edi
0x74C6F9: push    edx
0x74C6FA: mov     ecx, esi
0x74C6FC: call    sub_74A8C0
0x74C701: push    ebx
0x74C702: push    edi
0x74C703: mov     ecx, esi
0x74C705: call    sub_74ABF0
0x74C70A: mov     eax, edi
0x74C70C: pop     edi
0x74C70D: pop     ebp
0x74C70E: pop     esi
0x74C70F: pop     ebx
0x74C710: retn    4
0x74C713: movzx   ebx, ax
0x74C716: mov     edi, [ebp+ebx*4+0]
0x74C71A: cmp     edi, edx
0x74C71C: jz      short loc_74C756
0x74C71E: test    edi, edi
0x74C720: jz      short loc_74C73E
0x74C722: lea     edx, [edi+4]
0x74C725: push    edx; lpAddend
0x74C726: call    dword ptr ds:0A2807Ch
0x74C72C: test    eax, eax
0x74C72E: jnz     short loc_74C73E
0x74C730: test    edi, edi
0x74C732: jz      short loc_74C73E
0x74C734: mov     eax, [edi]
0x74C736: mov     edx, [eax]
0x74C738: push    1
0x74C73A: mov     ecx, edi
0x74C73C: call    edx
0x74C73E: mov     eax, [esp+10h+arg_0]
0x74C742: mov     eax, [eax]
0x74C744: test    eax, eax
0x74C746: mov     [ebp+ebx*4+0], eax
0x74C74A: jz      short loc_74C756
0x74C74C: add     eax, 4
0x74C74F: push    eax; lpAddend
0x74C750: call    dword ptr ds:0A28078h
0x74C756: add     word ptr [esi+0Ch], 1
0x74C75B: pop     edi
0x74C75C: pop     ebp
0x74C75D: pop     esi
0x74C75E: mov     eax, ebx
0x74C760: pop     ebx
0x74C761: retn    4
