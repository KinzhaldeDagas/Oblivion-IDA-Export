0x52EDB0: push    ecx
0x52EDB1: push    esi
0x52EDB2: mov     esi, ecx
0x52EDB4: mov     eax, [esi]
0x52EDB6: mov     edx, [eax+24h]
0x52EDB9: call    edx
0x52EDBB: mov     ecx, [esp+8+arg_0]
0x52EDBF: push    esi
0x52EDC0: call    TESFile_WriteFormRecord
0x52EDC5: lea     eax, [esi+28h]
0x52EDC8: test    eax, eax
0x52EDCA: jz      short loc_52EE21
0x52EDCC: push    ebx
0x52EDCD: push    ebp
0x52EDCE: push    edi
0x52EDCF: jmp     short loc_52EDD5
0x52EDD1: mov     eax, [esp+14h+var_4]
0x52EDD5: mov     ebx, [eax]
0x52EDD7: test    ebx, ebx
0x52EDD9: jz      short loc_52EE1E
0x52EDDB: mov     ebp, [ebx+10h]
0x52EDDE: mov     eax, [eax+4]
0x52EDE1: xor     esi, esi
0x52EDE3: test    ebp, ebp
0x52EDE5: mov     [esp+14h+var_4], eax
0x52EDE9: jbe     short loc_52EE17
0x52EDEB: jmp     short loc_52EDF0
0x52EDED: align 10h
0x52EDF0: mov     ecx, [ebx+8]
0x52EDF3: mov     edi, [ecx+esi*4]
0x52EDF6: test    edi, edi
0x52EDF8: jz      short loc_52EE10
0x52EDFA: mov     ecx, [esp+14h+arg_0]
0x52EDFE: call    TESFile_GetIsMaster
0x52EE03: mov     ecx, ds:0B33A98h
0x52EE09: push    eax
0x52EE0A: push    edi
0x52EE0B: call    TESDataHandler_SaveForm
0x52EE10: add     esi, 1
0x52EE13: cmp     esi, ebp
0x52EE15: jb      short loc_52EDF0
0x52EE17: cmp     [esp+14h+var_4], 0
0x52EE1C: jnz     short loc_52EDD1
0x52EE1E: pop     edi
0x52EE1F: pop     ebp
0x52EE20: pop     ebx
0x52EE21: mov     al, 1
0x52EE23: pop     esi
0x52EE24: pop     ecx
0x52EE25: retn    4
