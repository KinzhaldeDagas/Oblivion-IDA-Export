0x6DFF20: push    ebx
0x6DFF21: push    esi
0x6DFF22: mov     esi, [esp+8+arg_0]
0x6DFF26: push    edi
0x6DFF27: push    esi
0x6DFF28: mov     edi, ecx
0x6DFF2A: call    sub_6EBAC0
0x6DFF2F: mov     eax, ds:0B3DF08h
0x6DFF34: push    eax; ArgList
0x6DFF35: call    TESOutput_PrintString
0x6DFF3A: movzx   ebx, word ptr [esi+0Ah]
0x6DFF3E: movzx   ecx, word ptr [esi+8]
0x6DFF42: add     esp, 4
0x6DFF45: cmp     ebx, ecx
0x6DFF47: mov     [esp+0Ch+arg_0], eax
0x6DFF4B: jb      short loc_6DFF5B
0x6DFF4D: movzx   edx, word ptr [esi+0Eh]
0x6DFF51: add     edx, ebx
0x6DFF53: push    edx
0x6DFF54: mov     ecx, esi
0x6DFF56: call    NiTArray_SetSize
0x6DFF5B: lea     eax, [esp+0Ch+arg_0]
0x6DFF5F: push    eax
0x6DFF60: push    ebx
0x6DFF61: mov     ecx, esi
0x6DFF63: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6DFF68: mov     ecx, [edi+10h]
0x6DFF6B: push    ecx; int
0x6DFF6C: push    offset aM_pklookat; "m_pkLookAt"
0x6DFF71: call    TESOutput_PrintLabeledPointer
0x6DFF76: movzx   ebx, word ptr [esi+0Ah]
0x6DFF7A: movzx   edx, word ptr [esi+8]
0x6DFF7E: add     esp, 8
0x6DFF81: cmp     ebx, edx
0x6DFF83: mov     [esp+0Ch+arg_0], eax
0x6DFF87: jb      short loc_6DFF97
0x6DFF89: movzx   eax, word ptr [esi+0Eh]
0x6DFF8D: add     eax, ebx
0x6DFF8F: push    eax
0x6DFF90: mov     ecx, esi
0x6DFF92: call    NiTArray_SetSize
0x6DFF97: lea     ecx, [esp+0Ch+arg_0]
0x6DFF9B: push    ecx
0x6DFF9C: push    ebx
0x6DFF9D: mov     ecx, esi
0x6DFF9F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6DFFA4: push    esi
0x6DFFA5: lea     ecx, [edi+18h]
0x6DFFA8: call    sub_6CBAD0
0x6DFFAD: add     edi, 38h ; '8'
0x6DFFB0: mov     ebx, 3
0x6DFFB5: mov     ecx, [edi]
0x6DFFB7: test    ecx, ecx
0x6DFFB9: jz      short loc_6DFFC3
0x6DFFBB: mov     edx, [ecx]
0x6DFFBD: mov     eax, [edx+30h]
0x6DFFC0: push    esi
0x6DFFC1: call    eax
0x6DFFC3: add     edi, 4
0x6DFFC6: sub     ebx, 1
0x6DFFC9: jnz     short loc_6DFFB5
0x6DFFCB: pop     edi
0x6DFFCC: pop     esi
0x6DFFCD: pop     ebx
0x6DFFCE: retn    4
