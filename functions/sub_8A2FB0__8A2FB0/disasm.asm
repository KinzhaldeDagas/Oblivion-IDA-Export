0x8A2FB0: push    esi
0x8A2FB1: mov     esi, ecx
0x8A2FB3: test    esi, esi
0x8A2FB5: jz      short loc_8A2FDD
0x8A2FB7: push    edi
0x8A2FB8: mov     edi, [esi+8]
0x8A2FBB: test    edi, edi
0x8A2FBD: jz      short loc_8A2FDC
0x8A2FBF: call    sub_89F570
0x8A2FC4: mov     eax, [esp+8+arg_4]
0x8A2FC8: mov     ecx, [esp+8+arg_0]
0x8A2FCC: push    eax
0x8A2FCD: push    ecx
0x8A2FCE: mov     ecx, edi
0x8A2FD0: call    sub_8A9E20
0x8A2FD5: mov     ecx, esi
0x8A2FD7: call    sub_89F570
0x8A2FDC: pop     edi
0x8A2FDD: pop     esi
0x8A2FDE: retn    8
