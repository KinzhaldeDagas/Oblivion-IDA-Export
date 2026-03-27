0x526A30: push    esi
0x526A31: mov     esi, ecx
0x526A33: movzx   eax, word ptr [esi+8]
0x526A37: push    edi
0x526A38: movzx   edi, word ptr [esi+0Ah]
0x526A3C: cmp     edi, eax
0x526A3E: jb      short loc_526A4E
0x526A40: movzx   ecx, word ptr [esi+0Eh]
0x526A44: add     ecx, edi
0x526A46: push    ecx
0x526A47: mov     ecx, esi
0x526A49: call    sub_523B10
0x526A4E: mov     edx, [esp+8+arg_0]
0x526A52: push    edx
0x526A53: push    edi
0x526A54: mov     ecx, esi
0x526A56: call    sub_5254D0
0x526A5B: mov     eax, edi
0x526A5D: pop     edi
0x526A5E: pop     esi
0x526A5F: retn    4
