0x481250: push    esi
0x481251: mov     esi, [esp+4+arg_0]
0x481255: test    esi, esi
0x481257: jnz     short loc_48125D
0x481259: xor     eax, eax
0x48125B: pop     esi
0x48125C: retn
0x48125D: mov     eax, [esi]
0x48125F: mov     edx, [eax+10h]
0x481262: push    ebx
0x481263: push    ebp
0x481264: mov     ecx, esi
0x481266: call    edx
0x481268: test    eax, eax
0x48126A: mov     ebp, [esp+0Ch+arg_4]
0x48126E: mov     ebx, [esp+0Ch+arg_C]
0x481272: jz      short loc_4812C4
0x481274: cmp     byte ptr [esp+0Ch+arg_8], 0
0x481279: jz      short loc_481296
0x48127B: mov     eax, [esi+8]
0x48127E: test    eax, eax
0x481280: jz      short loc_4812C4
0x481282: push    5; MaxCount
0x481284: push    offset aDecal; "Decal"
0x481289: push    eax; Str1
0x48128A: call    _strncmp
0x48128F: add     esp, 0Ch
0x481292: test    eax, eax
0x481294: jz      short loc_4812C4
0x481296: test    bl, bl
0x481298: jz      short loc_4812B1
0x48129A: mov     eax, [esi+8]
0x48129D: push    7; MaxCount
0x48129F: push    offset aBlock_1; "Block ("
0x4812A4: push    eax; Str1
0x4812A5: call    _strncmp
0x4812AA: add     esp, 0Ch
0x4812AD: test    eax, eax
0x4812AF: jnz     short loc_4812C4
0x4812B1: mov     eax, [ebp+0]
0x4812B4: test    eax, eax
0x4812B6: jnz     short loc_4812BE
0x4812B8: pop     ebp
0x4812B9: pop     ebx
0x4812BA: mov     eax, esi
0x4812BC: pop     esi
0x4812BD: retn
0x4812BE: add     eax, 0FFFFFFFFh
0x4812C1: mov     [ebp+0], eax
0x4812C4: mov     eax, [esi]
0x4812C6: mov     edx, [eax+8]
0x4812C9: push    edi
0x4812CA: mov     ecx, esi
0x4812CC: call    edx
0x4812CE: mov     edi, eax
0x4812D0: test    edi, edi
0x4812D2: jz      short loc_481314
0x4812D4: movzx   eax, word ptr [edi+0B6h]
0x4812DB: xor     esi, esi
0x4812DD: test    eax, eax
0x4812DF: jbe     short loc_481314
0x4812E1: cmp     eax, esi
0x4812E3: ja      short loc_4812E9
0x4812E5: xor     eax, eax
0x4812E7: jmp     short loc_4812F2
0x4812E9: mov     eax, [edi+0B0h]
0x4812EF: mov     eax, [eax+esi*4]
0x4812F2: mov     ecx, [esp+10h+arg_8]
0x4812F6: push    ebx
0x4812F7: push    ecx
0x4812F8: push    ebp
0x4812F9: push    eax
0x4812FA: call    sub_481250
0x4812FF: add     esp, 10h
0x481302: test    eax, eax
0x481304: jnz     short loc_481316
0x481306: movzx   eax, word ptr [edi+0B6h]
0x48130D: add     esi, 1
0x481310: cmp     eax, esi
0x481312: ja      short loc_4812E9
0x481314: xor     eax, eax
0x481316: pop     edi
0x481317: pop     ebp
0x481318: pop     ebx
0x481319: pop     esi
0x48131A: retn
