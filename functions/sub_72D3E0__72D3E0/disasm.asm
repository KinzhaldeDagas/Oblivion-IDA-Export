0x72D3E0: push    ebx
0x72D3E1: mov     ebx, [esp+4+arg_0]
0x72D3E5: push    ebp
0x72D3E6: push    esi
0x72D3E7: push    edi
0x72D3E8: mov     edi, [esp+10h+arg_4]
0x72D3EC: mov     ebp, ecx
0x72D3EE: xor     esi, esi
0x72D3F0: movzx   eax, word ptr [ebx+esi*2]
0x72D3F4: lea     eax, [eax+eax*2]
0x72D3F7: lea     ecx, [edi+eax*4]
0x72D3FA: push    ecx; Key
0x72D3FB: mov     ecx, ebp
0x72D3FD: call    sub_72CE60
0x72D402: test    al, al
0x72D404: jz      short loc_72D417
0x72D406: add     esi, 1
0x72D409: cmp     esi, 3
0x72D40C: jb      short loc_72D3F0
0x72D40E: pop     edi
0x72D40F: pop     esi
0x72D410: pop     ebp
0x72D411: mov     al, 1
0x72D413: pop     ebx
0x72D414: retn    8
0x72D417: pop     edi
0x72D418: pop     esi
0x72D419: pop     ebp
0x72D41A: xor     al, al
0x72D41C: pop     ebx
0x72D41D: retn    8
