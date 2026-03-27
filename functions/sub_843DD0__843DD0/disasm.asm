0x843DD0: push    0FFFFFFFFh
0x843DD2: push    offset SEH_880560
0x843DD7: mov     eax, large fs:0
0x843DDD: push    eax
0x843DDE: push    ebx
0x843DDF: push    ebp
0x843DE0: push    esi
0x843DE1: push    edi
0x843DE2: mov     eax, ds:0B30AACh
0x843DE7: xor     eax, esp
0x843DE9: push    eax
0x843DEA: lea     eax, [esp+20h+var_C]
0x843DEE: mov     large fs:0, eax
0x843DF4: mov     esi, ecx
0x843DF6: mov     eax, [esp+20h+arg_8]
0x843DFA: mov     eax, [eax+10h]
0x843DFD: mov     edx, [esi]
0x843DFF: mov     edx, [edx+0BCh]
0x843E05: mov     edi, ds:0B459F4h
0x843E0B: push    eax
0x843E0C: mov     eax, [esp+24h+arg_0]
0x843E10: push    0
0x843E12: push    eax
0x843E13: call    edx
0x843E15: mov     ecx, [esp+20h+arg_C]
0x843E19: mov     eax, [edi+24h]
0x843E1C: mov     ebp, [eax]
0x843E1E: push    0
0x843E20: push    ecx
0x843E21: mov     ecx, esi
0x843E23: call    sub_848FD0
0x843E28: mov     ebx, [ebp+4]
0x843E2B: cmp     ebx, eax
0x843E2D: mov     [esp+20h+arg_8], eax
0x843E31: jz      short loc_843E68
0x843E33: test    ebx, ebx
0x843E35: jz      short loc_843E57
0x843E37: lea     edx, [ebx+4]
0x843E3A: push    edx; lpAddend
0x843E3B: call    dword ptr ds:0A2807Ch
0x843E41: test    eax, eax
0x843E43: jnz     short loc_843E53
0x843E45: test    ebx, ebx
0x843E47: jz      short loc_843E53
0x843E49: mov     eax, [ebx]
0x843E4B: mov     edx, [eax]
0x843E4D: push    1
0x843E4F: mov     ecx, ebx
0x843E51: call    edx
0x843E53: mov     eax, [esp+20h+arg_8]
0x843E57: test    eax, eax
0x843E59: mov     [ebp+4], eax
0x843E5C: jz      short loc_843E68
0x843E5E: add     eax, 4
0x843E61: push    eax; lpAddend
0x843E62: call    dword ptr ds:0A28078h
0x843E68: mov     eax, [esp+20h+arg_C]
0x843E6C: push    eax
0x843E6D: push    ebp
0x843E6E: mov     ecx, esi
0x843E70: call    sub_848FA0
0x843E75: mov     ebx, 1
0x843E7A: add     [edi+60h], ebx
0x843E7D: mov     [esp+20h+arg_C], edi
0x843E81: mov     edx, [esi+38h]
0x843E84: lea     ecx, [esp+20h+arg_C]
0x843E88: push    ecx
0x843E89: push    edx
0x843E8A: lea     ecx, [esi+40h]
0x843E8D: mov     [esp+28h+var_4], 0
0x843E95: call    sub_76CE40
0x843E9A: or      eax, 0FFFFFFFFh
0x843E9D: add     [edi+60h], eax
0x843EA0: mov     [esp+20h+var_4], eax
0x843EA4: jnz     short loc_843EAD
0x843EA6: mov     ecx, edi
0x843EA8: call    sub_7604D0
0x843EAD: add     [esi+38h], ebx
0x843EB0: mov     ecx, dword ptr [esp+20h+var_C]
0x843EB4: mov     large fs:0, ecx
0x843EBB: pop     ecx
0x843EBC: pop     edi
0x843EBD: pop     esi
0x843EBE: pop     ebp
0x843EBF: pop     ebx
0x843EC0: add     esp, 0Ch
0x843EC3: retn    10h
