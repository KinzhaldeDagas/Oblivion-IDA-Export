0x41DF90: push    edi
0x41DF91: mov     edi, [esp+4+arg_0]
0x41DF95: test    edi, edi
0x41DF97: jz      short loc_41DFE3
0x41DF99: push    ebx
0x41DF9A: mov     ebx, [esp+8+arg_4]
0x41DF9E: test    ebx, ebx
0x41DFA0: jz      short loc_41DFE2
0x41DFA2: mov     eax, TlsIndex
0x41DFA7: mov     ecx, large fs:2Ch
0x41DFAE: push    esi
0x41DFAF: mov     esi, [ecx+eax*4]
0x41DFB2: cmp     edi, [esi+8]
0x41DFB8: jz      short loc_41DFD6
0x41DFBA: push    174h
0x41DFBF: lea     edx, [esi+10h]
0x41DFC5: push    0
0x41DFC7: push    edx
0x41DFC8: call    __memset
0x41DFCD: add     esp, 0Ch
0x41DFD0: mov     [esi+8], edi
0x41DFD6: movzx   eax, byte ptr [ebx+4]
0x41DFDA: mov     [esi+eax*4+10h], ebx
0x41DFE1: pop     esi
0x41DFE2: pop     ebx
0x41DFE3: pop     edi
0x41DFE4: retn
