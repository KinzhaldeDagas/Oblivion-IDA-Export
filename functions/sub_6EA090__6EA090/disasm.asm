0x6EA090: push    ecx
0x6EA091: mov     eax, ds:0B3E8B0h
0x6EA096: push    ebx
0x6EA097: push    esi
0x6EA098: push    edi
0x6EA099: push    eax; ArgList
0x6EA09A: mov     ebx, ecx
0x6EA09C: call    TESOutput_PrintString
0x6EA0A1: mov     esi, [esp+14h+arg_0]
0x6EA0A5: movzx   edi, word ptr [esi+0Ah]
0x6EA0A9: movzx   ecx, word ptr [esi+8]
0x6EA0AD: add     esp, 4
0x6EA0B0: cmp     edi, ecx
0x6EA0B2: mov     [esp+10h+var_4], eax
0x6EA0B6: jb      short loc_6EA0C6
0x6EA0B8: movzx   edx, word ptr [esi+0Eh]
0x6EA0BC: add     edx, edi
0x6EA0BE: push    edx
0x6EA0BF: mov     ecx, esi
0x6EA0C1: call    NiTArray_SetSize
0x6EA0C6: lea     eax, [esp+10h+var_4]
0x6EA0CA: push    eax
0x6EA0CB: push    edi
0x6EA0CC: mov     ecx, esi
0x6EA0CE: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6EA0D3: mov     ecx, [ebx+3Ch]
0x6EA0D6: push    ecx; int
0x6EA0D7: push    offset aM_ilod; "m_iLOD"
0x6EA0DC: call    TESOutput_PrintLabeledSignedInt
0x6EA0E1: movzx   edi, word ptr [esi+0Ah]
0x6EA0E5: movzx   edx, word ptr [esi+8]
0x6EA0E9: add     esp, 8
0x6EA0EC: cmp     edi, edx
0x6EA0EE: mov     [esp+10h+arg_0], eax
0x6EA0F2: jb      short loc_6EA102
0x6EA0F4: movzx   eax, word ptr [esi+0Eh]
0x6EA0F8: add     eax, edi
0x6EA0FA: push    eax
0x6EA0FB: mov     ecx, esi
0x6EA0FD: call    NiTArray_SetSize
0x6EA102: lea     ecx, [esp+10h+arg_0]
0x6EA106: push    ecx
0x6EA107: push    edi
0x6EA108: mov     ecx, esi
0x6EA10A: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6EA10F: mov     edx, [ebx+40h]
0x6EA112: push    edx; int
0x6EA113: push    offset aM_uinumlods; "m_uiNumLODs"
0x6EA118: call    TESOutput_PrintLabeledUnsignedInt
0x6EA11D: movzx   edi, word ptr [esi+0Ah]
0x6EA121: mov     [esp+18h+arg_0], eax
0x6EA125: movzx   eax, word ptr [esi+8]
0x6EA129: add     esp, 8
0x6EA12C: cmp     edi, eax
0x6EA12E: jb      short loc_6EA13E
0x6EA130: movzx   ecx, word ptr [esi+0Eh]
0x6EA134: add     ecx, edi
0x6EA136: push    ecx
0x6EA137: mov     ecx, esi
0x6EA139: call    NiTArray_SetSize
0x6EA13E: lea     edx, [esp+10h+arg_0]
0x6EA142: push    edx
0x6EA143: push    edi
0x6EA144: mov     ecx, esi
0x6EA146: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6EA14B: pop     edi
0x6EA14C: pop     esi
0x6EA14D: pop     ebx
0x6EA14E: pop     ecx
0x6EA14F: retn    4
