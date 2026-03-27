0x756F50: push    esi
0x756F51: push    edi
0x756F52: mov     edi, [esp+8+arg_0]
0x756F56: push    edi
0x756F57: mov     esi, ecx
0x756F59: call    sub_752E40
0x756F5E: mov     eax, [edi+220h]
0x756F64: push    1
0x756F66: lea     ecx, [esp+0Ch+arg_0]
0x756F6A: push    ecx
0x756F6B: push    4
0x756F6D: lea     edx, [esi+18h]
0x756F70: push    edx
0x756F71: push    eax
0x756F72: mov     eax, [eax+8]
0x756F75: mov     [esp+1Ch+arg_0], 4
0x756F7D: call    eax
0x756F7F: mov     eax, [edi+220h]
0x756F85: push    1
0x756F87: lea     ecx, [esp+20h+arg_0]
0x756F8B: push    ecx
0x756F8C: push    2
0x756F8E: lea     edx, [esi+1Ch]
0x756F91: push    edx
0x756F92: push    eax
0x756F93: mov     eax, [eax+8]
0x756F96: mov     [esp+30h+arg_0], 2
0x756F9E: call    eax
0x756FA0: mov     eax, [edi+220h]
0x756FA6: push    1
0x756FA8: lea     ecx, [esp+34h+arg_0]
0x756FAC: push    ecx
0x756FAD: push    4
0x756FAF: lea     edx, [esi+20h]
0x756FB2: push    edx
0x756FB3: push    eax
0x756FB4: mov     eax, [eax+8]
0x756FB7: mov     [esp+44h+arg_0], 4
0x756FBF: call    eax
0x756FC1: mov     edi, [edi+220h]
0x756FC7: mov     edx, [edi+8]
0x756FCA: push    1
0x756FCC: lea     ecx, [esp+48h+arg_0]
0x756FD0: push    ecx
0x756FD1: push    2
0x756FD3: add     esi, 24h ; '$'
0x756FD6: push    esi
0x756FD7: push    edi
0x756FD8: mov     [esp+58h+arg_0], 2
0x756FE0: call    edx
0x756FE2: add     esp, 50h
0x756FE5: pop     edi
0x756FE6: pop     esi
0x756FE7: retn    4
