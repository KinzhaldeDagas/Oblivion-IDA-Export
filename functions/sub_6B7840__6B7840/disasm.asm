0x6B7840: push    0FFFFFFFFh
0x6B7842: push    offset SEH_6B7E50
0x6B7847: mov     eax, large fs:0
0x6B784D: push    eax
0x6B784E: sub     esp, 1Ch
0x6B7851: push    ebx
0x6B7852: push    ebp
0x6B7853: push    esi
0x6B7854: push    edi
0x6B7855: mov     eax, ds:0B30AACh
0x6B785A: xor     eax, esp
0x6B785C: push    eax
0x6B785D: lea     eax, [esp+3Ch+var_C]
0x6B7861: mov     large fs:0, eax
0x6B7867: mov     ebp, ecx
0x6B7869: mov     ecx, ds:0B33B00h
0x6B786F: xor     ebx, ebx
0x6B7871: mov     [esp+3Ch+var_24], ebx
0x6B7875: mov     [esp+3Ch+var_20], ebx
0x6B7879: call    sub_45A170
0x6B787E: test    al, al
0x6B7880: jz      loc_6B7923
0x6B7886: mov     ecx, ds:0B33B00h
0x6B788C: push    4; Size
0x6B788E: lea     eax, [esp+40h+Dst]
0x6B7892: push    eax; Dst
0x6B7893: call    SaveLoad_LoadData
0x6B7898: cmp     [esp+3Ch+Dst], 4B4F4C42h
0x6B78A0: jz      short loc_6B790A
0x6B78A2: mov     eax, ds:0B33B00h
0x6B78A7: mov     esi, [eax+80h]
0x6B78AD: cmp     esi, ebx
0x6B78AF: jz      short loc_6B78EE
0x6B78B1: mov     ecx, [esi]
0x6B78B3: push    ecx; a1
0x6B78B4: call    TESForm_LookupByFormID
0x6B78B9: mov     edx, [esi+5]
0x6B78BC: movzx   ecx, byte ptr [esi+9]
0x6B78C0: add     esp, 4
0x6B78C3: push    edx
0x6B78C4: mov     edx, [eax]
0x6B78C6: push    ecx
0x6B78C7: mov     ecx, eax
0x6B78C9: mov     eax, [edx+0D4h]
0x6B78CF: call    eax
0x6B78D1: mov     ecx, [esi]
0x6B78D3: push    eax
0x6B78D4: push    ecx
0x6B78D5: push    0E5h ; 'å'
0x6B78DA: push    offset a_DialogueConve; ".\\Dialogue\\Conversation.cpp"
0x6B78DF: push    offset aLoadgameBuffer; "LoadGame Buffer error: Block Header is "...
0x6B78E4: call    PrintError
0x6B78E9: add     esp, 1Ch
0x6B78EC: jmp     short loc_6B790A
0x6B78EE: movzx   edx, byte ptr [eax+7Ch]
0x6B78F2: push    edx
0x6B78F3: push    0E5h ; 'å'
0x6B78F8: push    offset a_DialogueConve; ".\\Dialogue\\Conversation.cpp"
0x6B78FD: push    offset aLoadgameBuff_0; "LoadGame Buffer error: Block Header is "...
0x6B7902: call    PrintError
0x6B7907: add     esp, 10h
0x6B790A: mov     ecx, ds:0B33B00h
0x6B7910: mov     eax, [ecx+14h]
0x6B7913: push    2; Size
0x6B7915: lea     edx, [esp+40h+var_24]
0x6B7919: push    edx; Dst
0x6B791A: mov     [esp+44h+var_20], eax
0x6B791E: call    SaveLoad_LoadData
0x6B7923: mov     ecx, ds:0B33B00h
0x6B7929: push    2; Size
0x6B792B: lea     eax, [esp+40h+var_28]
0x6B792F: push    eax; Dst
0x6B7930: call    SaveLoad_LoadData
0x6B7935: cmp     [esp+3Ch+var_28], bx
0x6B793A: mov     [esp+3Ch+var_1C], ebx
0x6B793E: jbe     loc_6B79CB
0x6B7944: push    1Ch; Size
0x6B7946: call    FormHeapAlloc
0x6B794B: add     esp, 4
0x6B794E: mov     [esp+3Ch+var_10], eax
0x6B7952: cmp     eax, ebx
0x6B7954: mov     [esp+3Ch+var_4], ebx
0x6B7958: jz      short loc_6B7965
0x6B795A: mov     ecx, eax
0x6B795C: call    sub_6B7BE0
0x6B7961: mov     edi, eax
0x6B7963: jmp     short loc_6B7967
0x6B7965: xor     edi, edi
0x6B7967: mov     ecx, edi
0x6B7969: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x6B7971: call    sub_6B7E50
0x6B7976: cmp     edi, ebx
0x6B7978: jz      short loc_6B79B3
0x6B797A: cmp     [ebp+4], ebx
0x6B797D: lea     eax, [ebp+4]
0x6B7980: mov     esi, ebp
0x6B7982: jz      short loc_6B798E
0x6B7984: mov     esi, [eax]
0x6B7986: cmp     [esi+4], ebx
0x6B7989: lea     eax, [esi+4]
0x6B798C: jnz     short loc_6B7984
0x6B798E: cmp     [esi], ebx
0x6B7990: jz      short loc_6B79B1
0x6B7992: push    8; Size
0x6B7994: call    FormHeapAlloc
0x6B7999: add     esp, 4
0x6B799C: cmp     eax, ebx
0x6B799E: jz      short loc_6B79AA
0x6B79A0: mov     [eax], edi
0x6B79A2: mov     [eax+4], ebx
0x6B79A5: mov     [esi+4], eax
0x6B79A8: jmp     short loc_6B79B3
0x6B79AA: xor     eax, eax
0x6B79AC: mov     [esi+4], eax
0x6B79AF: jmp     short loc_6B79B3
0x6B79B1: mov     [esi], edi
0x6B79B3: mov     eax, [esp+3Ch+var_1C]
0x6B79B7: movzx   ecx, [esp+3Ch+var_28]
0x6B79BC: add     eax, 1
0x6B79BF: cmp     eax, ecx
0x6B79C1: mov     [esp+3Ch+var_1C], eax
0x6B79C5: jb      loc_6B7944
0x6B79CB: mov     ecx, ds:0B33B00h
0x6B79D1: push    2; Size
0x6B79D3: lea     edx, [esp+40h+var_14]
0x6B79D7: push    edx; Dst
0x6B79D8: call    SaveLoad_LoadData
0x6B79DD: mov     eax, [esp+3Ch+var_14]
0x6B79E1: cmp     ax, 0FFFFh
0x6B79E5: jz      short loc_6B7A11
0x6B79E7: push    eax
0x6B79E8: mov     ecx, ebp
0x6B79EA: call    sub_6B7560
0x6B79EF: cmp     ebp, ebx
0x6B79F1: mov     ecx, ebp
0x6B79F3: jz      short loc_6B7A14
0x6B79F5: mov     edx, [ecx+4]
0x6B79F8: cmp     edx, ebx
0x6B79FA: jnz     short loc_6B7A00
0x6B79FC: cmp     [ecx], ebx
0x6B79FE: jz      short loc_6B7A14
0x6B7A00: cmp     eax, [ecx]
0x6B7A02: jz      short loc_6B7A0C
0x6B7A04: mov     ecx, edx
0x6B7A06: cmp     ecx, ebx
0x6B7A08: jnz     short loc_6B79F5
0x6B7A0A: jmp     short loc_6B7A14
0x6B7A0C: mov     [ebp+8], ecx
0x6B7A0F: jmp     short loc_6B7A14
0x6B7A11: mov     [ebp+8], ebx
0x6B7A14: mov     ecx, ds:0B33B00h
0x6B7A1A: call    sub_45A170
0x6B7A1F: test    al, al
0x6B7A21: jz      loc_6B7B47
0x6B7A27: mov     ecx, ds:0B33B00h
0x6B7A2D: mov     edi, [ecx+80h]
0x6B7A33: cmp     edi, ebx
0x6B7A35: mov     esi, [ecx+14h]
0x6B7A38: jz      loc_6B7AF9
0x6B7A3E: mov     eax, [edi]
0x6B7A40: push    eax; a1
0x6B7A41: call    TESForm_LookupByFormID
0x6B7A46: movzx   edx, word ptr [esp+40h+var_24]
0x6B7A4B: mov     ebx, [esp+40h+var_20]
0x6B7A4F: mov     ecx, eax
0x6B7A51: lea     eax, [edx+ebx]
0x6B7A54: add     esp, 4
0x6B7A57: cmp     esi, eax
0x6B7A59: jbe     short loc_6B7AA7
0x6B7A5B: mov     eax, [edi+5]
0x6B7A5E: movzx   edx, byte ptr [edi+9]
0x6B7A62: push    eax
0x6B7A63: mov     eax, [ecx]
0x6B7A65: push    edx
0x6B7A66: mov     edx, [eax+0D4h]
0x6B7A6C: call    edx
0x6B7A6E: movzx   ecx, word ptr [esp+44h+var_24]
0x6B7A73: push    eax
0x6B7A74: mov     eax, [edi]
0x6B7A76: push    eax
0x6B7A77: push    0FBh ; 'û'
0x6B7A7C: sub     esi, ecx
0x6B7A7E: push    offset a_DialogueConve; ".\\Dialogue\\Conversation.cpp"
0x6B7A83: sub     esi, ebx
0x6B7A85: push    esi; ArgList
0x6B7A86: push    offset aLoadgameBuff_1; "LoadGame Buffer overrun of %i bytes in "...
0x6B7A8B: call    PrintError
0x6B7A90: add     esp, 20h
0x6B7A93: mov     ecx, [esp+3Ch+var_C]
0x6B7A97: mov     large fs:0, ecx
0x6B7A9E: pop     ecx
0x6B7A9F: pop     edi
0x6B7AA0: pop     esi
0x6B7AA1: pop     ebp
0x6B7AA2: pop     ebx
0x6B7AA3: add     esp, 28h
0x6B7AA6: retn
0x6B7AA7: jnb     loc_6B7B47
0x6B7AAD: mov     edx, [edi+5]
0x6B7AB0: movzx   eax, byte ptr [edi+9]
0x6B7AB4: push    edx
0x6B7AB5: mov     edx, [ecx]
0x6B7AB7: push    eax
0x6B7AB8: mov     eax, [edx+0D4h]
0x6B7ABE: call    eax
0x6B7AC0: mov     ecx, [edi]
0x6B7AC2: movzx   edx, word ptr [esp+44h+var_24]
0x6B7AC7: push    eax
0x6B7AC8: push    ecx
0x6B7AC9: push    0FBh ; 'û'
0x6B7ACE: sub     edx, esi
0x6B7AD0: push    offset a_DialogueConve; ".\\Dialogue\\Conversation.cpp"
0x6B7AD5: add     edx, ebx
0x6B7AD7: push    edx; ArgList
0x6B7AD8: push    offset aLoadgameBuff_2; "LoadGame Buffer underrun of %i bytes in"...
0x6B7ADD: call    PrintError
0x6B7AE2: add     esp, 20h
0x6B7AE5: mov     ecx, [esp+3Ch+var_C]
0x6B7AE9: mov     large fs:0, ecx
0x6B7AF0: pop     ecx
0x6B7AF1: pop     edi
0x6B7AF2: pop     esi
0x6B7AF3: pop     ebp
0x6B7AF4: pop     ebx
0x6B7AF5: add     esp, 28h
0x6B7AF8: retn
0x6B7AF9: movzx   eax, word ptr [esp+3Ch+var_24]
0x6B7AFE: mov     edi, [esp+3Ch+var_20]
0x6B7B02: lea     edx, [eax+edi]
0x6B7B05: cmp     esi, edx
0x6B7B07: jbe     short loc_6B7B24
0x6B7B09: movzx   ecx, byte ptr [ecx+7Ch]
0x6B7B0D: push    ecx
0x6B7B0E: push    0FBh ; 'û'
0x6B7B13: sub     esi, eax
0x6B7B15: push    offset a_DialogueConve; ".\\Dialogue\\Conversation.cpp"
0x6B7B1A: sub     esi, edi
0x6B7B1C: push    esi
0x6B7B1D: push    offset aLoadgameBuff_3; "LoadGame Buffer overrun of %i bytes in "...
0x6B7B22: jmp     short loc_6B7B3F
0x6B7B24: jnb     short loc_6B7B47
0x6B7B26: movzx   edx, byte ptr [ecx+7Ch]
0x6B7B2A: push    edx
0x6B7B2B: push    0FBh ; 'û'
0x6B7B30: sub     eax, esi
0x6B7B32: push    offset a_DialogueConve; ".\\Dialogue\\Conversation.cpp"
0x6B7B37: add     eax, edi
0x6B7B39: push    eax; ArgList
0x6B7B3A: push    offset aLoadgameBuff_4; "LoadGame Buffer underrun of %i bytes in"...
0x6B7B3F: call    PrintError
0x6B7B44: add     esp, 14h
0x6B7B47: mov     ecx, [esp+3Ch+var_C]
0x6B7B4B: mov     large fs:0, ecx
0x6B7B52: pop     ecx
0x6B7B53: pop     edi
0x6B7B54: pop     esi
0x6B7B55: pop     ebp
0x6B7B56: pop     ebx
0x6B7B57: add     esp, 28h
0x6B7B5A: retn
