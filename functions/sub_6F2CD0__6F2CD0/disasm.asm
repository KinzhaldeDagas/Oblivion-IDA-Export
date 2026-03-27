0x6F2CD0: push    ebx
0x6F2CD1: push    ebp
0x6F2CD2: mov     ebp, [esp+8+arg_0]
0x6F2CD6: xor     ebx, ebx
0x6F2CD8: cmp     ebp, ebx
0x6F2CDA: push    esi
0x6F2CDB: mov     esi, ecx
0x6F2CDD: mov     [esi+4], ebx
0x6F2CE0: mov     [esi+8], ebx
0x6F2CE3: mov     [esi+0Ch], ebx
0x6F2CE6: jz      short loc_6F2D29
0x6F2CE8: cmp     ebp, 0FFFFFFFFh
0x6F2CEB: jbe     short loc_6F2CF2
0x6F2CED: call    sub_6F1780
0x6F2CF2: push    edi
0x6F2CF3: push    ebx
0x6F2CF4: push    ebp; char *
0x6F2CF5: call    sub_412E70
0x6F2CFA: lea     ecx, [eax+ebp]
0x6F2CFD: add     esp, 8
0x6F2D00: cmp     ebp, ebx
0x6F2D02: mov     [esi+0Ch], ecx
0x6F2D05: mov     [esi+4], eax
0x6F2D08: mov     [esi+8], eax
0x6F2D0B: mov     ecx, ebp
0x6F2D0D: mov     edi, eax
0x6F2D0F: jbe     short loc_6F2D23
0x6F2D11: mov     edx, [esp+10h+arg_4]
0x6F2D15: mov     bl, [edx]
0x6F2D17: mov     [edi], bl
0x6F2D19: sub     ecx, 1
0x6F2D1C: add     edi, 1
0x6F2D1F: test    ecx, ecx
0x6F2D21: ja      short loc_6F2D15
0x6F2D23: add     eax, ebp
0x6F2D25: mov     [esi+8], eax
0x6F2D28: pop     edi
0x6F2D29: pop     esi
0x6F2D2A: pop     ebp
0x6F2D2B: pop     ebx
0x6F2D2C: retn    8
