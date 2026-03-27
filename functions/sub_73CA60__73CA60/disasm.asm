0x73CA60: push    ebx
0x73CA61: push    ebp
0x73CA62: push    esi
0x73CA63: mov     esi, [esp+0Ch+arg_0]
0x73CA67: push    edi
0x73CA68: push    esi
0x73CA69: mov     ebp, ecx
0x73CA6B: call    sub_721730
0x73CA70: mov     eax, ds:0B40180h
0x73CA75: push    eax; ArgList
0x73CA76: call    TESOutput_PrintString
0x73CA7B: movzx   edi, word ptr [esi+0Ah]
0x73CA7F: movzx   ecx, word ptr [esi+8]
0x73CA83: add     esp, 4
0x73CA86: cmp     edi, ecx
0x73CA88: mov     [esp+10h+arg_0], eax
0x73CA8C: jb      short loc_73CA9C
0x73CA8E: movzx   edx, word ptr [esi+0Eh]
0x73CA92: add     edx, edi
0x73CA94: push    edx
0x73CA95: mov     ecx, esi
0x73CA97: call    NiTArray_SetSize
0x73CA9C: lea     eax, [esp+10h+arg_0]
0x73CAA0: push    eax
0x73CAA1: push    edi
0x73CAA2: mov     ecx, esi
0x73CAA4: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73CAA9: mov     ecx, [ebp+0Ch]
0x73CAAC: push    ecx; int
0x73CAAD: push    offset aM_uisize; "m_uiSize"
0x73CAB2: call    TESOutput_PrintLabeledUnsignedInt
0x73CAB7: movzx   edi, word ptr [esi+0Ah]
0x73CABB: movzx   edx, word ptr [esi+8]
0x73CABF: add     esp, 8
0x73CAC2: cmp     edi, edx
0x73CAC4: mov     [esp+10h+arg_0], eax
0x73CAC8: jb      short loc_73CAD8
0x73CACA: movzx   eax, word ptr [esi+0Eh]
0x73CACE: add     eax, edi
0x73CAD0: push    eax
0x73CAD1: mov     ecx, esi
0x73CAD3: call    NiTArray_SetSize
0x73CAD8: lea     ecx, [esp+10h+arg_0]
0x73CADC: push    ecx
0x73CADD: push    edi
0x73CADE: mov     ecx, esi
0x73CAE0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73CAE5: xor     ebx, ebx
0x73CAE7: cmp     [ebp+0Ch], ebx
0x73CAEA: jbe     loc_73CB75
0x73CAF0: mov     edx, [ebp+10h]
0x73CAF3: mov     eax, [edx+ebx*4]
0x73CAF6: push    eax; int
0x73CAF7: push    offset aM_ppcvalueI; "m_ppcValue[i]"
0x73CAFC: call    TESOutput_PrintLabeledString
0x73CB01: movzx   edi, word ptr [esi+0Ah]
0x73CB05: movzx   ecx, word ptr [esi+8]
0x73CB09: add     esp, 8
0x73CB0C: cmp     edi, ecx
0x73CB0E: mov     [esp+10h+arg_0], eax
0x73CB12: jb      short loc_73CB26
0x73CB14: movzx   edx, word ptr [esi+0Eh]
0x73CB18: add     edx, edi
0x73CB1A: push    edx
0x73CB1B: mov     ecx, esi
0x73CB1D: call    NiTArray_SetSize
0x73CB22: mov     eax, [esp+10h+arg_0]
0x73CB26: movzx   ecx, word ptr [esi+0Ah]
0x73CB2A: cmp     edi, ecx
0x73CB2C: jb      short loc_73CB40
0x73CB2E: test    eax, eax
0x73CB30: lea     edx, [edi+1]
0x73CB33: mov     [esi+0Ah], dx
0x73CB37: jz      short loc_73CB63
0x73CB39: add     word ptr [esi+0Ch], 1
0x73CB3E: jmp     short loc_73CB63
0x73CB40: test    eax, eax
0x73CB42: jz      short loc_73CB54
0x73CB44: mov     ecx, [esi+4]
0x73CB47: cmp     dword ptr [ecx+edi*4], 0
0x73CB4B: jnz     short loc_73CB63
0x73CB4D: add     word ptr [esi+0Ch], 1
0x73CB52: jmp     short loc_73CB63
0x73CB54: mov     edx, [esi+4]
0x73CB57: cmp     dword ptr [edx+edi*4], 0
0x73CB5B: jz      short loc_73CB63
0x73CB5D: add     word ptr [esi+0Ch], 0FFFFh
0x73CB63: mov     ecx, [esi+4]
0x73CB66: add     ebx, 1
0x73CB69: mov     [ecx+edi*4], eax
0x73CB6C: cmp     ebx, [ebp+0Ch]
0x73CB6F: jb      loc_73CAF0
0x73CB75: mov     edx, [ebp+14h]
0x73CB78: push    edx; int
0x73CB79: push    offset aM_iindex; "m_iIndex"
0x73CB7E: call    TESOutput_PrintLabeledSignedInt
0x73CB83: movzx   edi, word ptr [esi+0Ah]
0x73CB87: mov     ebx, eax
0x73CB89: movzx   eax, word ptr [esi+8]
0x73CB8D: add     esp, 8
0x73CB90: cmp     edi, eax
0x73CB92: jb      short loc_73CBA2
0x73CB94: movzx   ecx, word ptr [esi+0Eh]
0x73CB98: add     ecx, edi
0x73CB9A: push    ecx
0x73CB9B: mov     ecx, esi
0x73CB9D: call    NiTArray_SetSize
0x73CBA2: movzx   edx, word ptr [esi+0Ah]
0x73CBA6: cmp     edi, edx
0x73CBA8: jb      short loc_73CBC7
0x73CBAA: test    ebx, ebx
0x73CBAC: lea     eax, [edi+1]
0x73CBAF: mov     [esi+0Ah], ax
0x73CBB3: jz      short loc_73CBF4
0x73CBB5: mov     eax, [esi+4]
0x73CBB8: add     word ptr [esi+0Ch], 1
0x73CBBD: mov     [eax+edi*4], ebx
0x73CBC0: pop     edi
0x73CBC1: pop     esi
0x73CBC2: pop     ebp
0x73CBC3: pop     ebx
0x73CBC4: retn    4
0x73CBC7: test    ebx, ebx
0x73CBC9: jz      short loc_73CBE5
0x73CBCB: mov     ecx, [esi+4]
0x73CBCE: cmp     dword ptr [ecx+edi*4], 0
0x73CBD2: jnz     short loc_73CBF4
0x73CBD4: add     word ptr [esi+0Ch], 1
0x73CBD9: mov     eax, ecx
0x73CBDB: mov     [eax+edi*4], ebx
0x73CBDE: pop     edi
0x73CBDF: pop     esi
0x73CBE0: pop     ebp
0x73CBE1: pop     ebx
0x73CBE2: retn    4
0x73CBE5: mov     edx, [esi+4]
0x73CBE8: cmp     dword ptr [edx+edi*4], 0
0x73CBEC: jz      short loc_73CBF4
0x73CBEE: add     word ptr [esi+0Ch], 0FFFFh
0x73CBF4: mov     eax, [esi+4]
0x73CBF7: mov     [eax+edi*4], ebx
0x73CBFA: pop     edi
0x73CBFB: pop     esi
0x73CBFC: pop     ebp
0x73CBFD: pop     ebx
0x73CBFE: retn    4
