0x744D90: mov     eax, [esp+arg_18]
0x744D94: xor     ecx, ecx
0x744D96: cmp     eax, ecx
0x744D98: push    ebp
0x744D99: mov     ebp, 1
0x744D9E: jz      loc_744F9E
0x744DA4: cmp     byte ptr [eax], 31h ; '1'
0x744DA7: jnz     loc_744F9E
0x744DAD: cmp     [esp+4+arg_1C], 38h ; '8'
0x744DB2: jnz     loc_744F9E
0x744DB8: push    edi
0x744DB9: mov     edi, [esp+8+arg_0]
0x744DBD: cmp     edi, ecx
0x744DBF: jnz     short loc_744DC9
0x744DC1: pop     edi
0x744DC2: mov     eax, 0FFFFFFFEh
0x744DC7: pop     ebp
0x744DC8: retn
0x744DC9: cmp     [edi+20h], ecx
0x744DCC: mov     [edi+18h], ecx
0x744DCF: jnz     short loc_744DDB
0x744DD1: mov     dword ptr [edi+20h], offset sub_744FE0
0x744DD8: mov     [edi+28h], ecx
0x744DDB: cmp     [edi+24h], ecx
0x744DDE: jnz     short loc_744DE7
0x744DE0: mov     dword ptr [edi+24h], offset sub_745000
0x744DE7: cmp     [esp+8+arg_4], 0FFFFFFFFh
0x744DEC: jnz     short loc_744DF6
0x744DEE: mov     [esp+8+arg_4], 6
0x744DF6: push    ebx
0x744DF7: mov     ebx, [esp+0Ch+arg_C]
0x744DFB: cmp     ebx, ecx
0x744DFD: jge     short loc_744E05
0x744DFF: xor     ebp, ebp
0x744E01: neg     ebx
0x744E03: jmp     short loc_744E12
0x744E05: cmp     ebx, 0Fh
0x744E08: jle     short loc_744E12
0x744E0A: mov     ebp, 2
0x744E0F: sub     ebx, 10h
0x744E12: mov     eax, [esp+0Ch+arg_10]
0x744E16: add     eax, 0FFFFFFFFh
0x744E19: cmp     eax, 8
0x744E1C: ja      loc_744F95
0x744E22: cmp     [esp+0Ch+arg_8], 8
0x744E27: jnz     loc_744F95
0x744E2D: lea     ecx, [ebx-8]
0x744E30: cmp     ecx, 7
0x744E33: ja      loc_744F95
0x744E39: cmp     [esp+0Ch+arg_4], 9
0x744E3E: ja      loc_744F95
0x744E44: cmp     [esp+0Ch+arg_14], 3
0x744E49: ja      loc_744F95
0x744E4F: cmp     ebx, 8
0x744E52: jnz     short loc_744E59
0x744E54: mov     ebx, 9
0x744E59: mov     edx, [edi+28h]
0x744E5C: mov     eax, [edi+20h]
0x744E5F: push    esi
0x744E60: push    16B8h
0x744E65: push    1
0x744E67: push    edx
0x744E68: call    eax
0x744E6A: mov     esi, eax
0x744E6C: add     esp, 0Ch
0x744E6F: test    esi, esi
0x744E71: jz      loc_744F8B
0x744E77: mov     [edi+1Ch], esi
0x744E7A: mov     [esi+18h], ebp
0x744E7D: mov     ecx, ebx
0x744E7F: mov     ebp, 1
0x744E84: shl     ebp, cl
0x744E86: mov     [esi+28h], ebx
0x744E89: mov     ebx, [esp+10h+arg_10]
0x744E8D: mov     eax, 1
0x744E92: lea     ecx, [ebp-1]
0x744E95: mov     [esi+2Ch], ecx
0x744E98: lea     ecx, [ebx+7]
0x744E9B: shl     eax, cl
0x744E9D: mov     [esi+48h], ecx
0x744EA0: add     ecx, 2
0x744EA3: mov     [esi], edi
0x744EA5: mov     [esi+44h], eax
0x744EA8: add     eax, 0FFFFFFFFh
0x744EAB: mov     [esi+4Ch], eax
0x744EAE: mov     eax, 0AAAAAAABh
0x744EB3: mul     ecx
0x744EB5: shr     edx, 1
0x744EB7: mov     [esi+24h], ebp
0x744EBA: mov     [esi+50h], edx
0x744EBD: mov     edx, [edi+28h]
0x744EC0: mov     eax, [edi+20h]
0x744EC3: push    2
0x744EC5: push    ebp
0x744EC6: push    edx
0x744EC7: call    eax
0x744EC9: mov     ecx, [esi+24h]
0x744ECC: mov     [esi+30h], eax
0x744ECF: mov     edx, [edi+28h]
0x744ED2: mov     eax, [edi+20h]
0x744ED5: push    2
0x744ED7: push    ecx
0x744ED8: push    edx
0x744ED9: call    eax
0x744EDB: mov     ecx, [esi+44h]
0x744EDE: mov     [esi+38h], eax
0x744EE1: mov     edx, [edi+28h]
0x744EE4: mov     eax, [edi+20h]
0x744EE7: push    2
0x744EE9: push    ecx
0x744EEA: push    edx
0x744EEB: call    eax
0x744EED: mov     [esi+3Ch], eax
0x744EF0: lea     ecx, [ebx+6]
0x744EF3: mov     eax, 1
0x744EF8: shl     eax, cl
0x744EFA: push    4
0x744EFC: mov     [esi+1694h], eax
0x744F02: mov     ecx, [edi+28h]
0x744F05: mov     edx, [edi+20h]
0x744F08: push    eax
0x744F09: push    ecx
0x744F0A: call    edx
0x744F0C: mov     ecx, [esi+1694h]
0x744F12: add     esp, 30h
0x744F15: cmp     dword ptr [esi+30h], 0
0x744F19: lea     edx, ds:0[ecx*4]
0x744F20: mov     [esi+8], eax
0x744F23: mov     [esi+0Ch], edx
0x744F26: jz      short loc_744F73
0x744F28: cmp     dword ptr [esi+38h], 0
0x744F2C: jz      short loc_744F73
0x744F2E: cmp     dword ptr [esi+3Ch], 0
0x744F32: jz      short loc_744F73
0x744F34: test    eax, eax
0x744F36: jz      short loc_744F73
0x744F38: mov     edx, ecx
0x744F3A: shr     edx, 1
0x744F3C: lea     edx, [eax+edx*2]
0x744F3F: lea     eax, [eax+ecx*2]
0x744F42: add     eax, ecx
0x744F44: mov     ecx, [esp+10h+arg_4]
0x744F48: mov     [esi+169Ch], edx
0x744F4E: mov     edx, [esp+10h+arg_14]
0x744F52: push    edi
0x744F53: mov     [esi+1690h], eax
0x744F59: mov     [esi+7Ch], ecx
0x744F5C: mov     [esi+80h], edx
0x744F62: mov     byte ptr [esi+1Dh], 8
0x744F66: call    sub_744D00
0x744F6B: add     esp, 4
0x744F6E: pop     esi
0x744F6F: pop     ebx
0x744F70: pop     edi
0x744F71: pop     ebp
0x744F72: retn
0x744F73: mov     dword ptr [esi+4], 29Ah
0x744F7A: mov     eax, ds:0A82848h
0x744F7F: push    edi
0x744F80: mov     [edi+18h], eax
0x744F83: call    sub_743E50
0x744F88: add     esp, 4
0x744F8B: pop     esi
0x744F8C: pop     ebx
0x744F8D: pop     edi
0x744F8E: mov     eax, 0FFFFFFFCh
0x744F93: pop     ebp
0x744F94: retn
0x744F95: pop     ebx
0x744F96: pop     edi
0x744F97: mov     eax, 0FFFFFFFEh
0x744F9C: pop     ebp
0x744F9D: retn
0x744F9E: mov     eax, 0FFFFFFFAh
0x744FA3: pop     ebp
0x744FA4: retn
