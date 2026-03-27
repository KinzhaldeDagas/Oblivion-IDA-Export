0x881E80: push    0FFFFFFFFh
0x881E82: push    offset SEH_882120
0x881E87: mov     eax, large fs:0
0x881E8D: push    eax
0x881E8E: push    ebx
0x881E8F: push    ebp
0x881E90: push    esi
0x881E91: push    edi
0x881E92: mov     eax, ds:0B30AACh
0x881E97: xor     eax, esp
0x881E99: push    eax
0x881E9A: lea     eax, [esp+20h+var_C]
0x881E9E: mov     large fs:0, eax
0x881EA4: mov     esi, ecx
0x881EA6: mov     ebx, [esp+20h+arg_8]
0x881EAA: mov     eax, [ebx+10h]
0x881EAD: mov     edi, ds:0B47758h
0x881EB3: push    eax
0x881EB4: call    sub_848C40
0x881EB9: mov     ebx, [ebx+0Ch]
0x881EBC: push    ebx
0x881EBD: mov     ecx, esi
0x881EBF: call    sub_848E50
0x881EC4: mov     ecx, [esp+20h+arg_0]
0x881EC8: mov     eax, [esi]
0x881ECA: mov     edx, [eax+0BCh]
0x881ED0: push    0
0x881ED2: push    ebx
0x881ED3: push    ecx
0x881ED4: mov     ecx, esi
0x881ED6: call    edx
0x881ED8: mov     eax, [edi+24h]
0x881EDB: mov     ecx, [esp+20h+arg_C]
0x881EDF: mov     ebx, [eax]
0x881EE1: push    0
0x881EE3: push    ecx
0x881EE4: mov     ecx, esi
0x881EE6: mov     [esp+28h+arg_8], ebx
0x881EEA: call    sub_848FD0
0x881EEF: mov     ebx, [ebx+4]
0x881EF2: mov     ebp, eax
0x881EF4: cmp     ebx, ebp
0x881EF6: jz      short loc_881F2D
0x881EF8: test    ebx, ebx
0x881EFA: jz      short loc_881F18
0x881EFC: lea     edx, [ebx+4]
0x881EFF: push    edx; lpAddend
0x881F00: call    dword ptr ds:0A2807Ch
0x881F06: test    eax, eax
0x881F08: jnz     short loc_881F18
0x881F0A: test    ebx, ebx
0x881F0C: jz      short loc_881F18
0x881F0E: mov     eax, [ebx]
0x881F10: mov     edx, [eax]
0x881F12: push    1
0x881F14: mov     ecx, ebx
0x881F16: call    edx
0x881F18: test    ebp, ebp
0x881F1A: mov     eax, [esp+20h+arg_8]
0x881F1E: mov     [eax+4], ebp
0x881F21: jz      short loc_881F2D
0x881F23: add     ebp, 4
0x881F26: push    ebp; lpAddend
0x881F27: call    dword ptr ds:0A28078h
0x881F2D: mov     ecx, [edi+24h]
0x881F30: mov     ebp, [ecx+0Ch]
0x881F33: mov     eax, ds:0B43110h
0x881F38: mov     ebx, [ebp+4]
0x881F3B: cmp     ebx, eax
0x881F3D: mov     ecx, eax
0x881F3F: mov     [esp+20h+arg_8], ecx
0x881F43: jz      short loc_881F7A
0x881F45: test    ebx, ebx
0x881F47: jz      short loc_881F69
0x881F49: lea     edx, [ebx+4]
0x881F4C: push    edx; lpAddend
0x881F4D: call    dword ptr ds:0A2807Ch
0x881F53: test    eax, eax
0x881F55: jnz     short loc_881F65
0x881F57: test    ebx, ebx
0x881F59: jz      short loc_881F65
0x881F5B: mov     eax, [ebx]
0x881F5D: mov     edx, [eax]
0x881F5F: push    1
0x881F61: mov     ecx, ebx
0x881F63: call    edx
0x881F65: mov     ecx, [esp+20h+arg_8]
0x881F69: test    ecx, ecx
0x881F6B: mov     [ebp+4], ecx
0x881F6E: jz      short loc_881F7A
0x881F70: add     ecx, 4
0x881F73: push    ecx; lpAddend
0x881F74: call    dword ptr ds:0A28078h
0x881F7A: mov     ebx, 1
0x881F7F: add     [edi+60h], ebx
0x881F82: mov     [esp+20h+arg_8], edi
0x881F86: mov     ecx, [esi+38h]
0x881F89: lea     eax, [esp+20h+arg_8]
0x881F8D: push    eax
0x881F8E: push    ecx
0x881F8F: lea     ecx, [esi+40h]
0x881F92: mov     [esp+28h+var_4], 0
0x881F9A: call    sub_76CE40
0x881F9F: or      eax, 0FFFFFFFFh
0x881FA2: add     [edi+60h], eax
0x881FA5: mov     [esp+20h+var_4], eax
0x881FA9: jnz     short loc_881FB2
0x881FAB: mov     ecx, edi
0x881FAD: call    sub_7604D0
0x881FB2: add     [esi+38h], ebx
0x881FB5: mov     ecx, dword ptr [esp+20h+var_C]
0x881FB9: mov     large fs:0, ecx
0x881FC0: pop     ecx
0x881FC1: pop     edi
0x881FC2: pop     esi
0x881FC3: pop     ebp
0x881FC4: pop     ebx
0x881FC5: add     esp, 0Ch
0x881FC8: retn    10h
