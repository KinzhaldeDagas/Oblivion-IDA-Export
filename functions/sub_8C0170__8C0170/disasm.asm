0x8C0170: push    ebx
0x8C0171: push    esi
0x8C0172: mov     esi, [esp+8+arg_0]
0x8C0176: push    edi
0x8C0177: push    esi
0x8C0178: mov     edi, ecx
0x8C017A: call    sub_8A0C30
0x8C017F: mov     edi, [edi+4]
0x8C0182: mov     eax, [esi+21Ch]
0x8C0188: mov     edx, [eax+4]
0x8C018B: push    0
0x8C018D: push    0
0x8C018F: push    20h ; ' '
0x8C0191: lea     ecx, [edi+10h]
0x8C0194: push    ecx
0x8C0195: push    eax
0x8C0196: call    edx
0x8C0198: mov     eax, [esi+21Ch]
0x8C019E: mov     edx, [eax+4]
0x8C01A1: push    0
0x8C01A3: push    0
0x8C01A5: push    60h ; '`'
0x8C01A7: lea     ecx, [edi+30h]
0x8C01AA: push    ecx
0x8C01AB: push    eax
0x8C01AC: call    edx
0x8C01AE: mov     eax, [esi+21Ch]
0x8C01B4: push    1
0x8C01B6: lea     ecx, [esp+38h+arg_0]
0x8C01BA: push    ecx
0x8C01BB: mov     ebx, 4
0x8C01C0: push    ebx
0x8C01C1: lea     edx, [edi+90h]
0x8C01C7: push    edx
0x8C01C8: push    eax
0x8C01C9: mov     eax, [eax+4]
0x8C01CC: mov     [esp+48h+arg_0], ebx
0x8C01D0: call    eax
0x8C01D2: mov     eax, [esi+21Ch]
0x8C01D8: push    1
0x8C01DA: lea     ecx, [esp+4Ch+arg_0]
0x8C01DE: push    ecx
0x8C01DF: push    ebx
0x8C01E0: lea     edx, [edi+94h]
0x8C01E6: push    edx
0x8C01E7: push    eax
0x8C01E8: mov     eax, [eax+4]
0x8C01EB: mov     [esp+5Ch+arg_0], ebx
0x8C01EF: call    eax
0x8C01F1: mov     eax, [esi+21Ch]
0x8C01F7: add     esp, 50h
0x8C01FA: push    1
0x8C01FC: lea     ecx, [esp+10h+arg_0]
0x8C0200: push    ecx
0x8C0201: push    ebx
0x8C0202: lea     edx, [edi+98h]
0x8C0208: push    edx
0x8C0209: push    eax
0x8C020A: mov     eax, [eax+4]
0x8C020D: mov     [esp+20h+arg_0], ebx
0x8C0211: call    eax
0x8C0213: mov     esi, [esi+21Ch]
0x8C0219: mov     edx, [esi+4]
0x8C021C: push    1
0x8C021E: lea     ecx, [esp+24h+arg_0]
0x8C0222: push    ecx
0x8C0223: push    ebx
0x8C0224: add     edi, 9Ch ; 'œ'
0x8C022A: push    edi
0x8C022B: push    esi
0x8C022C: mov     [esp+34h+arg_0], ebx
0x8C0230: call    edx
0x8C0232: add     esp, 28h
0x8C0235: pop     edi
0x8C0236: pop     esi
0x8C0237: pop     ebx
0x8C0238: retn    4
