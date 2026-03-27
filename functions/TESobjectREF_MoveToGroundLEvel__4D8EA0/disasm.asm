0x4D8EA0: sub     esp, 10h
0x4D8EA3: push    ebx
0x4D8EA4: push    esi
0x4D8EA5: mov     esi, ecx
0x4D8EA7: push    edi
0x4D8EA8: mov     edi, [esi+40h]
0x4D8EAB: xor     bl, bl
0x4D8EAD: test    edi, edi
0x4D8EAF: jz      short loc_4D8F15
0x4D8EB1: mov     eax, [esi]
0x4D8EB3: mov     edx, [eax+174h]
0x4D8EB9: call    edx
0x4D8EBB: mov     ecx, [eax]
0x4D8EBD: mov     [esp+1Ch+var_C], ecx
0x4D8EC1: mov     edx, [eax+4]
0x4D8EC4: mov     [esp+1Ch+var_8], edx
0x4D8EC8: mov     eax, [eax+8]
0x4D8ECB: lea     ecx, [esp+1Ch+var_10]
0x4D8ECF: push    ecx
0x4D8ED0: lea     edx, [esp+20h+var_C]
0x4D8ED4: push    edx
0x4D8ED5: mov     ecx, edi
0x4D8ED7: mov     [esp+24h+var_4], eax
0x4D8EDB: call    sub_4D1E10
0x4D8EE0: test    al, al
0x4D8EE2: jz      short loc_4D8F15
0x4D8EE4: fld     [esp+1Ch+var_10]
0x4D8EE8: mov     eax, [esp+1Ch+var_C]
0x4D8EEC: mov     ecx, [esp+1Ch+var_8]
0x4D8EF0: fstp    [esp+1Ch+var_4]
0x4D8EF4: mov     edx, [esp+1Ch+var_4]
0x4D8EF8: mov     [esi+2Ch], eax
0x4D8EFB: mov     eax, [esi]
0x4D8EFD: mov     [esi+30h], ecx
0x4D8F00: mov     [esi+34h], edx
0x4D8F03: mov     edx, [eax+40h]
0x4D8F06: push    4
0x4D8F08: mov     ecx, esi
0x4D8F0A: call    edx
0x4D8F0C: pop     edi
0x4D8F0D: pop     esi
0x4D8F0E: mov     al, 1
0x4D8F10: pop     ebx
0x4D8F11: add     esp, 10h
0x4D8F14: retn
0x4D8F15: pop     edi
0x4D8F16: pop     esi
0x4D8F17: mov     al, bl
0x4D8F19: pop     ebx
0x4D8F1A: add     esp, 10h
0x4D8F1D: retn
