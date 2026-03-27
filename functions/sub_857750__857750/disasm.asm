0x857750: push    0FFFFFFFFh
0x857752: push    offset SEH_857750
0x857757: mov     eax, large fs:0
0x85775D: push    eax
0x85775E: push    esi
0x85775F: mov     eax, ds:0B30AACh
0x857764: xor     eax, esp
0x857766: push    eax
0x857767: lea     eax, [esp+14h+var_C]
0x85776B: mov     large fs:0, eax
0x857771: mov     esi, ecx
0x857773: cmp     [esp+14h+arg_18], 0
0x857778: jnz     loc_857C6C
0x85777E: cmp     [esp+14h+arg_1C], 0
0x857783: jz      loc_857903
0x857789: cmp     [esp+14h+arg_20], 0
0x85778E: jz      short loc_8577AE
0x857790: mov     eax, ds:0B42E8Ch
0x857795: test    eax, eax
0x857797: jz      loc_8580B9
0x85779D: push    0; _DWORD
0x85779F: push    offset aShaderError_27; "SHADER ERROR : no shader to handle ADT2"...
0x8577A4: call    eax ; dword_B42E8C
0x8577A6: add     esp, 8
0x8577A9: jmp     loc_8580B9
0x8577AE: cmp     [esp+14h+arg_2C], 0
0x8577B3: jnz     loc_85785E
0x8577B9: cmp     [esp+14h+arg_28], 0
0x8577BE: jnz     short loc_85780F
0x8577C0: cmp     byte ptr [esp+14h+arg_10], 1
0x8577C5: jnz     loc_8580B1
0x8577CB: push    10h; Size
0x8577CD: call    FormHeapAlloc
0x8577D2: add     esp, 4
0x8577D5: mov     [esp+14h+arg_10], eax
0x8577D9: test    eax, eax
0x8577DB: mov     [esp+14h+var_4], 0
0x8577E3: jz      loc_858094
0x8577E9: mov     ecx, [esp+14h+arg_8]
0x8577ED: mov     edx, [esp+14h+arg_4]
0x8577F1: push    ecx
0x8577F2: mov     ecx, [esp+18h+arg_0]
0x8577F6: push    edx
0x8577F7: push    2
0x8577F9: push    1
0x8577FB: push    93h ; '“'
0x857800: push    ecx
0x857801: push    eax
0x857802: call    sub_7E2370
0x857807: add     esp, 1Ch
0x85780A: jmp     loc_858096
0x85780F: cmp     byte ptr [esp+14h+arg_10], 1
0x857814: jnz     loc_8580B1
0x85781A: push    10h; Size
0x85781C: call    FormHeapAlloc
0x857821: add     esp, 4
0x857824: mov     [esp+14h+arg_10], eax
0x857828: test    eax, eax
0x85782A: mov     [esp+14h+var_4], 1
0x857832: jz      loc_858094
0x857838: mov     ecx, [esp+14h+arg_8]
0x85783C: mov     edx, [esp+14h+arg_4]
0x857840: push    ecx
0x857841: mov     ecx, [esp+18h+arg_0]
0x857845: push    edx
0x857846: push    2
0x857848: push    1
0x85784A: push    0A0h ; ' '
0x85784F: push    ecx
0x857850: push    eax
0x857851: call    sub_7E2370
0x857856: add     esp, 1Ch
0x857859: jmp     loc_858096
0x85785E: cmp     [esp+14h+arg_28], 0
0x857863: jnz     short loc_8578B4
0x857865: cmp     byte ptr [esp+14h+arg_10], 1
0x85786A: jnz     loc_8580B1
0x857870: push    10h; Size
0x857872: call    FormHeapAlloc
0x857877: add     esp, 4
0x85787A: mov     [esp+14h+arg_10], eax
0x85787E: test    eax, eax
0x857880: mov     [esp+14h+var_4], 2
0x857888: jz      loc_858094
0x85788E: mov     ecx, [esp+14h+arg_8]
0x857892: mov     edx, [esp+14h+arg_4]
0x857896: push    ecx
0x857897: mov     ecx, [esp+18h+arg_0]
0x85789B: push    edx
0x85789C: push    2
0x85789E: push    1
0x8578A0: push    96h ; '–'
0x8578A5: push    ecx
0x8578A6: push    eax
0x8578A7: call    sub_7E2370
0x8578AC: add     esp, 1Ch
0x8578AF: jmp     loc_858096
0x8578B4: cmp     byte ptr [esp+14h+arg_10], 1
0x8578B9: jnz     loc_8580B1
0x8578BF: push    10h; Size
0x8578C1: call    FormHeapAlloc
0x8578C6: add     esp, 4
0x8578C9: mov     [esp+14h+arg_10], eax
0x8578CD: test    eax, eax
0x8578CF: mov     [esp+14h+var_4], 3
0x8578D7: jz      loc_858094
0x8578DD: mov     ecx, [esp+14h+arg_8]
0x8578E1: mov     edx, [esp+14h+arg_4]
0x8578E5: push    ecx
0x8578E6: mov     ecx, [esp+18h+arg_0]
0x8578EA: push    edx
0x8578EB: push    2
0x8578ED: push    1
0x8578EF: push    0A3h ; '£'
0x8578F4: push    ecx
0x8578F5: push    eax
0x8578F6: call    sub_7E2370
0x8578FB: add     esp, 1Ch
0x8578FE: jmp     loc_858096
0x857903: cmp     [esp+14h+arg_20], 0
0x857908: jz      loc_8579B3
0x85790E: cmp     [esp+14h+arg_28], 0
0x857913: jnz     short loc_857964
0x857915: cmp     byte ptr [esp+14h+arg_10], 1
0x85791A: jnz     loc_8580B1
0x857920: push    10h; Size
0x857922: call    FormHeapAlloc
0x857927: add     esp, 4
0x85792A: mov     [esp+14h+arg_10], eax
0x85792E: test    eax, eax
0x857930: mov     [esp+14h+var_4], 4
0x857938: jz      loc_858094
0x85793E: mov     ecx, [esp+14h+arg_8]
0x857942: mov     edx, [esp+14h+arg_4]
0x857946: push    ecx
0x857947: mov     ecx, [esp+18h+arg_0]
0x85794B: push    edx
0x85794C: push    2
0x85794E: push    1
0x857950: push    94h ; '”'
0x857955: push    ecx
0x857956: push    eax
0x857957: call    sub_7E2370
0x85795C: add     esp, 1Ch
0x85795F: jmp     loc_858096
0x857964: cmp     byte ptr [esp+14h+arg_10], 1
0x857969: jnz     loc_8580B1
0x85796F: push    10h; Size
0x857971: call    FormHeapAlloc
0x857976: add     esp, 4
0x857979: mov     [esp+14h+arg_10], eax
0x85797D: test    eax, eax
0x85797F: mov     [esp+14h+var_4], 5
0x857987: jz      loc_858094
0x85798D: mov     ecx, [esp+14h+arg_8]
0x857991: mov     edx, [esp+14h+arg_4]
0x857995: push    ecx
0x857996: mov     ecx, [esp+18h+arg_0]
0x85799A: push    edx
0x85799B: push    2
0x85799D: push    1
0x85799F: push    0A1h ; '¡'
0x8579A4: push    ecx
0x8579A5: push    eax
0x8579A6: call    sub_7E2370
0x8579AB: add     esp, 1Ch
0x8579AE: jmp     loc_858096
0x8579B3: cmp     [esp+14h+arg_2C], 0
0x8579B8: jnz     loc_857BC7
0x8579BE: cmp     [esp+14h+arg_28], 0
0x8579C3: jnz     loc_857AC8
0x8579C9: cmp     [esp+14h+arg_30], 0
0x8579CE: jnz     loc_857A79
0x8579D4: cmp     [esp+14h+arg_34], 0
0x8579D9: jnz     short loc_857A2A
0x8579DB: cmp     byte ptr [esp+14h+arg_10], 1
0x8579E0: jnz     loc_8580B1
0x8579E6: push    10h; Size
0x8579E8: call    FormHeapAlloc
0x8579ED: add     esp, 4
0x8579F0: mov     [esp+14h+arg_10], eax
0x8579F4: test    eax, eax
0x8579F6: mov     [esp+14h+var_4], 6
0x8579FE: jz      loc_858094
0x857A04: mov     ecx, [esp+14h+arg_8]
0x857A08: mov     edx, [esp+14h+arg_4]
0x857A0C: push    ecx
0x857A0D: mov     ecx, [esp+18h+arg_0]
0x857A11: push    edx
0x857A12: push    2
0x857A14: push    1
0x857A16: push    92h ; '’'
0x857A1B: push    ecx
0x857A1C: push    eax
0x857A1D: call    sub_7E2370
0x857A22: add     esp, 1Ch
0x857A25: jmp     loc_858096
0x857A2A: cmp     byte ptr [esp+14h+arg_10], 1
0x857A2F: jnz     loc_8580B1
0x857A35: push    10h; Size
0x857A37: call    FormHeapAlloc
0x857A3C: add     esp, 4
0x857A3F: mov     [esp+14h+arg_10], eax
0x857A43: test    eax, eax
0x857A45: mov     [esp+14h+var_4], 7
0x857A4D: jz      loc_858094
0x857A53: mov     ecx, [esp+14h+arg_8]
0x857A57: mov     edx, [esp+14h+arg_4]
0x857A5B: push    ecx
0x857A5C: mov     ecx, [esp+18h+arg_0]
0x857A60: push    edx
0x857A61: push    2
0x857A63: push    1
0x857A65: push    97h ; '—'
0x857A6A: push    ecx
0x857A6B: push    eax
0x857A6C: call    sub_7E2370
0x857A71: add     esp, 1Ch
0x857A74: jmp     loc_858096
0x857A79: cmp     byte ptr [esp+14h+arg_10], 1
0x857A7E: jnz     loc_8580B1
0x857A84: push    10h; Size
0x857A86: call    FormHeapAlloc
0x857A8B: add     esp, 4
0x857A8E: mov     [esp+14h+arg_10], eax
0x857A92: test    eax, eax
0x857A94: mov     [esp+14h+var_4], 8
0x857A9C: jz      loc_858094
0x857AA2: mov     ecx, [esp+14h+arg_8]
0x857AA6: mov     edx, [esp+14h+arg_4]
0x857AAA: push    ecx
0x857AAB: mov     ecx, [esp+18h+arg_0]
0x857AAF: push    edx
0x857AB0: push    2
0x857AB2: push    1
0x857AB4: push    9Dh
0x857AB9: push    ecx
0x857ABA: push    eax
0x857ABB: call    sub_7E2370
0x857AC0: add     esp, 1Ch
0x857AC3: jmp     loc_858096
0x857AC8: cmp     [esp+14h+arg_30], 0
0x857ACD: jnz     loc_857B78
0x857AD3: cmp     [esp+14h+arg_34], 0
0x857AD8: jnz     short loc_857B29
0x857ADA: cmp     byte ptr [esp+14h+arg_10], 1
0x857ADF: jnz     loc_8580B1
0x857AE5: push    10h; Size
0x857AE7: call    FormHeapAlloc
0x857AEC: add     esp, 4
0x857AEF: mov     [esp+14h+arg_10], eax
0x857AF3: test    eax, eax
0x857AF5: mov     [esp+14h+var_4], 9
0x857AFD: jz      loc_858094
0x857B03: mov     ecx, [esp+14h+arg_8]
0x857B07: mov     edx, [esp+14h+arg_4]
0x857B0B: push    ecx
0x857B0C: mov     ecx, [esp+18h+arg_0]
0x857B10: push    edx
0x857B11: push    2
0x857B13: push    1
0x857B15: push    9Fh ; 'Ÿ'
0x857B1A: push    ecx
0x857B1B: push    eax
0x857B1C: call    sub_7E2370
0x857B21: add     esp, 1Ch
0x857B24: jmp     loc_858096
0x857B29: cmp     byte ptr [esp+14h+arg_10], 1
0x857B2E: jnz     loc_8580B1
0x857B34: push    10h; Size
0x857B36: call    FormHeapAlloc
0x857B3B: add     esp, 4
0x857B3E: mov     [esp+14h+arg_10], eax
0x857B42: test    eax, eax
0x857B44: mov     [esp+14h+var_4], 0Ah
0x857B4C: jz      loc_858094
0x857B52: mov     ecx, [esp+14h+arg_8]
0x857B56: mov     edx, [esp+14h+arg_4]
0x857B5A: push    ecx
0x857B5B: mov     ecx, [esp+18h+arg_0]
0x857B5F: push    edx
0x857B60: push    2
0x857B62: push    1
0x857B64: push    0A4h ; '¤'
0x857B69: push    ecx
0x857B6A: push    eax
0x857B6B: call    sub_7E2370
0x857B70: add     esp, 1Ch
0x857B73: jmp     loc_858096
0x857B78: cmp     byte ptr [esp+14h+arg_10], 1
0x857B7D: jnz     loc_8580B1
0x857B83: push    10h; Size
0x857B85: call    FormHeapAlloc
0x857B8A: add     esp, 4
0x857B8D: mov     [esp+14h+arg_10], eax
0x857B91: test    eax, eax
0x857B93: mov     [esp+14h+var_4], 0Bh
0x857B9B: jz      loc_858094
0x857BA1: mov     ecx, [esp+14h+arg_8]
0x857BA5: mov     edx, [esp+14h+arg_4]
0x857BA9: push    ecx
0x857BAA: mov     ecx, [esp+18h+arg_0]
0x857BAE: push    edx
0x857BAF: push    2
0x857BB1: push    1
0x857BB3: push    0AAh ; 'ª'
0x857BB8: push    ecx
0x857BB9: push    eax
0x857BBA: call    sub_7E2370
0x857BBF: add     esp, 1Ch
0x857BC2: jmp     loc_858096
0x857BC7: cmp     [esp+14h+arg_28], 0
0x857BCC: jnz     short loc_857C1D
0x857BCE: cmp     byte ptr [esp+14h+arg_10], 1
0x857BD3: jnz     loc_8580B1
0x857BD9: push    10h; Size
0x857BDB: call    FormHeapAlloc
0x857BE0: add     esp, 4
0x857BE3: mov     [esp+14h+arg_10], eax
0x857BE7: test    eax, eax
0x857BE9: mov     [esp+14h+var_4], 0Ch
0x857BF1: jz      loc_858094
0x857BF7: mov     ecx, [esp+14h+arg_8]
0x857BFB: mov     edx, [esp+14h+arg_4]
0x857BFF: push    ecx
0x857C00: mov     ecx, [esp+18h+arg_0]
0x857C04: push    edx
0x857C05: push    2
0x857C07: push    1
0x857C09: push    95h ; '•'
0x857C0E: push    ecx
0x857C0F: push    eax
0x857C10: call    sub_7E2370
0x857C15: add     esp, 1Ch
0x857C18: jmp     loc_858096
0x857C1D: cmp     byte ptr [esp+14h+arg_10], 1
0x857C22: jnz     loc_8580B1
0x857C28: push    10h; Size
0x857C2A: call    FormHeapAlloc
0x857C2F: add     esp, 4
0x857C32: mov     [esp+14h+arg_10], eax
0x857C36: test    eax, eax
0x857C38: mov     [esp+14h+var_4], 0Dh
0x857C40: jz      loc_858094
0x857C46: mov     ecx, [esp+14h+arg_8]
0x857C4A: mov     edx, [esp+14h+arg_4]
0x857C4E: push    ecx
0x857C4F: mov     ecx, [esp+18h+arg_0]
0x857C53: push    edx
0x857C54: push    2
0x857C56: push    1
0x857C58: push    0A2h ; '¢'
0x857C5D: push    ecx
0x857C5E: push    eax
0x857C5F: call    sub_7E2370
0x857C64: add     esp, 1Ch
0x857C67: jmp     loc_858096
0x857C6C: cmp     [esp+14h+arg_1C], 0
0x857C71: jz      loc_857DF1
0x857C77: cmp     [esp+14h+arg_20], 0
0x857C7C: jz      short loc_857C9C
0x857C7E: mov     eax, ds:0B42E8Ch
0x857C83: test    eax, eax
0x857C85: jz      loc_8580B9
0x857C8B: push    0; _DWORD
0x857C8D: push    offset aShaderError_28; "SHADER ERROR : no shader to handle ADT_"...
0x857C92: call    eax ; dword_B42E8C
0x857C94: add     esp, 8
0x857C97: jmp     loc_8580B9
0x857C9C: cmp     [esp+14h+arg_2C], 0
0x857CA1: jnz     loc_857D4C
0x857CA7: cmp     [esp+14h+arg_28], 0
0x857CAC: jnz     short loc_857CFD
0x857CAE: cmp     byte ptr [esp+14h+arg_10], 1
0x857CB3: jnz     loc_8580B1
0x857CB9: push    10h; Size
0x857CBB: call    FormHeapAlloc
0x857CC0: add     esp, 4
0x857CC3: mov     [esp+14h+arg_10], eax
0x857CC7: test    eax, eax
0x857CC9: mov     [esp+14h+var_4], 0Eh
0x857CD1: jz      loc_858094
0x857CD7: mov     ecx, [esp+14h+arg_8]
0x857CDB: mov     edx, [esp+14h+arg_4]
0x857CDF: push    ecx
0x857CE0: mov     ecx, [esp+18h+arg_0]
0x857CE4: push    edx
0x857CE5: push    2
0x857CE7: push    1
0x857CE9: push    99h ; '™'
0x857CEE: push    ecx
0x857CEF: push    eax
0x857CF0: call    sub_7E2370
0x857CF5: add     esp, 1Ch
0x857CF8: jmp     loc_858096
0x857CFD: cmp     byte ptr [esp+14h+arg_10], 1
0x857D02: jnz     loc_8580B1
0x857D08: push    10h; Size
0x857D0A: call    FormHeapAlloc
0x857D0F: add     esp, 4
0x857D12: mov     [esp+14h+arg_10], eax
0x857D16: test    eax, eax
0x857D18: mov     [esp+14h+var_4], 0Fh
0x857D20: jz      loc_858094
0x857D26: mov     ecx, [esp+14h+arg_8]
0x857D2A: mov     edx, [esp+14h+arg_4]
0x857D2E: push    ecx
0x857D2F: mov     ecx, [esp+18h+arg_0]
0x857D33: push    edx
0x857D34: push    2
0x857D36: push    1
0x857D38: push    0A6h ; '¦'
0x857D3D: push    ecx
0x857D3E: push    eax
0x857D3F: call    sub_7E2370
0x857D44: add     esp, 1Ch
0x857D47: jmp     loc_858096
0x857D4C: cmp     [esp+14h+arg_28], 0
0x857D51: jnz     short loc_857DA2
0x857D53: cmp     byte ptr [esp+14h+arg_10], 1
0x857D58: jnz     loc_8580B1
0x857D5E: push    10h; Size
0x857D60: call    FormHeapAlloc
0x857D65: add     esp, 4
0x857D68: mov     [esp+14h+arg_10], eax
0x857D6C: test    eax, eax
0x857D6E: mov     [esp+14h+var_4], 10h
0x857D76: jz      loc_858094
0x857D7C: mov     ecx, [esp+14h+arg_8]
0x857D80: mov     edx, [esp+14h+arg_4]
0x857D84: push    ecx
0x857D85: mov     ecx, [esp+18h+arg_0]
0x857D89: push    edx
0x857D8A: push    2
0x857D8C: push    1
0x857D8E: push    9Ch ; 'œ'
0x857D93: push    ecx
0x857D94: push    eax
0x857D95: call    sub_7E2370
0x857D9A: add     esp, 1Ch
0x857D9D: jmp     loc_858096
0x857DA2: cmp     byte ptr [esp+14h+arg_10], 1
0x857DA7: jnz     loc_8580B1
0x857DAD: push    10h; Size
0x857DAF: call    FormHeapAlloc
0x857DB4: add     esp, 4
0x857DB7: mov     [esp+14h+arg_10], eax
0x857DBB: test    eax, eax
0x857DBD: mov     [esp+14h+var_4], 11h
0x857DC5: jz      loc_858094
0x857DCB: mov     ecx, [esp+14h+arg_8]
0x857DCF: mov     edx, [esp+14h+arg_4]
0x857DD3: push    ecx
0x857DD4: mov     ecx, [esp+18h+arg_0]
0x857DD8: push    edx
0x857DD9: push    2
0x857DDB: push    1
0x857DDD: push    0A9h ; '©'
0x857DE2: push    ecx
0x857DE3: push    eax
0x857DE4: call    sub_7E2370
0x857DE9: add     esp, 1Ch
0x857DEC: jmp     loc_858096
0x857DF1: cmp     [esp+14h+arg_20], 0
0x857DF6: jz      loc_857EA1
0x857DFC: cmp     [esp+14h+arg_28], 0
0x857E01: jnz     short loc_857E52
0x857E03: cmp     byte ptr [esp+14h+arg_10], 1
0x857E08: jnz     loc_8580B1
0x857E0E: push    10h; Size
0x857E10: call    FormHeapAlloc
0x857E15: add     esp, 4
0x857E18: mov     [esp+14h+arg_10], eax
0x857E1C: test    eax, eax
0x857E1E: mov     [esp+14h+var_4], 12h
0x857E26: jz      loc_858094
0x857E2C: mov     ecx, [esp+14h+arg_8]
0x857E30: mov     edx, [esp+14h+arg_4]
0x857E34: push    ecx
0x857E35: mov     ecx, [esp+18h+arg_0]
0x857E39: push    edx
0x857E3A: push    2
0x857E3C: push    1
0x857E3E: push    9Ah ; 'š'
0x857E43: push    ecx
0x857E44: push    eax
0x857E45: call    sub_7E2370
0x857E4A: add     esp, 1Ch
0x857E4D: jmp     loc_858096
0x857E52: cmp     byte ptr [esp+14h+arg_10], 1
0x857E57: jnz     loc_8580B1
0x857E5D: push    10h; Size
0x857E5F: call    FormHeapAlloc
0x857E64: add     esp, 4
0x857E67: mov     [esp+14h+arg_10], eax
0x857E6B: test    eax, eax
0x857E6D: mov     [esp+14h+var_4], 13h
0x857E75: jz      loc_858094
0x857E7B: mov     ecx, [esp+14h+arg_8]
0x857E7F: mov     edx, [esp+14h+arg_4]
0x857E83: push    ecx
0x857E84: mov     ecx, [esp+18h+arg_0]
0x857E88: push    edx
0x857E89: push    2
0x857E8B: push    1
0x857E8D: push    0A7h ; '§'
0x857E92: push    ecx
0x857E93: push    eax
0x857E94: call    sub_7E2370
0x857E99: add     esp, 1Ch
0x857E9C: jmp     loc_858096
0x857EA1: cmp     [esp+14h+arg_2C], 0
0x857EA6: jnz     loc_858001
0x857EAC: cmp     [esp+14h+arg_28], 0
0x857EB1: jnz     loc_857F5C
0x857EB7: cmp     [esp+14h+arg_34], 0
0x857EBC: jnz     short loc_857F0D
0x857EBE: cmp     byte ptr [esp+14h+arg_10], 1
0x857EC3: jnz     loc_8580B1
0x857EC9: push    10h; Size
0x857ECB: call    FormHeapAlloc
0x857ED0: add     esp, 4
0x857ED3: mov     [esp+14h+arg_10], eax
0x857ED7: test    eax, eax
0x857ED9: mov     [esp+14h+var_4], 14h
0x857EE1: jz      loc_858094
0x857EE7: mov     ecx, [esp+14h+arg_8]
0x857EEB: mov     edx, [esp+14h+arg_4]
0x857EEF: push    ecx
0x857EF0: mov     ecx, [esp+18h+arg_0]
0x857EF4: push    edx
0x857EF5: push    2
0x857EF7: push    1
0x857EF9: push    98h ; '˜'
0x857EFE: push    ecx
0x857EFF: push    eax
0x857F00: call    sub_7E2370
0x857F05: add     esp, 1Ch
0x857F08: jmp     loc_858096
0x857F0D: cmp     byte ptr [esp+14h+arg_10], 1
0x857F12: jnz     loc_8580B1
0x857F18: push    10h; Size
0x857F1A: call    FormHeapAlloc
0x857F1F: add     esp, 4
0x857F22: mov     [esp+14h+arg_10], eax
0x857F26: test    eax, eax
0x857F28: mov     [esp+14h+var_4], 15h
0x857F30: jz      loc_858094
0x857F36: mov     ecx, [esp+14h+arg_8]
0x857F3A: mov     edx, [esp+14h+arg_4]
0x857F3E: push    ecx
0x857F3F: mov     ecx, [esp+18h+arg_0]
0x857F43: push    edx
0x857F44: push    2
0x857F46: push    1
0x857F48: push    9Eh ; 'ž'
0x857F4D: push    ecx
0x857F4E: push    eax
0x857F4F: call    sub_7E2370
0x857F54: add     esp, 1Ch
0x857F57: jmp     loc_858096
0x857F5C: cmp     [esp+14h+arg_34], 0
0x857F61: jnz     short loc_857FB2
0x857F63: cmp     byte ptr [esp+14h+arg_10], 1
0x857F68: jnz     loc_8580B1
0x857F6E: push    10h; Size
0x857F70: call    FormHeapAlloc
0x857F75: add     esp, 4
0x857F78: mov     [esp+14h+arg_10], eax
0x857F7C: test    eax, eax
0x857F7E: mov     [esp+14h+var_4], 16h
0x857F86: jz      loc_858094
0x857F8C: mov     ecx, [esp+14h+arg_8]
0x857F90: mov     edx, [esp+14h+arg_4]
0x857F94: push    ecx
0x857F95: mov     ecx, [esp+18h+arg_0]
0x857F99: push    edx
0x857F9A: push    2
0x857F9C: push    1
0x857F9E: push    0A5h ; '¥'
0x857FA3: push    ecx
0x857FA4: push    eax
0x857FA5: call    sub_7E2370
0x857FAA: add     esp, 1Ch
0x857FAD: jmp     loc_858096
0x857FB2: cmp     byte ptr [esp+14h+arg_10], 1
0x857FB7: jnz     loc_8580B1
0x857FBD: push    10h; Size
0x857FBF: call    FormHeapAlloc
0x857FC4: add     esp, 4
0x857FC7: mov     [esp+14h+arg_10], eax
0x857FCB: test    eax, eax
0x857FCD: mov     [esp+14h+var_4], 17h
0x857FD5: jz      loc_858094
0x857FDB: mov     ecx, [esp+14h+arg_8]
0x857FDF: mov     edx, [esp+14h+arg_4]
0x857FE3: push    ecx
0x857FE4: mov     ecx, [esp+18h+arg_0]
0x857FE8: push    edx
0x857FE9: push    2
0x857FEB: push    1
0x857FED: push    0ABh ; '«'
0x857FF2: push    ecx
0x857FF3: push    eax
0x857FF4: call    sub_7E2370
0x857FF9: add     esp, 1Ch
0x857FFC: jmp     loc_858096
0x858001: cmp     [esp+14h+arg_28], 0
0x858006: jnz     short loc_858050
0x858008: cmp     byte ptr [esp+14h+arg_10], 1
0x85800D: jnz     loc_8580B1
0x858013: push    10h; Size
0x858015: call    FormHeapAlloc
0x85801A: add     esp, 4
0x85801D: mov     [esp+14h+arg_10], eax
0x858021: test    eax, eax
0x858023: mov     [esp+14h+var_4], 18h
0x85802B: jz      short loc_858094
0x85802D: mov     ecx, [esp+14h+arg_8]
0x858031: mov     edx, [esp+14h+arg_4]
0x858035: push    ecx
0x858036: mov     ecx, [esp+18h+arg_0]
0x85803A: push    edx
0x85803B: push    2
0x85803D: push    1
0x85803F: push    9Bh ; '›'
0x858044: push    ecx
0x858045: push    eax
0x858046: call    sub_7E2370
0x85804B: add     esp, 1Ch
0x85804E: jmp     short loc_858096
0x858050: cmp     byte ptr [esp+14h+arg_10], 1
0x858055: jnz     short loc_8580B1
0x858057: push    10h; Size
0x858059: call    FormHeapAlloc
0x85805E: add     esp, 4
0x858061: mov     [esp+14h+arg_10], eax
0x858065: test    eax, eax
0x858067: mov     [esp+14h+var_4], 19h
0x85806F: jz      short loc_858094
0x858071: mov     ecx, [esp+14h+arg_8]
0x858075: mov     edx, [esp+14h+arg_4]
0x858079: push    ecx
0x85807A: mov     ecx, [esp+18h+arg_0]
0x85807E: push    edx
0x85807F: push    2
0x858081: push    1
0x858083: push    0A8h ; '¨'
0x858088: push    ecx
0x858089: push    eax
0x85808A: call    sub_7E2370
0x85808F: add     esp, 1Ch
0x858092: jmp     short loc_858096
0x858094: xor     eax, eax
0x858096: lea     edx, [esp+14h+arg_10]
0x85809A: push    edx
0x85809B: lea     ecx, [esi+28h]
0x85809E: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8580A6: mov     [esp+18h+arg_10], eax
0x8580AA: call    sub_5B1E20
0x8580AF: jmp     short loc_8580B9
0x8580B1: mov     eax, [esp+14h+arg_C]
0x8580B5: add     word ptr [eax], 1
0x8580B9: mov     eax, [esp+14h+arg_14]
0x8580BD: mov     byte ptr [eax], 0
0x8580C0: mov     ecx, [esp+14h+var_C]
0x8580C4: mov     large fs:0, ecx
0x8580CB: pop     ecx
0x8580CC: pop     esi
0x8580CD: add     esp, 0Ch
0x8580D0: retn    38h ; '8'
