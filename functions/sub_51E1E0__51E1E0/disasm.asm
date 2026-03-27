0x51E1E0: push    esi
0x51E1E1: mov     esi, ecx
0x51E1E3: mov     eax, [esi]
0x51E1E5: mov     edx, [eax+30h]
0x51E1E8: push    edi
0x51E1E9: xor     edi, edi
0x51E1EB: call    edx
0x51E1ED: test    al, al
0x51E1EF: jnz     short loc_51E212
0x51E1F1: mov     eax, [esi+114h]
0x51E1F7: test    eax, eax
0x51E1F9: jnz     short loc_51E204
0x51E1FB: mov     eax, offset EmptyString
0x51E200: test    eax, eax
0x51E202: jz      short loc_51E209
0x51E204: cmp     byte ptr [eax], 0
0x51E207: jnz     short loc_51E214
0x51E209: pop     edi
0x51E20A: mov     ecx, esi
0x51E20C: pop     esi
0x51E20D: jmp     TESActorBaseData_GetBloodTexturePath
0x51E212: mov     eax, edi
0x51E214: pop     edi
0x51E215: pop     esi
0x51E216: retn
