0x487D20: push    0FFFFFFFFh
0x487D22: push    offset SEH_695A50
0x487D27: mov     eax, large fs:0
0x487D2D: push    eax
0x487D2E: push    ebx
0x487D2F: push    esi
0x487D30: push    edi
0x487D31: mov     eax, ds:0B30AACh
0x487D36: xor     eax, esp
0x487D38: push    eax
0x487D39: lea     eax, [esp+1Ch+var_C]
0x487D3D: mov     large fs:0, eax
0x487D43: mov     eax, [esp+1Ch+arg_4]
0x487D47: mov     esi, [esp+1Ch+arg_0]
0x487D4B: push    eax
0x487D4C: push    esi
0x487D4D: xor     edi, edi
0x487D4F: call    sub_487C30
0x487D54: mov     ebx, eax
0x487D56: test    ebx, ebx
0x487D58: jz      loc_487E1B
0x487D5E: push    0Ch; Size
0x487D60: call    FormHeapAlloc
0x487D65: add     esp, 4
0x487D68: mov     [esp+1Ch+arg_4], eax
0x487D6C: test    eax, eax
0x487D6E: mov     [esp+1Ch+var_4], edi
0x487D72: jz      short loc_487D84
0x487D74: mov     edx, [ebx+4]
0x487D77: push    edx
0x487D78: push    esi
0x487D79: mov     ecx, eax
0x487D7B: call    ContainerEntryExtraData_constr
0x487D80: mov     edi, eax
0x487D82: jmp     short loc_487D86
0x487D84: xor     edi, edi
0x487D86: mov     eax, [ebx]
0x487D88: test    eax, eax
0x487D8A: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x487D92: jz      short loc_487E06
0x487D94: xor     ecx, ecx
0x487D96: cmp     dword ptr [eax], 0
0x487D99: jz      short loc_487D9E
0x487D9B: add     ecx, 1
0x487D9E: mov     eax, [eax+4]
0x487DA1: test    eax, eax
0x487DA3: jnz     short loc_487D96
0x487DA5: test    ecx, ecx
0x487DA7: jz      short loc_487E06
0x487DA9: cmp     [edi], eax
0x487DAB: jnz     short loc_487DCE
0x487DAD: push    8; Size
0x487DAF: call    FormHeapAlloc
0x487DB4: add     esp, 4
0x487DB7: test    eax, eax
0x487DB9: jz      short loc_487DCA
0x487DBB: mov     dword ptr [eax], 0
0x487DC1: mov     dword ptr [eax+4], 0
0x487DC8: jmp     short loc_487DCC
0x487DCA: xor     eax, eax
0x487DCC: mov     [edi], eax
0x487DCE: mov     ecx, [ebx]
0x487DD0: mov     esi, [ecx]
0x487DD2: push    0
0x487DD4: mov     ecx, esi
0x487DD6: call    ExtraDataList_IsExtraDefaultForContainer
0x487DDB: test    al, al
0x487DDD: jz      short loc_487DFC
0x487DDF: mov     esi, [ebx]
0x487DE1: test    esi, esi
0x487DE3: jz      short loc_487E1B
0x487DE5: mov     eax, [esi]
0x487DE7: test    eax, eax
0x487DE9: jz      short loc_487E1B
0x487DEB: mov     ecx, [edi]
0x487DED: push    eax
0x487DEE: call    BSSimpleList_PushBack
0x487DF3: mov     esi, [esi+4]
0x487DF6: test    esi, esi
0x487DF8: jnz     short loc_487DE5
0x487DFA: jmp     short loc_487E1B
0x487DFC: mov     ecx, [edi]
0x487DFE: push    esi
0x487DFF: call    BSSimpleList_PushFront
0x487E04: jmp     short loc_487E1B
0x487E06: mov     eax, [edi]
0x487E08: test    eax, eax
0x487E0A: jz      short loc_487E1B
0x487E0C: push    eax
0x487E0D: call    FormHeapFree
0x487E12: add     esp, 4
0x487E15: mov     dword ptr [edi], 0
0x487E1B: mov     eax, edi
0x487E1D: mov     ecx, [esp+1Ch+var_C]
0x487E21: mov     large fs:0, ecx
0x487E28: pop     ecx
0x487E29: pop     edi
0x487E2A: pop     esi
0x487E2B: pop     ebx
0x487E2C: add     esp, 0Ch
0x487E2F: retn    8
