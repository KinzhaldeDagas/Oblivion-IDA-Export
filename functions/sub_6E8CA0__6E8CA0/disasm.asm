0x6E8CA0: push    ebp
0x6E8CA1: mov     ebp, [esp+4+arg_0]
0x6E8CA5: push    esi
0x6E8CA6: mov     esi, ecx
0x6E8CA8: cmp     ebp, [esi+4]
0x6E8CAB: jz      short loc_6E8CFB
0x6E8CAD: test    ebp, ebp
0x6E8CAF: push    edi
0x6E8CB0: jbe     short loc_6E8CE8
0x6E8CB2: xor     ecx, ecx
0x6E8CB4: mov     eax, ebp
0x6E8CB6: mov     edx, 4
0x6E8CBB: mul     edx
0x6E8CBD: seto    cl
0x6E8CC0: neg     ecx
0x6E8CC2: or      ecx, eax
0x6E8CC4: push    ecx; Size
0x6E8CC5: call    FormHeapAlloc
0x6E8CCA: mov     edi, eax
0x6E8CCC: xor     eax, eax
0x6E8CCE: add     esp, 4
0x6E8CD1: cmp     [esi+8], eax
0x6E8CD4: jbe     short loc_6E8CEA
0x6E8CD6: mov     ecx, [esi]
0x6E8CD8: mov     edx, [ecx+eax*4]
0x6E8CDB: mov     [edi+eax*4], edx
0x6E8CDE: add     eax, 1
0x6E8CE1: cmp     eax, [esi+8]
0x6E8CE4: jb      short loc_6E8CD6
0x6E8CE6: jmp     short loc_6E8CEA
0x6E8CE8: xor     edi, edi
0x6E8CEA: mov     eax, [esi]
0x6E8CEC: push    eax
0x6E8CED: call    FormHeapFree
0x6E8CF2: add     esp, 4
0x6E8CF5: mov     [esi], edi
0x6E8CF7: mov     [esi+4], ebp
0x6E8CFA: pop     edi
0x6E8CFB: pop     esi
0x6E8CFC: pop     ebp
0x6E8CFD: retn    4
