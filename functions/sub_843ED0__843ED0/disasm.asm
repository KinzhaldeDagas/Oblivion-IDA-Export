0x843ED0: push    0FFFFFFFFh
0x843ED2: push    offset SEH_880560
0x843ED7: mov     eax, large fs:0
0x843EDD: push    eax
0x843EDE: push    ebx
0x843EDF: push    ebp
0x843EE0: push    esi
0x843EE1: push    edi
0x843EE2: mov     eax, ds:0B30AACh
0x843EE7: xor     eax, esp
0x843EE9: push    eax
0x843EEA: lea     eax, [esp+20h+var_C]
0x843EEE: mov     large fs:0, eax
0x843EF4: mov     esi, ecx
0x843EF6: mov     eax, [esp+20h+arg_8]
0x843EFA: mov     eax, [eax+10h]
0x843EFD: mov     edx, [esi]
0x843EFF: mov     edx, [edx+0BCh]
0x843F05: mov     edi, ds:0B459F8h
0x843F0B: push    eax
0x843F0C: mov     eax, [esp+24h+arg_0]
0x843F10: push    0
0x843F12: push    eax
0x843F13: call    edx
0x843F15: mov     ecx, [esp+20h+arg_C]
0x843F19: mov     eax, [edi+24h]
0x843F1C: mov     ebp, [eax]
0x843F1E: push    0
0x843F20: push    ecx
0x843F21: mov     ecx, esi
0x843F23: call    sub_848FD0
0x843F28: mov     ebx, [ebp+4]
0x843F2B: cmp     ebx, eax
0x843F2D: mov     [esp+20h+arg_8], eax
0x843F31: jz      short loc_843F68
0x843F33: test    ebx, ebx
0x843F35: jz      short loc_843F57
0x843F37: lea     edx, [ebx+4]
0x843F3A: push    edx; lpAddend
0x843F3B: call    dword ptr ds:0A2807Ch
0x843F41: test    eax, eax
0x843F43: jnz     short loc_843F53
0x843F45: test    ebx, ebx
0x843F47: jz      short loc_843F53
0x843F49: mov     eax, [ebx]
0x843F4B: mov     edx, [eax]
0x843F4D: push    1
0x843F4F: mov     ecx, ebx
0x843F51: call    edx
0x843F53: mov     eax, [esp+20h+arg_8]
0x843F57: test    eax, eax
0x843F59: mov     [ebp+4], eax
0x843F5C: jz      short loc_843F68
0x843F5E: add     eax, 4
0x843F61: push    eax; lpAddend
0x843F62: call    dword ptr ds:0A28078h
0x843F68: mov     eax, [esp+20h+arg_C]
0x843F6C: push    eax
0x843F6D: push    ebp
0x843F6E: mov     ecx, esi
0x843F70: call    sub_848FA0
0x843F75: mov     ebx, 1
0x843F7A: add     [edi+60h], ebx
0x843F7D: mov     [esp+20h+arg_C], edi
0x843F81: mov     edx, [esi+38h]
0x843F84: lea     ecx, [esp+20h+arg_C]
0x843F88: push    ecx
0x843F89: push    edx
0x843F8A: lea     ecx, [esi+40h]
0x843F8D: mov     [esp+28h+var_4], 0
0x843F95: call    sub_76CE40
0x843F9A: or      eax, 0FFFFFFFFh
0x843F9D: add     [edi+60h], eax
0x843FA0: mov     [esp+20h+var_4], eax
0x843FA4: jnz     short loc_843FAD
0x843FA6: mov     ecx, edi
0x843FA8: call    sub_7604D0
0x843FAD: add     [esi+38h], ebx
0x843FB0: mov     ecx, dword ptr [esp+20h+var_C]
0x843FB4: mov     large fs:0, ecx
0x843FBB: pop     ecx
0x843FBC: pop     edi
0x843FBD: pop     esi
0x843FBE: pop     ebp
0x843FBF: pop     ebx
0x843FC0: add     esp, 0Ch
0x843FC3: retn    10h
