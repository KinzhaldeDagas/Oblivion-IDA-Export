0x534F40: push    ebx
0x534F41: mov     ebx, [esp+4+arg_10]
0x534F45: push    ebp
0x534F46: mov     ebp, [esp+8+FullPath]
0x534F4A: push    esi
0x534F4B: push    edi
0x534F4C: mov     edi, [esp+10h+arg_4]
0x534F50: cmp     edi, 0FFFFFFFFh
0x534F53: mov     esi, ecx
0x534F55: jnz     short loc_534F62
0x534F57: push    ebx; int
0x534F58: push    ebp; FullPath
0x534F59: call    sub_534D70
0x534F5E: test    al, al
0x534F60: jmp     short loc_534F74
0x534F62: mov     eax, [esi]
0x534F64: mov     edx, [eax+10h]
0x534F67: push    edi
0x534F68: lea     ecx, [esp+14h+arg_4]
0x534F6C: push    ecx
0x534F6D: mov     ecx, esi
0x534F6F: call    edx
0x534F71: cmp     byte ptr [eax], 0
0x534F74: jz      short loc_534FF3
0x534F76: mov     eax, [esp+10h+arg_0]
0x534F7A: cmp     eax, 3; switch 4 cases
0x534F7D: ja      short def_534F7F
0x534F7F: jmp     ds:jpt_534F7F[eax*4]; switch jump
0x534F86: mov     ecx, [esp+10h+arg_8]; jumptable 00534F7F case 0
0x534F8A: mov     eax, [esi]
0x534F8C: mov     edx, [eax+30h]
0x534F8F: push    ebx
0x534F90: push    ebp
0x534F91: push    ecx
0x534F92: push    edi
0x534F93: push    offset aReport; "Report"
0x534F98: mov     ecx, esi
0x534F9A: call    edx
0x534F9C: pop     edi
0x534F9D: pop     esi
0x534F9E: pop     ebp
0x534F9F: pop     ebx
0x534FA0: retn    14h
0x534FA3: mov     ecx, [esp+10h+arg_8]; jumptable 00534F7F case 1
0x534FA7: mov     eax, [esi]
0x534FA9: mov     edx, [eax+30h]
0x534FAC: push    ebx
0x534FAD: push    ebp
0x534FAE: push    ecx
0x534FAF: push    edi
0x534FB0: push    offset aWarning; "Warning"
0x534FB5: mov     ecx, esi
0x534FB7: call    edx
0x534FB9: pop     edi
0x534FBA: pop     esi
0x534FBB: pop     ebp
0x534FBC: pop     ebx
0x534FBD: retn    14h
0x534FC0: mov     ecx, [esp+10h+arg_8]; jumptable 00534F7F cases 2,3
0x534FC4: mov     eax, [esi]
0x534FC6: mov     edx, [eax+28h]
0x534FC9: push    ebx
0x534FCA: push    ebp
0x534FCB: push    ecx
0x534FCC: push    edi
0x534FCD: push    offset aAssert; "Assert"
0x534FD2: mov     ecx, esi
0x534FD4: call    edx
0x534FD6: pop     edi
0x534FD7: pop     esi
0x534FD8: pop     ebp
0x534FD9: pop     ebx
0x534FDA: retn    14h
