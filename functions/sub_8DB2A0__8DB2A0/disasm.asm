0x8DB2A0: sub     esp, 28h
0x8DB2A3: mov     eax, [esp+28h+arg_18]
0x8DB2A7: mov     edx, [esp+28h+arg_4]
0x8DB2AB: push    ebx
0x8DB2AC: push    esi
0x8DB2AD: mov     esi, ecx
0x8DB2AF: mov     ecx, [esp+30h+arg_0]
0x8DB2B3: mov     [esp+30h+var_28], ecx
0x8DB2B7: mov     ecx, [esp+30h+arg_C]
0x8DB2BB: xor     ebx, ebx
0x8DB2BD: mov     [esp+30h+var_24], edx
0x8DB2C1: mov     edx, [esp+30h+arg_14]
0x8DB2C5: mov     [esp+30h+var_18], ecx
0x8DB2C9: mov     [eax+4], bx
0x8DB2CD: mov     [eax+6], bl
0x8DB2D0: mov     byte ptr [eax+7], 1
0x8DB2D4: lea     ecx, [esp+30h+var_28]
0x8DB2D8: mov     [esp+30h+var_10], edx
0x8DB2DC: mov     edx, [esi+8]
0x8DB2DF: mov     [esp+30h+var_14], eax
0x8DB2E3: mov     eax, [esp+30h+arg_10]
0x8DB2E7: push    ecx
0x8DB2E8: push    edx
0x8DB2E9: mov     [esp+38h+var_20], ebx
0x8DB2ED: mov     [esp+38h+var_8], esi
0x8DB2F1: mov     [esp+38h+var_C], ebx
0x8DB2F5: mov     [esp+38h+var_4], eax
0x8DB2F9: call    sub_8DC800
0x8DB2FE: mov     eax, [esi+0Ch]
0x8DB301: mov     ecx, [eax+98h]
0x8DB307: add     esp, 8
0x8DB30A: cmp     ecx, ebx
0x8DB30C: jz      short loc_8DB31C
0x8DB30E: lea     ecx, [esp+30h+var_28]
0x8DB312: push    ecx
0x8DB313: push    eax
0x8DB314: call    sub_8DBF80
0x8DB319: add     esp, 8
0x8DB31C: mov     esi, [esi+10h]
0x8DB31F: cmp     [esi+98h], ebx
0x8DB325: jz      short loc_8DB335
0x8DB327: lea     edx, [esp+30h+var_28]
0x8DB32B: push    edx
0x8DB32C: push    esi
0x8DB32D: call    sub_8DBF80
0x8DB332: add     esp, 8
0x8DB335: mov     eax, [esp+30h+var_C]
0x8DB339: pop     esi
0x8DB33A: pop     ebx
0x8DB33B: add     esp, 28h
0x8DB33E: retn    1Ch
