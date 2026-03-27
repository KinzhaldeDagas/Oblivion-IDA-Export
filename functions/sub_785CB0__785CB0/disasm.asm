0x785CB0: push    0FFFFFFFFh
0x785CB2: push    offset SEH_785CB0
0x785CB7: mov     eax, large fs:0
0x785CBD: push    eax
0x785CBE: push    ecx
0x785CBF: push    esi
0x785CC0: mov     eax, ds:0B30AACh
0x785CC5: xor     eax, esp
0x785CC7: push    eax
0x785CC8: lea     eax, [esp+18h+var_C]
0x785CCC: mov     large fs:0, eax
0x785CD2: mov     esi, ecx
0x785CD4: mov     [esp+18h+var_10], esi
0x785CD8: xor     eax, eax
0x785CDA: mov     [esi+10h], eax
0x785CDD: mov     [esi+14h], eax
0x785CE0: mov     [esi+18h], eax
0x785CE3: mov     [esp+18h+var_4], eax
0x785CE7: mov     [esi+20h], eax
0x785CEA: mov     [esi+24h], eax
0x785CED: mov     [esi+28h], eax
0x785CF0: mov     [esi+30h], eax
0x785CF3: mov     [esi+34h], eax
0x785CF6: mov     [esi+38h], eax
0x785CF9: mov     [esi+40h], eax
0x785CFC: mov     [esi+44h], eax
0x785CFF: mov     [esi+48h], eax
0x785D02: mov     [esi+50h], eax
0x785D05: mov     [esi+54h], eax
0x785D08: mov     [esi+58h], eax
0x785D0B: mov     eax, [esp+18h+arg_0]
0x785D0F: push    eax
0x785D10: mov     byte ptr [esp+1Ch+var_4], 4
0x785D15: call    sub_785C50
0x785D1A: mov     eax, esi
0x785D1C: mov     ecx, [esp+18h+var_C]
0x785D20: mov     large fs:0, ecx
0x785D27: pop     ecx
0x785D28: pop     esi
0x785D29: add     esp, 10h
0x785D2C: retn    4
