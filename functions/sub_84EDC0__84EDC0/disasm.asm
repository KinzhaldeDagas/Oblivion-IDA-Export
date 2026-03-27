0x84EDC0: push    0FFFFFFFFh
0x84EDC2: push    offset SEH_851CA0
0x84EDC7: mov     eax, large fs:0
0x84EDCD: push    eax
0x84EDCE: push    ecx
0x84EDCF: push    ebx
0x84EDD0: push    ebp
0x84EDD1: push    esi
0x84EDD2: push    edi
0x84EDD3: mov     eax, ds:0B30AACh
0x84EDD8: xor     eax, esp
0x84EDDA: push    eax
0x84EDDB: lea     eax, [esp+24h+var_C]
0x84EDDF: mov     large fs:0, eax
0x84EDE5: mov     ebp, ecx
0x84EDE7: mov     esi, ds:0B45930h
0x84EDED: mov     eax, [esi+24h]
0x84EDF0: mov     ebx, [esp+24h+arg_C]
0x84EDF4: mov     edi, [eax]
0x84EDF6: mov     edx, [ebx]
0x84EDF8: mov     eax, [edx+8Ch]
0x84EDFE: push    0
0x84EE00: mov     ecx, ebx
0x84EE02: mov     [esp+28h+var_10], edi
0x84EE06: call    eax
0x84EE08: test    eax, eax
0x84EE0A: jz      short loc_84EE1E
0x84EE0C: mov     edx, [ebx]
0x84EE0E: mov     eax, [edx+8Ch]
0x84EE14: push    0
0x84EE16: mov     ecx, ebx
0x84EE18: call    eax
0x84EE1A: mov     ebx, eax
0x84EE1C: jmp     short loc_84EE33
0x84EE1E: test    dword ptr [ebx+1Ch], 80h
0x84EE25: mov     ebx, ds:0B430F0h
0x84EE2B: ja      short loc_84EE33
0x84EE2D: mov     ebx, ds:0B430DCh
0x84EE33: mov     edi, [edi+4]
0x84EE36: cmp     edi, ebx
0x84EE38: jz      short loc_84EE71
0x84EE3A: test    edi, edi
0x84EE3C: jz      short loc_84EE5A
0x84EE3E: lea     ecx, [edi+4]
0x84EE41: push    ecx; lpAddend
0x84EE42: call    dword ptr ds:0A2807Ch
0x84EE48: test    eax, eax
0x84EE4A: jnz     short loc_84EE5A
0x84EE4C: test    edi, edi
0x84EE4E: jz      short loc_84EE5A
0x84EE50: mov     edx, [edi]
0x84EE52: mov     eax, [edx]
0x84EE54: push    1
0x84EE56: mov     ecx, edi
0x84EE58: call    eax
0x84EE5A: test    ebx, ebx
0x84EE5C: mov     edi, [esp+24h+var_10]
0x84EE60: mov     [edi+4], ebx
0x84EE63: jz      short loc_84EE75
0x84EE65: add     ebx, 4
0x84EE68: push    ebx; lpAddend
0x84EE69: call    dword ptr ds:0A28078h
0x84EE6F: jmp     short loc_84EE75
0x84EE71: mov     edi, [esp+24h+var_10]
0x84EE75: test    edi, edi
0x84EE77: jz      short loc_84EE95
0x84EE79: cmp     byte ptr ds:0B42CDDh, 0
0x84EE80: jz      short loc_84EE95
0x84EE82: mov     ecx, [esp+24h+arg_C]
0x84EE86: mov     edx, [ecx]
0x84EE88: mov     eax, [edx+78h]
0x84EE8B: call    eax
0x84EE8D: push    eax
0x84EE8E: mov     ecx, edi
0x84EE90: call    sub_7715E0
0x84EE95: mov     edi, 1
0x84EE9A: add     [esi+60h], edi
0x84EE9D: mov     [esp+24h+arg_C], esi
0x84EEA1: mov     edx, [ebp+38h]
0x84EEA4: lea     ecx, [esp+24h+arg_C]
0x84EEA8: push    ecx
0x84EEA9: push    edx
0x84EEAA: lea     ecx, [ebp+40h]
0x84EEAD: mov     [esp+2Ch+var_4], 0
0x84EEB5: call    sub_76CE40
0x84EEBA: or      eax, 0FFFFFFFFh
0x84EEBD: add     [esi+60h], eax
0x84EEC0: mov     [esp+24h+var_4], eax
0x84EEC4: jnz     short loc_84EECD
0x84EEC6: mov     ecx, esi
0x84EEC8: call    sub_7604D0
0x84EECD: add     [ebp+38h], edi
0x84EED0: mov     ecx, dword ptr [esp+24h+var_C]
0x84EED4: mov     large fs:0, ecx
0x84EEDB: pop     ecx
0x84EEDC: pop     edi
0x84EEDD: pop     esi
0x84EEDE: pop     ebp
0x84EEDF: pop     ebx
0x84EEE0: add     esp, 10h
0x84EEE3: retn    10h
