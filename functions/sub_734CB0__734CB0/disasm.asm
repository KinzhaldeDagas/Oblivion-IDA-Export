0x734CB0: sub     esp, 0Ch
0x734CB3: push    esi
0x734CB4: mov     esi, ecx
0x734CB6: cmp     word ptr [esi+10Eh], 0
0x734CBE: mov     [esp+10h+var_8], 0
0x734CC6: jbe     loc_734E06
0x734CCC: push    ebx
0x734CCD: push    ebp
0x734CCE: push    edi
0x734CCF: nop
0x734CD0: cmp     dword ptr [esi+174h], 0
0x734CD7: mov     ebx, [esp+1Ch+arg_0]
0x734CDB: mov     ebp, 1
0x734CE0: jnz     short loc_734D5C
0x734CE2: mov     edx, [ebx+4]
0x734CE5: push    ebp
0x734CE6: lea     eax, [esp+20h+var_4]
0x734CEA: push    eax
0x734CEB: push    ebp
0x734CEC: lea     ecx, [esp+28h+var_9]
0x734CF0: push    ecx
0x734CF1: push    ebx
0x734CF2: mov     [esp+30h+var_9], 0
0x734CF7: mov     [esp+30h+var_4], ebp
0x734CFB: call    edx
0x734CFD: mov     al, [esp+30h+var_9]
0x734D01: mov     cl, al
0x734D03: shr     cl, 7
0x734D06: add     esp, 14h
0x734D09: test    al, al
0x734D0B: mov     [esi+178h], cl
0x734D11: jns     short loc_734D4A
0x734D13: movzx   ecx, byte ptr [esi+114h]
0x734D1A: movzx   edx, al
0x734D1D: push    ebp
0x734D1E: sub     edx, 7Fh
0x734D21: lea     eax, [esp+20h+var_4]
0x734D25: push    eax
0x734D26: mov     [esi+174h], edx
0x734D2C: push    ecx
0x734D2D: lea     edx, [esi+179h]
0x734D33: push    edx
0x734D34: mov     byte ptr [esi+178h], 1
0x734D3B: mov     eax, [ebx+4]
0x734D3E: push    ebx
0x734D3F: mov     [esp+30h+var_4], ebp
0x734D43: call    eax
0x734D45: add     esp, 14h
0x734D48: jmp     short loc_734D5C
0x734D4A: movzx   ecx, al
0x734D4D: add     ecx, ebp
0x734D4F: mov     byte ptr [esi+178h], 0
0x734D56: mov     [esi+174h], ecx
0x734D5C: movzx   edi, word ptr [esi+10Eh]
0x734D63: sub     edi, [esp+1Ch+var_8]
0x734D67: mov     eax, [esi+174h]
0x734D6D: cmp     eax, edi
0x734D6F: jnb     short loc_734D73
0x734D71: mov     edi, eax
0x734D73: cmp     byte ptr [esi+178h], 0
0x734D7A: jz      short loc_734DB1
0x734D7C: test    edi, edi
0x734D7E: jbe     short loc_734DE4
0x734D80: movzx   eax, byte ptr [esi+114h]
0x734D87: lea     ebx, [esi+179h]
0x734D8D: mov     ebp, edi
0x734D8F: nop
0x734D90: mov     edx, [esp+1Ch+Dst]
0x734D94: push    eax; Size
0x734D95: push    ebx; Src
0x734D96: push    edx; Dst
0x734D97: call    _memcpy
0x734D9C: movzx   eax, byte ptr [esi+114h]
0x734DA3: add     [esp+28h+Dst], eax
0x734DA7: add     esp, 0Ch
0x734DAA: sub     ebp, 1
0x734DAD: jnz     short loc_734D90
0x734DAF: jmp     short loc_734DE4
0x734DB1: movzx   ecx, byte ptr [esi+114h]
0x734DB8: mov     edx, [ebx+4]
0x734DBB: imul    ecx, edi
0x734DBE: push    ebp
0x734DBF: lea     eax, [esp+20h+var_4]
0x734DC3: push    eax
0x734DC4: mov     [esp+24h+var_4], ebp
0x734DC8: mov     ebp, [esp+24h+Dst]
0x734DCC: push    ecx
0x734DCD: push    ebp
0x734DCE: push    ebx
0x734DCF: call    edx
0x734DD1: movzx   eax, byte ptr [esi+114h]
0x734DD8: imul    eax, edi
0x734DDB: add     esp, 14h
0x734DDE: add     ebp, eax
0x734DE0: mov     [esp+1Ch+Dst], ebp
0x734DE4: sub     [esi+174h], edi
0x734DEA: mov     eax, [esp+1Ch+var_8]
0x734DEE: movzx   ecx, word ptr [esi+10Eh]
0x734DF5: add     eax, edi
0x734DF7: cmp     eax, ecx
0x734DF9: mov     [esp+1Ch+var_8], eax
0x734DFD: jb      loc_734CD0
0x734E03: pop     edi
0x734E04: pop     ebp
0x734E05: pop     ebx
0x734E06: pop     esi
0x734E07: add     esp, 0Ch
0x734E0A: retn    0Ch
