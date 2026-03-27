0x6D0170: push    ebx
0x6D0171: mov     ebx, [esp+4+arg_0]
0x6D0175: push    ebp
0x6D0176: mov     ebp, [esp+8+arg_4]
0x6D017A: push    esi
0x6D017B: push    edi
0x6D017C: push    ebp
0x6D017D: push    ebx
0x6D017E: mov     esi, ecx
0x6D0180: call    sub_6D0530
0x6D0185: movzx   eax, word ptr [esi+44h]
0x6D0189: push    eax
0x6D018A: mov     ecx, ebx
0x6D018C: call    sub_6D0010
0x6D0191: xor     edi, edi
0x6D0193: cmp     [esi+44h], di
0x6D0197: jbe     short loc_6D01C3
0x6D0199: lea     esp, [esp+0]
0x6D01A0: mov     ecx, [ebx+3Ch]
0x6D01A3: movzx   eax, di
0x6D01A6: lea     eax, [eax+eax*2]
0x6D01A9: shl     eax, 4
0x6D01AC: add     ecx, eax
0x6D01AE: push    ebp
0x6D01AF: push    ecx
0x6D01B0: mov     ecx, [esi+3Ch]
0x6D01B3: add     ecx, eax
0x6D01B5: call    sub_6CC480
0x6D01BA: add     edi, 1
0x6D01BD: cmp     di, [esi+44h]
0x6D01C1: jb      short loc_6D01A0
0x6D01C3: pop     edi
0x6D01C4: pop     esi
0x6D01C5: pop     ebp
0x6D01C6: pop     ebx
0x6D01C7: retn    8
