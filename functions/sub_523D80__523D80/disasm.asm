0x523D80: push    ecx
0x523D81: xor     ecx, ecx
0x523D83: mov     [esp+4+var_4], ecx
0x523D86: mov     eax, ds:0B39B80h
0x523D8B: test    eax, eax
0x523D8D: push    esi
0x523D8E: push    edi
0x523D8F: jz      short loc_523D9C
0x523D91: mov     esi, [esp+0Ch+var_4]
0x523D95: add     eax, 0DB4h
0x523D9A: jmp     short loc_523DAB
0x523D9C: xor     esi, esi
0x523D9E: mov     [esp+0Ch+var_4], esi
0x523DA2: lea     eax, [esp+0Ch+var_4]
0x523DA6: mov     ecx, 1
0x523DAB: test    cl, 1
0x523DAE: mov     edi, [eax]
0x523DB0: jz      short loc_523DCE
0x523DB2: test    esi, esi
0x523DB4: jz      short loc_523DCE
0x523DB6: lea     eax, [esi+4]
0x523DB9: push    eax; lpAddend
0x523DBA: call    dword ptr ds:0A2807Ch
0x523DC0: test    eax, eax
0x523DC2: jnz     short loc_523DCE
0x523DC4: mov     edx, [esi]
0x523DC6: mov     eax, [edx]
0x523DC8: push    1
0x523DCA: mov     ecx, esi
0x523DCC: call    eax
0x523DCE: mov     eax, edi
0x523DD0: pop     edi
0x523DD1: pop     esi
0x523DD2: pop     ecx
0x523DD3: retn
