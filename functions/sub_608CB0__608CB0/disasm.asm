0x608CB0: sub     esp, 34h
0x608CB3: push    ebx
0x608CB4: push    esi
0x608CB5: mov     esi, ecx
0x608CB7: mov     eax, [esi]
0x608CB9: mov     edx, [eax+154h]
0x608CBF: call    edx
0x608CC1: mov     ebx, eax
0x608CC3: test    ebx, ebx
0x608CC5: jz      loc_608D91
0x608CCB: fld1
0x608CCD: push    edi
0x608CCE: fabs
0x608CD0: mov     ecx, esi
0x608CD2: fstp    [esp+40h+var_34]
0x608CD6: fld     [esp+40h+var_34]
0x608CDA: fstp    dword ptr [ebx+60h]
0x608CDD: mov     eax, [esi]
0x608CDF: mov     edx, [eax+174h]
0x608CE5: call    edx
0x608CE7: mov     ecx, [eax]
0x608CE9: mov     [ebx+54h], ecx
0x608CEC: mov     edx, [eax+4]
0x608CEF: mov     [ebx+58h], edx
0x608CF2: mov     eax, [eax+8]
0x608CF5: mov     [ebx+5Ch], eax
0x608CF8: mov     edx, [esi+24h]
0x608CFB: mov     ecx, [esi+20h]
0x608CFE: mov     eax, [esi+28h]
0x608D01: sub     esp, 0Ch
0x608D04: mov     [esp+4Ch+var_2C], edx
0x608D08: fld     [esp+4Ch+var_2C]
0x608D0C: fstp    [esp+4Ch+var_44]; float
0x608D10: mov     [esp+4Ch+var_30], ecx
0x608D14: fld     [esp+4Ch+var_30]
0x608D18: mov     [esp+4Ch+var_28], eax
0x608D1C: fstp    [esp+4Ch+var_48]; float
0x608D20: lea     ecx, [esp+4Ch+var_24]
0x608D24: fld     [esp+4Ch+var_28]
0x608D28: fstp    [esp+4Ch+var_4C]; float
0x608D2B: call    sub_7117C0
0x608D30: lea     edi, [ebx+30h]
0x608D33: mov     ecx, 9
0x608D38: lea     esi, [esp+40h+var_24]
0x608D3C: push    ebx
0x608D3D: rep movsd
0x608D3F: call    sub_480340
0x608D44: add     esp, 4
0x608D47: test    eax, eax
0x608D49: pop     edi
0x608D4A: jz      short loc_608D88
0x608D4C: mov     ecx, [eax+10h]
0x608D4F: test    ecx, ecx
0x608D51: jz      short loc_608D64
0x608D53: mov     eax, [ecx+8]
0x608D56: test    eax, eax
0x608D58: jz      short loc_608D64
0x608D5A: add     eax, 14h
0x608D5D: jz      short loc_608D64
0x608D5F: mov     eax, [eax+1Ch]
0x608D62: jmp     short loc_608D66
0x608D64: xor     eax, eax
0x608D66: or      eax, 4000h
0x608D6B: test    ecx, ecx
0x608D6D: jz      short loc_608D7E
0x608D6F: mov     edx, [ecx+8]
0x608D72: test    edx, edx
0x608D74: jz      short loc_608D7E
0x608D76: add     edx, 14h
0x608D79: jz      short loc_608D7E
0x608D7B: mov     [edx+1Ch], eax
0x608D7E: mov     edx, [ecx]
0x608D80: mov     eax, [edx+80h]
0x608D86: call    eax
0x608D88: push    ebx
0x608D89: call    sub_481570
0x608D8E: add     esp, 4
0x608D91: pop     esi
0x608D92: pop     ebx
0x608D93: add     esp, 34h
0x608D96: retn
