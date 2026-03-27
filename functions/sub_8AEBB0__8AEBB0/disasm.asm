0x8AEBB0: fld     [esp+arg_C]
0x8AEBB4: push    ebx
0x8AEBB5: fmul    dword ptr ds:0A40098h
0x8AEBBB: push    ecx
0x8AEBBC: fstp    [esp+8+var_8]
0x8AEBBF: call    sub_8ECB30
0x8AEBC4: fld     [esp+8+arg_0]
0x8AEBC8: mov     bl, al
0x8AEBCA: fmul    dword ptr ds:0A40098h
0x8AEBD0: fstp    [esp+8+var_8]
0x8AEBD3: call    sub_8ECB30
0x8AEBD8: fld     [esp+8+arg_4]
0x8AEBDC: mov     byte ptr [esp+8+arg_C], al
0x8AEBE0: fmul    dword ptr ds:0A40098h
0x8AEBE6: fstp    [esp+8+var_8]
0x8AEBE9: call    sub_8ECB30
0x8AEBEE: fld     [esp+8+arg_8]
0x8AEBF2: mov     byte ptr [esp+8+arg_0], al
0x8AEBF6: fmul    dword ptr ds:0A40098h
0x8AEBFC: fstp    [esp+8+var_8]
0x8AEBFF: call    sub_8ECB30
0x8AEC04: movzx   edx, byte ptr [esp+8+arg_C]
0x8AEC09: movzx   ecx, bl
0x8AEC0C: shl     ecx, 8
0x8AEC0F: add     ecx, edx
0x8AEC11: movzx   edx, byte ptr [esp+8+arg_0]
0x8AEC16: shl     ecx, 8
0x8AEC19: movzx   eax, al
0x8AEC1C: add     ecx, edx
0x8AEC1E: add     esp, 4
0x8AEC21: shl     ecx, 8
0x8AEC24: add     eax, ecx
0x8AEC26: pop     ebx
0x8AEC27: retn
