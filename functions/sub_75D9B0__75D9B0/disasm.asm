0x75D9B0: sub     esp, 0Ch
0x75D9B3: push    ebx
0x75D9B4: push    ebp
0x75D9B5: mov     ebp, [esp+14h+arg_0]
0x75D9B9: push    esi
0x75D9BA: mov     esi, ecx
0x75D9BC: mov     ax, [esi+48h]
0x75D9C0: mov     edx, [esi+5Ch]
0x75D9C3: push    edi
0x75D9C4: movzx   edi, bp
0x75D9C7: sub     ax, 1
0x75D9CB: lea     ecx, ds:0[edi*8]
0x75D9D2: sub     ecx, edi
0x75D9D4: movzx   ebx, ax
0x75D9D7: movzx   eax, word ptr [edx+ecx*4+18h]
0x75D9DC: push    ebp
0x75D9DD: mov     ecx, esi
0x75D9DF: mov     [esp+20h+var_4], eax
0x75D9E3: call    sub_759860
0x75D9E8: mov     ecx, [esi+68h]
0x75D9EB: cmp     bp, bx
0x75D9EE: mov     ebp, ds:0A2807Ch
0x75D9F4: mov     [esp+1Ch+arg_0], 0
0x75D9FC: jnz     short loc_75DA4E
0x75D9FE: mov     edx, [ecx]
0x75DA00: mov     edx, [edx+8Ch]
0x75DA06: movzx   eax, bx
0x75DA09: push    eax
0x75DA0A: lea     eax, [esp+20h+var_C]
0x75DA0E: push    eax
0x75DA0F: call    edx
0x75DA11: push    eax
0x75DA12: lea     ecx, [esp+20h+arg_0]
0x75DA16: call    sub_55E2A0
0x75DA1B: mov     eax, dword ptr [esp+1Ch+var_C]
0x75DA1F: test    eax, eax
0x75DA21: jz      loc_75DAFA
0x75DA27: mov     edi, eax
0x75DA29: add     eax, 4
0x75DA2C: push    eax; lpAddend
0x75DA2D: call    ebp ; InterlockedDecrement
0x75DA2F: test    eax, eax
0x75DA31: jnz     loc_75DAFA
0x75DA37: test    edi, edi
0x75DA39: jz      loc_75DAFA
0x75DA3F: mov     eax, [edi]
0x75DA41: mov     edx, [eax]
0x75DA43: push    1
0x75DA45: mov     ecx, edi
0x75DA47: call    edx
0x75DA49: jmp     loc_75DAFA
0x75DA4E: mov     eax, [ecx]
0x75DA50: mov     eax, [eax+8Ch]
0x75DA56: movzx   edx, bx
0x75DA59: push    edx
0x75DA5A: lea     edx, [esp+20h+var_C]
0x75DA5E: push    edx
0x75DA5F: call    eax
0x75DA61: mov     ecx, [esi+68h]
0x75DA64: mov     edx, [ecx]
0x75DA66: mov     edx, [edx+8Ch]
0x75DA6C: push    edi
0x75DA6D: lea     eax, [esp+20h+var_8]
0x75DA71: push    eax
0x75DA72: call    edx
0x75DA74: push    eax
0x75DA75: lea     ecx, [esp+20h+arg_0]
0x75DA79: call    sub_55E2A0
0x75DA7E: mov     eax, [esp+1Ch+var_8]
0x75DA82: test    eax, eax
0x75DA84: jz      short loc_75DAA0
0x75DA86: mov     ebx, eax
0x75DA88: add     eax, 4
0x75DA8B: push    eax; lpAddend
0x75DA8C: call    ebp ; InterlockedDecrement
0x75DA8E: test    eax, eax
0x75DA90: jnz     short loc_75DAA0
0x75DA92: test    ebx, ebx
0x75DA94: jz      short loc_75DAA0
0x75DA96: mov     eax, [ebx]
0x75DA98: mov     edx, [eax]
0x75DA9A: push    1
0x75DA9C: mov     ecx, ebx
0x75DA9E: call    edx
0x75DAA0: mov     edx, dword ptr [esp+1Ch+var_C]
0x75DAA4: mov     ecx, [esi+68h]
0x75DAA7: mov     eax, [ecx]
0x75DAA9: mov     eax, [eax+90h]
0x75DAAF: push    edx
0x75DAB0: push    edi
0x75DAB1: lea     edx, [esp+24h+var_8]
0x75DAB5: push    edx
0x75DAB6: call    eax
0x75DAB8: mov     eax, [esp+1Ch+var_8]
0x75DABC: test    eax, eax
0x75DABE: jz      short loc_75DADA
0x75DAC0: mov     edi, eax
0x75DAC2: add     eax, 4
0x75DAC5: push    eax; lpAddend
0x75DAC6: call    ebp ; InterlockedDecrement
0x75DAC8: test    eax, eax
0x75DACA: jnz     short loc_75DADA
0x75DACC: test    edi, edi
0x75DACE: jz      short loc_75DADA
0x75DAD0: mov     edx, [edi]
0x75DAD2: mov     eax, [edx]
0x75DAD4: push    1
0x75DAD6: mov     ecx, edi
0x75DAD8: call    eax
0x75DADA: mov     edi, dword ptr [esp+1Ch+var_C]
0x75DADE: test    edi, edi
0x75DAE0: jz      short loc_75DAFA
0x75DAE2: lea     ecx, [edi+4]
0x75DAE5: push    ecx; lpAddend
0x75DAE6: call    ebp ; InterlockedDecrement
0x75DAE8: test    eax, eax
0x75DAEA: jnz     short loc_75DAFA
0x75DAEC: test    edi, edi
0x75DAEE: jz      short loc_75DAFA
0x75DAF0: mov     edx, [edi]
0x75DAF2: mov     eax, [edx]
0x75DAF4: push    1
0x75DAF6: mov     ecx, edi
0x75DAF8: call    eax
0x75DAFA: mov     edi, [esp+1Ch+arg_0]
0x75DAFE: test    edi, edi
0x75DB00: push    ecx
0x75DB01: mov     eax, esp
0x75DB03: mov     [eax], edi
0x75DB05: jz      short loc_75DB11
0x75DB07: lea     ecx, [edi+4]
0x75DB0A: push    ecx; lpAddend
0x75DB0B: call    dword ptr ds:0A28078h
0x75DB11: movzx   edx, word ptr [esp+20h+var_4]
0x75DB16: push    edx
0x75DB17: mov     ecx, esi
0x75DB19: call    sub_75D910
0x75DB1E: test    edi, edi
0x75DB20: jz      short loc_75DB36
0x75DB22: lea     eax, [edi+4]
0x75DB25: push    eax; lpAddend
0x75DB26: call    ebp ; InterlockedDecrement
0x75DB28: test    eax, eax
0x75DB2A: jnz     short loc_75DB36
0x75DB2C: mov     edx, [edi]
0x75DB2E: mov     eax, [edx]
0x75DB30: push    1
0x75DB32: mov     ecx, edi
0x75DB34: call    eax
0x75DB36: pop     edi
0x75DB37: pop     esi
0x75DB38: pop     ebp
0x75DB39: pop     ebx
0x75DB3A: add     esp, 0Ch
0x75DB3D: retn    4
