0x75D6C0: push    ebx
0x75D6C1: push    ebp
0x75D6C2: mov     bp, [esp+8+arg_0]
0x75D6C7: push    esi
0x75D6C8: mov     esi, ecx
0x75D6CA: cmp     bp, [esi+48h]
0x75D6CE: movzx   ebx, bp
0x75D6D1: jnb     short loc_75D71A
0x75D6D3: push    edi
0x75D6D4: mov     ecx, [esi+68h]
0x75D6D7: mov     eax, [ecx]
0x75D6D9: mov     eax, [eax+8Ch]
0x75D6DF: movzx   edx, bx
0x75D6E2: push    edx
0x75D6E3: lea     edx, [esp+14h+arg_0]
0x75D6E7: push    edx
0x75D6E8: call    eax
0x75D6EA: mov     eax, dword ptr [esp+10h+arg_0]
0x75D6EE: test    eax, eax
0x75D6F0: jz      short loc_75D710
0x75D6F2: mov     edi, eax
0x75D6F4: add     eax, 4
0x75D6F7: push    eax; lpAddend
0x75D6F8: call    dword ptr ds:0A2807Ch
0x75D6FE: test    eax, eax
0x75D700: jnz     short loc_75D710
0x75D702: test    edi, edi
0x75D704: jz      short loc_75D710
0x75D706: mov     edx, [edi]
0x75D708: mov     eax, [edx]
0x75D70A: push    1
0x75D70C: mov     ecx, edi
0x75D70E: call    eax
0x75D710: add     ebx, 1
0x75D713: cmp     bx, [esi+48h]
0x75D717: jb      short loc_75D6D4
0x75D719: pop     edi
0x75D71A: movzx   eax, word ptr [esi+8]
0x75D71E: cmp     bp, ax
0x75D721: ja      short loc_75D72D
0x75D723: mov     [esi+48h], bp
0x75D727: pop     esi
0x75D728: pop     ebp
0x75D729: pop     ebx
0x75D72A: retn    4
0x75D72D: mov     [esi+48h], ax
0x75D731: pop     esi
0x75D732: pop     ebp
0x75D733: pop     ebx
0x75D734: retn    4
