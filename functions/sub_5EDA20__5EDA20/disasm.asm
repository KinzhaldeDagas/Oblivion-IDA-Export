0x5EDA20: cmp     byte ptr [esp+arg_0], 0
0x5EDA25: push    ebx
0x5EDA26: push    ebp
0x5EDA27: push    esi
0x5EDA28: mov     esi, ecx
0x5EDA2A: mov     eax, [esi]
0x5EDA2C: mov     edx, [eax+170h]
0x5EDA32: push    edi
0x5EDA33: jnz     loc_5EDB74
0x5EDA39: xor     edi, edi
0x5EDA3B: call    edx
0x5EDA3D: mov     ebx, eax
0x5EDA3F: test    ebx, ebx
0x5EDA41: jz      short loc_5EDA55
0x5EDA43: mov     eax, [esi]
0x5EDA45: mov     edx, [eax+190h]
0x5EDA4B: mov     ecx, esi
0x5EDA4D: call    edx
0x5EDA4F: test    al, al
0x5EDA51: jz      short loc_5EDA55
0x5EDA53: mov     edi, ebx
0x5EDA55: lea     ebp, [edi+58h]
0x5EDA58: test    ebp, ebp
0x5EDA5A: jz      short loc_5EDA8D
0x5EDA5C: lea     esp, [esp+0]
0x5EDA60: mov     ebx, [ebp+0]
0x5EDA63: test    ebx, ebx
0x5EDA65: jz      short loc_5EDA86
0x5EDA67: mov     eax, [esi+5Ch]
0x5EDA6A: mov     edx, [eax]
0x5EDA6C: lea     edi, [esi+5Ch]
0x5EDA6F: push    1
0x5EDA71: push    ebx
0x5EDA72: mov     ecx, edi
0x5EDA74: call    edx
0x5EDA76: mov     eax, [edi]
0x5EDA78: mov     edx, [eax+4]
0x5EDA7B: push    1
0x5EDA7D: lea     ecx, [esi+68h]
0x5EDA80: push    ecx
0x5EDA81: push    ebx
0x5EDA82: mov     ecx, edi
0x5EDA84: call    edx
0x5EDA86: mov     ebp, [ebp+4]
0x5EDA89: test    ebp, ebp
0x5EDA8B: jnz     short loc_5EDA60
0x5EDA8D: mov     eax, [esi]
0x5EDA8F: mov     edx, [eax+268h]
0x5EDA95: mov     ecx, esi
0x5EDA97: call    edx
0x5EDA99: test    eax, eax
0x5EDA9B: jz      short loc_5EDADD
0x5EDA9D: mov     eax, [esi]
0x5EDA9F: mov     edx, [eax+268h]
0x5EDAA5: mov     ecx, esi
0x5EDAA7: call    edx
0x5EDAA9: mov     ebp, eax
0x5EDAAB: add     ebp, 3Ch ; '<'
0x5EDAAE: jz      short loc_5EDADD
0x5EDAB0: mov     ebx, [ebp+0]
0x5EDAB3: test    ebx, ebx
0x5EDAB5: jz      short loc_5EDAD6
0x5EDAB7: mov     eax, [esi+5Ch]
0x5EDABA: mov     edx, [eax]
0x5EDABC: lea     edi, [esi+5Ch]
0x5EDABF: push    1
0x5EDAC1: push    ebx
0x5EDAC2: mov     ecx, edi
0x5EDAC4: call    edx
0x5EDAC6: mov     eax, [edi]
0x5EDAC8: mov     edx, [eax+4]
0x5EDACB: push    1
0x5EDACD: lea     ecx, [esi+68h]
0x5EDAD0: push    ecx
0x5EDAD1: push    ebx
0x5EDAD2: mov     ecx, edi
0x5EDAD4: call    edx
0x5EDAD6: mov     ebp, [ebp+4]
0x5EDAD9: test    ebp, ebp
0x5EDADB: jnz     short loc_5EDAB0
0x5EDADD: mov     ecx, esi; this
0x5EDADF: call    Actor_IsNPC
0x5EDAE4: test    al, al
0x5EDAE6: jz      loc_5EDC35
0x5EDAEC: mov     eax, [esi]
0x5EDAEE: mov     edx, [eax+170h]
0x5EDAF4: mov     ecx, esi
0x5EDAF6: call    edx
0x5EDAF8: test    eax, eax
0x5EDAFA: jz      loc_5EDC35
0x5EDB00: cmp     dword ptr [eax+0E8h], 0
0x5EDB07: jz      loc_5EDC35
0x5EDB0D: mov     ecx, esi; this
0x5EDB0F: call    Actor_IsNPC
0x5EDB14: test    al, al
0x5EDB16: jz      short loc_5EDB30
0x5EDB18: mov     eax, [esi]
0x5EDB1A: mov     edx, [eax+170h]
0x5EDB20: mov     ecx, esi
0x5EDB22: call    edx
0x5EDB24: test    eax, eax
0x5EDB26: jz      short loc_5EDB30
0x5EDB28: mov     ebp, [eax+0E8h]
0x5EDB2E: jmp     short loc_5EDB32
0x5EDB30: xor     ebp, ebp
0x5EDB32: add     ebp, 30h ; '0'
0x5EDB35: jz      loc_5EDC35
0x5EDB3B: jmp     short loc_5EDB40
0x5EDB3D: align 10h
0x5EDB40: mov     ebx, [ebp+0]
0x5EDB43: test    ebx, ebx
0x5EDB45: jz      short loc_5EDB66
0x5EDB47: mov     eax, [esi+5Ch]
0x5EDB4A: mov     edx, [eax]
0x5EDB4C: lea     edi, [esi+5Ch]
0x5EDB4F: push    1
0x5EDB51: push    ebx
0x5EDB52: mov     ecx, edi
0x5EDB54: call    edx
0x5EDB56: mov     eax, [edi]
0x5EDB58: mov     edx, [eax+4]
0x5EDB5B: push    1
0x5EDB5D: lea     ecx, [esi+68h]
0x5EDB60: push    ecx
0x5EDB61: push    ebx
0x5EDB62: mov     ecx, edi
0x5EDB64: call    edx
0x5EDB66: mov     ebp, [ebp+4]
0x5EDB69: test    ebp, ebp
0x5EDB6B: jnz     short loc_5EDB40
0x5EDB6D: pop     edi
0x5EDB6E: pop     esi
0x5EDB6F: pop     ebp
0x5EDB70: pop     ebx
0x5EDB71: retn    4
0x5EDB74: call    edx
0x5EDB76: mov     edi, eax
0x5EDB78: test    edi, edi
0x5EDB7A: jz      short loc_5EDB91
0x5EDB7C: mov     eax, [esi]
0x5EDB7E: mov     edx, [eax+190h]
0x5EDB84: mov     ecx, esi
0x5EDB86: call    edx
0x5EDB88: test    al, al
0x5EDB8A: jz      short loc_5EDB91
0x5EDB8C: lea     eax, [edi+44h]
0x5EDB8F: jmp     short loc_5EDB93
0x5EDB91: xor     eax, eax
0x5EDB93: push    eax
0x5EDB94: push    esi; a1
0x5EDB95: call    ContainerExtraData_GetContainerExtraDataForRef
0x5EDB9A: add     esp, 8
0x5EDB9D: mov     [esp+10h+arg_0], eax
0x5EDBA1: xor     ebp, ebp
0x5EDBA3: mov     eax, ss:dword_B1489C[ebp]
0x5EDBA9: mov     ecx, [esp+10h+arg_0]
0x5EDBAD: push    0
0x5EDBAF: push    eax
0x5EDBB0: call    ContainerExtraData_GetEquippedInstance
0x5EDBB5: mov     edi, eax
0x5EDBB7: test    edi, edi
0x5EDBB9: jz      short loc_5EDBDE
0x5EDBBB: mov     eax, [edi+8]
0x5EDBBE: push    0; int
0x5EDBC0: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x5EDBC5: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x5EDBCA: push    0; int
0x5EDBCC: push    eax; void *
0x5EDBCD: call    OblivionDynamicCast
0x5EDBD2: add     esp, 14h
0x5EDBD5: test    eax, eax
0x5EDBD7: jz      short loc_5EDBDE
0x5EDBD9: mov     ebx, [eax+4]
0x5EDBDC: jmp     short loc_5EDBE0
0x5EDBDE: xor     ebx, ebx
0x5EDBE0: test    ebx, ebx
0x5EDBE2: jz      short loc_5EDC15
0x5EDBE4: mov     eax, [edi]
0x5EDBE6: test    eax, eax
0x5EDBE8: jz      short loc_5EDBEE
0x5EDBEA: mov     ecx, [eax]
0x5EDBEC: jmp     short loc_5EDBF0
0x5EDBEE: xor     ecx, ecx
0x5EDBF0: mov     eax, [edi+8]
0x5EDBF3: push    ecx
0x5EDBF4: push    eax
0x5EDBF5: mov     ecx, esi
0x5EDBF7: call    sub_5E3DE0
0x5EDBFC: test    al, al
0x5EDBFE: jz      short loc_5EDC15
0x5EDC00: mov     eax, [edi+8]
0x5EDC03: mov     edx, [esi+5Ch]
0x5EDC06: mov     edx, [edx+8]
0x5EDC09: push    1
0x5EDC0B: lea     ecx, [esi+5Ch]
0x5EDC0E: push    eax
0x5EDC0F: add     ebx, 18h
0x5EDC12: push    ebx
0x5EDC13: call    edx
0x5EDC15: test    edi, edi
0x5EDC17: jz      short loc_5EDC29
0x5EDC19: mov     ecx, edi
0x5EDC1B: call    ContainerEntryExtraData_DestroyDataTable
0x5EDC20: push    edi
0x5EDC21: call    FormHeapFree
0x5EDC26: add     esp, 4
0x5EDC29: add     ebp, 4
0x5EDC2C: cmp     ebp, 28h ; '('
0x5EDC2F: jb      loc_5EDBA3
0x5EDC35: pop     edi
0x5EDC36: pop     esi
0x5EDC37: pop     ebp
0x5EDC38: pop     ebx
0x5EDC39: retn    4
