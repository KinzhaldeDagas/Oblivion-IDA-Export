0x4B5C60: push    esi
0x4B5C61: mov     esi, ecx
0x4B5C63: mov     eax, [esi+8]
0x4B5C66: shr     eax, 3
0x4B5C69: test    al, 1
0x4B5C6B: jnz     short loc_4B5CA7
0x4B5C6D: cmp     word ptr [esi+60h], 0
0x4B5C72: jnz     short loc_4B5C8C
0x4B5C74: mov     edx, [esi]
0x4B5C76: mov     eax, [edx+0D4h]
0x4B5C7C: call    eax
0x4B5C7E: push    eax; ArgList
0x4B5C7F: push    offset aClothingSNeeds; "Clothing '%s' needs to have biped slots"...
0x4B5C84: call    PrintError
0x4B5C89: add     esp, 8
0x4B5C8C: push    esi
0x4B5C8D: lea     ecx, [esi+30h]
0x4B5C90: call    TESScriptableForm_Link
0x4B5C95: push    esi
0x4B5C96: lea     ecx, [esi+3Ch]
0x4B5C99: call    TESEnchantableForm_LinkComponent
0x4B5C9E: push    1; a2
0x4B5CA0: mov     ecx, esi; this
0x4B5CA2: call    TESForm_SetIsLinked
0x4B5CA7: pop     esi
0x4B5CA8: retn
