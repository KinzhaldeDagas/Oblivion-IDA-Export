0x4D31D0: push    esi
0x4D31D1: mov     esi, ecx
0x4D31D3: movzx   eax, word ptr [esi+8]
0x4D31D7: push    edi
0x4D31D8: movzx   edi, word ptr [esi+0Ah]
0x4D31DC: cmp     edi, eax
0x4D31DE: jb      short loc_4D31EE
0x4D31E0: movzx   ecx, word ptr [esi+0Eh]
0x4D31E4: add     ecx, edi
0x4D31E6: push    ecx
0x4D31E7: mov     ecx, esi
0x4D31E9: call    sub_4CA040
0x4D31EE: mov     edx, [esp+8+arg_0]
0x4D31F2: push    edx
0x4D31F3: push    edi
0x4D31F4: mov     ecx, esi
0x4D31F6: call    sub_4CA210
0x4D31FB: mov     eax, edi
0x4D31FD: pop     edi
0x4D31FE: pop     esi
0x4D31FF: retn    4
