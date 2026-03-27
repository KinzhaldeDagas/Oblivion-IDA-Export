0x901FF0: push    ebp
0x901FF1: mov     ebp, esp
0x901FF3: and     esp, 0FFFFFFF0h
0x901FF6: sub     esp, 84h
0x901FFC: push    ebx
0x901FFD: mov     ebx, [ebp+arg_0]
0x902000: push    esi
0x902001: push    edi
0x902002: mov     edi, [ebp+arg_4]
0x902005: mov     eax, [edi+8]
0x902008: mov     esi, ecx
0x90200A: mov     ecx, ds:0B2FFE4h
0x902010: mov     [esp+90h+var_78], eax
0x902014: mov     eax, [edi]
0x902016: mov     [esp+90h+var_64], ecx
0x90201A: mov     [esp+90h+var_74], edi
0x90201E: mov     [esp+90h+var_6A], 1
0x902025: mov     [esp+90h+var_68], 0
0x90202D: mov     [esp+90h+var_70], offset off_A9BB94
0x902035: mov     ecx, [eax+10h]
0x902038: mov     edx, [ecx]
0x90203A: fld     dword ptr [edx+0Ch]
0x90203D: mov     edx, [edi+4]
0x902040: mov     [esp+90h+var_60], ecx
0x902044: mov     eax, [eax+14h]
0x902047: fstp    [esp+90h+var_64]
0x90204B: mov     [esp+90h+var_5C], eax
0x90204F: mov     eax, [ebp+arg_C]
0x902052: lea     ecx, [esp+90h+var_70]
0x902056: mov     [esp+90h+var_80], ecx
0x90205A: push    eax
0x90205B: lea     ecx, [esp+94h+var_80]
0x90205F: push    ecx
0x902060: push    ebx
0x902061: mov     ecx, esi
0x902063: mov     [esp+9Ch+var_7C], edx
0x902067: call    sub_9393B0
0x90206C: mov     edx, [ebp+arg_8]
0x90206F: mov     dword ptr [esi], offset off_A9BBC8
0x902075: mov     eax, [edx]
0x902077: mov     [esi+80h], eax
0x90207D: mov     byte ptr [esi+84h], 1
0x902084: mov     eax, [edi]
0x902086: mov     ecx, [eax+10h]
0x902089: mov     edx, [ecx]
0x90208B: fld     dword ptr [edx+0Ch]
0x90208E: mov     eax, [eax+14h]
0x902091: mov     edx, [ebx+8]
0x902094: fstp    [esp+90h+var_4C]
0x902098: mov     [esp+90h+var_48], ecx
0x90209C: mov     ecx, [edi+8]
0x90209F: push    ecx
0x9020A0: mov     [esp+94h+var_44], eax
0x9020A4: mov     eax, [ebx]
0x9020A6: push    edx
0x9020A7: lea     ecx, [esp+98h+var_40]
0x9020AB: mov     [esp+98h+var_52], 1
0x9020B2: mov     [esp+98h+var_50], 0
0x9020BA: mov     [esp+98h+var_58], offset off_A9BB94
0x9020C2: mov     [esp+98h+var_84], eax
0x9020C6: call    sub_8B1FF0
0x9020CB: mov     edx, [esp+90h+var_84]
0x9020CF: lea     eax, [esp+90h+var_40]
0x9020D3: push    eax
0x9020D4: lea     ecx, [esp+94h+var_58]
0x9020D8: push    ecx
0x9020D9: push    edx
0x9020DA: lea     ecx, [esi+0Ch]
0x9020DD: call    sub_93EE40
0x9020E2: mov     eax, 0BF800000h
0x9020E7: mov     [esi+2Ch], eax
0x9020EA: mov     [esi+18h], eax
0x9020ED: pop     edi
0x9020EE: mov     eax, esi
0x9020F0: pop     esi
0x9020F1: pop     ebx
0x9020F2: mov     esp, ebp
0x9020F4: pop     ebp
0x9020F5: retn    10h
