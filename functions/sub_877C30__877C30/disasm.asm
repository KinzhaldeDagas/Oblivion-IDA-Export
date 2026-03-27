0x877C30: push    0FFFFFFFFh
0x877C32: push    offset SEH_880560
0x877C37: mov     eax, large fs:0
0x877C3D: push    eax
0x877C3E: push    ebx
0x877C3F: push    ebp
0x877C40: push    esi
0x877C41: push    edi
0x877C42: mov     eax, ds:0B30AACh
0x877C47: xor     eax, esp
0x877C49: push    eax
0x877C4A: lea     eax, [esp+20h+var_C]
0x877C4E: mov     large fs:0, eax
0x877C54: mov     esi, ecx
0x877C56: mov     ebx, [esp+20h+arg_8]
0x877C5A: mov     eax, [ebx+10h]
0x877C5D: mov     edi, ds:0B476A8h
0x877C63: push    eax
0x877C64: call    sub_848C40
0x877C69: mov     ebp, [ebx+0Ch]
0x877C6C: push    ebp
0x877C6D: mov     ecx, esi
0x877C6F: call    sub_848E50
0x877C74: mov     ebx, [ebx+10h]
0x877C77: mov     ecx, [esp+20h+arg_0]
0x877C7B: mov     eax, [esi]
0x877C7D: mov     edx, [eax+0BCh]
0x877C83: push    ebx
0x877C84: push    ebp
0x877C85: push    ecx
0x877C86: mov     ecx, esi
0x877C88: call    edx
0x877C8A: mov     eax, [edi+24h]
0x877C8D: mov     ecx, [esp+20h+arg_C]
0x877C91: mov     ebx, [eax]
0x877C93: mov     edx, [ecx]
0x877C95: mov     eax, [edx+88h]
0x877C9B: push    0
0x877C9D: mov     [esp+24h+arg_8], ebx
0x877CA1: call    eax
0x877CA3: mov     ebx, [ebx+4]
0x877CA6: mov     ebp, eax
0x877CA8: cmp     ebx, ebp
0x877CAA: jz      short loc_877CE1
0x877CAC: test    ebx, ebx
0x877CAE: jz      short loc_877CCC
0x877CB0: lea     ecx, [ebx+4]
0x877CB3: push    ecx; lpAddend
0x877CB4: call    dword ptr ds:0A2807Ch
0x877CBA: test    eax, eax
0x877CBC: jnz     short loc_877CCC
0x877CBE: test    ebx, ebx
0x877CC0: jz      short loc_877CCC
0x877CC2: mov     edx, [ebx]
0x877CC4: mov     eax, [edx]
0x877CC6: push    1
0x877CC8: mov     ecx, ebx
0x877CCA: call    eax
0x877CCC: test    ebp, ebp
0x877CCE: mov     ecx, [esp+20h+arg_8]
0x877CD2: mov     [ecx+4], ebp
0x877CD5: jz      short loc_877CE1
0x877CD7: add     ebp, 4
0x877CDA: push    ebp; lpAddend
0x877CDB: call    dword ptr ds:0A28078h
0x877CE1: mov     edx, [edi+24h]
0x877CE4: mov     eax, [esp+20h+arg_C]
0x877CE8: mov     ebx, [edx+4]
0x877CEB: push    0
0x877CED: push    eax
0x877CEE: mov     ecx, esi
0x877CF0: mov     [esp+28h+arg_8], ebx
0x877CF4: call    sub_848FD0
0x877CF9: mov     ebx, [ebx+4]
0x877CFC: mov     ebp, eax
0x877CFE: cmp     ebx, ebp
0x877D00: jz      short loc_877D37
0x877D02: test    ebx, ebx
0x877D04: jz      short loc_877D22
0x877D06: lea     ecx, [ebx+4]
0x877D09: push    ecx; lpAddend
0x877D0A: call    dword ptr ds:0A2807Ch
0x877D10: test    eax, eax
0x877D12: jnz     short loc_877D22
0x877D14: test    ebx, ebx
0x877D16: jz      short loc_877D22
0x877D18: mov     edx, [ebx]
0x877D1A: mov     eax, [edx]
0x877D1C: push    1
0x877D1E: mov     ecx, ebx
0x877D20: call    eax
0x877D22: test    ebp, ebp
0x877D24: mov     ecx, [esp+20h+arg_8]
0x877D28: mov     [ecx+4], ebp
0x877D2B: jz      short loc_877D37
0x877D2D: add     ebp, 4
0x877D30: push    ebp; lpAddend
0x877D31: call    dword ptr ds:0A28078h
0x877D37: mov     edx, [edi+24h]
0x877D3A: mov     ebp, [edx+14h]
0x877D3D: mov     eax, ds:0B43110h
0x877D42: mov     ebx, [ebp+4]
0x877D45: cmp     ebx, eax
0x877D47: mov     ecx, eax
0x877D49: mov     [esp+20h+arg_C], ecx
0x877D4D: jz      short loc_877D84
0x877D4F: test    ebx, ebx
0x877D51: jz      short loc_877D73
0x877D53: lea     eax, [ebx+4]
0x877D56: push    eax; lpAddend
0x877D57: call    dword ptr ds:0A2807Ch
0x877D5D: test    eax, eax
0x877D5F: jnz     short loc_877D6F
0x877D61: test    ebx, ebx
0x877D63: jz      short loc_877D6F
0x877D65: mov     edx, [ebx]
0x877D67: mov     eax, [edx]
0x877D69: push    1
0x877D6B: mov     ecx, ebx
0x877D6D: call    eax
0x877D6F: mov     ecx, [esp+20h+arg_C]
0x877D73: test    ecx, ecx
0x877D75: mov     [ebp+4], ecx
0x877D78: jz      short loc_877D84
0x877D7A: add     ecx, 4
0x877D7D: push    ecx; lpAddend
0x877D7E: call    dword ptr ds:0A28078h
0x877D84: mov     ebx, 1
0x877D89: add     [edi+60h], ebx
0x877D8C: mov     [esp+20h+arg_C], edi
0x877D90: mov     edx, [esi+38h]
0x877D93: lea     ecx, [esp+20h+arg_C]
0x877D97: push    ecx
0x877D98: push    edx
0x877D99: lea     ecx, [esi+40h]
0x877D9C: mov     [esp+28h+var_4], 0
0x877DA4: call    sub_76CE40
0x877DA9: or      eax, 0FFFFFFFFh
0x877DAC: add     [edi+60h], eax
0x877DAF: mov     [esp+20h+var_4], eax
0x877DB3: jnz     short loc_877DBC
0x877DB5: mov     ecx, edi
0x877DB7: call    sub_7604D0
0x877DBC: add     [esi+38h], ebx
0x877DBF: mov     ecx, [esp+20h+var_C]
0x877DC3: mov     large fs:0, ecx
0x877DCA: pop     ecx
0x877DCB: pop     edi
0x877DCC: pop     esi
0x877DCD: pop     ebp
0x877DCE: pop     ebx
0x877DCF: add     esp, 0Ch
0x877DD2: retn    10h
