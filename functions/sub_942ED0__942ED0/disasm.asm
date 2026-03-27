0x942ED0: push    ebx
0x942ED1: push    ebp
0x942ED2: push    esi
0x942ED3: mov     esi, ecx
0x942ED5: mov     eax, [esi]
0x942ED7: push    edi
0x942ED8: call    dword ptr [eax+0Ch]
0x942EDB: mov     ebx, [esp+10h+arg_4]
0x942EDF: mov     edi, eax
0x942EE1: mov     ebp, [edi]
0x942EE3: mov     ecx, ebx
0x942EE5: call    sub_90D1E0
0x942EEA: push    eax
0x942EEB: push    ebx
0x942EEC: mov     ecx, edi
0x942EEE: call    dword ptr [ebp+8]
0x942EF1: mov     edx, [esi]
0x942EF3: mov     ecx, esi
0x942EF5: call    dword ptr [edx+8]
0x942EF8: mov     edi, [esp+10h+arg_0]
0x942EFC: mov     edx, [eax]
0x942EFE: push    edi
0x942EFF: mov     ecx, eax
0x942F01: call    dword ptr [edx+8]
0x942F04: mov     eax, [esi]
0x942F06: mov     ecx, esi
0x942F08: call    dword ptr [eax+10h]
0x942F0B: mov     ecx, [edi+8]
0x942F0E: mov     edx, [eax]
0x942F10: push    ebx
0x942F11: push    ecx
0x942F12: mov     ecx, eax
0x942F14: call    dword ptr [edx+8]
0x942F17: pop     edi
0x942F18: pop     esi
0x942F19: pop     ebp
0x942F1A: pop     ebx
0x942F1B: retn    8
