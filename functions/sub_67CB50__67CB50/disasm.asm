0x67CB50: push    esi
0x67CB51: push    edi
0x67CB52: mov     edi, [esp+8+arg_0]
0x67CB56: mov     esi, ecx
0x67CB58: push    0; a2
0x67CB5A: mov     ecx, edi; this
0x67CB5C: call    Actor_GetActorBaseForm
0x67CB61: mov     ecx, eax
0x67CB63: add     ecx, 24h ; '$'
0x67CB66: call    TESActorBaseData_AllFactionsAreEvil
0x67CB6B: test    al, al
0x67CB6D: jz      short loc_67CB76
0x67CB6F: pop     edi
0x67CB70: mov     al, 1
0x67CB72: pop     esi
0x67CB73: retn    4
0x67CB76: mov     esi, [esi]
0x67CB78: test    esi, esi
0x67CB7A: jz      short loc_67CBB4
0x67CB7C: lea     esp, [esp+0]
0x67CB80: mov     eax, [esi]
0x67CB82: test    eax, eax
0x67CB84: jz      short loc_67CBB4
0x67CB86: mov     eax, [eax]
0x67CB88: test    eax, eax
0x67CB8A: jz      short loc_67CBAD
0x67CB8C: lea     esp, [esp+0]
0x67CB90: mov     ecx, [eax]
0x67CB92: test    ecx, ecx
0x67CB94: jz      short loc_67CBAD
0x67CB96: cmp     [ecx], edi
0x67CB98: jz      short loc_67CBA3
0x67CB9A: mov     eax, [eax+4]
0x67CB9D: test    eax, eax
0x67CB9F: jnz     short loc_67CB90
0x67CBA1: jmp     short loc_67CBAD
0x67CBA3: test    ecx, ecx
0x67CBA5: jz      short loc_67CBAD
0x67CBA7: cmp     byte ptr [ecx+4], 0
0x67CBAB: jnz     short loc_67CB6F
0x67CBAD: mov     esi, [esi+4]
0x67CBB0: test    esi, esi
0x67CBB2: jnz     short loc_67CB80
0x67CBB4: pop     edi
0x67CBB5: xor     al, al
0x67CBB7: pop     esi
0x67CBB8: retn    4
