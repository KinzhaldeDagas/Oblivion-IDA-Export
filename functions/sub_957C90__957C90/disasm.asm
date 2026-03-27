0x957C90: sub     esp, 1Ch
0x957C93: mov     eax, [esp+1Ch+arg_4]
0x957C97: push    ebx
0x957C98: mov     ebx, [esp+20h+arg_8]
0x957C9C: push    ebp
0x957C9D: push    esi
0x957C9E: mov     esi, ecx
0x957CA0: mov     ecx, [esp+28h+arg_0]
0x957CA4: push    edi
0x957CA5: mov     edi, [esp+2Ch+arg_C]
0x957CA9: mov     [esi+8], edi
0x957CAC: mov     [esi+28h], ecx
0x957CAF: mov     [esi+20h], eax
0x957CB2: mov     [esi+24h], ebx
0x957CB5: mov     edx, [ecx]
0x957CB7: call    dword ptr [edx+8]
0x957CBA: mov     ecx, [edi+4]
0x957CBD: mov     edx, [esp+2Ch+arg_10]
0x957CC1: xor     ebp, ebp
0x957CC3: cmp     eax, ebp
0x957CC5: mov     [esp+2Ch+var_14], ecx
0x957CC9: mov     ecx, [edx]
0x957CCB: mov     [esp+2Ch+var_18], eax
0x957CCF: mov     [esp+2Ch+var_1C], ecx
0x957CD3: mov     [esi+38h], ebp
0x957CD6: jz      short loc_957CEA
0x957CD8: xor     ecx, ecx
0x957CDA: lea     ebx, [ebx+0]
0x957CE0: sar     eax, 1
0x957CE2: inc     ecx
0x957CE3: cmp     eax, ebp
0x957CE5: jnz     short loc_957CE0
0x957CE7: mov     [esi+38h], ecx
0x957CEA: mov     [esi+10h], ebp
0x957CED: mov     [esi+14h], ebp
0x957CF0: mov     eax, [edx+4]
0x957CF3: mov     edi, 400h
0x957CF8: mov     edx, [esi+10h]
0x957CFB: mov     [eax], edx
0x957CFD: inc     dword ptr [esi+14h]
0x957D00: mov     [eax+0F8h], eax
0x957D06: mov     edx, [esi+14h]
0x957D09: lea     ecx, [eax+0F8h]
0x957D0F: inc     edx
0x957D10: mov     [esi+14h], edx
0x957D13: mov     [eax+1F0h], ecx
0x957D19: mov     ecx, [esi+14h]
0x957D1C: lea     edx, [eax+1F0h]
0x957D22: inc     ecx
0x957D23: mov     [esi+14h], ecx
0x957D26: lea     ecx, [eax+2E8h]
0x957D2C: mov     [ecx], edx
0x957D2E: mov     [esi+10h], ecx
0x957D31: mov     ecx, [esi+14h]
0x957D34: inc     ecx
0x957D35: add     eax, 3E0h
0x957D3A: dec     edi
0x957D3B: mov     [esi+14h], ecx
0x957D3E: jnz     short loc_957CF8
0x957D40: mov     eax, [esp+2Ch+arg_10]
0x957D44: mov     [esi+18h], ebp
0x957D47: mov     [esi+1Ch], ebp
0x957D4A: mov     eax, [eax+8]
0x957D4D: mov     edi, 400h
0x957D52: mov     ecx, [esi+18h]
0x957D55: mov     [eax], ecx
0x957D57: inc     dword ptr [esi+1Ch]
0x957D5A: mov     [eax+0BCh], eax
0x957D60: mov     edx, [esi+1Ch]
0x957D63: lea     ecx, [eax+0BCh]
0x957D69: inc     edx
0x957D6A: mov     [esi+1Ch], edx
0x957D6D: mov     [eax+178h], ecx
0x957D73: mov     ecx, [esi+1Ch]
0x957D76: lea     edx, [eax+178h]
0x957D7C: inc     ecx
0x957D7D: mov     [esi+1Ch], ecx
0x957D80: lea     ecx, [eax+234h]
0x957D86: mov     [ecx], edx
0x957D88: mov     [esi+18h], ecx
0x957D8B: mov     ecx, [esi+1Ch]
0x957D8E: inc     ecx
0x957D8F: add     eax, 2F0h
0x957D94: dec     edi
0x957D95: mov     [esi+1Ch], ecx
0x957D98: jnz     short loc_957D52
0x957D9A: mov     edx, [ebx]
0x957D9C: mov     ecx, ebx
0x957D9E: call    dword ptr [edx+8]
0x957DA1: mov     [esi+30h], eax
0x957DA4: mov     eax, [ebx]
0x957DA6: mov     ecx, ebx
0x957DA8: call    dword ptr [eax+0Ch]
0x957DAB: mov     ecx, [esi+8]
0x957DAE: mov     [esi+34h], eax
0x957DB1: mov     edi, [ecx+8]
0x957DB4: mov     ecx, ds:0BA7D98h
0x957DBA: mov     edx, [ecx]
0x957DBC: add     edi, 2
0x957DBF: push    25h ; '%'
0x957DC1: lea     eax, ds:0[edi*4]
0x957DC8: push    eax
0x957DC9: call    dword ptr [edx]
0x957DCB: push    ebp
0x957DCC: push    ebp
0x957DCD: lea     edx, [esp+34h+var_1C]
0x957DD1: lea     ecx, [esp+34h+var_10]
0x957DD5: push    edx
0x957DD6: mov     [esi+0Ch], ecx
0x957DD9: push    ebp
0x957DDA: mov     ecx, esi
0x957DDC: mov     [esp+3Ch+var_8], eax
0x957DE0: mov     [esp+3Ch+var_C], edi
0x957DE4: mov     [esp+3Ch+var_10], ebp
0x957DE8: mov     [esp+3Ch+var_4], ebp
0x957DEC: call    sub_957980
0x957DF1: push    2000h
0x957DF6: mov     edi, eax
0x957DF8: mov     eax, [ebx]
0x957DFA: push    esi
0x957DFB: push    edi
0x957DFC: mov     ecx, ebx
0x957DFE: call    dword ptr [eax+10h]
0x957E01: mov     eax, [esp+2Ch+var_8]
0x957E05: mov     [esi+0Ch], ebp
0x957E08: mov     ecx, ds:0BA7D98h
0x957E0E: mov     edx, [ecx]
0x957E10: push    eax
0x957E11: call    dword ptr [edx+4]
0x957E14: mov     eax, edi
0x957E16: pop     edi
0x957E17: pop     esi
0x957E18: pop     ebp
0x957E19: pop     ebx
0x957E1A: add     esp, 1Ch
0x957E1D: retn    14h
