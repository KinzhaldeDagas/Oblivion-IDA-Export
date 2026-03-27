0x728DB0: sub     esp, 1Ch
0x728DB3: push    edi
0x728DB4: mov     edi, ecx
0x728DB6: cmp     byte ptr [edi+3Ch], 0
0x728DBA: jz      loc_728E60
0x728DC0: push    ebx
0x728DC1: push    ebp
0x728DC2: xor     ebp, ebp
0x728DC4: push    esi
0x728DC5: mov     esi, [edi+34h]
0x728DC8: cmp     esi, ebp
0x728DCA: mov     [esp+2Ch+var_19], 0
0x728DCF: mov     [esp+2Ch+var_14], ebp
0x728DD3: mov     [esp+2Ch+var_C], ebp
0x728DD7: mov     [esp+2Ch+var_18], ebp
0x728DDB: jz      short loc_728E36
0x728DDD: mov     eax, [esi]
0x728DDF: mov     edx, [eax+4Ch]
0x728DE2: mov     ecx, esi
0x728DE4: call    edx
0x728DE6: test    al, al
0x728DE8: jz      short loc_728E36
0x728DEA: mov     ebx, [esi+2Ch]
0x728DED: test    bl, 2
0x728DF0: jz      short loc_728E5D
0x728DF2: lea     eax, [esp+2Ch+var_14]
0x728DF6: push    eax
0x728DF7: lea     ecx, [esp+30h+var_10]
0x728DFB: push    ecx
0x728DFC: lea     edx, [esp+34h+var_8]
0x728E00: push    edx
0x728E01: lea     eax, [esp+38h+var_C]
0x728E05: push    eax
0x728E06: mov     eax, ebx
0x728E08: and     al, 1
0x728E0A: neg     al
0x728E0C: lea     ecx, [esp+3Ch+var_4]
0x728E10: push    ecx
0x728E11: lea     edx, [esp+40h+var_18]
0x728E15: push    edx
0x728E16: mov     ecx, esi
0x728E18: mov     [esp+44h+var_10], ebp
0x728E1C: sbb     eax, eax
0x728E1E: and     eax, 2
0x728E21: add     eax, 2
0x728E24: push    eax
0x728E25: call    sub_726320
0x728E2A: test    bl, 20h
0x728E2D: jz      short loc_728E45
0x728E2F: mov     [esp+2Ch+var_19], 1
0x728E34: jmp     short loc_728E45
0x728E36: mov     ecx, [edi+24h]
0x728E39: mov     [esp+2Ch+var_18], ecx
0x728E3D: mov     [esp+2Ch+var_14], 10h
0x728E45: mov     eax, [esp+2Ch+arg_0]
0x728E49: mov     edx, [esp+2Ch+var_18]
0x728E4D: mov     ecx, [esp+2Ch+var_14]
0x728E51: mov     [eax], edx
0x728E53: mov     dl, [esp+2Ch+var_19]
0x728E57: mov     [eax+4], ecx
0x728E5A: mov     [eax+8], dl
0x728E5D: pop     esi
0x728E5E: pop     ebp
0x728E5F: pop     ebx
0x728E60: pop     edi
0x728E61: add     esp, 1Ch
0x728E64: retn    4
