0x750AE0: push    ebx
0x750AE1: push    esi
0x750AE2: mov     esi, [esp+8+arg_0]
0x750AE6: push    edi
0x750AE7: push    esi
0x750AE8: mov     ebx, ecx
0x750AEA: call    sub_75E760
0x750AEF: mov     eax, ds:0B40BCCh
0x750AF4: push    eax; ArgList
0x750AF5: call    TESOutput_PrintString
0x750AFA: movzx   edi, word ptr [esi+0Ah]
0x750AFE: movzx   ecx, word ptr [esi+8]
0x750B02: add     esp, 4
0x750B05: cmp     edi, ecx
0x750B07: mov     [esp+0Ch+arg_0], eax
0x750B0B: jb      short loc_750B1B
0x750B0D: movzx   edx, word ptr [esi+0Eh]
0x750B11: add     edx, edi
0x750B13: push    edx
0x750B14: mov     ecx, esi
0x750B16: call    NiTArray_SetSize
0x750B1B: lea     eax, [esp+0Ch+arg_0]
0x750B1F: push    eax
0x750B20: push    edi
0x750B21: mov     ecx, esi
0x750B23: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x750B28: mov     ecx, [ebx+48h]
0x750B2B: test    ecx, ecx
0x750B2D: jz      short loc_750B37
0x750B2F: mov     edx, [ecx]
0x750B31: mov     eax, [edx+30h]
0x750B34: push    esi
0x750B35: call    eax
0x750B37: pop     edi
0x750B38: pop     esi
0x750B39: pop     ebx
0x750B3A: retn    4
