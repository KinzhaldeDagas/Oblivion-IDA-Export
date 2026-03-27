0x728E70: sub     esp, 18h
0x728E73: push    ebx
0x728E74: push    edi
0x728E75: mov     edi, ecx
0x728E77: xor     ebx, ebx
0x728E79: cmp     [edi+3Ch], bl
0x728E7C: jz      loc_728F18
0x728E82: push    esi
0x728E83: mov     esi, [edi+34h]
0x728E86: cmp     esi, ebx
0x728E88: mov     [esp+24h+var_18], ebx
0x728E8C: mov     [esp+24h+var_C], ebx
0x728E90: mov     [esp+24h+var_14], ebx
0x728E94: jz      short loc_728F03
0x728E96: mov     eax, [esi]
0x728E98: mov     edx, [eax+4Ch]
0x728E9B: mov     ecx, esi
0x728E9D: call    edx
0x728E9F: test    al, al
0x728EA1: jz      short loc_728F03
0x728EA3: mov     eax, [esi+2Ch]
0x728EA6: lea     ecx, [esp+24h+var_18]
0x728EAA: push    ecx
0x728EAB: lea     edx, [esp+28h+var_10]
0x728EAF: push    edx
0x728EB0: lea     ecx, [esp+2Ch+var_8]
0x728EB4: push    ecx
0x728EB5: lea     edx, [esp+30h+var_C]
0x728EB9: push    edx
0x728EBA: lea     ecx, [esp+34h+var_4]
0x728EBE: push    ecx
0x728EBF: mov     ecx, eax
0x728EC1: and     cl, 1
0x728EC4: neg     cl
0x728EC6: lea     edx, [esp+38h+var_14]
0x728ECA: push    edx
0x728ECB: mov     [esp+3Ch+var_10], ebx
0x728ECF: sbb     ecx, ecx
0x728ED1: and     ecx, 2
0x728ED4: shr     eax, 1
0x728ED6: add     ecx, 2
0x728ED9: and     eax, 1
0x728EDC: add     ecx, eax
0x728EDE: push    ecx
0x728EDF: mov     ecx, esi
0x728EE1: call    sub_726320
0x728EE6: mov     eax, [esp+24h+arg_4]
0x728EEA: mov     edi, [esp+24h+var_14]
0x728EEE: mov     ecx, [esp+24h+var_18]
0x728EF2: pop     esi
0x728EF3: mov     [eax], edi
0x728EF5: pop     edi
0x728EF6: mov     [eax+8], bl
0x728EF9: mov     [eax+4], ecx
0x728EFC: pop     ebx
0x728EFD: add     esp, 18h
0x728F00: retn    8
0x728F03: mov     edi, [edi+28h]
0x728F06: mov     eax, [esp+24h+arg_4]
0x728F0A: mov     ecx, 8
0x728F0F: mov     [eax], edi
0x728F11: mov     [eax+4], ecx
0x728F14: mov     [eax+8], bl
0x728F17: pop     esi
0x728F18: pop     edi
0x728F19: pop     ebx
0x728F1A: add     esp, 18h
0x728F1D: retn    8
