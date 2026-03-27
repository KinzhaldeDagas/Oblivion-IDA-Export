0x48DF80: push    ecx
0x48DF81: push    ebp
0x48DF82: push    esi
0x48DF83: mov     esi, ecx
0x48DF85: mov     ecx, [esi+4]
0x48DF88: mov     eax, [ecx]
0x48DF8A: mov     edx, [eax+40h]
0x48DF8D: push    8000000h
0x48DF92: mov     [esp+10h+var_4], esi
0x48DF96: call    edx
0x48DF98: mov     ebp, [esi]
0x48DF9A: test    ebp, ebp
0x48DF9C: jz      loc_48E04D
0x48DFA2: push    ebx
0x48DFA3: push    edi
0x48DFA4: mov     edi, [ebp+0]
0x48DFA7: test    edi, edi
0x48DFA9: jz      loc_48E04B
0x48DFAF: mov     ebx, [edi]
0x48DFB1: test    ebx, ebx
0x48DFB3: jz      short loc_48DFFB
0x48DFB5: mov     esi, [ebx]
0x48DFB7: test    esi, esi
0x48DFB9: jz      short loc_48DFF7
0x48DFBB: mov     ecx, esi
0x48DFBD: call    sub_41E850
0x48DFC2: test    eax, eax
0x48DFC4: jz      short loc_48DFF0
0x48DFC6: mov     ecx, esi
0x48DFC8: call    sub_424790
0x48DFCD: push    0
0x48DFCF: mov     ecx, esi
0x48DFD1: call    ExtraDataList_SetExtraCount
0x48DFD6: add     dword ptr [edi+4], 0FFFFFFFFh
0x48DFDA: push    esi
0x48DFDB: mov     ecx, ebx
0x48DFDD: call    BSSimpleList_Remove
0x48DFE2: mov     eax, [esi]
0x48DFE4: mov     edx, [eax]
0x48DFE6: push    1
0x48DFE8: mov     ecx, esi
0x48DFEA: call    edx
0x48DFEC: mov     ebx, [edi]
0x48DFEE: jmp     short loc_48DFF3
0x48DFF0: mov     ebx, [ebx+4]
0x48DFF3: test    ebx, ebx
0x48DFF5: jnz     short loc_48DFB5
0x48DFF7: mov     esi, [esp+14h+var_4]
0x48DFFB: mov     eax, [edi]
0x48DFFD: test    eax, eax
0x48DFFF: jz      short loc_48E040
0x48E001: cmp     dword ptr [eax+4], 0
0x48E005: jnz     short loc_48E040
0x48E007: cmp     dword ptr [eax], 0
0x48E00A: jnz     short loc_48E040
0x48E00C: cmp     dword ptr [edi+4], 0
0x48E010: jnz     short loc_48E040
0x48E012: mov     ecx, [esi]
0x48E014: push    edi
0x48E015: call    BSSimpleList_Remove
0x48E01A: mov     ecx, [edi]
0x48E01C: test    ecx, ecx
0x48E01E: jz      short loc_48E025
0x48E020: call    BSSimpleList_Clear
0x48E025: mov     eax, [edi]
0x48E027: push    eax
0x48E028: call    FormHeapFree
0x48E02D: push    edi
0x48E02E: mov     dword ptr [edi], 0
0x48E034: call    FormHeapFree
0x48E039: mov     ebp, [esi]
0x48E03B: add     esp, 8
0x48E03E: jmp     short loc_48E043
0x48E040: mov     ebp, [ebp+4]
0x48E043: test    ebp, ebp
0x48E045: jnz     loc_48DFA4
0x48E04B: pop     edi
0x48E04C: pop     ebx
0x48E04D: pop     esi
0x48E04E: pop     ebp
0x48E04F: pop     ecx
0x48E050: retn
