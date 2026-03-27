0x52F830: sub     esp, 0Ch
0x52F833: push    ebp
0x52F834: mov     ebp, [esp+10h+arg_8]
0x52F838: test    ebp, ebp
0x52F83A: jnz     short loc_52F843
0x52F83C: xor     eax, eax
0x52F83E: pop     ebp
0x52F83F: add     esp, 0Ch
0x52F842: retn
0x52F843: push    esi
0x52F844: mov     ecx, ebp
0x52F846: call    BSSimpleList_IsEmpty
0x52F84B: test    al, al
0x52F84D: jnz     short loc_52F88C
0x52F84F: mov     esi, [ebp+0]
0x52F852: test    esi, esi
0x52F854: jz      short loc_52F866
0x52F856: mov     ecx, esi
0x52F858: call    sub_6B81D0
0x52F85D: push    esi
0x52F85E: call    FormHeapFree
0x52F863: add     esp, 4
0x52F866: mov     eax, [ebp+4]
0x52F869: test    eax, eax
0x52F86B: jz      short loc_52F883
0x52F86D: mov     ecx, [eax+4]
0x52F870: mov     [ebp+4], ecx
0x52F873: mov     edx, [eax]
0x52F875: push    eax
0x52F876: mov     [ebp+0], edx
0x52F879: call    FormHeapFree
0x52F87E: add     esp, 4
0x52F881: jmp     short loc_52F844
0x52F883: mov     dword ptr [ebp+0], 0
0x52F88A: jmp     short loc_52F844
0x52F88C: mov     esi, [esp+14h+arg_0]
0x52F890: test    esi, esi
0x52F892: jz      loc_52FAD6
0x52F898: mov     eax, [esp+14h+arg_4]
0x52F89C: test    eax, eax
0x52F89E: jz      loc_52FAD6
0x52F8A4: push    ebx
0x52F8A5: mov     ebx, [esp+18h+arg_C]
0x52F8A9: test    ebx, ebx
0x52F8AB: push    edi
0x52F8AC: mov     [esp+1Ch+var_4], esi
0x52F8B0: mov     [esp+1Ch+var_C], eax
0x52F8B4: mov     [esp+1Ch+var_8], 0
0x52F8BC: jnz     short loc_52F8E4
0x52F8BE: mov     ecx, ds:0B33A98h
0x52F8C4: push    0D2h ; 'Ò'
0x52F8C9: call    sub_447440
0x52F8CE: mov     ebx, eax
0x52F8D0: test    ebx, ebx
0x52F8D2: jz      loc_52FA20
0x52F8D8: jmp     short loc_52F8E4
0x52F8DA: align 10h
0x52F8E0: mov     esi, [esp+1Ch+var_4]
0x52F8E4: mov     ecx, ebp
0x52F8E6: call    BSSimpleList_Count
0x52F8EB: cmp     eax, 64h ; 'd'
0x52F8EE: jnb     loc_52FA20
0x52F8F4: mov     eax, [esp+1Ch+var_8]
0x52F8F8: mov     ecx, [esp+1Ch+var_C]
0x52F8FC: push    ebp
0x52F8FD: push    eax
0x52F8FE: push    ecx
0x52F8FF: push    esi
0x52F900: mov     ecx, ebx
0x52F902: call    TESTopic__CreateDialogueInfo
0x52F907: mov     edi, eax
0x52F909: test    edi, edi
0x52F90B: jnz     short loc_52F955
0x52F90D: mov     edx, [esp+1Ch+var_8]
0x52F911: mov     eax, [esp+1Ch+var_C]
0x52F915: push    ebp
0x52F916: push    edx
0x52F917: push    eax
0x52F918: push    esi
0x52F919: mov     ecx, ebx
0x52F91B: call    TESTopic__CreateDialogueInfo
0x52F920: mov     edi, eax
0x52F922: test    edi, edi
0x52F924: jnz     short loc_52F955
0x52F926: mov     ecx, ds:0B33A98h
0x52F92C: push    0D4h ; 'Ô'
0x52F931: call    sub_447440
0x52F936: mov     ecx, [esp+1Ch+var_8]
0x52F93A: mov     edx, [esp+1Ch+var_C]
0x52F93E: push    ebp
0x52F93F: push    ecx
0x52F940: mov     ebx, eax
0x52F942: push    edx
0x52F943: push    esi
0x52F944: mov     ecx, ebx
0x52F946: call    TESTopic__CreateDialogueInfo
0x52F94B: mov     edi, eax
0x52F94D: test    edi, edi
0x52F94F: jz      loc_52FA20
0x52F955: mov     ecx, [edi+0Ch]
0x52F958: test    ecx, ecx
0x52F95A: jz      short loc_52F979
0x52F95C: movzx   eax, byte ptr [ecx+25h]
0x52F960: shr     eax, 3
0x52F963: test    al, 1
0x52F965: jz      short loc_52F979
0x52F967: mov     edx, [esp+1Ch+arg_0]
0x52F96B: push    edx
0x52F96C: call    sub_531470
0x52F971: mov     ecx, [edi+0Ch]; int
0x52F974: call    sub_5308D0
0x52F979: push    edi
0x52F97A: mov     ecx, ebp
0x52F97C: call    BSSimpleList_PushBack
0x52F981: mov     eax, [edi+0Ch]
0x52F984: mov     esi, [eax+30h]
0x52F987: mov     [esp+1Ch+var_8], ebx
0x52F98B: xor     ebx, ebx
0x52F98D: test    esi, esi
0x52F98F: jz      loc_52FA20
0x52F995: add     esi, 8
0x52F998: xor     ebp, ebp
0x52F99A: test    esi, esi
0x52F99C: mov     eax, esi
0x52F99E: jz      short loc_52F9AF
0x52F9A0: cmp     dword ptr [eax], 0
0x52F9A3: jz      short loc_52F9A8
0x52F9A5: add     ebp, 1
0x52F9A8: mov     eax, [eax+4]
0x52F9AB: test    eax, eax
0x52F9AD: jnz     short loc_52F9A0
0x52F9AF: test    ebp, ebp
0x52F9B1: mov     edx, ebp
0x52F9B3: jz      short loc_52F9C0
0x52F9B5: call    _rand
0x52F9BA: cdq
0x52F9BB: idiv    ebp
0x52F9BD: add     edx, 1
0x52F9C0: xor     ecx, ecx
0x52F9C2: test    edx, edx
0x52F9C4: jle     short loc_52F9E0
0x52F9C6: test    esi, esi
0x52F9C8: jz      short loc_52F9E0
0x52F9CA: mov     eax, [esi+4]
0x52F9CD: test    eax, eax
0x52F9CF: jnz     short loc_52F9D5
0x52F9D1: cmp     [esi], eax
0x52F9D3: jz      short loc_52F9E0
0x52F9D5: mov     ebx, [esi]
0x52F9D7: add     ecx, 1
0x52F9DA: cmp     ecx, edx
0x52F9DC: mov     esi, eax
0x52F9DE: jl      short loc_52F9C6
0x52F9E0: mov     ecx, [edi+0Ch]
0x52F9E3: movsx   eax, byte ptr [ecx+24h]
0x52F9E7: sub     eax, 0
0x52F9EA: jz      short loc_52FA04
0x52F9EC: sub     eax, 2
0x52F9EF: jnz     short loc_52FA14
0x52F9F1: call    _rand
0x52F9F6: and     eax, 80000001h
0x52F9FB: jns     short loc_52FA02
0x52F9FD: dec     eax
0x52F9FE: or      eax, 0FFFFFFFEh
0x52FA01: inc     eax
0x52FA02: jnz     short loc_52FA14
0x52FA04: mov     eax, [esp+1Ch+var_4]
0x52FA08: mov     edx, [esp+1Ch+var_C]
0x52FA0C: mov     [esp+1Ch+var_4], edx
0x52FA10: mov     [esp+1Ch+var_C], eax
0x52FA14: test    ebx, ebx
0x52FA16: mov     ebp, [esp+1Ch+arg_8]
0x52FA1A: jnz     loc_52F8E0
0x52FA20: cmp     byte ptr ds:0B36508h, 0
0x52FA27: jz      loc_52FAB5
0x52FA2D: push    offset aNewConversatio; "------NEW CONVERSATION CREATED---------"...
0x52FA32: call    Interface_ConsolePrint
0x52FA37: add     esp, 4
0x52FA3A: mov     eax, ebp
0x52FA3C: mov     ebx, 1
0x52FA41: jmp     short loc_52FA47
0x52FA43: mov     eax, [esp+1Ch+arg_8]
0x52FA47: mov     esi, [eax]
0x52FA49: test    esi, esi
0x52FA4B: jz      short loc_52FAB5
0x52FA4D: mov     eax, [eax+4]
0x52FA50: mov     ecx, esi
0x52FA52: mov     [esp+1Ch+arg_8], eax
0x52FA56: call    sub_6B7BA0
0x52FA5B: test    al, al
0x52FA5D: jz      short loc_52FA8D
0x52FA5F: mov     edi, [esi+18h]
0x52FA62: mov     ecx, esi
0x52FA64: call    sub_6B7C20
0x52FA69: mov     ecx, [eax+4]
0x52FA6C: mov     edx, [eax]
0x52FA6E: mov     eax, [edi]
0x52FA70: push    ecx
0x52FA71: push    edx
0x52FA72: mov     edx, [eax+0D4h]
0x52FA78: mov     ecx, edi
0x52FA7A: call    edx
0x52FA7C: push    eax
0x52FA7D: push    ebx
0x52FA7E: push    offset aItemDSSaysS; "Item %d: %s says '%s'"
0x52FA83: call    Interface_ConsolePrint
0x52FA88: add     esp, 14h
0x52FA8B: jmp     short loc_52FAAB
0x52FA8D: mov     esi, [esi+18h]
0x52FA90: mov     eax, [esi]
0x52FA92: mov     edx, [eax+0D4h]
0x52FA98: mov     ecx, esi
0x52FA9A: call    edx
0x52FA9C: push    eax
0x52FA9D: push    ebx
0x52FA9E: push    offset aItemDSHasNoRes; "Item %d: %s has no response!"
0x52FAA3: call    Interface_ConsolePrint
0x52FAA8: add     esp, 0Ch
0x52FAAB: add     ebx, 1
0x52FAAE: cmp     [esp+1Ch+arg_8], 0
0x52FAB3: jnz     short loc_52FA43
0x52FAB5: pop     edi
0x52FAB6: xor     eax, eax
0x52FAB8: pop     ebx
0x52FAB9: lea     esp, [esp+0]
0x52FAC0: cmp     dword ptr [ebp+0], 0
0x52FAC4: jz      short loc_52FAC9
0x52FAC6: add     eax, 1
0x52FAC9: mov     ebp, [ebp+4]
0x52FACC: test    ebp, ebp
0x52FACE: jnz     short loc_52FAC0
0x52FAD0: pop     esi
0x52FAD1: pop     ebp
0x52FAD2: add     esp, 0Ch
0x52FAD5: retn
0x52FAD6: pop     esi
0x52FAD7: xor     eax, eax
0x52FAD9: pop     ebp
0x52FADA: add     esp, 0Ch
0x52FADD: retn
