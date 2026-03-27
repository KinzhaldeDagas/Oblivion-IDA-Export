0x978F80: sub     esp, 40h
0x978F83: mov     edx, [esp+40h+arg_C]
0x978F87: push    esi
0x978F88: mov     esi, ecx
0x978F8A: mov     ecx, [esp+44h+arg_8]
0x978F8E: push    edi
0x978F8F: mov     edi, [esp+48h+arg_0]
0x978F93: xor     eax, eax
0x978F95: mov     [esp+48h+var_3C], ecx
0x978F99: lea     ecx, [esp+48h+var_2C]
0x978F9D: push    ecx
0x978F9E: mov     [esp+4Ch+var_38], edx
0x978FA2: mov     [esp+4Ch+var_8], eax
0x978FA6: mov     [esp+4Ch+var_4], eax
0x978FAA: mov     eax, [esp+4Ch+arg_4]
0x978FAE: lea     edx, [esp+4Ch+var_30]
0x978FB2: push    edx
0x978FB3: mov     [esp+50h+var_40], eax
0x978FB7: mov     eax, [esp+50h+arg_10]
0x978FBB: push    edi
0x978FBC: push    esi
0x978FBD: mov     [esp+58h+var_34], eax
0x978FC1: call    sub_978D60
0x978FC6: add     esp, 10h
0x978FC9: test    eax, eax
0x978FCB: jz      short loc_979020
0x978FCD: mov     eax, [esp+48h+arg_14]
0x978FD1: mov     byte ptr [eax], 1
0x978FD4: lea     ecx, [esi+8Ch]
0x978FDA: mov     [esp+48h+var_8], ecx
0x978FDE: lea     eax, [esp+48h+var_20]
0x978FE2: push    eax
0x978FE3: lea     ecx, [esp+4Ch+var_2C]
0x978FE7: lea     edx, [edi+8Ch]
0x978FED: push    ecx
0x978FEE: lea     ecx, [esi+4]
0x978FF1: mov     [esp+50h+var_4], edx
0x978FF5: call    sub_980240
0x978FFA: lea     edx, [esp+48h+var_14]
0x978FFE: push    edx
0x978FFF: lea     eax, [esp+4Ch+var_2C]
0x979003: push    eax
0x979004: lea     ecx, [edi+4]
0x979007: call    sub_980240
0x97900C: lea     ecx, [esp+48h+var_40]
0x979010: push    ecx
0x979011: mov     ecx, esi
0x979013: call    sub_97A470
0x979018: pop     edi
0x979019: pop     esi
0x97901A: add     esp, 40h
0x97901D: retn    18h
0x979020: pop     edi
0x979021: xor     eax, eax
0x979023: pop     esi
0x979024: add     esp, 40h
0x979027: retn    18h
