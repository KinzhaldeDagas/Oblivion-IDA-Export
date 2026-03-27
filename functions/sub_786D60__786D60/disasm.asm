0x786D60: push    0FFFFFFFFh
0x786D62: push    offset SEH_786D60
0x786D67: mov     eax, large fs:0
0x786D6D: push    eax
0x786D6E: push    ecx
0x786D6F: push    ebp
0x786D70: push    esi
0x786D71: push    edi
0x786D72: mov     eax, ds:0B30AACh
0x786D77: xor     eax, esp
0x786D79: push    eax
0x786D7A: lea     eax, [esp+20h+var_C]
0x786D7E: mov     large fs:0, eax
0x786D84: mov     esi, ecx
0x786D86: mov     [esp+20h+var_10], esi
0x786D8A: xor     edi, edi
0x786D8C: mov     [esi+10h], edi
0x786D8F: mov     [esi+14h], edi
0x786D92: mov     [esi+18h], edi
0x786D95: mov     [esp+20h+var_4], edi
0x786D99: mov     [esi+20h], edi
0x786D9C: mov     [esi+24h], edi
0x786D9F: mov     [esi+28h], edi
0x786DA2: mov     [esi+30h], edi
0x786DA5: mov     [esi+34h], edi
0x786DA8: mov     [esi+38h], edi
0x786DAB: mov     [esi+40h], edi
0x786DAE: mov     [esi+44h], edi
0x786DB1: mov     [esi+48h], edi
0x786DB4: mov     [esi+50h], edi
0x786DB7: mov     [esi+54h], edi
0x786DBA: mov     [esi+58h], edi
0x786DBD: mov     ebp, [esp+20h+arg_0]
0x786DC1: push    ebp
0x786DC2: mov     ecx, offset dword_B4296C
0x786DC7: mov     byte ptr [esp+24h+var_4], 4
0x786DCC: call    sub_786C60
0x786DD1: mov     eax, [eax]
0x786DD3: cmp     eax, edi
0x786DD5: mov     ecx, esi
0x786DD7: jnz     short loc_786E20
0x786DD9: push    ebp
0x786DDA: call    sub_786AF0
0x786DDF: push    1F4h
0x786DE4: mov     ecx, esi
0x786DE6: call    sub_786350
0x786DEB: push    5Ch ; '\'; Size
0x786DED: call    FormHeapAlloc
0x786DF2: add     esp, 4
0x786DF5: mov     [esp+20h+arg_0], eax
0x786DF9: cmp     eax, edi
0x786DFB: mov     byte ptr [esp+20h+var_4], 5
0x786E00: jz      short loc_786E0C
0x786E02: push    esi
0x786E03: mov     ecx, eax
0x786E05: call    sub_785CB0
0x786E0A: mov     edi, eax
0x786E0C: push    ebp
0x786E0D: mov     ecx, offset dword_B4296C
0x786E12: mov     byte ptr [esp+24h+var_4], 4
0x786E17: call    sub_786C60
0x786E1C: mov     [eax], edi
0x786E1E: jmp     short loc_786E26
0x786E20: push    eax
0x786E21: call    sub_785C50
0x786E26: mov     eax, esi
0x786E28: mov     ecx, [esp+20h+var_C]
0x786E2C: mov     large fs:0, ecx
0x786E33: pop     ecx
0x786E34: pop     edi
0x786E35: pop     esi
0x786E36: pop     ebp
0x786E37: add     esp, 10h
0x786E3A: retn    4
