0x743E50: push    esi
0x743E51: mov     esi, [esp+4+arg_0]
0x743E55: test    esi, esi
0x743E57: jz      loc_743F07
0x743E5D: mov     eax, [esi+1Ch]
0x743E60: test    eax, eax
0x743E62: jz      loc_743F07
0x743E68: push    edi
0x743E69: mov     edi, [eax+4]
0x743E6C: cmp     edi, 2Ah ; '*'
0x743E6F: jz      short loc_743E86
0x743E71: cmp     edi, 71h ; 'q'
0x743E74: jz      short loc_743E86
0x743E76: cmp     edi, 29Ah
0x743E7C: jz      short loc_743E86
0x743E7E: pop     edi
0x743E7F: mov     eax, 0FFFFFFFEh
0x743E84: pop     esi
0x743E85: retn
0x743E86: mov     eax, [eax+8]
0x743E89: test    eax, eax
0x743E8B: jz      short loc_743E9A
0x743E8D: mov     ecx, [esi+24h]
0x743E90: push    eax
0x743E91: mov     eax, [esi+28h]
0x743E94: push    eax
0x743E95: call    ecx
0x743E97: add     esp, 8
0x743E9A: mov     edx, [esi+1Ch]
0x743E9D: mov     eax, [edx+3Ch]
0x743EA0: test    eax, eax
0x743EA2: jz      short loc_743EB1
0x743EA4: mov     ecx, [esi+24h]
0x743EA7: push    eax
0x743EA8: mov     eax, [esi+28h]
0x743EAB: push    eax
0x743EAC: call    ecx
0x743EAE: add     esp, 8
0x743EB1: mov     edx, [esi+1Ch]
0x743EB4: mov     eax, [edx+38h]
0x743EB7: test    eax, eax
0x743EB9: jz      short loc_743EC8
0x743EBB: mov     ecx, [esi+24h]
0x743EBE: push    eax
0x743EBF: mov     eax, [esi+28h]
0x743EC2: push    eax
0x743EC3: call    ecx
0x743EC5: add     esp, 8
0x743EC8: mov     edx, [esi+1Ch]
0x743ECB: mov     eax, [edx+30h]
0x743ECE: test    eax, eax
0x743ED0: jz      short loc_743EDF
0x743ED2: mov     ecx, [esi+24h]
0x743ED5: push    eax
0x743ED6: mov     eax, [esi+28h]
0x743ED9: push    eax
0x743EDA: call    ecx
0x743EDC: add     esp, 8
0x743EDF: mov     edx, [esi+1Ch]
0x743EE2: mov     eax, [esi+28h]
0x743EE5: mov     ecx, [esi+24h]
0x743EE8: push    edx
0x743EE9: push    eax
0x743EEA: call    ecx
0x743EEC: add     esp, 8
0x743EEF: xor     eax, eax
0x743EF1: cmp     edi, 71h ; 'q'
0x743EF4: setnz   al
0x743EF7: pop     edi
0x743EF8: mov     dword ptr [esi+1Ch], 0
0x743EFF: pop     esi
0x743F00: sub     eax, 1
0x743F03: and     eax, 0FFFFFFFDh
0x743F06: retn
0x743F07: mov     eax, 0FFFFFFFEh
0x743F0C: pop     esi
0x743F0D: retn
