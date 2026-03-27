0x443C70: mov     eax, ds:0B37150h
0x443C75: push    ebx
0x443C76: push    ebp
0x443C77: xor     ebx, ebx
0x443C79: cmp     [eax], bl
0x443C7B: push    esi
0x443C7C: push    edi
0x443C7D: mov     ebp, ecx
0x443C7F: jz      short loc_443C91
0x443C81: mov     ecx, ds:0B33A1Ch
0x443C87: push    1
0x443C89: push    1
0x443C8B: push    eax
0x443C8C: call    QueuedModelLoader_RemoveModel
0x443C91: mov     eax, ds:0B37158h
0x443C96: cmp     [eax], bl
0x443C98: jz      short loc_443CAA
0x443C9A: mov     ecx, ds:0B33A1Ch
0x443CA0: push    1
0x443CA2: push    1
0x443CA4: push    eax
0x443CA5: call    QueuedModelLoader_RemoveModel
0x443CAA: mov     eax, ds:0B37160h
0x443CAF: cmp     [eax], bl
0x443CB1: jz      short loc_443CC3
0x443CB3: mov     ecx, ds:0B33A1Ch
0x443CB9: push    1
0x443CBB: push    1
0x443CBD: push    eax
0x443CBE: call    QueuedModelLoader_RemoveModel
0x443CC3: mov     eax, ds:0B37168h
0x443CC8: cmp     [eax], bl
0x443CCA: jz      short loc_443CDC
0x443CCC: mov     ecx, ds:0B33A1Ch
0x443CD2: push    1
0x443CD4: push    1
0x443CD6: push    eax
0x443CD7: call    QueuedModelLoader_RemoveModel
0x443CDC: mov     eax, ds:0B37170h
0x443CE1: cmp     [eax], bl
0x443CE3: jz      short loc_443CF5
0x443CE5: mov     ecx, ds:0B33A1Ch
0x443CEB: push    1
0x443CED: push    1
0x443CEF: push    eax
0x443CF0: call    QueuedModelLoader_RemoveModel
0x443CF5: mov     eax, ds:0B37178h
0x443CFA: cmp     [eax], bl
0x443CFC: jz      short loc_443D0E
0x443CFE: mov     ecx, ds:0B33A1Ch
0x443D04: push    1
0x443D06: push    1
0x443D08: push    eax
0x443D09: call    QueuedModelLoader_RemoveModel
0x443D0E: mov     eax, ds:0B37180h
0x443D13: cmp     [eax], bl
0x443D15: jz      short loc_443D27
0x443D17: mov     ecx, ds:0B33A1Ch
0x443D1D: push    1
0x443D1F: push    1
0x443D21: push    eax
0x443D22: call    QueuedModelLoader_RemoveModel
0x443D27: mov     eax, ds:0B37188h
0x443D2C: cmp     [eax], bl
0x443D2E: jz      short loc_443D40
0x443D30: mov     ecx, ds:0B33A1Ch
0x443D36: push    1
0x443D38: push    1
0x443D3A: push    eax
0x443D3B: call    QueuedModelLoader_RemoveModel
0x443D40: mov     eax, ds:0B37190h
0x443D45: cmp     [eax], bl
0x443D47: jz      short loc_443D59
0x443D49: mov     ecx, ds:0B33A1Ch
0x443D4F: push    1
0x443D51: push    1
0x443D53: push    eax
0x443D54: call    QueuedModelLoader_RemoveModel
0x443D59: mov     eax, ds:0B37198h
0x443D5E: cmp     [eax], bl
0x443D60: jz      short loc_443D72
0x443D62: mov     ecx, ds:0B33A1Ch
0x443D68: push    1
0x443D6A: push    1
0x443D6C: push    eax
0x443D6D: call    QueuedModelLoader_RemoveModel
0x443D72: mov     eax, ds:0B371A0h
0x443D77: cmp     [eax], bl
0x443D79: jz      short loc_443D8B
0x443D7B: mov     ecx, ds:0B33A1Ch
0x443D81: push    1
0x443D83: push    1
0x443D85: push    eax
0x443D86: call    QueuedModelLoader_RemoveModel
0x443D8B: mov     eax, ds:0B371A8h
0x443D90: cmp     [eax], bl
0x443D92: jz      short loc_443DA4
0x443D94: mov     ecx, ds:0B33A1Ch
0x443D9A: push    1
0x443D9C: push    1
0x443D9E: push    eax
0x443D9F: call    QueuedModelLoader_RemoveModel
0x443DA4: mov     eax, ds:0B371B0h
0x443DA9: cmp     [eax], bl
0x443DAB: jz      short loc_443DBD
0x443DAD: mov     ecx, ds:0B33A1Ch
0x443DB3: push    1
0x443DB5: push    1
0x443DB7: push    eax
0x443DB8: call    QueuedModelLoader_RemoveModel
0x443DBD: mov     eax, ds:0B371B8h
0x443DC2: cmp     [eax], bl
0x443DC4: jz      short loc_443DD6
0x443DC6: mov     ecx, ds:0B33A1Ch
0x443DCC: push    1
0x443DCE: push    1
0x443DD0: push    eax
0x443DD1: call    QueuedModelLoader_RemoveModel
0x443DD6: mov     eax, ds:0B371C0h
0x443DDB: cmp     [eax], bl
0x443DDD: jz      short loc_443DEF
0x443DDF: mov     ecx, ds:0B33A1Ch
0x443DE5: push    1
0x443DE7: push    1
0x443DE9: push    eax
0x443DEA: call    QueuedModelLoader_RemoveModel
0x443DEF: mov     eax, ds:0B37B38h
0x443DF4: cmp     [eax], bl
0x443DF6: jz      short loc_443E08
0x443DF8: mov     ecx, ds:0B33A1Ch
0x443DFE: push    1
0x443E00: push    1
0x443E02: push    eax
0x443E03: call    QueuedModelLoader_RemoveModel
0x443E08: mov     esi, [ebp+94h]
0x443E0E: cmp     esi, ebx
0x443E10: mov     edi, ds:0A2807Ch
0x443E16: jz      short loc_443E36
0x443E18: lea     eax, [esi+4]
0x443E1B: push    eax; lpAddend
0x443E1C: call    edi ; InterlockedDecrement
0x443E1E: test    eax, eax
0x443E20: jnz     short loc_443E30
0x443E22: cmp     esi, ebx
0x443E24: jz      short loc_443E30
0x443E26: mov     edx, [esi]
0x443E28: mov     eax, [edx]
0x443E2A: push    1
0x443E2C: mov     ecx, esi
0x443E2E: call    eax
0x443E30: mov     [ebp+94h], ebx
0x443E36: mov     esi, [ebp+98h]
0x443E3C: cmp     esi, ebx
0x443E3E: jz      short loc_443E5E
0x443E40: lea     ecx, [esi+4]
0x443E43: push    ecx; lpAddend
0x443E44: call    edi ; InterlockedDecrement
0x443E46: test    eax, eax
0x443E48: jnz     short loc_443E58
0x443E4A: cmp     esi, ebx
0x443E4C: jz      short loc_443E58
0x443E4E: mov     edx, [esi]
0x443E50: mov     eax, [edx]
0x443E52: push    1
0x443E54: mov     ecx, esi
0x443E56: call    eax
0x443E58: mov     [ebp+98h], ebx
0x443E5E: mov     esi, [ebp+9Ch]
0x443E64: cmp     esi, ebx
0x443E66: jz      short loc_443E86
0x443E68: lea     ecx, [esi+4]
0x443E6B: push    ecx; lpAddend
0x443E6C: call    edi ; InterlockedDecrement
0x443E6E: test    eax, eax
0x443E70: jnz     short loc_443E80
0x443E72: cmp     esi, ebx
0x443E74: jz      short loc_443E80
0x443E76: mov     edx, [esi]
0x443E78: mov     eax, [edx]
0x443E7A: push    1
0x443E7C: mov     ecx, esi
0x443E7E: call    eax
0x443E80: mov     [ebp+9Ch], ebx
0x443E86: xor     esi, esi
0x443E88: jmp     short loc_443E90
0x443E8A: align 10h
0x443E90: mov     ecx, ds:dword_B067C0[esi]
0x443E96: push    ecx; a1
0x443E97: call    TESForm_LookupByFormID
0x443E9C: add     esp, 4
0x443E9F: cmp     eax, ebx
0x443EA1: jz      short loc_443EE3
0x443EA3: movzx   ecx, word ptr [eax+2Ch]
0x443EA7: cmp     cx, 0FFFFh
0x443EAC: jnz     short loc_443EC1
0x443EAE: mov     ecx, [eax+28h]
0x443EB1: lea     edi, [ecx+1]
0x443EB4: mov     dl, [ecx]
0x443EB6: add     ecx, 1
0x443EB9: cmp     dl, bl
0x443EBB: jnz     short loc_443EB4
0x443EBD: sub     ecx, edi
0x443EBF: jmp     short loc_443EC4
0x443EC1: movzx   ecx, cx
0x443EC4: cmp     ecx, ebx
0x443EC6: jz      short loc_443EE3
0x443EC8: mov     edx, [eax+24h]
0x443ECB: lea     ecx, [eax+24h]
0x443ECE: mov     eax, [edx+14h]
0x443ED1: call    eax
0x443ED3: mov     ecx, ds:0B33A1Ch
0x443ED9: push    1
0x443EDB: push    1
0x443EDD: push    eax
0x443EDE: call    QueuedModelLoader_RemoveModel
0x443EE3: mov     ds:dword_B35E50[esi], ebx
0x443EE9: add     esi, 4
0x443EEC: cmp     esi, 54h ; 'T'
0x443EEF: jl      short loc_443E90
0x443EF1: pop     edi
0x443EF2: pop     esi
0x443EF3: pop     ebp
0x443EF4: pop     ebx
0x443EF5: retn
