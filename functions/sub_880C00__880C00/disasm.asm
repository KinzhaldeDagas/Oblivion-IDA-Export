0x880C00: push    0FFFFFFFFh
0x880C02: push    offset SEH_882120
0x880C07: mov     eax, large fs:0
0x880C0D: push    eax
0x880C0E: push    ebx
0x880C0F: push    ebp
0x880C10: push    esi
0x880C11: push    edi
0x880C12: mov     eax, ds:0B30AACh
0x880C17: xor     eax, esp
0x880C19: push    eax
0x880C1A: lea     eax, [esp+20h+var_C]
0x880C1E: mov     large fs:0, eax
0x880C24: mov     esi, ecx
0x880C26: mov     ebx, [esp+20h+arg_8]
0x880C2A: mov     eax, [ebx+10h]
0x880C2D: mov     edi, ds:0B4773Ch
0x880C33: push    eax
0x880C34: call    sub_848C40
0x880C39: mov     ebx, [ebx+0Ch]
0x880C3C: push    ebx
0x880C3D: mov     ecx, esi
0x880C3F: call    sub_848E50
0x880C44: mov     ecx, [esp+20h+arg_0]
0x880C48: mov     eax, [esi]
0x880C4A: mov     edx, [eax+0BCh]
0x880C50: push    0
0x880C52: push    ebx
0x880C53: push    ecx
0x880C54: mov     ecx, esi
0x880C56: call    edx
0x880C58: mov     eax, [edi+24h]
0x880C5B: mov     ebp, [esp+20h+arg_C]
0x880C5F: mov     ebx, [eax]
0x880C61: mov     edx, [ebp+0]
0x880C64: mov     eax, [edx+88h]
0x880C6A: push    0
0x880C6C: mov     ecx, ebp
0x880C6E: mov     [esp+24h+arg_8], ebx
0x880C72: call    eax
0x880C74: mov     ebx, [ebx+4]
0x880C77: cmp     ebx, eax
0x880C79: mov     [esp+20h+arg_0], eax
0x880C7D: jz      short loc_880CB8
0x880C7F: test    ebx, ebx
0x880C81: jz      short loc_880CA3
0x880C83: lea     ecx, [ebx+4]
0x880C86: push    ecx; lpAddend
0x880C87: call    dword ptr ds:0A2807Ch
0x880C8D: test    eax, eax
0x880C8F: jnz     short loc_880C9F
0x880C91: test    ebx, ebx
0x880C93: jz      short loc_880C9F
0x880C95: mov     edx, [ebx]
0x880C97: mov     eax, [edx]
0x880C99: push    1
0x880C9B: mov     ecx, ebx
0x880C9D: call    eax
0x880C9F: mov     eax, [esp+20h+arg_0]
0x880CA3: test    eax, eax
0x880CA5: mov     ecx, [esp+20h+arg_8]
0x880CA9: mov     [ecx+4], eax
0x880CAC: jz      short loc_880CB8
0x880CAE: add     eax, 4
0x880CB1: push    eax; lpAddend
0x880CB2: call    dword ptr ds:0A28078h
0x880CB8: mov     edx, [edi+24h]
0x880CBB: mov     ebx, [edx+4]
0x880CBE: push    0
0x880CC0: push    ebp
0x880CC1: mov     ecx, esi
0x880CC3: mov     [esp+28h+arg_8], ebx
0x880CC7: call    sub_848FD0
0x880CCC: mov     ebx, [ebx+4]
0x880CCF: cmp     ebx, eax
0x880CD1: mov     [esp+20h+arg_0], eax
0x880CD5: jz      short loc_880D10
0x880CD7: test    ebx, ebx
0x880CD9: jz      short loc_880CFB
0x880CDB: lea     eax, [ebx+4]
0x880CDE: push    eax; lpAddend
0x880CDF: call    dword ptr ds:0A2807Ch
0x880CE5: test    eax, eax
0x880CE7: jnz     short loc_880CF7
0x880CE9: test    ebx, ebx
0x880CEB: jz      short loc_880CF7
0x880CED: mov     edx, [ebx]
0x880CEF: mov     eax, [edx]
0x880CF1: push    1
0x880CF3: mov     ecx, ebx
0x880CF5: call    eax
0x880CF7: mov     eax, [esp+20h+arg_0]
0x880CFB: test    eax, eax
0x880CFD: mov     ecx, [esp+20h+arg_8]
0x880D01: mov     [ecx+4], eax
0x880D04: jz      short loc_880D10
0x880D06: add     eax, 4
0x880D09: push    eax; lpAddend
0x880D0A: call    dword ptr ds:0A28078h
0x880D10: mov     edx, [edi+24h]
0x880D13: mov     ebx, [edx+8]
0x880D16: mov     eax, [ebp+0]
0x880D19: mov     edx, [eax+88h]
0x880D1F: push    1
0x880D21: mov     ecx, ebp
0x880D23: mov     [esp+24h+arg_8], ebx
0x880D27: call    edx
0x880D29: mov     ebx, [ebx+4]
0x880D2C: cmp     ebx, eax
0x880D2E: mov     [esp+20h+arg_0], eax
0x880D32: jz      short loc_880D6D
0x880D34: test    ebx, ebx
0x880D36: jz      short loc_880D58
0x880D38: lea     eax, [ebx+4]
0x880D3B: push    eax; lpAddend
0x880D3C: call    dword ptr ds:0A2807Ch
0x880D42: test    eax, eax
0x880D44: jnz     short loc_880D54
0x880D46: test    ebx, ebx
0x880D48: jz      short loc_880D54
0x880D4A: mov     edx, [ebx]
0x880D4C: mov     eax, [edx]
0x880D4E: push    1
0x880D50: mov     ecx, ebx
0x880D52: call    eax
0x880D54: mov     eax, [esp+20h+arg_0]
0x880D58: test    eax, eax
0x880D5A: mov     ecx, [esp+20h+arg_8]
0x880D5E: mov     [ecx+4], eax
0x880D61: jz      short loc_880D6D
0x880D63: add     eax, 4
0x880D66: push    eax; lpAddend
0x880D67: call    dword ptr ds:0A28078h
0x880D6D: mov     edx, [edi+24h]
0x880D70: mov     eax, [edx+0Ch]
0x880D73: push    1
0x880D75: push    ebp
0x880D76: mov     ecx, esi
0x880D78: mov     [esp+28h+arg_8], eax
0x880D7C: call    sub_848FD0
0x880D81: mov     ecx, [esp+20h+arg_8]
0x880D85: mov     ebp, [ecx+4]
0x880D88: mov     ebx, eax
0x880D8A: cmp     ebp, ebx
0x880D8C: jz      short loc_880DC4
0x880D8E: test    ebp, ebp
0x880D90: jz      short loc_880DAF
0x880D92: lea     edx, [ebp+4]
0x880D95: push    edx; lpAddend
0x880D96: call    dword ptr ds:0A2807Ch
0x880D9C: test    eax, eax
0x880D9E: jnz     short loc_880DAF
0x880DA0: test    ebp, ebp
0x880DA2: jz      short loc_880DAF
0x880DA4: mov     eax, [ebp+0]
0x880DA7: mov     edx, [eax]
0x880DA9: push    1
0x880DAB: mov     ecx, ebp
0x880DAD: call    edx
0x880DAF: test    ebx, ebx
0x880DB1: mov     eax, [esp+20h+arg_8]
0x880DB5: mov     [eax+4], ebx
0x880DB8: jz      short loc_880DC4
0x880DBA: add     ebx, 4
0x880DBD: push    ebx; lpAddend
0x880DBE: call    dword ptr ds:0A28078h
0x880DC4: mov     ebx, 1
0x880DC9: add     [edi+60h], ebx
0x880DCC: mov     [esp+20h+arg_8], edi
0x880DD0: mov     edx, [esi+38h]
0x880DD3: lea     ecx, [esp+20h+arg_8]
0x880DD7: push    ecx
0x880DD8: push    edx
0x880DD9: lea     ecx, [esi+40h]
0x880DDC: mov     [esp+28h+var_4], 0
0x880DE4: call    sub_76CE40
0x880DE9: or      eax, 0FFFFFFFFh
0x880DEC: add     [edi+60h], eax
0x880DEF: mov     [esp+20h+var_4], eax
0x880DF3: jnz     short loc_880DFC
0x880DF5: mov     ecx, edi
0x880DF7: call    sub_7604D0
0x880DFC: add     [esi+38h], ebx
0x880DFF: mov     ecx, [esp+20h+var_C]
0x880E03: mov     large fs:0, ecx
0x880E0A: pop     ecx
0x880E0B: pop     edi
0x880E0C: pop     esi
0x880E0D: pop     ebp
0x880E0E: pop     ebx
0x880E0F: add     esp, 0Ch
0x880E12: retn    10h
