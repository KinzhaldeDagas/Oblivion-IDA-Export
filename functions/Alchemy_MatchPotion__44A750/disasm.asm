0x44A750: mov     ecx, [ecx]
0x44A752: push    esi
0x44A753: push    edi
0x44A754: call    TESHealthForm_GetHealth
0x44A759: mov     esi, eax
0x44A75B: test    esi, esi
0x44A75D: jz      short loc_44A7C0
0x44A75F: mov     edi, [esp+8+arg_0]
0x44A763: cmp     byte ptr [esi+4], 28h ; '('
0x44A767: jnz     short loc_44A7B3
0x44A769: mov     eax, [esi+8]
0x44A76C: shr     eax, 5
0x44A76F: test    al, 1
0x44A771: jnz     short loc_44A7B3
0x44A773: test    edi, edi
0x44A775: jz      short loc_44A77C
0x44A777: lea     eax, [edi+30h]
0x44A77A: jmp     short loc_44A77E
0x44A77C: xor     eax, eax
0x44A77E: push    eax
0x44A77F: lea     ecx, [esi+30h]
0x44A782: call    EffectItemList_CompareTo
0x44A787: test    al, al
0x44A789: jnz     short loc_44A7B3
0x44A78B: mov     eax, [edi+28h]
0x44A78E: test    eax, eax
0x44A790: mov     ecx, eax
0x44A792: jnz     short loc_44A799
0x44A794: mov     ecx, offset EmptyString
0x44A799: mov     eax, [esi+28h]
0x44A79C: test    eax, eax
0x44A79E: jnz     short loc_44A7A5
0x44A7A0: mov     eax, offset EmptyString
0x44A7A5: push    ecx; unsigned __int8 *
0x44A7A6: push    eax; unsigned __int8 *
0x44A7A7: call    __mbscmp
0x44A7AC: add     esp, 8
0x44A7AF: test    eax, eax
0x44A7B1: jz      short loc_44A7C7
0x44A7B3: mov     ecx, esi
0x44A7B5: call    TESObject_GetNextObject
0x44A7BA: mov     esi, eax
0x44A7BC: test    esi, esi
0x44A7BE: jnz     short loc_44A763
0x44A7C0: pop     edi
0x44A7C1: xor     eax, eax
0x44A7C3: pop     esi
0x44A7C4: retn    4
0x44A7C7: pop     edi
0x44A7C8: mov     eax, esi
0x44A7CA: pop     esi
0x44A7CB: retn    4
