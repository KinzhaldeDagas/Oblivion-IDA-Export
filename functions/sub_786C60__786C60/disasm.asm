0x786C60: push    0FFFFFFFFh
0x786C62: push    offset SEH_786C60
0x786C67: mov     eax, large fs:0
0x786C6D: push    eax
0x786C6E: sub     esp, 28h
0x786C71: push    ebx
0x786C72: push    ebp
0x786C73: push    esi
0x786C74: push    edi
0x786C75: mov     eax, ds:0B30AACh
0x786C7A: xor     eax, esp
0x786C7C: push    eax
0x786C7D: lea     eax, [esp+48h+var_C]
0x786C81: mov     large fs:0, eax
0x786C87: mov     edi, ecx
0x786C89: mov     ebp, [esp+48h+arg_0]
0x786C8D: push    ebp
0x786C8E: call    sub_784930
0x786C93: xor     ebx, ebx
0x786C95: cmp     edi, ebx
0x786C97: mov     esi, eax
0x786C99: jnz     short loc_786CA0
0x786C9B: call    __invalid_parameter_noinfo
0x786CA0: mov     eax, [edi+4]
0x786CA3: cmp     esi, eax
0x786CA5: jz      short loc_786CCA
0x786CA7: cmp     dword ptr [esi+24h], 10h
0x786CAB: mov     ecx, [esi+20h]
0x786CAE: jb      short loc_786CB5
0x786CB0: mov     eax, [esi+10h]
0x786CB3: jmp     short loc_786CB8
0x786CB5: lea     eax, [esi+10h]
0x786CB8: push    ecx
0x786CB9: push    eax
0x786CBA: mov     eax, [ebp+14h]
0x786CBD: push    eax
0x786CBE: push    ebx
0x786CBF: mov     ecx, ebp
0x786CC1: call    sub_6F5DE0
0x786CC6: test    eax, eax
0x786CC8: jge     short loc_786D2B
0x786CCA: push    0FFFFFFFFh
0x786CCC: push    ebx
0x786CCD: push    ebp
0x786CCE: lea     ecx, [esp+54h+var_2C]
0x786CD2: mov     [esp+54h+var_14], 0Fh
0x786CDA: mov     [esp+54h+var_18], ebx
0x786CDE: mov     byte ptr [esp+54h+var_28], bl
0x786CE2: call    sub_414420
0x786CE7: mov     [esp+48h+var_10], ebx
0x786CEB: lea     ecx, [esp+48h+var_2C]
0x786CEF: push    ecx
0x786CF0: push    esi
0x786CF1: push    edi
0x786CF2: lea     edx, [esp+54h+var_34]
0x786CF6: push    edx
0x786CF7: mov     ecx, edi
0x786CF9: mov     [esp+58h+var_4], ebx
0x786CFD: call    sub_7868F0
0x786D02: cmp     [esp+48h+var_14], 10h
0x786D07: mov     edi, [eax]
0x786D09: mov     esi, [eax+4]
0x786D0C: jb      short loc_786D1B
0x786D0E: mov     eax, [esp+48h+var_28]
0x786D12: push    eax
0x786D13: call    FormHeapFree
0x786D18: add     esp, 4
0x786D1B: mov     [esp+48h+var_14], 0Fh
0x786D23: mov     [esp+48h+var_18], ebx
0x786D27: mov     byte ptr [esp+48h+var_28], bl
0x786D2B: cmp     edi, ebx
0x786D2D: jnz     short loc_786D34
0x786D2F: call    __invalid_parameter_noinfo
0x786D34: cmp     esi, [edi+4]
0x786D37: jnz     short loc_786D3E
0x786D39: call    __invalid_parameter_noinfo
0x786D3E: lea     eax, [esi+28h]
0x786D41: mov     ecx, [esp+48h+var_C]
0x786D45: mov     large fs:0, ecx
0x786D4C: pop     ecx
0x786D4D: pop     edi
0x786D4E: pop     esi
0x786D4F: pop     ebp
0x786D50: pop     ebx
0x786D51: add     esp, 34h
0x786D54: retn    4
