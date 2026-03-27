0x75CF40: push    ecx
0x75CF41: push    esi
0x75CF42: push    edi
0x75CF43: mov     edi, [esp+0Ch+arg_0]
0x75CF47: push    edi
0x75CF48: mov     esi, ecx
0x75CF4A: call    sub_75E9E0
0x75CF4F: push    edi
0x75CF50: lea     ecx, [esi+40h]
0x75CF53: call    sub_7094A0
0x75CF58: mov     eax, [edi+220h]
0x75CF5E: push    1
0x75CF60: lea     ecx, [esp+10h+var_4]
0x75CF64: push    ecx
0x75CF65: push    4
0x75CF67: lea     edx, [esi+58h]
0x75CF6A: push    edx
0x75CF6B: push    eax
0x75CF6C: mov     eax, [eax+8]
0x75CF6F: mov     [esp+20h+var_4], 4
0x75CF77: call    eax
0x75CF79: mov     eax, [edi+220h]
0x75CF7F: push    1
0x75CF81: lea     ecx, [esp+24h+var_4]
0x75CF85: push    ecx
0x75CF86: push    4
0x75CF88: lea     edx, [esi+5Ch]
0x75CF8B: push    edx
0x75CF8C: push    eax
0x75CF8D: mov     eax, [eax+8]
0x75CF90: mov     [esp+34h+var_4], 4
0x75CF98: call    eax
0x75CF9A: movzx   ecx, byte ptr [esi+60h]
0x75CF9E: mov     eax, [edi+220h]
0x75CFA4: push    1
0x75CFA6: lea     edx, [esp+38h+var_4]
0x75CFAA: push    edx
0x75CFAB: mov     byte ptr [esp+3Ch+arg_0], cl
0x75CFAF: mov     edx, [eax+8]
0x75CFB2: push    1
0x75CFB4: lea     ecx, [esp+40h+arg_0]
0x75CFB8: push    ecx
0x75CFB9: push    eax
0x75CFBA: mov     [esp+48h+var_4], 1
0x75CFC2: call    edx
0x75CFC4: mov     al, [esi+61h]
0x75CFC7: push    1
0x75CFC9: lea     ecx, [esp+4Ch+var_4]
0x75CFCD: push    ecx
0x75CFCE: mov     byte ptr [esp+50h+arg_0], al
0x75CFD2: mov     eax, [edi+220h]
0x75CFD8: push    1
0x75CFDA: lea     edx, [esp+54h+arg_0]
0x75CFDE: push    edx
0x75CFDF: push    eax
0x75CFE0: mov     eax, [eax+8]
0x75CFE3: mov     [esp+5Ch+var_4], 1
0x75CFEB: call    eax
0x75CFED: movzx   ecx, byte ptr [esi+62h]
0x75CFF1: mov     eax, [edi+220h]
0x75CFF7: add     esp, 50h
0x75CFFA: push    1
0x75CFFC: lea     edx, [esp+10h+var_4]
0x75D000: push    edx
0x75D001: mov     byte ptr [esp+14h+arg_0], cl
0x75D005: mov     edx, [eax+8]
0x75D008: push    1
0x75D00A: lea     ecx, [esp+18h+arg_0]
0x75D00E: push    ecx
0x75D00F: push    eax
0x75D010: mov     [esp+20h+var_4], 1
0x75D018: call    edx
0x75D01A: mov     edi, [edi+220h]
0x75D020: mov     ecx, [edi+8]
0x75D023: push    1
0x75D025: lea     eax, [esp+24h+var_4]
0x75D029: push    eax
0x75D02A: push    4
0x75D02C: add     esi, 64h ; 'd'
0x75D02F: push    esi
0x75D030: mov     [esp+30h+var_4], 4
0x75D038: push    edi
0x75D039: call    ecx
0x75D03B: add     esp, 28h
0x75D03E: pop     edi
0x75D03F: pop     esi
0x75D040: pop     ecx
0x75D041: retn    4
