0x6D69D0: push    ebx
0x6D69D1: push    esi
0x6D69D2: mov     esi, [esp+8+arg_0]
0x6D69D6: push    edi
0x6D69D7: push    esi
0x6D69D8: mov     edi, ecx
0x6D69DA: call    sub_6EC460
0x6D69DF: mov     eax, ds:0B3D91Ch
0x6D69E4: push    eax; ArgList
0x6D69E5: call    TESOutput_PrintString
0x6D69EA: movzx   ebx, word ptr [esi+0Ah]
0x6D69EE: movzx   ecx, word ptr [esi+8]
0x6D69F2: add     esp, 4
0x6D69F5: cmp     ebx, ecx
0x6D69F7: mov     [esp+0Ch+arg_0], eax
0x6D69FB: jb      short loc_6D6A0B
0x6D69FD: movzx   edx, word ptr [esi+0Eh]
0x6D6A01: add     edx, ebx
0x6D6A03: push    edx
0x6D6A04: mov     ecx, esi
0x6D6A06: call    NiTArray_SetSize
0x6D6A0B: lea     eax, [esp+0Ch+arg_0]
0x6D6A0F: push    eax
0x6D6A10: push    ebx
0x6D6A11: mov     ecx, esi
0x6D6A13: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6D6A18: push    esi
0x6D6A19: lea     ecx, [edi+0Ch]
0x6D6A1C: call    sub_6CBAD0
0x6D6A21: mov     ecx, [edi+2Ch]
0x6D6A24: test    ecx, ecx
0x6D6A26: jz      short loc_6D6A30
0x6D6A28: mov     edx, [ecx]
0x6D6A2A: mov     eax, [edx+30h]
0x6D6A2D: push    esi
0x6D6A2E: call    eax
0x6D6A30: pop     edi
0x6D6A31: pop     esi
0x6D6A32: pop     ebx
0x6D6A33: retn    4
